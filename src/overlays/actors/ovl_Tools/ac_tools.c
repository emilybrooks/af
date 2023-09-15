#include "ac_tools.h"
#include "m_lib.h"
#include "m_actor_dlftbls.h"
#include "m_object.h"
#include "overlays/gamestates/ovl_play/m_play.h"
#include "m_common_data.h"
#include "6E9650.h"

void aTOL_actor_ct(Actor* thisx, Game_Play* game_play);
void aTOL_actor_dt(Actor* thisx, Game_Play* game_play);

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

ToolClip aTOL_clip;

void aTOL_init_clip_area(Game_Play*);
void aTOL_free_clip_area(void);
void aTOL_secure_pl_umbrella_bank_area(Game_Play* game_play);
s32 aTOL_check_data_bank(Game_Play_unk_0110* objectExchangeBank, s32 arg1, Actor* arg2, s16 arg3);

void aTOL_actor_ct(Actor* thisx UNUSED, Game_Play* game_play UNUSED) {
    aTOL_init_clip_area(game_play);
}

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
//     s32 temp_a1 = common_data.toolClip->unk8;

//     if ((actor->part == 2) && (arg1 < 0x20) && (temp_a1 = common_data.toolClip->unk8, temp_a1 != -1)) {
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

unkStruct* aTOL_birth_proc(s32 arg0, s32 arg1, Actor* arg2, Game_Play* game_play, s16 arg4, s32* arg5) {
    static s16 profile_table[] = {
        ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA,
        ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA,
        ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA,
        ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA,
        ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA,
        ACTOR_T_UMBRELLA, ACTOR_T_UMBRELLA, ACTOR_T_KEITAI,   ACTOR_T_UTIWA,    ACTOR_T_HANABI,   ACTOR_T_CRACKER,
        ACTOR_T_PISTOL,   ACTOR_T_FLAG,     ACTOR_T_TUMBLER,  ACTOR_T_NPC_SAO,  ACTOR_T_TAMA,     ACTOR_T_TAMA,
        ACTOR_T_TAMA,     ACTOR_T_TAMA,
    };
    static s16 objectTable[] = {
        OBJECT_28, OBJECT_85, OBJECT_72,  OBJECT_73,  OBJECT_74,  OBJECT_75,  OBJECT_76,  OBJECT_77,  OBJECT_78,
        OBJECT_79, OBJECT_80, OBJECT_81,  OBJECT_82,  OBJECT_83,  OBJECT_84,  OBJECT_55,  OBJECT_56,  OBJECT_57,
        OBJECT_58, OBJECT_59, OBJECT_60,  OBJECT_61,  OBJECT_62,  OBJECT_63,  OBJECT_64,  OBJECT_65,  OBJECT_66,
        OBJECT_67, OBJECT_68, OBJECT_69,  OBJECT_70,  OBJECT_71,  OBJECT_45,  OBJECT_53,  OBJECT_53,  OBJECT_395,
        OBJECT_16, OBJECT_6,  OBJECT_371, OBJECT_370, OBJECT_391, OBJECT_391, OBJECT_391, OBJECT_391,
    };
    s32 pad[2];
    unkStruct* temp_v0_2;
    unkStruct* ret = NULL;
    s32 temp_v0 = aTOL_check_data_bank(&game_play->unk_0110, arg0, arg2, objectTable[arg0]);
    s32 pad2 UNUSED;

    if (temp_v0 != -1) {
        temp_v0_2 = (unkStruct*)Actor_info_make_child_actor(&game_play->actorInfo, arg2, game_play, profile_table[arg0],
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

UNK_TYPE aTOL_chg_request_mode_proc(Actor* arg0, unkStruct* arg1, s32 arg2) {
    if (arg0 != arg1->actor.parent) {
        return 0;

    } else {
        arg1->unk1BC = arg2;
        return 1;
    }
}

void aTOL_secure_pl_umbrella_bank_area(Game_Play* game_play) {
    s32 pad UNUSED;
    s32 sp18 = game_play->unk_0110.num;

    if (func_800C5CC4_jp(&game_play->unk_0110, 0, 0xC00, game_play)) {
        common_data.toolClip->unk8 = sp18;

    } else {
        common_data.toolClip->unk8 = -1;
    }
}

void aTOL_init_clip_area(Game_Play* game_play) {
    if (common_data.toolClip == NULL) {
        common_data.toolClip = &aTOL_clip;
        common_data.toolClip->aTOL_birth_proc = &aTOL_birth_proc;
        common_data.toolClip->aTOL_chg_request_mode_proc = &aTOL_chg_request_mode_proc;
        aTOL_secure_pl_umbrella_bank_area(game_play);
    }
}

void aTOL_free_clip_area(void) {
    if (common_data.toolClip) {
        common_data.toolClip = NULL;
    }
}
