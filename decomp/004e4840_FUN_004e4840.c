// FUN_004e4840 @ 4e4840 size=648

int __thiscall FUN_004e4840(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c007d;
  local_c = ExceptionList;
  switch(param_3) {
  case 1:
    ExceptionList = &local_c;
    pvVar4 = operator_new(0xb4);
    local_4 = 4;
    if (pvVar4 != (void *)0x0) {
      iVar5 = FUN_004c2270(param_1,param_4);
      goto LAB_004e49c9;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    pvVar4 = operator_new(0xb8);
    local_4 = 5;
    if (pvVar4 != (void *)0x0) {
      iVar5 = FUN_004c5530(param_1,param_4);
      goto LAB_004e49c9;
    }
    break;
  case 3:
    ExceptionList = &local_c;
    pvVar4 = operator_new(0xb4);
    local_4 = 6;
    if (pvVar4 != (void *)0x0) {
      iVar5 = FUN_004af850(param_1,param_4);
      goto LAB_004e49c9;
    }
    break;
  case 4:
  case 5:
    ExceptionList = &local_c;
    pvVar4 = operator_new(0xf0);
    local_4 = 3;
    if (pvVar4 != (void *)0x0) {
      iVar5 = FUN_004b42d0(param_1,param_4,param_3);
      goto LAB_004e49c9;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    pvVar4 = operator_new(0xf0);
    local_4 = 2;
    if (pvVar4 != (void *)0x0) {
      iVar5 = FUN_004b53c0(6,param_1,param_4);
      goto LAB_004e49c9;
    }
    break;
  case 7:
    ExceptionList = &local_c;
    pvVar4 = operator_new(0xf0);
    local_4 = 0;
    if (pvVar4 != (void *)0x0) {
      iVar5 = FUN_004b42d0(param_1,param_4,param_3);
      goto LAB_004e49c9;
    }
    break;
  case 8:
    ExceptionList = &local_c;
    pvVar4 = operator_new(0xf0);
    local_4 = 1;
    if (pvVar4 != (void *)0x0) {
      iVar5 = FUN_004b53c0(8,param_1,param_4);
      goto LAB_004e49c9;
    }
    break;
  default:
    ExceptionList = &local_c;
    FUN_00402500(0,s_Hey___what_kind_of_combat_is_thi_008481c4);
    ExceptionList = local_c;
    return 0;
  }
  iVar5 = 0;
LAB_004e49c9:
  local_4 = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x94) = *param_2;
  *(undefined2 *)(iVar5 + 0x98) = *(undefined2 *)(param_2 + 1);
  if (*(int *)(param_1 + 0x1aa) == 0) {
    puVar6 = operator_new(0x14);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined1 *)(puVar6 + 4) = 0;
      *(undefined1 *)((int)puVar6 + 0x12) = 0;
      *puVar6 = &PTR_FUN_007e80e4;
    }
    *(undefined4 **)(param_1 + 0x1aa) = puVar6;
    *(undefined1 *)((int)puVar6 + 0x12) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x1aa);
  iVar2 = *(int *)(iVar1 + 4);
  piVar7 = operator_new(0xe);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    *piVar7 = iVar5;
    piVar7[1] = 0;
    piVar7[2] = iVar2;
    *(undefined1 *)(piVar7 + 3) = 0;
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  *(int **)(iVar1 + 4) = piVar7;
  *(int *)(iVar1 + 0xc) = iVar3 + 1;
  if (iVar3 == 0) {
    *(int **)(iVar1 + 8) = piVar7;
    ExceptionList = local_c;
    return iVar5;
  }
  *(int **)(iVar2 + 4) = piVar7;
  ExceptionList = local_c;
  return iVar5;
}


