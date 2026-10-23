// FUN_00523c90 @ 523c90 size=727

undefined4 __thiscall FUN_00523c90(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((char)param_1[0x5f] != '\0') {
    return 0;
  }
  if ((char)param_2[0x5f] != '\0') {
    return 0;
  }
  if (param_2 == param_1) {
    return 0;
  }
  if (param_1[0x92] == param_2[0x92]) {
    return 0;
  }
  if (*(char *)((int)param_1 + 0x17d) != '\0') {
    return 0;
  }
  if (*(char *)((int)param_2 + 0x17d) != '\0') {
    return 0;
  }
  iVar3 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
  if (iVar3 == 0) {
    return 0;
  }
  if (((param_3 == 0) ||
      (((iVar3 = *(int *)(param_3 + 0x74), iVar3 != 4 && (iVar3 != 5)) && (iVar3 != 6)))) &&
     (*(char *)((int)param_1 + 0x17b) != '\0')) {
    return 0;
  }
  if (*(char *)((int)param_2 + 0x17b) != '\0') {
    return 0;
  }
  cVar2 = FUN_005215b0(param_2);
  if (cVar2 == '\0') {
    return 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x26);
  while (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if (*(char *)(iVar3 + 0x15c) != '\0') {
      return 0;
    }
  }
  piVar1 = *(int **)((int)param_2 + 0x26);
  while (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if (*(char *)(iVar3 + 0x15c) != '\0') {
      return 0;
    }
  }
  if (param_3 == 0) {
LAB_00523e04:
    cVar2 = (**(code **)(*param_1 + 0x28))();
    if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_2 + 0x28))(), cVar2 == '\0')) {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_2 + 0x2c))(), cVar2 == '\0')) {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_2 + 0x30))(), cVar2 == '\0')) {
      return 0;
    }
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if ((cVar2 == '\0') || (cVar2 = (**(code **)(*param_2 + 0x30))(), cVar2 != '\0')) {
      cVar2 = (**(code **)(*param_2 + 0x30))();
      if ((cVar2 == '\0') || (cVar2 = (**(code **)(*param_1 + 0x30))(), cVar2 != '\0'))
      goto LAB_00523e04;
      if ((*(int *)(param_3 + 0x74) == 7) || (*(int *)(param_3 + 0x74) == 8)) {
        iVar3 = param_1[0x92];
        (**(code **)(**(int **)(param_3 + 0x80) + 0xc))(iVar3);
        cVar2 = FUN_00527dc0(iVar3);
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
    iVar3 = *(int *)(param_3 + 0x74);
    if (((iVar3 != 4) && (iVar3 != 5)) && (iVar3 != 6)) {
      return 0;
    }
  }
  if (*(char *)(*(int *)(param_1[0x92] + 0x12da) + 0x32 + *(int *)(param_2[0x92] + 6) * 0x2c) !=
      '\0') {
    return 0;
  }
  if (param_3 != 0) {
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if (((cVar2 != '\0') || (cVar2 = (**(code **)(*param_2 + 0x2c))(), cVar2 != '\0')) &&
       (*(int *)(param_3 + 0x74) == 4)) {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x28))();
    if (((cVar2 != '\0') || (cVar2 = (**(code **)(*param_2 + 0x28))(), cVar2 != '\0')) &&
       (*(int *)(param_3 + 0x74) == 5)) {
      return 0;
    }
  }
  cVar2 = (**(code **)(*param_2 + 0x30))();
  if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_1 + 0x30))(), cVar2 != '\0')) {
    (**(code **)(*param_1 + 0x18))();
    cVar2 = FUN_004f0aa0();
    if (cVar2 != '\0') {
      return 0;
    }
    (**(code **)(*param_2 + 0x18))();
    cVar2 = FUN_004f0aa0();
    if (cVar2 != '\0') {
      return 0;
    }
  }
  cVar2 = (**(code **)(*param_2 + 0x2c))();
  if ((cVar2 != '\0') && (iVar3 = (**(code **)(param_1[0x47] + 4))(), iVar3 == 0)) {
    iVar3 = FUN_004e9370(param_2[3]);
    if ((*(int *)(iVar3 + 0x254) == 8) || (*(int *)(iVar3 + 0x254) == 9)) {
      iVar3 = *param_1;
      uVar4 = (**(code **)(*param_2 + 0x14))(0);
      cVar2 = (**(code **)(iVar3 + 0x68))(uVar4);
      if (cVar2 == '\0') {
        return 0;
      }
      iVar3 = *param_1;
      uVar4 = (**(code **)(*param_2 + 0x14))();
      cVar2 = (**(code **)(iVar3 + 0x6c))(uVar4);
      if (cVar2 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}


