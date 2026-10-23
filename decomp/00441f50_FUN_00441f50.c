// FUN_00441f50 @ 441f50 size=129

void FUN_00441f50(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if ((DAT_0089c098 & 1) == 0) {
    DAT_0089c098 = DAT_0089c098 | 1;
    DAT_0089c0a8 = FUN_005841b0();
  }
  iVar4 = 0;
  if (0 < DAT_0089c0a8) {
    do {
      puVar1 = (undefined4 *)(DAT_0089c0b0 + iVar4 * 8);
      iVar3 = *(int *)(DAT_0089c0b0 + 4 + iVar4 * 8);
      if (iVar3 != 0) {
        FUN_00796cd8(iVar3);
      }
      *puVar1 = 1;
      puVar2 = operator_new(8);
      puVar1[1] = puVar2;
      *puVar2 = 0;
      iVar3 = FUN_005841a0();
      iVar4 = iVar4 + 1;
      *(int *)(puVar1[1] + 4) = iVar3 * 2 + -2;
    } while (iVar4 < DAT_0089c0a8);
  }
  return;
}


