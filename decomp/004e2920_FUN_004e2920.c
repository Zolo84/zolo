// FUN_004e2920 @ 4e2920 size=591

void __fastcall FUN_004e2920(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar5 = (**(code **)(*DAT_00bd1bac + 8))();
  iVar1 = *(int *)(param_1 + 0x44);
  iVar10 = *(int *)(param_1 + 0x40);
  iVar2 = DAT_00bd1bac[6];
  iVar3 = *(int *)(param_1 + 0x48);
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar6 = 0;
  if (iVar4 <= iVar1) {
    puVar8 = (undefined1 *)(iVar4 + iVar10 + 1 + iVar5);
    iVar9 = iVar4;
    do {
      iVar9 = iVar9 + 2;
      puVar8[-1] = *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar6);
      iVar7 = iVar6 + 2;
      *puVar8 = *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar6 + 1);
      iVar6 = iVar6 + 4;
      *(undefined1 *)(iVar3 + iVar5 + -2 + iVar9) =
           *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar7);
      (puVar8 + 2)[(iVar3 - iVar10) + -2] = *(undefined1 *)(*(int *)(param_1 + 0x38) + -1 + iVar6);
      puVar8 = puVar8 + 2;
    } while (iVar9 <= iVar1);
  }
  iVar10 = iVar10 + iVar2;
  if (iVar10 < iVar3) {
    puVar8 = (undefined1 *)(iVar10 + iVar4 + 1 + iVar5);
    do {
      puVar8[-1] = *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar6);
      iVar9 = iVar6 + 2;
      *puVar8 = *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar6 + 1);
      iVar6 = iVar6 + 4;
      *(undefined1 *)(iVar10 + iVar1 + iVar5) = *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar9);
      iVar10 = iVar10 + iVar2;
      puVar8[iVar1 - iVar4] = *(undefined1 *)(*(int *)(param_1 + 0x38) + -1 + iVar6);
      puVar8 = puVar8 + iVar2;
    } while (iVar10 < iVar3);
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if ((((iVar1 != 0) || (*(int *)(param_1 + 0x54) != 0)) || (*(int *)(param_1 + 0x50) != 0)) ||
     (*(int *)(param_1 + 0x58) != 0)) {
    iVar10 = *(int *)(param_1 + 0x50);
    iVar3 = *(int *)(param_1 + 0x54);
    iVar4 = *(int *)(param_1 + 0x58);
    iVar6 = 0;
    if (iVar1 <= iVar3) {
      puVar8 = (undefined1 *)(iVar1 + iVar10 + 1 + iVar5);
      iVar9 = iVar1;
      do {
        iVar11 = iVar9 + 2;
        puVar8[-1] = *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar6);
        iVar7 = iVar6 + 2;
        *puVar8 = *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar6 + 1);
        iVar6 = iVar6 + 4;
        *(undefined1 *)(iVar9 + iVar4 + iVar5) = *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar7);
        puVar8[iVar4 - iVar10] = *(undefined1 *)(*(int *)(param_1 + 0x38) + -1 + iVar6);
        puVar8 = puVar8 + 2;
        iVar9 = iVar11;
      } while (iVar11 <= iVar3);
    }
    iVar10 = iVar10 + iVar2;
    if (iVar10 < iVar4) {
      puVar8 = (undefined1 *)(iVar5 + 1 + iVar10 + iVar1);
      do {
        puVar8[-1] = *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar6);
        iVar9 = iVar6 + 2;
        *puVar8 = *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar6 + 1);
        iVar6 = iVar6 + 4;
        *(undefined1 *)(iVar10 + iVar3 + iVar5) = *(undefined1 *)(*(int *)(param_1 + 0x38) + iVar9);
        iVar10 = iVar10 + iVar2;
        puVar8[iVar3 - iVar1] = *(undefined1 *)(*(int *)(param_1 + 0x38) + -1 + iVar6);
        puVar8 = puVar8 + iVar2;
      } while (iVar10 < iVar4);
    }
  }
  (**(code **)(*DAT_00bd1bac + 0xc))();
  return;
}


