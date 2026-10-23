// FUN_0041e830 @ 41e830 size=48

void FUN_0041e830(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  do {
    if (*(char *)(param_1 + 0x58 + iVar1) != '\0') {
      *(undefined1 *)(iVar1 + 0x158 + param_1) = *(undefined1 *)(param_1 + 0x54);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  return;
}


