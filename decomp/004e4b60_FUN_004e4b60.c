// FUN_004e4b60 @ 4e4b60 size=90

uint __fastcall FUN_004e4b60(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x254) != 8) &&
     (iVar1 = *(int *)(param_1 + 0x254) + -9, uVar2 = 0, iVar1 != 0)) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x290)) {
      piVar3 = *(int **)(param_1 + 0x298);
      do {
        iVar1 = *(int *)(DAT_00ab27b4 + 0x254 + *piVar3 * 0x4b2);
        if ((iVar1 != 8) && (uVar2 = iVar1 - 9, uVar2 != 0)) goto LAB_004e4b71;
        iVar1 = 0;
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 3;
      } while (iVar4 < *(int *)(param_1 + 0x290));
    }
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
LAB_004e4b71:
  return uVar2 & 0xffffff00;
}


