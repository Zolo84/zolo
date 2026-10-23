// FUN_00605cd0 @ 605cd0 size=653

undefined4 * __thiscall
FUN_00605cd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  void *unaff_EBX;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cfc4b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005f83d0(param_2,param_3,param_4);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  FUN_00442b90();
  *param_1 = &PTR_FUN_007eee34;
  param_1[2] = &PTR_LAB_007eee30;
  piVar4 = (int *)((int)param_1 + 0x162);
  iVar5 = 6;
  do {
    pvVar1 = operator_new(0xb8);
    local_4._0_1_ = 1;
    if (pvVar1 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004403f0(0xc2c80000,0x42c80000,0,0x3dcccccd,
                           s_gfx_interface_button_area_btn_mi_0085d8b8,
                           s_gfx_interface_button_area_btn_pl_0085d8e8,
                           s_gfx_interface_button_area_btn_sl_00859a6c,
                           s_gfx_interface_sprite_slider_bmp_00859a98);
    }
    *piVar4 = iVar2;
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + -1;
    local_4._0_1_ = 0;
    *(undefined1 *)(iVar2 + 0x83) = 1;
  } while (iVar5 != 0);
  FUN_00606020();
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar3 = FUN_0044b160(*(undefined4 *)(DAT_00d0ca90 + 6));
    piVar4 = (int *)FUN_00414c80(uVar3);
  }
  *(int **)((int)param_1 + 0x15a) = piVar4;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar4 + 0x34))(4);
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar3 = FUN_0044b160(param_2);
    piVar4 = (int *)FUN_00414c80(uVar3);
  }
  *(int **)((int)param_1 + 0x15e) = piVar4;
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  (**(code **)(*piVar4 + 0x34))(4);
  pvVar1 = operator_new(0x7e);
  pvStack_c._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_large_oil_bmp_0085e0d0);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x17a) = uVar3;
  pvVar1 = operator_new(0x7e);
  pvStack_c._0_1_ = 5;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_large_energy__0085e088);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x17e) = uVar3;
  pvVar1 = operator_new(0x7e);
  pvStack_c._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_large_metal_b_0085e0ac);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x182) = uVar3;
  pvVar1 = operator_new(0x7e);
  pvStack_c._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_large_rubber__0085e064);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x186) = uVar3;
  pvVar1 = operator_new(0x7e);
  pvStack_c._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_large_money_b_0085e018);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x18a) = uVar3;
  pvVar1 = operator_new(0x7e);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,9);
  if (pvVar1 == (void *)0x0) {
    *(undefined4 *)((int)param_1 + 0x18e) = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_large_supplie_0085e03c);
    *(undefined4 *)((int)param_1 + 0x18e) = uVar3;
  }
  ExceptionList = unaff_EBX;
  return param_1;
}


