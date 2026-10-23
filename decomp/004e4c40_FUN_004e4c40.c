// FUN_004e4c40 @ 4e4c40 size=124

undefined4 __thiscall FUN_004e4c40(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x471) != '\0') {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x290)) {
      iVar3 = 0;
      do {
        if (*(int *)(DAT_00ab27b4 + 0x46a + *(int *)(iVar3 + *(int *)(param_1 + 0x298)) * 0x4b2) !=
            0) {
          cVar1 = FUN_0044a690(param_2);
          if (cVar1 != '\0') {
            return 1;
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar2 < *(int *)(param_1 + 0x290));
    }
  }
  return 0;
}


