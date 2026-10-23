// FUN_005187b0 @ 5187b0 size=549

bool __thiscall FUN_005187b0(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6));
  if (cVar1 == '\0') {
    return false;
  }
  uVar2 = (**(code **)(*param_1 + 0xbc))();
  switch(uVar2) {
  case 0x15:
    iVar3 = (**(code **)(*param_2 + 0xbc))();
    if (iVar3 == 0x1e) {
      return true;
    }
    iVar3 = (**(code **)(*param_2 + 0xbc))();
    if (iVar3 == 0x1a) {
      return true;
    }
    iVar3 = (**(code **)(*param_2 + 0xbc))();
    if (iVar3 == 0x1b) {
      return true;
    }
    iVar3 = (**(code **)(*param_2 + 0xbc))();
    if (iVar3 != 0x19) {
      iVar3 = (**(code **)(*param_2 + 0xbc))();
      if (iVar3 != 0x1c) {
        iVar3 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
        iVar4 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
        return iVar4 <= iVar3;
      }
      goto switchD_005187f3_caseD_8c;
    }
    iVar3 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
    iVar3 = iVar3 << 1;
    break;
  default:
    goto switchD_005187f3_caseD_16;
  case 0x19:
    iVar3 = (**(code **)(*param_2 + 0xbc))();
    if (iVar3 == 0x1e) {
      return true;
    }
    iVar3 = (**(code **)(*param_2 + 0xbc))();
    if (iVar3 == 0x1c) {
      return true;
    }
    iVar3 = (**(code **)(*param_2 + 0xbc))();
    if (iVar3 == 0x1a) {
      return true;
    }
    iVar3 = (**(code **)(*param_2 + 0xbc))();
    if (iVar3 == 0x1b) {
      return true;
    }
    iVar3 = (**(code **)(*param_2 + 0xbc))();
    if (iVar3 != 0x19) {
      iVar3 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
      iVar4 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
      return iVar3 * 2 <= iVar4;
    }
    iVar3 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
    break;
  case 0x1c:
    iVar3 = (**(code **)(*param_2 + 0xbc))();
    if (iVar3 == 0x1e) {
      return true;
    }
    iVar3 = (**(code **)(*param_2 + 0xbc))();
    if (iVar3 == 0x1a) {
      return true;
    }
    iVar3 = (**(code **)(*param_2 + 0xbc))();
    if (iVar3 == 0x1b) {
      return true;
    }
    iVar3 = (**(code **)(*param_2 + 0xbc))();
    if (iVar3 != 0x1c) {
      iVar3 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
      iVar4 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
      return iVar3 * 4 <= iVar4;
    }
    iVar3 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
    iVar4 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
    goto LAB_00518975;
  case 0x8c:
switchD_005187f3_caseD_8c:
    iVar3 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
    iVar4 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
    if (iVar4 <= iVar3) {
      return true;
    }
    goto switchD_005187f3_caseD_16;
  }
  iVar4 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
LAB_00518975:
  if (iVar4 <= iVar3) {
    return true;
  }
switchD_005187f3_caseD_16:
  return false;
}


