// FUN_00437040 @ 437040 size=942

undefined4 * __thiscall FUN_00437040(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba953;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  *param_1 = &PTR_FUN_007e42b8;
  param_1[2] = &PTR_LAB_007e42b4;
  *(undefined4 *)((int)param_1 + 0x3a) = param_4;
  local_4 = 1;
  uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  param_1[6] = uVar3;
  if (*(int *)((int)param_1 + 0x3a) == 1) {
    pvVar4 = operator_new(0x7e);
    local_4._0_1_ = 2;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      iVar5 = *(int *)(param_1[6] + 0x10);
      uVar2 = FUN_00584270(0xc0,0xa8,0);
      uVar3 = FUN_0043a650(param_2,iVar5 + 4,0,uVar2,uVar3);
    }
    local_4._0_1_ = 1;
    param_1[7] = uVar3;
    pvVar4 = operator_new(0x7e);
    local_4._0_1_ = 3;
    if (pvVar4 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar3 = 0;
      uVar2 = FUN_00584270(0xc0,0xa8,0);
      iVar5 = FUN_0043a650(param_2,param_3,0,uVar2,uVar3);
    }
    param_1[8] = iVar5;
    iVar5 = *(int *)(iVar5 + 0x62);
    local_4._0_1_ = 1;
    uVar2 = FUN_00584270(0xc0,0xa8,0);
    *(undefined2 *)(iVar5 + 0x25a) = uVar2;
    pvVar4 = operator_new(0xaa);
    local_4._0_1_ = 4;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00433570(s_gfx_interface_btn_dropdown_dark__0083bac0,0,0xffffffff);
    }
    local_4._0_1_ = 1;
    param_1[9] = uVar3;
    pvVar4 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (pvVar4 != (void *)0x0) {
      uVar3 = FUN_00433570(s_gfx_interface_btn_dropdown_dark__0083bac0,0,0xffffffff);
      goto LAB_004372da;
    }
  }
  else {
    pvVar4 = operator_new(0x7e);
    local_4._0_1_ = 6;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0043a650(param_2,*(int *)(param_1[6] + 0x10) + 4,0,0xffffffff,0xffffffff);
    }
    local_4._0_1_ = 1;
    param_1[7] = uVar3;
    pvVar4 = operator_new(0x7e);
    local_4._0_1_ = 7;
    if (pvVar4 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0043a650(param_2,param_3,0,0xffffffff,0xffffffff);
    }
    param_1[8] = iVar5;
    iVar5 = *(int *)(iVar5 + 0x62);
    local_4._0_1_ = 1;
    uVar2 = FUN_00584270(0x74,0x65,0x5e);
    *(undefined2 *)(iVar5 + 0x25a) = uVar2;
    pvVar4 = operator_new(0xaa);
    local_4._0_1_ = 8;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00433570(s_gfx_interface_btn_dropdown_bmp_0083baa0,0,0xffffffff);
    }
    local_4._0_1_ = 1;
    param_1[9] = uVar3;
    pvVar4 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,9);
    if (pvVar4 != (void *)0x0) {
      uVar3 = FUN_00433570(s_gfx_interface_btn_dropdown_bmp_0083baa0,0,0xffffffff);
      goto LAB_004372da;
    }
  }
  uVar3 = 0;
LAB_004372da:
  local_4._0_1_ = 1;
  param_1[10] = uVar3;
  iVar5 = FUN_00415be0();
  iVar6 = FUN_00415bd0();
  iVar7 = FUN_00415be0();
  FUN_004012e0(0,iVar7 + -1,iVar6 + -1,iVar5 + -1);
  iVar5 = *(int *)(param_1[6] + 0x10);
  pvVar4 = operator_new(0x72);
  local_4._0_1_ = 10;
  if (pvVar4 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    uVar8 = 0;
    uVar3 = 0;
    iVar6 = FUN_00415be0(0,0);
    iVar5 = FUN_00434930(param_2 + -0x18,((param_3 / iVar5) * iVar5 - iVar6) + -10,uVar3,uVar8);
  }
  param_1[3] = iVar5;
  *(undefined2 *)(iVar5 + 0x5a) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)(param_1[3] + 0x5d) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[5] = 0;
  uVar3 = FUN_0042b6c9(s_DROPDOWN_NO_SELECTION_0083ba88);
  *(undefined4 *)((int)param_1 + 0x36) = uVar3;
  uVar3 = DAT_00bd1bac;
  param_1[4] = DAT_00bd1bac;
  FUN_00415d30(uVar3);
  FUN_00415d30(uVar3);
  FUN_00415d30(uVar3);
  FUN_00415d30(uVar3);
  FUN_00434f70(uVar3);
  for (piVar1 = *(int **)(param_1[3] + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    *(undefined4 *)(*piVar1 + 0x16) = uVar3;
  }
  ExceptionList = local_c;
  return param_1;
}


