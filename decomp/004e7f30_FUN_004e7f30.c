// FUN_004e7f30 @ 4e7f30 size=282

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_004e7f30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  if ((*(int *)(param_1 + 0x254) != 8) && (uVar4 = 0, *(int *)(param_1 + 0x254) != 9)) {
    iVar6 = 0;
    piVar3 = *(int **)(*(int *)(param_1 + 0x1c2) + 4);
    do {
      if (piVar3 == (int *)0x0) {
        if (((*(int *)(param_1 + 0x3d8) == 0) ||
            (*(float *)(*(int *)(param_1 + 0x1d2) + 0x14) <= _DAT_007e3380)) ||
           (uVar4 = FUN_0044b280(param_2), (char)uVar4 == '\0')) {
          iVar5 = *(int *)(param_1 + 0x290);
          param_2 = 0;
          if (0 < iVar5) {
            do {
              iVar5 = DAT_00ab27b4 + *(int *)(*(int *)(param_1 + 0x298) + iVar6) * 0x4b2;
              iVar2 = *(int *)(iVar5 + 0x254);
              if ((iVar2 != 8) && (iVar2 != 9)) {
                piVar3 = *(int **)(*(int *)(iVar5 + 0x1c2) + 4);
                while (piVar3 != (int *)0x0) {
                  piVar1 = (int *)piVar3[2];
                  uVar4 = FUN_0044b280(*(undefined4 *)(*(int *)(*piVar3 + 0x248) + 6));
                  piVar3 = piVar1;
                  if ((char)uVar4 != '\0') goto LAB_004e8041;
                }
              }
              iVar5 = param_2 + 1;
              iVar6 = iVar6 + 0xc;
              param_2 = iVar5;
            } while (iVar5 < *(int *)(param_1 + 0x290));
          }
          return CONCAT31((int3)((uint)iVar5 >> 8),1);
        }
        break;
      }
      piVar1 = (int *)piVar3[2];
      uVar4 = FUN_0044b280(*(undefined4 *)(*(int *)(*piVar3 + 0x248) + 6));
      piVar3 = piVar1;
    } while ((char)uVar4 == '\0');
  }
LAB_004e8041:
  return uVar4 & 0xffffff00;
}


