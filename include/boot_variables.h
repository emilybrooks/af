#ifndef BOOT_VARIABLES_H
#define BOOT_VARIABLES_H

#include "ultra64.h"
#include "unknown_structs.h"



// .data

// extern UNK_TYPE D_8003BBC0_jp;
// extern UNK_TYPE D_8003BBC4_jp;
// extern UNK_TYPE D_FLT_8003BBC8_jp;
// extern UNK_TYPE D_FLT_8003BBCC_jp;
extern OSPiHandle* gCartHandle; // TODO: Determine where this goes
// extern UNK_TYPE D_8003BBE0_jp;
// extern UNK_TYPE D_8003BBF0_jp;
// extern UNK_TYPE D_8003BC38_jp;
// extern UNK_TYPE D_8003BC50_jp;
// extern UNK_TYPE D_8003BC90_jp;
// extern UNK_TYPE D_8003BC94_jp;

// extern UNK_TYPE D_8003C560_jp;

// extern UNK_TYPE __qrand_idum;


// .rodata

// extern UNK_TYPE RO_STR_8003D180_jp;
// extern UNK_TYPE RO_STR_8003D188_jp;
// extern UNK_TYPE RO_STR_8003D190_jp;
// extern UNK_TYPE RO_STR_8003D19C_jp;
// extern UNK_TYPE RO_FLT_8003D1A4_jp;
// extern UNK_TYPE RO_STR_8003D1B0_jp;
// extern UNK_TYPE RO_STR_8003D1B4_jp;

// extern UNK_TYPE RO_STR_8003D1D0_jp;
// extern UNK_TYPE RO_STR_8003D1D4_jp;
// extern UNK_TYPE RO_STR_8003D1D8_jp;
// extern UNK_TYPE RO_STR_8003D1EC_jp;
// extern UNK_TYPE RO_STR_8003D200_jp;
// extern UNK_TYPE RO_STR_8003D214_jp;
// extern UNK_TYPE RO_STR_8003D218_jp;
// extern UNK_TYPE RO_STR_8003D22C_jp;
// extern UNK_TYPE RO_STR_8003D230_jp;
// extern UNK_TYPE RO_STR_8003D23C_jp;
// extern UNK_TYPE RO_STR_8003D250_jp;
// extern UNK_TYPE RO_STR_8003D264_jp;
// extern UNK_TYPE RO_8003D268_jp;
// extern UNK_TYPE RO_STR_8003D26C_jp;
// extern UNK_TYPE RO_STR_8003D284_jp;
// extern UNK_TYPE RO_8003D2C0_jp;
// extern UNK_TYPE RO_STR_8003D2C4_jp;
// extern UNK_TYPE RO_STR_8003D2DC_jp;
// extern UNK_TYPE RO_8003D31C_jp;
// extern UNK_TYPE RO_STR_8003D320_jp;
// extern UNK_TYPE RO_STR_8003D338_jp;
// extern UNK_TYPE RO_STR_8003D378_jp;
// extern UNK_TYPE RO_STR_8003D38C_jp;
// extern UNK_TYPE RO_STR_8003D3AC_jp;
// extern UNK_TYPE RO_STR_8003D3C8_jp;
// extern UNK_TYPE RO_STR_8003D3DC_jp;
// extern UNK_TYPE RO_STR_8003D3F0_jp;
// extern UNK_TYPE RO_STR_8003D400_jp;
// extern UNK_TYPE RO_STR_8003D41C_jp;
// extern UNK_TYPE RO_STR_8003D440_jp;
// extern UNK_TYPE RO_STR_8003D44C_jp;
// extern UNK_TYPE RO_STR_8003D460_jp;
// extern UNK_TYPE RO_STR_8003D478_jp;
// extern UNK_TYPE RO_STR_8003D490_jp;
// extern UNK_TYPE RO_STR_8003D4A8_jp;
// extern UNK_TYPE RO_STR_8003D4C0_jp;
// extern UNK_TYPE RO_STR_8003D4D4_jp;
// extern UNK_TYPE RO_STR_8003D4E8_jp;
// extern UNK_TYPE RO_STR_8003D500_jp;
// extern UNK_TYPE RO_STR_8003D518_jp;
// extern UNK_TYPE RO_STR_8003D530_jp;
// extern UNK_TYPE RO_STR_8003D548_jp;
// extern UNK_TYPE RO_STR_8003D55C_jp;
// extern UNK_TYPE RO_STR_8003D56C_jp;
// extern UNK_TYPE RO_STR_8003D588_jp;
// extern UNK_TYPE RO_STR_8003D5A4_jp;
// extern UNK_TYPE RO_STR_8003D5BC_jp;
// extern UNK_TYPE RO_STR_8003D5D8_jp;
// extern UNK_TYPE RO_STR_8003D5F0_jp;
// extern UNK_TYPE RO_STR_8003D604_jp;
// extern UNK_TYPE RO_STR_8003D618_jp;
// extern UNK_TYPE RO_STR_8003D624_jp;
// extern UNK_TYPE RO_STR_8003D630_jp;
// extern UNK_TYPE RO_STR_8003D644_jp;
// extern UNK_TYPE RO_STR_8003D67C_jp;
// extern UNK_TYPE RO_STR_8003D6B4_jp;
// extern UNK_TYPE RO_STR_8003D6FC_jp;
// extern UNK_TYPE RO_STR_8003D748_jp;
// extern UNK_TYPE RO_STR_8003D758_jp;
// extern UNK_TYPE RO_STR_8003D76C_jp;
// extern UNK_TYPE RO_STR_8003D77C_jp;
// extern UNK_TYPE RO_STR_8003D790_jp;
// extern UNK_TYPE RO_STR_8003D7A0_jp;
// extern UNK_TYPE RO_STR_8003D7A8_jp;
// extern UNK_TYPE RO_STR_8003D7AC_jp;
// extern UNK_TYPE RO_STR_8003D7BC_jp;
// extern UNK_TYPE RO_STR_8003D7C4_jp;
// extern UNK_TYPE RO_STR_8003D7D8_jp;
// extern UNK_TYPE RO_STR_8003D7F4_jp;
// extern UNK_TYPE RO_STR_8003D810_jp;
// extern UNK_TYPE RO_STR_8003D82C_jp;
// extern UNK_TYPE RO_STR_8003D848_jp;
// extern UNK_TYPE RO_STR_8003D864_jp;
// extern UNK_TYPE RO_STR_8003D880_jp;
// extern UNK_TYPE RO_STR_8003D89C_jp;
// extern UNK_TYPE RO_STR_8003D8B8_jp;
// extern UNK_TYPE RO_STR_8003D8D4_jp;
// extern UNK_TYPE RO_STR_8003D8F0_jp;
// extern UNK_TYPE RO_STR_8003D910_jp;
// extern UNK_TYPE RO_STR_8003D914_jp;
// extern UNK_TYPE RO_STR_8003D918_jp;
// extern UNK_TYPE RO_STR_8003D91C_jp;
// extern UNK_TYPE RO_STR_8003D920_jp;
// extern UNK_TYPE RO_STR_8003D924_jp;
// extern UNK_TYPE RO_STR_8003D928_jp;
// extern UNK_TYPE RO_STR_8003D92C_jp;
// extern UNK_TYPE RO_STR_8003D930_jp;
// extern UNK_TYPE RO_STR_8003D934_jp;
// extern UNK_TYPE RO_STR_8003D938_jp;
// extern UNK_TYPE RO_STR_8003D950_jp;
// extern UNK_TYPE RO_STR_8003D970_jp;
// extern UNK_TYPE RO_STR_8003D990_jp;
// extern UNK_TYPE RO_STR_8003D9B0_jp;
// extern UNK_TYPE RO_STR_8003D9D0_jp;
// extern UNK_TYPE RO_STR_8003D9F0_jp;
// extern UNK_TYPE RO_STR_8003DA10_jp;
// extern UNK_TYPE RO_STR_8003DA30_jp;
// extern UNK_TYPE RO_STR_8003DA50_jp;
// extern UNK_TYPE RO_STR_8003DA70_jp;
// extern UNK_TYPE RO_STR_8003DA90_jp;
// extern UNK_TYPE RO_STR_8003DAB0_jp;
// extern UNK_TYPE RO_STR_8003DAB4_jp;
// extern UNK_TYPE RO_STR_8003DAB8_jp;
// extern UNK_TYPE RO_STR_8003DABC_jp;
// extern UNK_TYPE RO_STR_8003DAC0_jp;
// extern UNK_TYPE RO_STR_8003DAC4_jp;
// extern UNK_TYPE RO_STR_8003DAC8_jp;
// extern UNK_TYPE RO_STR_8003DACC_jp;
// extern UNK_TYPE RO_STR_8003DAD0_jp;
// extern UNK_TYPE RO_STR_8003DAD4_jp;
// extern UNK_TYPE RO_STR_8003DAD8_jp;
// extern UNK_TYPE RO_STR_8003DB50_jp;
// extern UNK_TYPE RO_STR_8003DB84_jp;
// extern UNK_TYPE RO_STR_8003DB8C_jp;
// extern UNK_TYPE RO_STR_8003DB98_jp;
// extern UNK_TYPE RO_STR_8003DBA0_jp;
// extern UNK_TYPE RO_STR_8003DBA8_jp;
// extern UNK_TYPE RO_STR_8003DBB0_jp;
// extern UNK_TYPE RO_STR_8003DBC8_jp;
// extern UNK_TYPE RO_STR_8003DBD4_jp;
// extern UNK_TYPE RO_STR_8003DBE0_jp;
// extern UNK_TYPE RO_STR_8003DC08_jp;
// extern UNK_TYPE RO_STR_8003DC14_jp;
// extern UNK_TYPE RO_STR_8003DC20_jp;
// extern UNK_TYPE RO_STR_8003DC24_jp;
// extern UNK_TYPE RO_STR_8003DC48_jp;
// extern UNK_TYPE RO_STR_8003DC80_jp;
// extern UNK_TYPE RO_STR_8003DCB4_jp;
// extern UNK_TYPE RO_STR_8003DCE8_jp;
// extern UNK_TYPE RO_STR_8003DD0C_jp;
// extern UNK_TYPE RO_STR_8003DD28_jp;
// extern UNK_TYPE RO_STR_8003DD34_jp;
// extern UNK_TYPE RO_STR_8003DD50_jp;
// extern UNK_TYPE RO_STR_8003DD6C_jp;
// extern UNK_TYPE RO_STR_8003DD88_jp;
// extern UNK_TYPE RO_STR_8003DDA4_jp;
// extern UNK_TYPE RO_STR_8003DDAC_jp;
// extern UNK_TYPE RO_STR_8003DDC4_jp;
// extern UNK_TYPE RO_STR_8003DDC8_jp;
// extern UNK_TYPE RO_STR_8003DDD0_jp;
// extern UNK_TYPE RO_STR_8003DDD4_jp;
// extern UNK_TYPE RO_STR_8003DDDC_jp;
// extern UNK_TYPE RO_STR_8003DDF4_jp;
// extern UNK_TYPE RO_STR_8003DDF8_jp;
// extern UNK_TYPE RO_STR_8003DE00_jp;
// extern UNK_TYPE RO_STR_8003DE04_jp;
// extern UNK_TYPE RO_STR_8003DE0C_jp;
// extern UNK_TYPE jtbl_8003DE1C_jp;
// extern UNK_TYPE RO_8003DE50_jp;
// extern UNK_TYPE RO_STR_8003E250_jp;
// extern UNK_TYPE RO_STR_8003E254_jp;
// extern UNK_TYPE RO_STR_8003E25C_jp;
// extern UNK_TYPE RO_STR_8003E264_jp;
// extern UNK_TYPE RO_STR_8003E270_jp;
// extern UNK_TYPE RO_STR_8003E278_jp;
// extern UNK_TYPE RO_STR_8003E27C_jp;
// extern UNK_TYPE jtbl_8003E290_jp;
// extern UNK_TYPE RO_STR_8003E2B0_jp;

// extern UNK_TYPE RO_STR_8003E310_jp;
// extern UNK_TYPE RO_STR_8003E328_jp;
// extern UNK_TYPE RO_STR_8003E35C_jp;
// extern UNK_TYPE RO_STR_8003E398_jp;
// extern UNK_TYPE RO_STR_8003E3C8_jp;
// extern UNK_TYPE RO_STR_8003E400_jp;
// extern UNK_TYPE RO_STR_8003E43C_jp;
// extern UNK_TYPE RO_STR_8003E46C_jp;
// extern UNK_TYPE RO_STR_8003E484_jp;
// extern UNK_TYPE RO_STR_8003E49C_jp;
// extern UNK_TYPE RO_STR_8003E4C0_jp;
// extern UNK_TYPE RO_STR_8003E4D4_jp;
// extern UNK_TYPE RO_STR_8003E4D8_jp;
// extern UNK_TYPE RO_STR_8003E4DC_jp;
// extern UNK_TYPE RO_STR_8003E4E0_jp;
// extern UNK_TYPE RO_STR_8003E4F4_jp;
// extern UNK_TYPE RO_STR_8003E514_jp;
// extern UNK_TYPE RO_STR_8003E534_jp;
// extern UNK_TYPE RO_STR_8003E554_jp;
// extern UNK_TYPE RO_STR_8003E588_jp;
// extern UNK_TYPE RO_STR_8003E5A4_jp;

// extern UNK_TYPE RO_DBL_8003E890_jp;
// extern UNK_TYPE RO_STR_8003E8D8_jp;
// extern UNK_TYPE RO_STR_8003E8DC_jp;
// extern UNK_TYPE RO_8003E8E0_jp;
// extern UNK_TYPE RO_DBL_8003E8E8_jp;
// extern UNK_TYPE RO_8003E8F0_jp;
// extern UNK_TYPE RO_8003E8F8_jp;

// .bss

// extern UNK_TYPE sIdleStack;
// extern UNK_TYPE sIdleStackInfo;
// extern UNK_TYPE sBootStackInfo;
// extern UNK_TYPE sIdleThread;
// extern STACK(sBootStack, 0x400);
// extern UNK_TYPE B_8003F330_jp;
// extern UNK_TYPE B_8003F4E0_jp;
// extern UNK_TYPE B_8003FDE0_jp;
// extern UNK_TYPE B_8003FE00_jp;
// extern UNK_TYPE B_8003FEC8_jp;
// extern UNK_TYPE B_8003FEE0_jp;
// extern UNK_TYPE gViConfigBlackNext;
// extern UNK_TYPE gViConfigBlack;
// extern UNK_TYPE B_8003FF40_jp;
// extern UNK_TYPE B_8003FF5C_jp;
// extern UNK_TYPE B_8003FF60_jp;
// extern UNK_TYPE B_8003FF78_jp;
// extern UNK_TYPE B_8003FFF8_jp;
// extern UNK_TYPE B_800401A8_jp;
// extern UNK_TYPE B_800406A8_jp;
// extern UNK_TYPE B_800406AC_jp;
// extern UNK_TYPE B_800406B0_jp;
// extern UNK_TYPE B_800406B4_jp;
// extern UNK_TYPE B_800406C0_jp;
// extern UNK_TYPE B_80040AC0_jp;
// extern UNK_TYPE B_80040AC4_jp;
// extern UNK_TYPE B_80040AC8_jp;
// extern UNK_TYPE B_80040ACC_jp;
// extern UNK_TYPE B_80040AD0_jp;
// extern UNK_TYPE B_80040AE0_jp;
// extern UNK_TYPE B_80040AE4_jp;
// extern UNK_TYPE B_80040AE8_jp;
// extern UNK_TYPE B_800410E8_jp;
// extern UNK_TYPE B_80041108_jp;
// extern UNK_TYPE B_800418D6_jp;
// extern UNK_TYPE B_80041960_jp;
// extern UNK_TYPE B_80041964_jp;
// extern UNK_TYPE B_80041970_jp;
// extern UNK_TYPE B_80041972_jp;
// extern UNK_TYPE B_80041980_jp;
// extern UNK_TYPE B_80041982_jp;
// extern UNK_TYPE B_80041995_jp;
// extern UNK_TYPE B_80041998_jp;

// extern UNK_TYPE B_80044684_jp;


#endif
