// FUN_006ef920 @ 6ef920 size=924

undefined4 * __fastcall FUN_006ef920(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_007da70f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006ee230();
  *param_1 = &PTR_FUN_007f8140;
  param_1[2] = &PTR_LAB_007f813c;
  local_4 = (void *)0x0;
  iVar9 = *(int *)(DAT_00bd1bac + 8) + -0x300 >> 1;
  iVar10 = *(int *)(DAT_00bd1bac + 4) + -0x400 >> 1;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570();
  }
  local_4 = (void *)((uint)local_4._1_3_ << 8);
  *(undefined4 *)((int)param_1 + 0x16) = uVar3;
  FUN_00415d40();
  iVar14 = **(int **)((int)param_1 + 0x16);
  iVar4 = FUN_00415bd0();
  (**(code **)(iVar14 + 0x18))();
  local_4 = operator_new(0x7e);
  pvStack_c._0_1_ = 2;
  if (local_4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00414c80();
  }
  iVar14 = iVar9 + 0x1b8;
  *(int **)((int)param_1 + 0x22) = piVar5;
  iVar1 = *piVar5;
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  iVar6 = FUN_00415bd0();
  iVar6 = (iVar10 - iVar6 / 2) + 0x200;
  (**(code **)(iVar1 + 0x18))(iVar6);
  pvStack_c = operator_new(0xaa);
  if (pvStack_c == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_GFX_interface_frontend_btn_front_0086f6c0,0,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + 0x1a) = uVar3;
  FUN_00415d40();
  iVar1 = **(int **)((int)param_1 + 0x1a);
  iVar7 = FUN_00415bd0(iVar9 + 0x1f8);
  (**(code **)(iVar1 + 0x18))((iVar10 - iVar7 / 2) + 0x200);
  piVar5 = *(int **)((int)param_1 + 0x1a);
  if (*(char *)((int)piVar5 + 0xa2) != '\0') {
    FUN_00433930();
  }
  (**(code **)(*piVar5 + 0x60))();
  *(undefined1 *)((int)piVar5 + 0x86) = 1;
  pvVar2 = operator_new(0xaa);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_GFX_interface_frontend_btn_front_0086b5f8,0,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + 0x1e) = uVar3;
  FUN_00415d40();
  iVar1 = **(int **)((int)param_1 + 0x1e);
  iVar9 = FUN_00415bd0(iVar9 + 0x230);
  (**(code **)(iVar1 + 0x18))((iVar10 - iVar9 / 2) + 0x200);
  uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FETCPIPXBTN_HOST_0086f6ac,*(undefined4 *)((int)param_1 + 0x16),uVar3);
  *(undefined4 *)(*(int *)((int)param_1 + 0x16) + 0x88) = 0x68;
  uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FETCPIPXBTN_JOIN_0086f698,*(undefined4 *)((int)param_1 + 0x1a),uVar3);
  *(undefined4 *)(*(int *)((int)param_1 + 0x1a) + 0x88) = 0x6a;
  uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_BACK_0086f4a4,*(undefined4 *)((int)param_1 + 0x1e),uVar3);
  *(undefined4 *)(*(int *)((int)param_1 + 0x1e) + 0x88) = 0xe;
  FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  uVar13 = 0;
  uVar12 = 0xffff;
  uVar3 = *(undefined4 *)(*(int *)((int)param_1 + 0x22) + 0x62);
  uVar11 = 10;
  iVar9 = FUN_00415bd0(10,uVar3,0xffff,0);
  iVar9 = iVar9 / 2;
  uVar8 = FUN_0042b6c9(s_FETCPIPX_CHOOSEGAME_0086f684);
  FUN_004132d0(uVar8,iVar9,uVar11,uVar3,uVar12,uVar13);
  pvVar2 = operator_new(0x3e);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00437040(0x96,200,0);
  }
  *(undefined4 *)((int)param_1 + 0x2a) = uVar3;
  (**(code **)(**(int **)((int)param_1 + 0x22) + 0x28))(&stack0xffffffcc);
  FUN_00437580(iVar6 + 0xe,iVar14 + 0x1a);
  *(undefined1 *)(DAT_00893530 + 0x1e) = 0;
  if (DAT_00bd1500 != (undefined4 *)0x0) {
    FUN_0057be80();
    if (DAT_00bd1500 != (undefined4 *)0x0) {
      (**(code **)*DAT_00bd1500)(1);
    }
  }
  DAT_00bd1500 = (undefined4 *)0x0;
  FUN_005820d0();
  FUN_00582270();
  FUN_005821e0(1,0x10001,0);
  ExceptionList = (void *)((iVar10 - iVar4 / 2) + 0x200);
  return param_1;
}


