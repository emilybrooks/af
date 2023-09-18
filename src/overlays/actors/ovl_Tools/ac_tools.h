#ifndef AC_TOOLS_H
#define AC_TOOLS_H

#include "ultra64.h"
#include "m_actor.h"
#include "unk.h"

struct Game_Play;
struct Tools;

typedef void (*ToolsActionFunc)(struct Tools*, struct Game_Play*);

typedef struct Tools {
    /* 0x000 */ Actor actor;
} Tools; // size = 0x174

typedef enum ToolName {
    /* 00 */ TOOL_UMBRELLA0,
    /* 01 */ TOOL_UMBRELLA1,
    /* 02 */ TOOL_UMBRELLA2,
    /* 03 */ TOOL_UMBRELLA3,
    /* 04 */ TOOL_UMBRELLA4,
    /* 05 */ TOOL_UMBRELLA5,
    /* 06 */ TOOL_UMBRELLA6,
    /* 07 */ TOOL_UMBRELLA7,
    /* 08 */ TOOL_UMBRELLA8,
    /* 09 */ TOOL_UMBRELLA9,
    /* 0A */ TOOL_UMBRELLA10,
    /* 0B */ TOOL_UMBRELLA11,
    /* 0C */ TOOL_UMBRELLA12,
    /* 0D */ TOOL_UMBRELLA13,
    /* 0E */ TOOL_UMBRELLA14,
    /* 0F */ TOOL_UMBRELLA15,
    /* 10 */ TOOL_UMBRELLA16,
    /* 11 */ TOOL_UMBRELLA17,
    /* 12 */ TOOL_UMBRELLA18,
    /* 13 */ TOOL_UMBRELLA19,
    /* 14 */ TOOL_UMBRELLA20,
    /* 15 */ TOOL_UMBRELLA21,
    /* 16 */ TOOL_UMBRELLA22,
    /* 17 */ TOOL_UMBRELLA23,
    /* 18 */ TOOL_UMBRELLA24,
    /* 19 */ TOOL_UMBRELLA25,
    /* 1A */ TOOL_UMBRELLA26,
    /* 1B */ TOOL_UMBRELLA27,
    /* 1C */ TOOL_UMBRELLA28,
    /* 1D */ TOOL_UMBRELLA29,
    /* 1E */ TOOL_UMBRELLA30,
    /* 1F */ TOOL_UMBRELLA31,
    /* 20 */ TOOL_KEITAI,
    /* 21 */ TOOL_UTIWA,
    /* 22 */ TOOL_HANABI,
    /* 23 */ TOOL_CRACKER,
    /* 24 */ TOOL_PISTOL,
    /* 25 */ TOOL_FLAG,
    /* 26 */ TOOL_TUMBLER,
    /* 27 */ TOOL_NPC_SAO,
    /* 28 */ TOOL_TAMA1,
    /* 29 */ TOOL_TAMA2,
    /* 2A */ TOOL_TAMA3,
    /* 2B */ TOOL_TAMA4,
} ToolName;

typedef struct ToolActor {
    /* 0x000 */ Actor actor;
    /* 0x174 */ ToolName toolName;
    /* 0x178 */ UNK_TYPE1 unk178[0x44];
    /* 0x1BC */ UNK_TYPE unk1BC;
} ToolActor; // size >= 0x1C0

typedef ToolActor* (*ToolBirthProc)(ToolName, s32, ToolActor*, struct Game_Play*, s16, s32*);
typedef s32 (*ToolChgRequestModeProc)(Actor*, ToolActor*, s32);

typedef struct ToolClip {
    /* 0x00 */ ToolBirthProc aTOL_birth_proc;
    /* 0x04 */ ToolChgRequestModeProc aTOL_chg_request_mode_proc;
    /* 0x08 */ u32 umbrellaObjectBankIndex;
} ToolClip; // size >= 0xC

#endif
