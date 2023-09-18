#ifndef M_SCENE_H
#define M_SCENE_H

#include "ultra64.h"
#include "z64math.h"

struct Game_Play;

typedef struct ActorEntry {
    /* 0x0 */ s16 id;
    /* 0x2 */ Vec3s pos;
    /* 0x8 */ Vec3s rot;
    /* 0xE */ s16 params;
} ActorEntry; // size = 0x10

typedef struct ObjectStatus {
    /* 0x00 */ s16 id;
    /* 0x04 */ void* segment;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ uintptr_t vrom;
    /* 0x10 */ size_t size;
    /* 0x14 */ UNK_TYPE unk14;
    /* 0x18 */ char pad18[0x1C];
    /* 0x34 */ OSMesgQueue unk34;
    /* 0x4C */ UNK_TYPE unk4C;
    /* 0x50 */ s16 unk50;
    /* 0x52 */ u8 unk52;
    /* 0x53 */ u8 unk53;
} ObjectStatus; // size = 0x54

#define OBJECT_EXCHANGE_BANK_MAX 73 // Name taken from oot debug string

typedef struct ObjectExchangeBank {
    /* 0x0000 */ ObjectStatus status[OBJECT_EXCHANGE_BANK_MAX]; // Name taken from oot debug string
    /* 0x17FC */ s32 num; // Name taken from oot debug string
    /* 0x17F8 */ UNK_TYPE unk17F8; // index
    /* 0x17FC */ UNK_TYPE unk17FC; // index
    /* 0x1800 */ UNK_TYPE unk1800; // start pointers
    /* 0x1804 */ UNK_TYPE unk1804; // end pointers
    /* 0x1808 */ UNK_TYPE unk1808; // start pointers
    /* 0x180C */ UNK_TYPE unk180C; // start pointers
    /* 0x1810 */ UNK_TYPE unk1810; // end pointers
    /* 0x1814 */ UNK_TYPE unk1814; // end pointers
    /* 0x1818 */ UNK_TYPE unk1818;
    /* 0x181C */ UNK_TYPE unk181C;
    /* 0x1820 */ UNK_TYPE unk1820;
} ObjectExchangeBank; // size = 0x1824

typedef struct {
    /* 0x0000 */ char unk0;
} DoorInfo;

typedef struct {
    /* 0x0000 */ char unk0;
    //object_bank
} SceneInfo;

// void func_800C59B0_jp();
// void func_800C5A08_jp();
// void func_800C5A60_jp();
// void func_800C5AA0_jp();
// void func_800C5B30_jp();
// void func_800C5B5C_jp();
// void func_800C5B74_jp();
// void func_800C5C30_jp();
// void func_800C5CC4_jp();
// void func_800C5D68_jp();
// void func_800C5E10_jp();
// void func_800C5EA0_jp();
// void func_800C5F0C_jp();
void mSc_dmacopy_data_bank(ObjectStatus* arg0);
s32 mSc_bank_regist_check(ObjectStatus* arg0, s16 arg1);
s32 func_800C6144_jp(ObjectExchangeBank* objectBank, s16 arg1);
void mSc_regist_initial_exchange_bank(struct Game_Play* game_play);
// void func_800C62C4_jp();
void mSc_dmacopy_all_exchange_bank(ObjectStatus* arg0);
void mSc_data_bank_ct(struct Game_Play* game_play, ObjectExchangeBank *objectBank);
void mSc_decide_exchange_bank(ObjectExchangeBank *objectBank);
// void func_800C6690_jp();
void Scene_ct(struct Game_Play* game_play, void* arg1);
// void func_800C6960_jp();
// void func_800C69F4_jp();
// void func_800C6A28_jp();
// void func_800C6A5C_jp();
// void func_800C6A90_jp();
void Door_info_ct(s8* arg0);
// void func_800C6AD0_jp();
// void func_800C6AE0_jp();
// void func_800C6B50_jp();
// void func_800C6BB0_jp();
// void func_800C6BD4_jp();
// void func_800C6BF8_jp();
// void func_800C6C10_jp();
// void func_800C6D14_jp();
// void func_800C6D5C_jp();
// void func_800C6E14_jp();

#endif
