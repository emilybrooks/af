#include "ac_tools.h"
#include "m_lib.h"
#include "m_actor_dlftbls.h"
#include "m_object.h"
#include "overlays/gamestates/ovl_play/m_play.h"
#include "m_common_data.h"
#include "6E9650.h"

void aTOL_actor_ct(Actor* thisx, Game_Play* game_play);
void aTOL_actor_dt(Actor* thisx, Game_Play* game_play);

#if 0
ActorProfile Tools_Profile = {
    /* */ ACTOR_TOOLS,
    /* */ ACTOR_PART_7,
    /* */ ACTOR_FLAG_10 | ACTOR_FLAG_20 | ACTOR_FLAG_20000000,
    /* */ 0x0000,
    /* */ GAMEPLAY_KEEP,
    /* */ sizeof(Tools),
    /* */ aTOL_actor_ct,
    /* */ aTOL_actor_dt,
    /* */ (ActorFunc)none_proc1,
    /* */ (ActorFunc)none_proc1,
    /* */ NULL,
};
#endif

// .data
// Tools_Profile
// profile_table$223

// .bss
// aTOL_clip

//   aTOL_actor_ct
//   aTOL_actor_dt
//   aTOL_check_data_bank
//   aTOL_birth_proc
//   aTOL_chg_request_mode_proc
//   aTOL_secure_pl_umbrella_bank_area
//   aTOL_init_clip_area
//   aTOL_free_clip_area

extern CommonData_unk_100A0 B_80965C20_jp;

void aTOL_init_clip_area(Game_Play*);
void aTOL_free_clip_area();
void aTOL_secure_pl_umbrella_bank_area();
extern UNK_TYPE aTOL_chg_request_mode_proc; //todo remove
s32 aTOL_check_data_bank(Game_Play_unk_0110* objectExchangeBank, s32 arg1, Actor* arg2, s16 arg3);

extern s16 D_80965B64_jp[]; // profile_table
extern s16 D_80965BBC_jp[]; // objectTable

// tool actor?
typedef struct unkStruct {
    /* 0x000 */ Actor actor;
    /* 0x174 */ UNK_TYPE unk174;
    /* 0x178 */ UNK_TYPE1 unk178[0x44];
    /* 0x1BC */ UNK_TYPE unk1BC;
} unkStruct; // size >= 0x1C0

// #pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/aTOL_actor_ct.s")
void aTOL_actor_ct(Actor* thisx UNUSED, Game_Play* game_play UNUSED) {
    aTOL_init_clip_area(game_play);
}

// #pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/aTOL_actor_dt.s")
void aTOL_actor_dt(Actor* thisx UNUSED, Game_Play* game_play UNUSED) {
    aTOL_free_clip_area();
}

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/aTOL_check_data_bank.s")
// s32 aTOL_check_data_bank(Game_Play_unk_0110* objectExchangeBank, s32 arg1, Actor* actor, s16 objectIndex) {
//     //  s32 sp34;
//     // Game_Play_unk_0110_unk_0000 *sp30;
//     //  u32 sp28;
//     //  Actor *temp_a0;
//     //  ObjectOverlay *temp_v1_2;
//     // s16 temp_v1;
//     //  s16 var_a0;
//     // s16 var_a3;
//     s32 ret = -1; // var_t0
//     s32 temp_v0_2;
//     s32 temp_a1 = common_data.unk_100A0->unk8;

//     if ((actor->part == 2) && (arg1 < 0x20) && (temp_a1 = common_data.unk_100A0->unk8, temp_a1 != -1)) {
//         Game_Play_unk_0110_unk_0000* objectStatus = &objectExchangeBank->unk_0000[temp_a1];
//         s32 new_var;
//         // if (objectStatus)
//         // {
//         // }
//         // temp_v1 = objectStatus->unk_00;
//         // var_a0 = ;
//         if (objectStatus->unk_00 >= 0) {
//             // objectStatus->unk_00 = -objectStatus->unk_00;
//             new_var = -objectStatus->unk_00;
//             objectStatus->unk_00 = new_var;
//         }
//         // var_a0 = ABS(objectStatus->unk_00);
//         if (objectStatus->unk_00 != objectIndex) {
//             // temp_v1_2 = &gObjectTable[objectIndex];
//             u32 temp_a2 = gObjectTable[objectIndex].vromEnd - gObjectTable[objectIndex].vromStart;

//             if (temp_a2 <= 0xC00) {
//                 // temp_a0 = actor->child;
//                 if ((actor->child != NULL) && (temp_a1 == actor->child->unk_026)) {
//                     // sp30 = objectStatus;
//                     // sp18 = temp_v1_2;
//                     // sp28 = temp_a2;
//                     // objectIndex = objectIndex;
//                     // sp34 = -1;
//                     Actor_delete(actor->child);
//                     // var_a3 = objectIndex;
//                     ret = -1;
//                 }
//                 objectStatus->unk_00 = -objectIndex;
//                 objectStatus->unk_0C = gObjectTable[objectIndex].vromStart;
//                 objectStatus->unk_10 = temp_a2;
//                 objectStatus->unk_50 = 0;
//                 objectStatus->unk_53 = 1;
//                 objectStatus->unk_14 = 0;
//             }
//         } else {
//             ret = temp_a1;
//         }
//     } else {
//         // arg3 = var_a3;
//         temp_v0_2 = mSc_bank_regist_check(objectExchangeBank, objectIndex);
//         ret = temp_v0_2;
//         if (temp_v0_2 == -1) {
//             // sp34 = temp_v0_2;
//             func_800C6144_jp(objectExchangeBank, objectIndex);
//             ret = temp_v0_2;
//         }
//     }
//     return ret;
// }

// #pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/aTOL_birth_proc.s")
unkStruct* aTOL_birth_proc(s32 arg0, s32 arg1, Actor* arg2, Game_Play* game_play, s16 arg4, s32* arg5) {
    s32 pad[2] UNUSED;
    unkStruct* temp_v0_2;
    unkStruct* ret = NULL;
    s32 temp_v0 = aTOL_check_data_bank(&game_play->unk_0110, arg0, arg2, D_80965BBC_jp[arg0]);
    s32 pad2 UNUSED;

    if (temp_v0 != -1) {
        temp_v0_2 = (unkStruct*)Actor_info_make_child_actor(&game_play->actorInfo, arg2, game_play, D_80965B64_jp[arg0],
                                                            0.0f, 0.0f, 0.0f, 0, 0, 0, -1, 0, arg4, temp_v0);
        ret = temp_v0_2;

        if (temp_v0_2 != NULL) {
            temp_v0_2->unk1BC = arg1;
            temp_v0_2->unk174 = arg0;
        }
    }

    if (arg5 != NULL) {
        *arg5 = temp_v0;
    }

    return ret;
}

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/aTOL_chg_request_mode_proc.s")
// ? aTOL_chg_request_mode_proc(s32 arg0, void *arg1, s32 arg2)
// {
//     if (arg0 != arg1->unk14C)
//     {
//         return 0;
//     }
//     arg1->unk1BC = arg2;
//     return 1;
// }

// #pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/aTOL_secure_pl_umbrella_bank_area.s")
void aTOL_secure_pl_umbrella_bank_area(Game_Play* game_play) {
    s32 pad UNUSED;
    s32 sp18 = game_play->unk_0110.num;

    if (func_800C5CC4_jp(&game_play->unk_0110, 0, 0xC00, game_play)) {
        common_data.unk_100A0->unk8 = sp18;

    } else {
        common_data.unk_100A0->unk8 = -1;
    }
}

// #pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/aTOL_init_clip_area.s")
void aTOL_init_clip_area(Game_Play* game_play) {
    if (common_data.unk_100A0 == NULL) {
        common_data.unk_100A0 = &B_80965C20_jp;
        common_data.unk_100A0->aTOL_birth_proc = &aTOL_birth_proc;
        common_data.unk_100A0->unk4 = &aTOL_chg_request_mode_proc;
        aTOL_secure_pl_umbrella_bank_area(game_play);
    }
}

// #pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/aTOL_free_clip_area.s")
void aTOL_free_clip_area(void) {
    if (common_data.unk_100A0) {
        common_data.unk_100A0 = NULL;
    }
}
