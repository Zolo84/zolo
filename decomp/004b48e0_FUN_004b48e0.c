// FUN_004b48e0 @ 4b48e0 size=670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b48e0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  int *piVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined2 *puVar17;
  undefined4 *puVar18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007be5ce;
  pvStack_c = ExceptionList;
  bVar13 = true;
  ExceptionList = &pvStack_c;
  iVar15 = (**(code **)(*(int *)param_1[0x20] + 0xc))();
  piVar12 = *(int **)(iVar15 + 4);
joined_r0x004b4913:
  if (piVar12 == (int *)0x0) {
    FUN_004bc8f0(0);
    cVar14 = (**(code **)(*(int *)param_1[0x20] + 0x54))();
    FUN_004b9c80();
    if (((cVar14 == '\0') && (cVar14 = (**(code **)(*param_1 + 0x88))(), cVar14 != '\0')) &&
       (bVar13)) {
      puVar16 = operator_new(0xc);
      uStack_4 = 0;
      if (puVar16 == (undefined4 *)0x0) {
        puVar16 = (undefined4 *)0x0;
      }
      else {
        iVar15 = FUN_004bf290();
        uVar4 = *(undefined4 *)(iVar15 + 6);
        iVar15 = param_1[0x37];
        iVar5 = param_1[0x3a];
        iVar6 = param_1[0x39];
        iVar7 = param_1[0x1e];
        iVar8 = param_1[0x38];
        puVar17 = operator_new(0x50);
        uStack_4._0_1_ = 1;
        if (puVar17 == (undefined2 *)0x0) {
          puVar17 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d6c0();
        }
        puVar16[1] = puVar17;
        *(undefined1 *)(puVar16 + 2) = 0;
        *(undefined1 *)((int)puVar16 + 9) = 1;
        *puVar16 = &PTR_FUN_007e72a8;
        *(undefined1 *)((int)puVar16 + 10) = 0;
        *puVar17 = 0x10c;
        iVar9 = puVar16[1];
        *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar7 + 0x10);
        uStack_4 = CONCAT31(uStack_4._1_3_,2);
        *(undefined2 *)(iVar9 + 0xc) = *(undefined2 *)(iVar7 + 0x14);
        puVar18 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar7 = puVar16[1];
        *(undefined4 *)(iVar7 + 2) = *puVar18;
        *(undefined2 *)(iVar7 + 6) = *(undefined2 *)(puVar18 + 1);
        *puVar16 = &PTR_FUN_007e7288;
        *(undefined4 *)(puVar16[1] + 0xe) = uVar4;
        *(int *)(puVar16[1] + 0x12) = iVar8;
        *(int *)(puVar16[1] + 0x16) = iVar6;
        *(int *)(puVar16[1] + 0x1a) = iVar5;
        param_1 = param_1 + 0x2c;
        *(int *)(puVar16[1] + 0x1e) = iVar15;
        iVar15 = 0;
        do {
          iVar5 = *param_1;
          param_1 = param_1 + 1;
          *(int *)(iVar15 + 0x22 + puVar16[1]) = iVar5;
          iVar15 = iVar15 + 4;
        } while (iVar15 < 0x2c);
        *(undefined1 *)(puVar16[1] + 0x4e) = 1;
      }
      uStack_4 = 0xffffffff;
      FUN_00565ca0(puVar16);
    }
    ExceptionList = pvStack_c;
    return;
  }
  piVar1 = (int *)piVar12[2];
  iVar15 = *piVar12;
  if ((param_1[0x1d] == 7) || (param_1[0x1d] == 8)) {
    piVar12 = *(int **)(iVar15 + 0x26);
    while (piVar12 != (int *)0x0) {
      piVar2 = (int *)piVar12[2];
      piVar3 = (int *)*piVar12;
      cVar14 = (**(code **)(*piVar3 + 0x14))();
      piVar12 = piVar2;
      if ((cVar14 != '\0') &&
         (fVar10 = (float)piVar3[0x3d] - (float)piVar3[0x20], _DAT_00dc174c < fVar10)) {
        fVar11 = _DAT_0087740c;
        if (fVar10 - _DAT_0087740c < _DAT_00dc174c) {
          fVar11 = fVar10 - _DAT_00dc174c;
        }
        piVar3[0x20] = (int)(fVar11 + (float)piVar3[0x20]);
      }
    }
  }
  iVar15 = *(int *)(iVar15 + 0x264);
  piVar12 = piVar1;
  if (iVar15 == 0x11) goto LAB_004b49b6;
  if (iVar15 != 0x15) goto code_r0x004b49b1;
  goto LAB_004b49d5;
code_r0x004b49b1:
  if (iVar15 == 0x1e) {
LAB_004b49b6:
    if ((*(int *)(param_1[0x1e] + 0x1e2) == 0) ||
       (*(float *)(*(int *)(param_1[0x1e] + 0x1e2) + 0x10) == _DAT_007e3380)) {
LAB_004b49d5:
      bVar13 = false;
    }
  }
  goto joined_r0x004b4913;
}


