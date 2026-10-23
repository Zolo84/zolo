// FUN_005e98d0 @ 5e98d0 size=826

undefined4 * __thiscall FUN_005e98d0(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ce681;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00433f00();
  local_4 = 0;
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  param_1[0xc] = 0;
  FUN_00519460();
  *param_1 = &PTR_FUN_007ed428;
  param_1[2] = &PTR_LAB_007ed424;
  local_4._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)(param_2 + 0xc);
  uVar1 = *(undefined2 *)(param_2 + 0x10);
  *(undefined4 *)((int)param_1 + 0xb6) = 0;
  *(undefined2 *)((int)param_1 + 0x32) = uVar1;
  iVar5 = *(int *)(param_2 + 0x74);
  if (((iVar5 == 4) || (iVar5 == 5)) || (iVar5 == 6)) {
    pvVar2 = operator_new(0xaa);
    local_4._0_1_ = 2;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00433570(s_gfx_interface_plate_battle_bombi_0085cd00,0,0xffffffff);
    }
    local_4._0_1_ = 1;
    *(undefined4 *)((int)param_1 + 0xb2) = uVar3;
    pvVar2 = operator_new(0xaa);
    local_4._0_1_ = 3;
    if (pvVar2 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_00433570(s_gfx_interface_air_missions_bmp_0085cce0,0,0xffffffff);
    }
    *(int **)((int)param_1 + 0xb6) = piVar4;
    local_4._0_1_ = 1;
    (**(code **)(*piVar4 + 0x34))(0xc);
    (**(code **)(**(int **)((int)param_1 + 0xb6) + 0x38))(0);
    iVar5 = (**(code **)(**(int **)(param_2 + 0x80) + 0x18))();
    if (iVar5 != 0) {
      iVar5 = (**(code **)(**(int **)(param_2 + 0x80) + 0x18))();
      (**(code **)(**(int **)((int)param_1 + 0xb6) + 0x38))
                (*(int *)(**(int **)(iVar5 + 4) + 0x264) + -10);
    }
    goto LAB_005e9b60;
  }
  if ((iVar5 == 7) || (iVar5 == 8)) {
    pvVar2 = operator_new(0xaa);
    local_4._0_1_ = 4;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00433570(s_gfx_interface_plate_battle_bombi_0085cd00,0,0xffffffff);
    }
    local_4._0_1_ = 1;
    *(undefined4 *)((int)param_1 + 0xb2) = uVar3;
    pvVar2 = operator_new(0xaa);
    local_4._0_1_ = 5;
    if (pvVar2 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_00433570(s_gfx_interface_air_missions_bmp_0085cce0,0,0xffffffff);
    }
    *(int **)((int)param_1 + 0xb6) = piVar4;
    local_4._0_1_ = 1;
    (**(code **)(*piVar4 + 0x34))(0xc);
    if (*(int *)(param_2 + 0x74) == 7) {
      (**(code **)(**(int **)((int)param_1 + 0xb6) + 0x38))(7);
    }
    else if (*(int *)(param_2 + 0x74) == 8) {
      (**(code **)(**(int **)((int)param_1 + 0xb6) + 0x38))(4);
    }
    else {
      (**(code **)(**(int **)((int)param_1 + 0xb6) + 0x38))(0);
    }
    goto LAB_005e9b60;
  }
  if (iVar5 == 2) {
    pvVar2 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,6);
    if (pvVar2 == (void *)0x0) goto LAB_005e9b54;
    uVar3 = FUN_00433570(s_gfx_interface_plate_battle_naval_0085ccb8,0,0xffffffff);
  }
  else if (iVar5 == 1) {
    pvVar2 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,7);
    if (pvVar2 == (void *)0x0) {
LAB_005e9b54:
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00433570(s_gfx_interface_plate_battle_bmp_0085cc98,0,0xffffffff);
    }
  }
  else {
    pvVar2 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,8);
    if (pvVar2 == (void *)0x0) goto LAB_005e9b54;
    uVar3 = FUN_00433570(s_gfx_interface_plate_battle_air_b_0085cc74,0,0xffffffff);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0xb2) = uVar3;
LAB_005e9b60:
  pvVar2 = operator_new(0x18);
  local_4._0_1_ = 9;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005e9340(*(undefined4 *)(param_2 + 0x80));
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0xbe) = uVar3;
  pvVar2 = operator_new(0x18);
  local_4._0_1_ = 10;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005e9340(*(undefined4 *)(param_2 + 0x84));
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0xc2) = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_indicator_combatev_0085cc4c);
  }
  *(undefined4 *)((int)param_1 + 0xc6) = uVar3;
  ExceptionList = pvStack_c;
  return param_1;
}


