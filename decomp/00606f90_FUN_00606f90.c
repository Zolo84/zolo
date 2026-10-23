// FUN_00606f90 @ 606f90 size=515

undefined4 * __thiscall
FUN_00606f90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined **local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cfd49;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005f83d0(param_2,0,param_4);
  local_4 = 0;
  *param_1 = &PTR_FUN_007eeef8;
  param_1[2] = &PTR_LAB_007eeef4;
  pvVar4 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00434930(0xe0,0xaa,0,0);
  }
  *(undefined4 *)((int)param_1 + 0x86) = uVar5;
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_FUN_007e5258;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004a3650(&local_20);
  param_4 = local_1c;
  while (param_4 != (undefined4 *)0x0) {
    puVar6 = operator_new(0x36);
    local_4._0_1_ = 3;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)param_4[2];
      uVar5 = *param_4;
      FUN_00433f00();
      local_4._0_1_ = 4;
      *(undefined4 *)((int)puVar6 + 0x32) = uVar5;
      *puVar6 = &PTR_FUN_007eeea8;
      puVar6[2] = &PTR_LAB_007eeea4;
      pvVar4 = operator_new(0x7e);
      local_4._0_1_ = 5;
      if (pvVar4 == (void *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        uVar5 = FUN_0044b1c0(uVar5);
        piVar7 = (int *)FUN_00414c80(uVar5);
      }
      *(int **)((int)puVar6 + 0x2e) = piVar7;
      local_4._0_1_ = 4;
      (**(code **)(*piVar7 + 0x34))(0x19);
      uVar5 = FUN_00413d60(s_flag_palette_bmp_0083c738);
      FUN_00415f20(uVar5);
      iVar1 = *(int *)((int)puVar6 + 0x2e);
      *(undefined4 *)(iVar1 + 0x22) = 0;
      *(undefined4 *)(iVar1 + 0x26) = 5;
      *(undefined1 *)(iVar1 + 0x67) = 0;
      param_4 = puVar8;
    }
    iVar1 = *(int *)((int)param_1 + 0x86);
    local_4 = CONCAT31(local_4._1_3_,2);
    iVar2 = *(int *)(iVar1 + 8);
    puVar8 = operator_new(0xe);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = puVar6;
      puVar8[1] = iVar2;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0;
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    *(undefined4 **)(iVar1 + 8) = puVar8;
    *(int *)(iVar1 + 0xc) = iVar3 + 1;
    if (iVar3 == 0) {
      *(undefined4 **)(iVar1 + 4) = puVar8;
    }
    else {
      *(undefined4 **)(iVar2 + 8) = puVar8;
    }
  }
  *(undefined4 *)((int)param_1 + 0x7e) = 0;
  local_20 = &PTR_LAB_007e3ff0;
  puVar6 = local_1c;
  while (puVar6 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)puVar6[2];
    FUN_00796cd8(puVar6);
    puVar6 = puVar8;
  }
  ExceptionList = pvStack_c;
  return param_1;
}


