// FUN_00643470 @ 643470 size=510

undefined4 __thiscall FUN_00643470(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d2404;
  local_c = ExceptionList;
  ExceptionList = &local_c;
LAB_00643492:
  while (iVar1 = FUN_00535490(), iVar1 != 1) {
    piVar2 = (int *)FUN_00534391();
    if (*piVar2 == 0x531) {
      ExceptionList = local_c;
      return 0;
    }
  }
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0x1c5:
    if (*(int *)(param_2 + 0x40c) == 3) {
      piVar2 = operator_new(0x454);
      local_4 = 0;
      if (piVar2 == (int *)0x0) {
LAB_00643602:
        piVar2 = (int *)0x0;
      }
      else {
        FUN_006436e0(param_1);
        local_4 = CONCAT31(local_4._1_3_,1);
        *piVar2 = (int)&PTR_FUN_007f00a4;
        piVar2[2] = (int)&PTR_LAB_007f00a0;
        *(undefined ***)((int)piVar2 + 0x7e) = &PTR_LAB_007f009c;
        FUN_00415b90(1);
      }
      break;
    }
LAB_0064361f:
    FUN_005349b0(s_No_Left_Curly_00857a20);
    goto LAB_00643492;
  case 0x1c6:
    if (*(int *)(param_2 + 0x40c) != 3) goto LAB_0064361f;
    piVar2 = operator_new(0x454);
    local_4 = 3;
    if (piVar2 == (int *)0x0) goto LAB_00643602;
    FUN_006436e0(param_1);
    *piVar2 = (int)&PTR_FUN_007effb4;
    piVar2[2] = (int)&PTR_LAB_007effb0;
    *(undefined ***)((int)piVar2 + 0x7e) = &PTR_LAB_007effac;
    break;
  case 0x1c7:
    if (*(int *)(param_2 + 0x40c) != 3) goto LAB_0064361f;
    piVar2 = operator_new(0x458);
    local_4 = 4;
    if (piVar2 == (int *)0x0) goto LAB_00643602;
    FUN_006436e0(param_1);
    *piVar2 = (int)&PTR_FUN_007eff3c;
    piVar2[2] = (int)&PTR_LAB_007eff38;
    *(undefined ***)((int)piVar2 + 0x7e) = &PTR_LAB_007eff34;
    break;
  default:
    FUN_005349b0(s_Unexpected_field_00866028);
    ExceptionList = local_c;
    return 0xfffffffe;
  case 0x203:
    if (*(int *)(param_2 + 0x40c) != 3) goto LAB_0064361f;
    piVar2 = operator_new(0x454);
    local_4 = 2;
    if (piVar2 == (int *)0x0) goto LAB_00643602;
    FUN_006436e0(param_1);
    *piVar2 = (int)&PTR_FUN_007f002c;
    piVar2[2] = (int)&PTR_LAB_007f0028;
    *(undefined ***)((int)piVar2 + 0x7e) = &PTR_LAB_007f0024;
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 8))(param_2);
  *(int **)(param_1 + *(int *)((int)piVar2 + 0x92) * 4) = piVar2;
  goto LAB_00643492;
}


