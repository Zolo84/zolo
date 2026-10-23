// FUN_0040be00 @ 40be00 size=3043

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040be00(int param_1,int param_2)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  unkbyte10 extraout_ST0;
  unkbyte10 extraout_ST0_00;
  float10 extraout_ST0_01;
  unkbyte10 extraout_ST0_02;
  float10 fVar8;
  unkbyte10 extraout_ST1;
  unkbyte10 extraout_ST1_00;
  int local_108;
  int local_104;
  undefined8 local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  undefined8 local_e0;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  double local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [24];
  int local_98;
  int local_94;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_58 [24];
  int local_40;
  int local_3c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_d4 = *(int *)(param_1 + 0x4e) + 5;
  pdVar1 = *(double **)(param_1 + 0xce);
  fVar8 = (float10)(param_2 + 6) / (float10)local_d4;
  if (*(char *)(param_1 + 0xea) == '\0') {
    local_100 = (double)((float10)pdVar1[1] - fVar8 * (float10)_DAT_007e3450);
    fsin((float10)pdVar1[1] - fVar8 * (float10)_DAT_007e3448);
    iVar2 = __ftol();
    fcos(extraout_ST1_00);
    iVar3 = __ftol();
    iVar3 = *(int *)(pdVar1 + 3) + iVar3;
    iVar2 = *(int *)((int)pdVar1 + 0x1c) + iVar2;
  }
  else {
    local_100 = (double)(fVar8 * (float10)_DAT_007e3450 + (float10)*pdVar1);
    fsin(fVar8 * (float10)_DAT_007e3448 + (float10)*pdVar1);
    iVar2 = __ftol();
    fcos(extraout_ST1);
    iVar3 = __ftol();
    iVar3 = iVar3 + *(int *)(pdVar1 + 3);
    iVar2 = *(int *)((int)pdVar1 + 0x1c) + iVar2;
  }
  fcos((float10)local_100);
  local_108 = iVar3;
  local_104 = iVar2;
  local_d0 = __ftol();
  fsin((float10)local_100);
  local_d0 = local_d0 + *(int *)(pdVar1 + 3);
  local_cc = __ftol();
  fVar8 = (float10)fsin(extraout_ST0);
  local_cc = *(int *)((int)pdVar1 + 0x1c) + local_cc;
  local_100 = (double)fVar8;
  local_f4 = iVar2;
  local_f0 = iVar3;
  local_ec = iVar2;
  local_e8 = iVar3;
  local_e4 = iVar2;
  local_d8 = __ftol();
  fVar8 = (float10)fcos(extraout_ST0_00);
  local_e0 = (double)fVar8;
  local_108 = __ftol();
  local_108 = iVar3 + local_108;
  local_104 = iVar2 + local_d8;
  fVar8 = (float10)fsin(extraout_ST0_01 - (float10)_DAT_007e33e8);
  local_c8 = (double)fVar8;
  iVar2 = __ftol();
  fcos(extraout_ST0_02);
  local_f8 = __ftol();
  local_f8 = iVar3 + local_f8;
  local_f4 = local_f4 + iVar2;
  iVar3 = __ftol();
  iVar2 = __ftol();
  local_f0 = local_f0 + iVar2;
  local_ec = local_ec + iVar3;
  iVar3 = __ftol();
  iVar2 = __ftol();
  local_e8 = local_e8 + iVar2;
  local_e4 = local_e4 + iVar3;
  if (*(char *)(param_1 + 0xea) == '\0') {
    FUN_00403080(&local_f8,param_1 + 0xbe,0x60000000,0x3fe921fb);
    FUN_00403080(&local_108,param_1 + 0xc6,0x60000000,0x3fe921fb);
    local_100._0_4_ = local_10 + local_40;
    local_100._4_4_ = local_c + local_3c;
    local_f8 = local_40 + local_18;
    local_f4 = local_3c + local_14;
    local_e0._0_4_ = local_68 + local_98;
    local_e0._4_4_ = local_64 + local_94;
    local_108 = local_98 + local_70;
    local_64 = local_6c;
  }
  else {
    FUN_00403080(param_1 + 0xbe,&local_f8,0x60000000,0x3fe921fb);
    FUN_00403080(param_1 + 0xc6,&local_108,0x60000000,0x3fe921fb);
    local_100._0_4_ = local_18 + local_40;
    local_f8 = local_40 + local_10;
    local_100._4_4_ = local_14 + local_3c;
    local_f4 = local_3c + local_c;
    local_e0._0_4_ = local_70 + local_98;
    local_e0._4_4_ = local_6c + local_94;
    local_108 = local_98 + local_68;
  }
  local_104 = local_94 + local_64;
  local_b8 = FUN_0040c9f0(&local_e0,&local_100,local_58);
  local_bc = FUN_0040c9f0(&local_100,&local_e0,local_b0);
  local_b4 = FUN_0040c9f0(&local_f0,&local_108,local_b0);
  iVar3 = local_d0 - local_f0;
  if (((local_f0 - local_108 < 0) && (0 < iVar3)) || ((0 < local_f0 - local_108 && (iVar3 < 0)))) {
    local_d4 = 1;
  }
  else {
    local_d4 = 0;
  }
  iVar2 = local_e8 - local_d0;
  if (((iVar3 < 0) && (0 < iVar2)) || ((0 < iVar3 && (iVar2 < 0)))) {
    local_c0 = 1;
  }
  else {
    local_c0 = 0;
  }
  if (((iVar2 < 0) && (0 < local_f8 - local_e8)) || ((0 < iVar2 && (local_f8 - local_e8 < 0)))) {
    local_d8 = 1;
  }
  else {
    local_d8 = 0;
  }
  uVar4 = FUN_0040c9f0(&local_e8,&local_f8,local_58);
  local_c8 = (double)CONCAT44(local_c8._4_4_,uVar4);
  *(int *)(param_1 + 0xae) = local_28 + local_40;
  *(int *)(param_1 + 0xb2) = local_24 + local_3c;
  iVar2 = *(int *)(param_1 + 0xae) + -1;
  *(int *)(param_1 + 0xae) = iVar2;
  iVar3 = local_80 + local_98;
  if (iVar2 < local_80 + local_98) {
    iVar3 = iVar2;
  }
  iVar2 = local_7c + local_94;
  if (*(int *)(param_1 + 0xb2) < local_7c + local_94) {
    iVar2 = *(int *)(param_1 + 0xb2);
  }
  *(int *)(param_1 + 0xae) = iVar3;
  *(int *)(param_1 + 0xb2) = iVar2;
  iVar3 = *(int *)(param_1 + 0xae);
  if ((int)local_100 <= *(int *)(param_1 + 0xae)) {
    iVar3 = (int)local_100;
  }
  iVar2 = *(int *)(param_1 + 0xb2);
  if (local_100._4_4_ <= *(int *)(param_1 + 0xb2)) {
    iVar2 = local_100._4_4_;
  }
  *(int *)(param_1 + 0xae) = iVar3;
  *(int *)(param_1 + 0xb2) = iVar2;
  iVar3 = *(int *)(param_1 + 0xae);
  if ((int)local_e0 <= *(int *)(param_1 + 0xae)) {
    iVar3 = (int)local_e0;
  }
  iVar2 = *(int *)(param_1 + 0xb2);
  if (local_e0._4_4_ <= *(int *)(param_1 + 0xb2)) {
    iVar2 = local_e0._4_4_;
  }
  *(int *)(param_1 + 0xae) = iVar3;
  *(int *)(param_1 + 0xb2) = iVar2;
  iVar3 = *(int *)(param_1 + 0xae);
  if (local_108 <= *(int *)(param_1 + 0xae)) {
    iVar3 = local_108;
  }
  iVar2 = *(int *)(param_1 + 0xb2);
  if (local_104 <= *(int *)(param_1 + 0xb2)) {
    iVar2 = local_104;
  }
  *(int *)(param_1 + 0xae) = iVar3;
  *(int *)(param_1 + 0xb2) = iVar2;
  iVar3 = *(int *)(param_1 + 0xae);
  if (local_f0 <= *(int *)(param_1 + 0xae)) {
    iVar3 = local_f0;
  }
  iVar2 = *(int *)(param_1 + 0xb2);
  if (local_ec <= *(int *)(param_1 + 0xb2)) {
    iVar2 = local_ec;
  }
  *(int *)(param_1 + 0xae) = iVar3;
  *(int *)(param_1 + 0xb2) = iVar2;
  iVar3 = *(int *)(param_1 + 0xae);
  if (local_d0 <= *(int *)(param_1 + 0xae)) {
    iVar3 = local_d0;
  }
  iVar2 = *(int *)(param_1 + 0xb2);
  if (local_cc <= *(int *)(param_1 + 0xb2)) {
    iVar2 = local_cc;
  }
  *(int *)(param_1 + 0xae) = iVar3;
  *(int *)(param_1 + 0xb2) = iVar2;
  iVar3 = *(int *)(param_1 + 0xae);
  if (local_e8 <= *(int *)(param_1 + 0xae)) {
    iVar3 = local_e8;
  }
  iVar2 = *(int *)(param_1 + 0xb2);
  if (local_e4 <= *(int *)(param_1 + 0xb2)) {
    iVar2 = local_e4;
  }
  *(int *)(param_1 + 0xae) = iVar3;
  *(int *)(param_1 + 0xb2) = iVar2;
  iVar3 = *(int *)(param_1 + 0xae);
  if (local_f8 <= *(int *)(param_1 + 0xae)) {
    iVar3 = local_f8;
  }
  iVar2 = *(int *)(param_1 + 0xb2);
  if (local_f4 <= *(int *)(param_1 + 0xb2)) {
    iVar2 = local_f4;
  }
  *(int *)(param_1 + 0xae) = iVar3;
  *(int *)(param_1 + 0xb2) = iVar2;
  *(int *)(param_1 + 0xb6) = local_20 + local_40;
  *(int *)(param_1 + 0xba) = local_3c + local_1c;
  *(int *)(param_1 + 0xb6) = *(int *)(param_1 + 0xb6) + 1;
  iVar3 = local_78 + local_98;
  if (local_78 + local_98 < *(int *)(param_1 + 0xb6)) {
    iVar3 = *(int *)(param_1 + 0xb6);
  }
  iVar2 = local_94 + local_74;
  if (local_94 + local_74 < *(int *)(param_1 + 0xba)) {
    iVar2 = *(int *)(param_1 + 0xba);
  }
  *(int *)(param_1 + 0xb6) = iVar3;
  *(int *)(param_1 + 0xba) = iVar2;
  iVar3 = *(int *)(param_1 + 0xb6);
  if (*(int *)(param_1 + 0xb6) <= (int)local_100) {
    iVar3 = (int)local_100;
  }
  iVar2 = *(int *)(param_1 + 0xba);
  if (*(int *)(param_1 + 0xba) <= local_100._4_4_) {
    iVar2 = local_100._4_4_;
  }
  *(int *)(param_1 + 0xb6) = iVar3;
  *(int *)(param_1 + 0xba) = iVar2;
  iVar3 = *(int *)(param_1 + 0xb6);
  if (*(int *)(param_1 + 0xb6) <= (int)local_e0) {
    iVar3 = (int)local_e0;
  }
  iVar2 = *(int *)(param_1 + 0xba);
  if (*(int *)(param_1 + 0xba) <= local_e0._4_4_) {
    iVar2 = local_e0._4_4_;
  }
  *(int *)(param_1 + 0xb6) = iVar3;
  *(int *)(param_1 + 0xba) = iVar2;
  iVar3 = *(int *)(param_1 + 0xb6);
  if (*(int *)(param_1 + 0xb6) <= local_108) {
    iVar3 = local_108;
  }
  iVar2 = *(int *)(param_1 + 0xba);
  if (*(int *)(param_1 + 0xba) <= local_104) {
    iVar2 = local_104;
  }
  *(int *)(param_1 + 0xb6) = iVar3;
  *(int *)(param_1 + 0xba) = iVar2;
  iVar3 = *(int *)(param_1 + 0xb6);
  if (*(int *)(param_1 + 0xb6) <= local_f0) {
    iVar3 = local_f0;
  }
  iVar2 = *(int *)(param_1 + 0xba);
  if (*(int *)(param_1 + 0xba) <= local_ec) {
    iVar2 = local_ec;
  }
  *(int *)(param_1 + 0xb6) = iVar3;
  *(int *)(param_1 + 0xba) = iVar2;
  iVar3 = *(int *)(param_1 + 0xb6);
  if (*(int *)(param_1 + 0xb6) <= local_d0) {
    iVar3 = local_d0;
  }
  iVar2 = *(int *)(param_1 + 0xba);
  if (*(int *)(param_1 + 0xba) <= local_cc) {
    iVar2 = local_cc;
  }
  *(int *)(param_1 + 0xb6) = iVar3;
  *(int *)(param_1 + 0xba) = iVar2;
  iVar3 = *(int *)(param_1 + 0xb6);
  if (*(int *)(param_1 + 0xb6) <= local_e8) {
    iVar3 = local_e8;
  }
  iVar2 = *(int *)(param_1 + 0xba);
  if (*(int *)(param_1 + 0xba) <= local_e4) {
    iVar2 = local_e4;
  }
  *(int *)(param_1 + 0xb6) = iVar3;
  *(int *)(param_1 + 0xba) = iVar2;
  iVar3 = local_f8;
  if (local_f8 < *(int *)(param_1 + 0xb6)) {
    iVar3 = *(int *)(param_1 + 0xb6);
  }
  iVar2 = *(int *)(param_1 + 0xba);
  if (*(int *)(param_1 + 0xba) <= local_f4) {
    iVar2 = local_f4;
  }
  *(int *)(param_1 + 0xb6) = iVar3;
  *(int *)(param_1 + 0xba) = iVar2;
  uVar5 = *(uint *)(param_1 + 0xae) & 0xfffffffc;
  *(uint *)(param_1 + 0xae) = uVar5;
  iVar2 = DAT_0088eb04;
  iVar3 = DAT_0088dafc * 2;
  *(uint *)(param_1 + 0x96) =
       (*(int *)(param_1 + 0xb6) - uVar5) + DAT_0088daf8 * 2 + 1 + DAT_0088eb00;
  *(int *)(param_1 + 0x9a) =
       (*(int *)(param_1 + 0xba) - *(int *)(param_1 + 0xb2)) + iVar3 + 1 + iVar2;
  *(uint *)(param_1 + 0x96) = *(int *)(param_1 + 0x96) + 3U & 0xfffffffc;
  iVar3 = DAT_0088dafc - *(int *)(param_1 + 0xb2);
  local_100._4_4_ = local_100._4_4_ + iVar3;
  iVar2 = DAT_0088daf8 - *(int *)(param_1 + 0xae);
  local_e0._0_4_ = (int)local_e0 + iVar2;
  local_100._0_4_ = (int)local_100 + iVar2;
  local_108 = local_108 + iVar2;
  local_104 = local_104 + iVar3;
  local_e0._4_4_ = local_e0._4_4_ + iVar3;
  local_ec = local_ec + iVar3;
  local_d0 = local_d0 + iVar2;
  local_f0 = local_f0 + iVar2;
  local_e8 = local_e8 + iVar2;
  local_e4 = local_e4 + iVar3;
  local_f8 = local_f8 + iVar2;
  local_f4 = local_f4 + iVar3;
  iVar7 = local_cc + iVar3;
  FUN_00403820(iVar2,iVar3);
  FUN_00403820(iVar2,iVar3);
  FUN_00415430(*(undefined4 *)(param_1 + 0x96),*(undefined4 *)(param_1 + 0x9a),8);
  FUN_00415f20(DAT_0088eb18);
  FUN_00416f20(*(undefined4 *)(param_1 + 0xae),*(undefined4 *)(param_1 + 0xb2));
  FUN_00415a20(0,0);
  iVar3 = *(int *)(param_1 + 0x62);
  iVar2 = *(int *)(param_1 + 0xf0);
  iVar6 = FUN_00415f30();
  *(undefined1 *)(iVar3 + 600) = *(undefined1 *)(iVar6 + 0x1104 + iVar2);
  FUN_00407da0();
  FUN_004025b0(local_58);
  FUN_004025b0(local_b0);
  FUN_00402160((int)local_100,local_100._4_4_,(int)local_e0,local_e0._4_4_,local_b8,local_bc);
  iVar3 = local_d4;
  FUN_00402160(local_108,local_104,local_f0,local_ec,local_b4,local_d4);
  iVar2 = local_d0;
  FUN_00402160(local_f0,local_ec,local_d0,iVar7,iVar3,local_c0);
  FUN_00402160(iVar2,iVar7,local_e8,local_e4,local_c0,local_d8);
  FUN_00402160(local_e8,local_e4,local_f8,local_f4,local_d8,local_c8._0_4_);
  local_d0 = (*(int *)(param_1 + 0x96) - DAT_0088eb00) + -1;
  local_c8 = 0.0;
  local_cc = (*(int *)(param_1 + 0x9a) - DAT_0088eb04) + -1;
  FUN_00403000(&DAT_0088eb00,&local_c8,&local_d0);
  return;
}


