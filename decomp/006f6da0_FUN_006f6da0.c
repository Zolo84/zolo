// FUN_006f6da0 @ 6f6da0 size=780

undefined4 * __thiscall FUN_006f6da0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_24 [2];
  int local_1c;
  int *piStack_18;
  undefined4 *local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_007dad59;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_14 = param_1;
  FUN_006ee230(param_2);
  *param_1 = &PTR_FUN_007f82a0;
  param_1[2] = &PTR_LAB_007f829c;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  puVar8 = (undefined4 *)((int)param_1 + 0x16);
  local_24[0] = 3;
  param_2 = *(int *)(DAT_00bd1bac + 8) + -0x300 >> 1;
  local_1c = param_2 + 0x32;
  iVar9 = *(int *)(DAT_00bd1bac + 4) + -0x400 >> 1;
  param_2 = param_2 + 400;
  do {
    local_10 = operator_new(0xaa);
    local_4._0_1_ = 1;
    if (local_10 == (void *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00433570(s_GFX_interface_frontend_btn_front_0086b5f8,0,0xffffffff);
    }
    local_4._0_1_ = 0;
    *puVar8 = uVar1;
    FUN_00415d40();
    iVar6 = *(int *)*puVar8;
    iVar2 = FUN_00415bd0(param_2);
    (**(code **)(iVar6 + 0x18))((iVar9 - iVar2 / 2) + 0x200);
    param_2 = param_2 + 0x28;
    puVar8 = puVar8 + 1;
    local_24[0] = local_24[0] + -1;
  } while (local_24[0] != 0);
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FETCPIPXBTN_HOST_0086f6ac,*(undefined4 *)((int)param_1 + 0x16),uVar1);
  *(undefined4 *)(*(int *)((int)param_1 + 0x16) + 0x88) = 0x68;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FETCPIPXBTN_JOIN_0086f698,*(undefined4 *)((int)param_1 + 0x1a),uVar1);
  *(undefined4 *)(*(int *)((int)param_1 + 0x1a) + 0x88) = 0x6a;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_BACK_0086f4a4,*(undefined4 *)((int)param_1 + 0x1e),uVar1);
  *(undefined4 *)(*(int *)((int)param_1 + 0x1a) + 0x88) = 0xe;
  pvVar3 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00414c80(s_GFX_interface_frontend_box_doubl_0086f478);
  }
  *(int **)((int)param_1 + 0x22) = piVar4;
  iVar6 = *piVar4;
  local_4 = (void *)((uint)local_4._1_3_ << 8);
  iVar2 = FUN_00415bd0(local_1c + 0x1d6);
  (**(code **)(iVar6 + 0x18))((iVar9 - iVar2 / 2) + 0x200);
  FUN_004136a0(s_eurostilecond20bold_bmp_0082f024);
  uVar12 = 0;
  uVar11 = 0xffff;
  uVar1 = *(undefined4 *)(*(int *)((int)param_1 + 0x22) + 0x62);
  uVar10 = 0xb;
  iVar9 = FUN_00415bd0(0xb,uVar1,0xffff,0);
  iVar9 = iVar9 / 2;
  uVar5 = FUN_0042b6c9(s_FETCPIPX_IPADDRESS_0086f94c);
  FUN_004132d0(uVar5,iVar9,uVar10,uVar1,uVar11,uVar12);
  local_4 = operator_new(0x56);
  pvStack_c._0_1_ = 3;
  if (local_4 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    piVar7 = *(int **)((int)param_1 + 0x22);
    iVar2 = *DAT_00d12b40 + 0x341;
    iVar9 = DAT_00bd1bac;
    piStack_18 = piVar7;
    uVar1 = FUN_004136a0(s_eurostilecond18bold_bmp_0085b444);
    uVar10 = 0x20;
    piVar4 = local_24;
    uVar5 = 0x73;
    iVar6 = (**(code **)(*piVar7 + 0x28))(piVar4,0x73,0x20,uVar1,iVar9,iVar2);
    piVar7 = (int *)(**(code **)(*piVar7 + 0x28))(&stack0xffffffd0,*(int *)(iVar6 + 4) + 0x26);
    uVar1 = FUN_00437e60(*piVar7 + 0x1e,piVar4,uVar5,uVar10,uVar1,iVar9,iVar2);
  }
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  *(undefined4 *)((int)param_1 + 0x26) = uVar1;
  FUN_00438950(&DAT_0083bf04);
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
  ExceptionList = local_14;
  return param_1;
}


