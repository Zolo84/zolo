// FUN_004e7d80 @ 4e7d80 size=228

uint __fastcall FUN_004e7d80(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iStack00000004;
  
  uVar4 = 0;
  if ((*(int *)(param_1 + 0x254) != 8) && (uVar4 = 0, *(int *)(param_1 + 0x254) != 9)) {
    piVar3 = *(int **)(*(int *)(param_1 + 0x1c2) + 4);
    do {
      if (piVar3 == (int *)0x0) {
        iVar5 = *(int *)(param_1 + 0x290);
        iVar6 = 0;
        iStack00000004 = 0;
        if (0 < iVar5) {
          do {
            iVar5 = *(int *)(iVar6 + *(int *)(param_1 + 0x298));
            iVar2 = *(int *)(DAT_00ab27b4 + 0x254 + iVar5 * 0x4b2);
            if ((iVar2 != 8) && (iVar2 != 9)) {
              piVar3 = *(int **)(*(int *)(DAT_00ab27b4 + iVar5 * 0x4b2 + 0x1c2) + 4);
              while (piVar3 != (int *)0x0) {
                piVar1 = (int *)piVar3[2];
                uVar4 = FUN_0044b280(*(undefined4 *)(*(int *)(*piVar3 + 0x248) + 6));
                piVar3 = piVar1;
                if ((char)uVar4 != '\0') goto LAB_004e7d94;
              }
            }
            iVar5 = iStack00000004 + 1;
            iVar6 = iVar6 + 0xc;
            iStack00000004 = iVar5;
          } while (iVar5 < *(int *)(param_1 + 0x290));
        }
        return CONCAT31((int3)((uint)iVar5 >> 8),1);
      }
      piVar1 = (int *)piVar3[2];
      uVar4 = FUN_0044b280(*(undefined4 *)(*(int *)(*piVar3 + 0x248) + 6));
      piVar3 = piVar1;
    } while ((char)uVar4 == '\0');
  }
LAB_004e7d94:
  return uVar4 & 0xffffff00;
}


