// FUN_005e9340 @ 5e9340 size=399

undefined4 * __thiscall FUN_005e9340(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ce5ec;
  pvStack_c = ExceptionList;
  piVar1 = param_1 + 1;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007ed41c;
  *piVar1 = 0;
  FUN_0061e4e0(piVar1,*(undefined4 *)(param_2 + 0x46));
  *(undefined4 *)(*piVar1 + 0xe) = 1;
  pvVar3 = operator_new(0x7e);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_org_meter_bmp_00859ea8);
  }
  local_4 = 0xffffffff;
  param_1[2] = uVar4;
  pvVar3 = operator_new(0x7e);
  local_4 = 1;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_strength_meter_bmp_00859e84);
  }
  local_4 = 0xffffffff;
  param_1[3] = uVar4;
  pvVar3 = operator_new(0x7e);
  local_4 = 2;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_mor_meter_bmp_00859e68);
  }
  param_1[4] = uVar4;
  local_4 = 0xffffffff;
  (**(code **)(*(int *)param_1[2] + 0x34))(0x1a);
  (**(code **)(*(int *)param_1[3] + 0x34))(0x1a);
  pvVar3 = (void *)0x1a;
  (**(code **)(*(int *)param_1[4] + 0x34))();
  puStack_8 = operator_new(0x7e);
  if (puStack_8 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00415020();
  }
  param_1[5] = uVar4;
  iVar5 = FUN_004bf290();
  if (iVar5 == 0) {
    iVar5 = *(int *)(*(int *)(*(int *)(param_2 + 0x40) + 0x78) + 0x3d8);
  }
  iVar2 = *(int *)param_1[5];
  uVar4 = FUN_0044b1c0(*(undefined4 *)(iVar5 + 6));
  (**(code **)(iVar2 + 0x2c))(uVar4);
  (**(code **)(*(int *)param_1[5] + 0x34))(0x19);
  (**(code **)(*(int *)param_1[5] + 0x38))(0);
  uVar4 = FUN_00413d60(s_flag_palette_bmp_0083c738);
  FUN_00415f20(uVar4);
  ExceptionList = pvVar3;
  return param_1;
}


