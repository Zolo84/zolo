// FUN_0044a690 @ 44a690 size=131

bool __thiscall FUN_0044a690(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == *(int *)(param_1 + 6)) {
    return true;
  }
  iVar1 = *(int *)(param_1 + 0x12da);
  if (*(char *)(iVar1 + param_2 * 0x2c + 0x2c) != '\0') {
    return false;
  }
  if (*(char *)(iVar1 + 0x32 + param_2 * 0x2c) != '\0') {
    return true;
  }
  if (*(int *)(iVar1 + 0x3b30) == param_2) {
    return true;
  }
  if (((&DAT_0089cad8)[param_2] != 0) &&
     (*(int *)(*(int *)((&DAT_0089cad8)[param_2] + 0x12da) + 0x3b30) == *(int *)(param_1 + 6))) {
    return true;
  }
  return *(char *)(iVar1 + param_2 * 0x2c + 0x31) != '\0';
}


