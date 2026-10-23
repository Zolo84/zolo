// FUN_00435cd0 @ 435cd0 size=564

undefined4 __thiscall FUN_00435cd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int unaff_EBP;
  short *psVar12;
  undefined1 local_8 [4];
  undefined4 uStack_4;
  
  iVar11 = *(int *)(param_1 + 0x2c);
  if (((iVar11 != 0) && (FUN_00436e20(local_8,0), iVar11 != 0)) ||
     (cVar8 = FUN_00434fd0(), cVar8 != '\0')) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x10))(param_2);
    (**(code **)(**(int **)(param_1 + 0x34) + 0x10))(param_2);
    sVar9 = FUN_00584270(0,0xff,0);
    iVar11 = *(int *)(*(int *)(param_1 + 0x40) + 0x14);
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x18);
    iVar2 = (*(int **)(param_1 + 0x3c))[6];
    iVar10 = (**(code **)(**(int **)(param_1 + 0x3c) + 8))();
    psVar3 = *(short **)(param_1 + 0x40);
    unaff_EBP = 0;
    psVar12 = (short *)(iVar10 + iVar2 * iVar1 + (iVar11 + -4) * 2);
    if (0 < *(int *)(psVar3 + 0xe)) {
      do {
        iVar11 = FUN_005841b0();
        if (iVar11 <= iVar1 + unaff_EBP) break;
        if (*psVar3 != sVar9) {
          *psVar12 = *psVar3;
        }
        if (psVar3[1] != sVar9) {
          psVar12[1] = psVar3[1];
        }
        if (psVar3[2] != sVar9) {
          psVar12[2] = psVar3[2];
        }
        if (psVar3[3] != sVar9) {
          psVar12[3] = psVar3[3];
        }
        if (psVar3[4] != sVar9) {
          psVar12[4] = psVar3[4];
        }
        if (psVar3[5] != sVar9) {
          psVar12[5] = psVar3[5];
        }
        if (psVar3[6] != sVar9) {
          psVar12[6] = psVar3[6];
        }
        if (psVar3[7] != sVar9) {
          psVar12[7] = psVar3[7];
        }
        if (psVar3[8] != sVar9) {
          psVar12[8] = psVar3[8];
        }
        if (psVar3[9] != sVar9) {
          psVar12[9] = psVar3[9];
        }
        unaff_EBP = unaff_EBP + 1;
        psVar12 = psVar12 + *(int *)(*(int *)(param_1 + 0x3c) + 0x18) / 2;
      } while (unaff_EBP < *(int *)(*(int *)(param_1 + 0x40) + 0x1c));
    }
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(uStack_4);
  }
  puVar7 = *(undefined4 **)(param_1 + -0xe);
  while (puVar7 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)puVar7[2];
    (**(code **)(*(int *)*puVar7 + 0x38))(0xfffffc18,0xfffffc18);
    puVar7 = puVar4;
  }
  iVar11 = *(int *)(param_1 + 0x24);
  piVar6 = *(int **)(param_1 + 0x2c);
  while (piVar6 != (int *)0x0) {
    piVar5 = (int *)piVar6[2];
    piVar6 = (int *)*piVar6;
    (**(code **)(*piVar6 + 0x38))(*(undefined4 *)(param_1 + 0x20),iVar11 + *(int *)(param_1 + 0x4e))
    ;
    iVar11 = *(int *)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x24);
    iVar10 = *(int *)(param_1 + 0x1c);
    piVar6[7] = iVar11;
    piVar6[8] = iVar2;
    piVar6[9] = iVar11 + iVar1;
    piVar6[10] = iVar2 + iVar10;
    if (unaff_EBP < *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x24)) {
      (**(code **)(*piVar6 + 0x10))(uStack_4);
    }
    iVar11 = (**(code **)(*piVar6 + 0x18))();
    iVar11 = unaff_EBP + iVar11;
    piVar6 = piVar5;
  }
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(param_2);
  }
  (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))();
  return 0;
}


