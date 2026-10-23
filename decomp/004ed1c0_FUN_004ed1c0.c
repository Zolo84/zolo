// FUN_004ed1c0 @ 4ed1c0 size=151

undefined4 __thiscall FUN_004ed1c0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x12);
  if (iVar2 == 0x97e) {
    iVar2 = *(int *)(DAT_00ab27b4 + 0x665d0);
  }
  else if (iVar2 == 0x995) {
    iVar2 = *(int *)(DAT_00ab27b4 + 0x1085a0);
  }
  else if (iVar2 == 0xa0f) {
    iVar2 = *(int *)(DAT_00ab27b4 + 0x1051fa);
  }
  else {
    if (iVar2 != 0x122) {
      if (iVar2 != 0x18d) {
        return 0;
      }
      if (*(int *)(DAT_00ab27b4 + 0x7843a) != 0) {
        cVar1 = FUN_0044a690(*(undefined4 *)(param_2 + 6));
        if (cVar1 == '\0') {
          return 1;
        }
        return 0;
      }
      return 0;
    }
    iVar2 = *(int *)(DAT_00ab27b4 + 0x56844);
  }
  if ((iVar2 != 0) && (cVar1 = FUN_0044b280(*(undefined4 *)(param_2 + 6)), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}


