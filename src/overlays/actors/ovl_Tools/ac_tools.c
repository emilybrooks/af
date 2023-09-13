#include "ac_tools.h"
#include "m_lib.h"
#include "m_actor_dlftbls.h"
#include "m_object.h"
#include "overlays/gamestates/ovl_play/m_play.h"
#include "m_common_data.h"

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

extern UNK_PTR* B_80965C20_jp;

void func_80965ACC_jp(Game_Play*);
void func_80965B20_jp();
void func_80965A70_jp();
extern UNK_TYPE func_80965A4C_jp;
s32 func_809657EC_jp(Game_Play_unk_0110_unk_0000*, s32, Actor*, s16);

extern s16 D_80965B64_jp[]; // profile_table
extern s16 D_80965BBC_jp[]; // objectTable

// tool actor?
typedef struct unkStruct {
    /* 0x000 */ Actor actor;
    /* 0x174 */ UNK_TYPE unk174;
    /* 0x178 */ UNK_TYPE1 unk178[0x44];
    /* 0x1BC */ UNK_TYPE unk1BC;
} unkStruct; // size = >= 0x1C0

// #pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/aTOL_actor_ct.s")
void aTOL_actor_ct(Actor* thisx UNUSED, Game_Play* game_play UNUSED) {
    func_80965ACC_jp(game_play);
}

// #pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/aTOL_actor_dt.s")
void aTOL_actor_dt(Actor* thisx UNUSED, Game_Play* game_play UNUSED) {
    func_80965B20_jp();
}

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/func_809657EC_jp.s")
// aTOL_check_data_bank
//  s32 func_809657EC_jp(Game_Play_unk_0110_unk_0000 *arg0, s32 arg1, Actor *arg2, s16 arg3)
//  {
//      s32 sp34;
//      // Game_Play_unk_0110_unk_0000 *sp30;
//      u32 sp28;
//      ObjectOverlay *sp18;
//      Actor *temp_a0;
//      Game_Play_unk_0110_unk_0000 *temp_v0;
//      ObjectOverlay *temp_v1_2;
//      // s16 temp_v1;
//      s16 var_a0;
//      // s16 var_a3;
//      s32 temp_a1;
//      s32 temp_v0_2;
//      s32 ret; //var_t0
//      u32 temp_a2;

//     // var_a3 = arg3;
//     ret = -1;
//     temp_a1 = common_data.unk_100A0->unk8;
//     if ((arg2->part == 2) && (arg1 < 0x20) && (temp_a1 = common_data.unk_100A0->unk8, temp_a1 != -1))
//     {
//         temp_v0 = &arg0[temp_a1];
//         if (temp_v0)
//         {
//         }
//         // temp_v1 = temp_v0->unk_00;
//         // var_a0 = -temp_v0->unk_00;
//         // if (temp_v0->unk_00 >= 0)
//         // {
//         //     var_a0 = temp_v0->unk_00;
//         // }
//         // var_a0 = ABS(temp_v0->unk_00);
//         if (ABS(temp_v0->unk_00) != arg3)
//         {
//             temp_v1_2 = &gObjectTable[arg3];
//             temp_a2 = temp_v1_2->vromEnd - temp_v1_2->vromStart;
//             if (temp_a2 < 0xC01U)
//             {
//                 temp_a0 = arg2->child;
//                 if ((temp_a0 != NULL) && (temp_a1 == temp_a0->unk_026))
//                 {
//                     // sp30 = temp_v0;
//                     // sp18 = temp_v1_2;
//                     // sp28 = temp_a2;
//                     // arg3 = arg3;
//                     // sp34 = -1;
//                     Actor_delete(temp_a0);
//                     // var_a3 = arg3;
//                     ret = -1;
//                 }
//                 temp_v0->unk_00 = -arg3;
//                 temp_v0->unk_10 = temp_a2;
//                 temp_v0->unk_50 = 0;
//                 temp_v0->unk_53 = 1;
//                 temp_v0->unk_14 = 0;
//                 temp_v0->unk_0C = temp_v1_2->vromStart;
//             }
//         }
//         else
//         {
//             ret = temp_a1;
//         }
//     }
//     else
//     {
//         // arg3 = var_a3;
//         temp_v0_2 = mSc_bank_regist_check(arg0, arg3);
//         ret = temp_v0_2;
//         if (temp_v0_2 == -1)
//         {
//             sp34 = temp_v0_2;
//             func_800C6144_jp(arg0, arg3);
//             ret = sp34;
//         }
//     }
//     return ret;
// }

// #pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/func_8096595C_jp.s")
// aTOL_birth_proc
unkStruct* func_8096595C_jp(s32 arg0, s32 arg1, Actor* arg2, Game_Play* game_play, s16 arg4, s32* arg5) {
    s32 pad[2] UNUSED;
    unkStruct* temp_v0_2;
    unkStruct* ret = NULL;
    s32 temp_v0 = func_809657EC_jp(&game_play->unk_0110, arg0, arg2, D_80965BBC_jp[arg0]);
    s32 pad2 UNUSED;

    if (temp_v0 != -1) {
        temp_v0_2 = (unkStruct*)Actor_info_make_child_actor(&game_play->actorInfo, arg2, game_play, D_80965B64_jp[arg0], 0.0f, 0.0f,
                                                0.0f, 0, 0, 0, -1, 0, arg4, temp_v0);
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

// aTOL_chg_request_mode_proc
#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/func_80965A4C_jp.s")

// aTOL_secure_pl_umbrella_bank_area
#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/func_80965A70_jp.s")

// aTOL_init_clip_area
#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/func_80965ACC_jp.s")
// void func_80965ACC_jp(Game_Play* game_play UNUSED)
// {
//     if (common_data.unk_100A0 == NULL)
//     {
//         common_data.unk_100A0 = &B_80965C20_jp;
//         B_80965C20_jp = &func_8096595C_jp;
//         common_data.unk_100A0->unk4 = &func_80965A4C_jp;
//         func_80965A70_jp();
//     }
// }

// #pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Tools/ac_tools/func_80965B20_jp.s")
// aTOL_free_clip_area
void func_80965B20_jp(void) {
    if (common_data.unk_100A0) {
        common_data.unk_100A0 = NULL;
    }
}
