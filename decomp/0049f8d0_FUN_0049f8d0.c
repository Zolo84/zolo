// FUN_0049f8d0 @ 49f8d0 size=117

bool __thiscall FUN_0049f8d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0049f7c0(param_2);
  if (cVar1 == '\0') {
    return false;
  }
  iVar2 = FUN_004e9370(param_3);
  if (*(int *)(iVar2 + 0x3d8) == 0) {
    return false;
  }
  cVar1 = FUN_0044a690(*(undefined4 *)(param_1 + 6));
  if (cVar1 == '\0') {
    cVar1 = FUN_005861a0(*(undefined4 *)(*(int *)(iVar2 + 0x3d8) + 6));
    if (cVar1 == '\0') {
      return false;
    }
  }
  iVar2 = FUN_004e9f80(param_1);
  return 0 < iVar2;
}


