// FUN_0052b370 @ 52b370 size=228

undefined4 __thiscall FUN_0052b370(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  if (DAT_00d610dd != '\0') {
    return 1;
  }
  if (((*(char *)(*(int *)(DAT_00d0ca90 + 6) + 0x34ac + param_2[0x92]) == '\0') &&
      (param_2[0x92] != DAT_00d0ca90)) && (iVar2 = FUN_00522770(), iVar2 != DAT_00d0ca90)) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 4))();
  if (iVar2 < 1) {
    return 1;
  }
  if ((DAT_00bd13ee == '\0') && (cVar1 = FUN_00652050(), cVar1 == '\0')) {
    return 1;
  }
  cVar1 = (**(code **)(*param_2 + 0x2c))();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(**(int **)param_1[1] + 0x2c))(), cVar1 != '\0')) {
    return 1;
  }
  cVar1 = (**(code **)(*param_2 + 0x30))();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(**(int **)param_1[1] + 0x30))(), cVar1 != '\0')) {
    return 1;
  }
  cVar1 = (**(code **)(*param_2 + 0x28))();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(**(int **)param_1[1] + 0x28))(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}


