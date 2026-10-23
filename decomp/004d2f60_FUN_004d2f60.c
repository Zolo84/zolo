// FUN_004d2f60 @ 4d2f60 size=98

undefined4 __fastcall FUN_004d2f60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
  if (*(int *)(iVar1 + 0x3d8) == *(int *)(param_1 + 0x12a)) {
    if (*(char *)(param_1 + 0x19) != '\0') {
      return 1;
    }
    if (*(char *)(param_1 + 0x16) != '\0') {
      iVar1 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
      iVar1 = *(int *)(iVar1 + 0x482);
      iVar2 = FUN_0044e1d0();
      if (iVar1 == iVar2) {
        return 1;
      }
    }
  }
  return 0;
}


