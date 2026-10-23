// FUN_006a8720 @ 6a8720 size=48

undefined1 __fastcall FUN_006a8720(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(char *)(param_1 + 0x34ac + iVar2) != '\0') {
      uVar1 = 1;
      if ((iVar2 != 0) && ((&DAT_00dc0fd4)[iVar2] == 0)) {
        uVar1 = 0;
      }
      return uVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x158);
  return 0;
}


