// FUN_0064a850 @ 64a850 size=79

void __thiscall FUN_0064a850(int param_1,char param_2)

{
  int iVar1;
  
  if (param_2 != '\0') {
    *(char *)(param_1 + 0x13dc0) = param_2;
    *(int *)(param_1 + 0x13c98) = *(int *)(param_1 + 0x13c98) + 1;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x13c98);
  if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0x13dc0) = 0;
    *(undefined4 *)(param_1 + 0x13c98) = 0;
    return;
  }
  if (1 < iVar1) {
    *(int *)(param_1 + 0x13c98) = iVar1 + -1;
    return;
  }
  *(undefined1 *)(param_1 + 0x13dc0) = 0;
  return;
}


