import struct
from pathlib import Path
from typing import Optional

from util import options, log

from segtypes.common.codesubsegment import CommonSegCodeSubsegment


class N64SegCkf_ba(CommonSegCodeSubsegment):
    def __init__(
        self,
        rom_start: Optional[int],
        rom_end: Optional[int],
        type: str,
        name: str,
        vram_start: Optional[int],
        args: list,
        yaml,
    ):
        super().__init__(
            rom_start,
            rom_end,
            type,
            name,
            vram_start,
            args=args,
            yaml=yaml,
        )
        self.file_text: Optional[str] = None
        self.data_only = isinstance(yaml, dict) and yaml.get("data_only", False)

    def format_sym_name(self, sym) -> str:
        return sym.name

    def get_linker_section(self) -> str:
        return ".data"

    def out_path(self) -> Path:
        return options.opts.asset_path / self.dir / f"{self.name}.inc.c"

    def scan(self, rom_bytes: bytes):
        self.file_text = self.disassemble_data(rom_bytes)

    def disassemble_data(self, rom_bytes) -> str:
        assert isinstance(self.rom_start, int)
        assert isinstance(self.rom_end, int)
        assert isinstance(self.vram_start, int)

        extracted_data = rom_bytes[self.rom_start : self.rom_end]
        segment_length = len(extracted_data)
        if (segment_length) != 20:
            log.error(f"Error: ckf_ba segment {self.name} length ({segment_length}) is not 20 bytes!")

        lines = []
        if not self.data_only:
            lines.append(options.opts.generated_c_preamble)
            lines.append("\n")

        sym = self.create_symbol(addr=self.vram_start, in_segment=True, type="data", define=True)

        if not self.data_only:
            lines.append(f"BaseAnimationR {self.format_sym_name(sym)} = ")

        ckcb, ds, kn, constval, unk10, duration = struct.unpack(">IIIIhh", extracted_data)
        ckcb_symbol = self.get_symbol(addr=ckcb).given_name
        ds_symbol = self.get_symbol(addr=ds).given_name
        kn_symbol = self.get_symbol(addr=kn).given_name
        constval_symbol = self.get_symbol(addr=constval).given_name
        output = f"{{ {ckcb_symbol}, {ds_symbol}, {kn_symbol}, {constval_symbol}, {unk10}, {duration} }}"
        lines.append(output)

        if not self.data_only:
            lines.append(";")

        # enforce newline at end of file
        lines.append("\n")
        return "".join(lines)

    def split(self, rom_bytes: bytes):
        if self.file_text and self.out_path():
            self.out_path().parent.mkdir(parents=True, exist_ok=True)

            with open(self.out_path(), "w", newline="\n") as f:
                f.write(self.file_text)

    def should_scan(self) -> bool:
        return options.opts.is_mode_active("vtx")

    def should_split(self) -> bool:
        return self.extract and options.opts.is_mode_active("vtx")
    