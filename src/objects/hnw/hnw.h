#ifndef OBJECT_HNW_H
#define OBJECT_HNW_H

#include "gbi.h"
#include "c_keyframe.h"

extern Vtx hnw_v[];
extern Gfx head_hnw_model[];
extern Gfx handR_hnw_model[];
extern Gfx handL_hnw_model[];
extern Gfx body_hnw_model[];
extern JointElemR cKF_je_r_hnw_tbl[];
extern BaseSkeletonR cKF_bs_r_hnw;
extern u8 cKF_ckcb_r_hnw_move_tbl[];
extern s16 cKF_kn_hnw_move_tbl[];
extern s16 cKF_c_hnw_move_tbl[];
extern Keyframe cKF_ds_hnw_move_tbl[];
extern BaseAnimationR cKF_ba_r_hnw_move;
extern unsigned short hnw_face[];
extern unsigned char hnw_tmem_txt[];

#endif
