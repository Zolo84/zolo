// FUN_004a3020 @ 4a3020 size=156

bool __thiscall FUN_004a3020(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  if ((*(int *)(param_2 + 0x254) == 8) || (iVar1 = *(int *)(param_2 + 0x3d8), iVar1 == 0)) {
    cVar2 = FUN_004ed1c0(param_1);
    return cVar2 == '\0';
  }
  if ((iVar1 != param_1) && (*(int *)(param_2 + 0x3d4) != 0)) {
    cVar2 = FUN_005861a0(*(undefined4 *)(iVar1 + 6));
    if (cVar2 != '\0') {
      return true;
    }
    if (*(int *)(*(int *)(*(int *)(param_2 + 0x3d8) + 0x12da) + 0x3b30) == *(int *)(param_1 + 6)) {
      return true;
    }
    iVar1 = *(int *)(*(int *)(param_2 + 0x3d8) + 0x3350);
    if ((iVar1 != 0) && (iVar1 == *(int *)(param_1 + 0x3350))) {
      return true;
    }
    return false;
  }
  return true;
}


