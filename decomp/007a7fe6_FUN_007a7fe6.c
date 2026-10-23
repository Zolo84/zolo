// FUN_007a7fe6 @ 7a7fe6 size=46

int FUN_007a7fe6(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007a8014(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)(param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_007b178a(*(undefined4 *)(param_1 + 0x10));
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


