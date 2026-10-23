// FUN_0063ecc0 @ 63ecc0 size=1547

undefined4 * __thiscall FUN_0063ecc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d2103;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0061e1d0(param_2);
  *param_1 = &PTR_FUN_007efd00;
  param_1[2] = &PTR_LAB_007efcfc;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007efcf8;
  local_4 = 0;
  if (DAT_00dc1780 == '\0') {
    pvVar2 = operator_new(0x7e);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (pvVar2 == (void *)0x0) goto LAB_0063ed56;
    uVar3 = FUN_00414c80(s_gfx_interface_bg_technology_bmp_00861990);
  }
  else {
    pvVar2 = operator_new(0x7e);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (pvVar2 == (void *)0x0) {
LAB_0063ed56:
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_bg_technology_big__008619b0);
    }
  }
  local_4 = local_4 & 0xffffff00;
  param_1[0x33] = uVar3;
  uVar3 = FUN_00413d60(s_bg_technology_bmp_0086197c);
  FUN_00415f20(uVar3);
  if (DAT_00877554 < 6) {
    puVar4 = operator_new(0x72);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (puVar4 == (undefined4 *)0x0) goto LAB_0063ee15;
    FUN_00434930(0x100,800,0,0);
    *puVar4 = &PTR_FUN_007efcb4;
    *(undefined ***)((int)puVar4 + 0x12) = &PTR_LAB_007efca0;
    *(undefined ***)((int)puVar4 + 0x1a) = &PTR_LAB_007efc9c;
    *(undefined ***)((int)puVar4 + 0x1e) = &PTR_LAB_007efc98;
  }
  else {
    puVar4 = operator_new(0x72);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (puVar4 == (undefined4 *)0x0) {
LAB_0063ee15:
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_00434930(0x10e,0x2ae,0,0);
      *puVar4 = &PTR_FUN_007efcb4;
      *(undefined ***)((int)puVar4 + 0x12) = &PTR_LAB_007efca0;
      *(undefined ***)((int)puVar4 + 0x1a) = &PTR_LAB_007efc9c;
      *(undefined ***)((int)puVar4 + 0x1e) = &PTR_LAB_007efc98;
    }
  }
  param_1[0x3d] = puVar4;
  local_4 = local_4 & 0xffffff00;
  *(undefined1 *)((int)puVar4 + 0x5e) = 0;
  if (DAT_00dc1781 == '\0') {
    param_2 = param_1 + 0x34;
    piVar7 = &DAT_00d4c3b8;
    do {
      uVar3 = (**(code **)(*piVar7 + 0xc))();
      pvVar2 = operator_new(0x1aa);
      local_4._0_1_ = 9;
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        iVar6 = (-(uint)(DAT_00dc1780 != '\0') & 0x18) + 0x78;
        uVar5 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
        uVar3 = FUN_0043acc0(uVar3,uVar5,iVar6);
      }
      piVar7 = piVar7 + 0x15;
      local_4 = (uint)local_4._1_3_ << 8;
      *param_2 = uVar3;
      param_2 = param_2 + 1;
    } while ((int)piVar7 < 0xd4c6ac);
    pvVar2 = operator_new(0x1aa);
    local_4._0_1_ = 10;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      iVar6 = (-(uint)(DAT_00dc1780 != '\0') & 0x18) + 0x78;
      uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
      uVar5 = FUN_0042b6c9(s_TECHOVERVIEW_0086196c);
      uVar3 = FUN_0043acc0(uVar5,uVar3,iVar6);
    }
    param_1[0x30] = uVar3;
    *(undefined4 *)((int)param_1 + 0x11a) = 0;
    *(undefined4 *)((int)param_1 + 0x122) = 0;
  }
  else {
    piVar7 = &DAT_00d4c3b8;
    iVar6 = (-(uint)(DAT_00dc1780 != '\0') & 0x14) + 100;
    local_14 = param_1 + 0x34;
    do {
      uVar3 = (**(code **)(*piVar7 + 0xc))();
      pvVar2 = operator_new(0x1aa);
      local_4._0_1_ = 5;
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        iVar8 = iVar6;
        uVar5 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
        uVar3 = FUN_0043acc0(uVar3,uVar5,iVar8);
      }
      piVar7 = piVar7 + 0x15;
      local_4 = (uint)local_4._1_3_ << 8;
      *local_14 = uVar3;
      local_14 = local_14 + 1;
    } while ((int)piVar7 < 0xd4c6ac);
    pvVar2 = operator_new(0x1aa);
    local_4._0_1_ = 6;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      iVar8 = iVar6;
      uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
      uVar5 = FUN_0042b6c9(s_TECHOVERVIEW_0086196c);
      uVar3 = FUN_0043acc0(uVar5,uVar3,iVar8);
    }
    local_4._0_1_ = 0;
    param_1[0x30] = uVar3;
    pvVar2 = operator_new(0x1aa);
    local_4._0_1_ = 7;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      iVar8 = iVar6;
      uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
      uVar5 = FUN_0042b6c9(s_TECHOVERVIEWUNITS_BTN_00861954);
      uVar3 = FUN_0043acc0(uVar5,uVar3,iVar8);
    }
    local_4._0_1_ = 0;
    *(undefined4 *)((int)param_1 + 0x11a) = uVar3;
    pvVar2 = operator_new(0x1aa);
    local_4._0_1_ = 8;
    if (pvVar2 == (void *)0x0) {
      *(undefined4 *)((int)param_1 + 0x122) = 0;
    }
    else {
      uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
      uVar5 = FUN_0042b6c9(s_TECHOVERVIEWBRIGADES_BTN_00861938);
      uVar3 = FUN_0043acc0(uVar5,uVar3,iVar6);
      *(undefined4 *)((int)param_1 + 0x122) = uVar3;
    }
  }
  local_4._0_1_ = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 0xb;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_bg_teamselect_bmp_00861918);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x102) = uVar3;
  pvVar2 = operator_new(0x72);
  local_4._0_1_ = 0xc;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00434930(0xe8,0x21c,0,0);
  }
  *(undefined4 *)((int)param_1 + 0x106) = uVar3;
  *(undefined4 *)((int)param_1 + 0x10a) = 0;
  *(undefined4 *)((int)param_1 + 0x10e) = 0;
  *(undefined4 *)((int)param_1 + 0x112) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)((int)param_1 + 0x11e) = 0;
  *(undefined4 *)((int)param_1 + 0x126) = 0;
  local_4._0_1_ = 0;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 0;
  if (DAT_00dc1780 == '\0') {
    local_4._0_1_ = uVar1;
    pvVar2 = operator_new(0x7e);
    local_4 = CONCAT31(local_4._1_3_,0xe);
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_00414c80(s_gfx_interface_bg_technology_over_008618c4);
      goto LAB_0063f1aa;
    }
  }
  else {
    pvVar2 = operator_new(0x7e);
    local_4 = CONCAT31(local_4._1_3_,0xd);
    if (pvVar2 != (void *)0x0) {
      uVar3 = FUN_00414c80(s_gfx_interface_bg_technology_over_008618ec);
      goto LAB_0063f1aa;
    }
  }
  uVar3 = 0;
LAB_0063f1aa:
  local_4 = local_4 & 0xffffff00;
  param_1[0x32] = uVar3;
  pvVar2 = operator_new(0x1aa);
  local_4._0_1_ = 0xf;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar9 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar5 = FUN_0042b6c9(s_ABONDON_TECH_008618b4);
    uVar3 = FUN_0043acc0(uVar5,uVar3,uVar9);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x116) = uVar3;
  pvVar2 = operator_new(0x1aa);
  local_4._0_1_ = 0x10;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar9 = 0x78;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar5 = FUN_0042b6c9(s_STARTPROJECT_008618a4);
    uVar3 = FUN_0043acc0(uVar5,uVar3,uVar9);
  }
  local_4._0_1_ = 0;
  param_1[0x3e] = uVar3;
  pvVar2 = operator_new(0x1aa);
  local_4 = CONCAT31(local_4._1_3_,0x11);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar9 = 0x78;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar5 = FUN_0042b6c9(s_CANCELPROJECT_00861894);
    uVar3 = FUN_0043acc0(uVar5,uVar3,uVar9);
  }
  param_1[0x3f] = uVar3;
  param_1[0x2f] = 0xffffffff;
  ExceptionList = pvStack_c;
  return param_1;
}


