// FUN_0075af30 @ 75af30 size=102

undefined4 __fastcall FUN_0075af30(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x18) + 0x13a)) {
    do {
      iVar2 = FUN_0075a0f0(iVar3);
      cVar1 = *(char *)(iVar2 + 0x1e);
      iVar2 = __ftol();
      if (iVar2 < (int)((-(uint)(cVar1 != '\0') & 100) + 100)) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(int *)(param_1 + 0x18) + 0x13a));
  }
  return 1;
}


