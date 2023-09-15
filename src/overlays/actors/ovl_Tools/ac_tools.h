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

// tool actor?
typedef struct unkStruct {
    /* 0x000 */ Actor actor;
    /* 0x174 */ UNK_TYPE unk174;
    /* 0x178 */ UNK_TYPE1 unk178[0x44];
    /* 0x1BC */ UNK_TYPE unk1BC;
} unkStruct; // size >= 0x1C0

#endif
