// FUN_0049f7c0 @ 49f7c0 size=267

bool __thiscall FUN_0049f7c0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    return false;
  }
  iVar2 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
  if (iVar2 == 0) {
    return false;
  }
  if (*(char *)((int)param_2 + 0x17b) != '\0') {
    return false;
  }
  iVar2 = (**(code **)(param_2[0x47] + 4))();
  if (iVar2 != 0) {
    return false;
  }
  iVar2 = FUN_00522770();
  if (iVar2 != param_1) {
    return false;
  }
  if (*(int *)((int)param_2 + 0x176) != 0) {
    return false;
  }
  cVar1 = (**(code **)(*param_2 + 0x2c))();
  if (cVar1 != '\0') {
    return false;
  }
  iVar2 = FUN_0051b230();
  if (*(int *)(iVar2 + 0x3d8) != 0) {
    cVar1 = FUN_0044a690(*(undefined4 *)(param_1 + 6));
    if (cVar1 == '\0') {
      cVar1 = FUN_005861a0(*(undefined4 *)(*(int *)(iVar2 + 0x3d8) + 6));
      if (cVar1 == '\0') {
        return false;
      }
    }
  }
  cVar1 = (**(code **)(*param_2 + 0x30))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_2 + 0x18))();
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x294) + 4))();
    if (0 < iVar2) {
      return false;
    }
  }
  iVar2 = FUN_004e9f80(param_1);
  return 0 < iVar2;
}


