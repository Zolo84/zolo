// FUN_0067b580 @ 67b580 size=2322

/* WARNING: Removing unreachable block (ram,0x0067bc97) */
/* WARNING: Removing unreachable block (ram,0x0067bdf1) */
/* WARNING: Removing unreachable block (ram,0x0067bdfb) */
/* WARNING: Removing unreachable block (ram,0x0067be00) */
/* WARNING: Removing unreachable block (ram,0x0067be13) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0067b580(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  bool bVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  bool bVar18;
  float10 fVar19;
  float10 fVar20;
  float local_54;
  char cStack_3b;
  char cStack_3a;
  int *piStack_30;
  int *piStack_2c;
  int iStack_28;
  int iStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d4a30;
  local_c = ExceptionList;
  piVar16 = (int *)(&DAT_0089cad8)[param_2];
  if (piVar16 == (int *)0x0) {
    return 0;
  }
  iVar9 = *(int *)(*(int *)(param_1 + 10) + 0x12da);
  if (*(char *)(iVar9 + param_2 * 0x2c + 0x2c) != '\0') {
    return iVar9;
  }
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x58) == 0x12) {
    ExceptionList = &local_c;
    iVar9 = _rand();
    if (iVar9 % 100 < 0x1e) {
      ExceptionList = local_c;
      return iVar9 / 100;
    }
  }
  puVar13 = (undefined4 *)(*(int *)(param_1 + 10) + 0x2326 + param_2 * 6);
  uVar1 = *puVar13;
  cStack_3a = (char)((uint)uVar1 >> 0x10);
  cStack_3b = (char)((uint)uVar1 >> 8);
  iVar9 = ((int)*(char *)(DAT_00893530 + 0x15) +
          (((int)*(char *)(DAT_00893530 + 0x16) +
           ((int)*(short *)(DAT_00893530 + 0x18) - (int)*(short *)(puVar13 + 1)) * 0xc) -
          (int)cStack_3a) * 0x1e) - (int)cStack_3b;
  if (iVar9 < 10) {
    ExceptionList = local_c;
    return iVar9;
  }
  iVar9 = *(int *)(*(int *)(param_1 + 10) + 0x120);
  iVar10 = _rand();
  local_54 = (float)(-iVar10 % 0x32);
  iVar10 = (**(code **)(*(int *)(iVar9 + 0x204) + 0x24))();
  if ((char)iVar10 != '\0') {
    ExceptionList = local_c;
    return iVar10;
  }
  bVar3 = false;
  bVar6 = false;
  bVar5 = false;
  iVar10 = *(int *)(*(int *)(param_1 + 10) + 0x12da);
  if ((*(int *)(iVar10 + 0x3b30) != 0) && (*(int *)(iVar10 + 0x3b30) == param_2)) {
    iVar10 = _rand();
    bVar3 = true;
    bVar6 = true;
    bVar5 = true;
    local_54 = (float)(iVar10 % 100) + local_54;
  }
  iVar10 = *(int *)(*(int *)((int)piVar16 + 0x12da) + 0x3b30);
  iVar11 = FUN_006a9d50();
  if (iVar10 == iVar11) {
    iVar10 = _rand();
    bVar3 = true;
    bVar6 = true;
    bVar5 = true;
    local_54 = (float)(iVar10 % 0x1e) + local_54;
  }
  cVar8 = FUN_0044b300();
  if (cVar8 == '\0') {
    if (((!bVar3) && (*(int *)(*(int *)((int)piVar16 + 0x12da) + 0x3b30) != 0)) &&
       ((cVar8 = FUN_0044b300(), cVar8 != '\0' ||
        (*(int *)(*(int *)((int)piVar16 + 0x12da) + 0x3b30) ==
         *(int *)(*(int *)(*(int *)(param_1 + 10) + 0x12da) + 0x3b30))))) {
      bVar3 = true;
    }
    if (!bVar6) {
      if (!bVar3) {
        ExceptionList = local_c;
        return 0;
      }
      goto LAB_0067b7d2;
    }
    bVar18 = false;
    if (bVar3) goto LAB_0067b7d2;
  }
  else {
    iVar10 = _rand();
    bVar6 = true;
    local_54 = (float)(iVar10 % 0x14) + local_54;
LAB_0067b7d2:
    iVar10 = _rand();
    bVar18 = iVar10 % 10 == 0;
  }
  piStack_30 = (int *)0x0;
  piStack_2c = (int *)0x0;
  iStack_28 = 0;
  uStack_4 = 0;
  if ((!bVar18) || (cVar8 = FUN_0049ed40(), cVar8 != '\0')) goto LAB_0067bb51;
  if (!bVar5) {
    cVar8 = (**(code **)(*piVar16 + 0x1c))();
    if (cVar8 == '\0') {
      fVar19 = (float10)FUN_005885d0();
      bVar5 = false;
      if (fVar19 < (float10)_DAT_00877668) goto LAB_0067b86e;
    }
    bVar5 = true;
  }
LAB_0067b86e:
  bVar3 = _DAT_00d7cb2c == _DAT_007e3374;
  piVar15 = *(int **)(*(int *)(param_1 + 10) + 0xe892);
  if (bVar3) {
    piVar15 = *(int **)(*(int *)(param_1 + 10) + 0xe8a4);
  }
  iVar10 = (int)*(char *)(DAT_00893530 + 0x15) +
           ((int)*(char *)(DAT_00893530 + 0x16) + *(short *)(DAT_00893530 + 0x18) * 0xc) * 0x1e;
  if (piVar15 != (int *)0x0) {
    do {
      piVar2 = (int *)piVar15[2];
      iVar11 = *piVar15;
      cVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 0xe8b2) + 0x24))();
      if ((cVar8 == '\0') &&
         (cVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 0xe8c4) + 0x24))(), cVar8 == '\0'))
      {
        iVar12 = FUN_004e9370();
        if ((*(int *)(iVar12 + 0x3d8) == *(int *)(param_1 + 10)) ||
           (*(int *)(*(int *)(iVar12 + 0x3d8) + 6) == 0x157)) {
          puVar13 = (undefined4 *)FUN_0044e1d0();
          (**(code **)*puVar13)();
          cVar8 = FUN_004ccb10();
          if (cVar8 == '\0') {
            puVar13 = (undefined4 *)FUN_0044e1d0();
            (**(code **)*puVar13)();
            cVar8 = FUN_004ccb10();
            if ((cVar8 == '\0') &&
               ((iVar10 < DAT_00877660 + *(char *)(iVar12 + 0x3cf) +
                          ((int)*(char *)(iVar12 + 0x3d0) + *(short *)(iVar12 + 0x3d2) * 0xc) * 0x1e
                || ((iVar14 = FUN_004e9f80(), iVar14 == iVar11 &&
                    (iVar10 < DAT_00877664 + *(char *)(iVar12 + 0x3cf) +
                              ((int)*(char *)(iVar12 + 0x3d0) + *(short *)(iVar12 + 0x3d2) * 0xc) *
                              0x1e)))))) goto LAB_0067bb2f;
          }
          cVar8 = (**(code **)(*(int *)((int)piVar16 + 0xe8b2) + 0x24))();
          if (cVar8 == '\0') {
            if (((!bVar5) || (cVar8 = (**(code **)(piVar16[0x3a31] + 0x24))(), cVar8 == '\0')) ||
               ((bVar3 && ((cVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 10) + 0xe88e) + 0x24))
                                              (), cVar8 == '\0' &&
                           (cVar8 = (**(code **)(*(int *)((int)piVar16 + 0xe88e) + 0x24))(),
                           cVar8 == '\0')))))) goto LAB_0067bb2f;
            piVar15 = operator_new(0xe);
            if (piVar15 == (int *)0x0) {
              piVar15 = (int *)0x0;
            }
            else {
              *piVar15 = iVar11;
              piVar15[1] = (int)piStack_2c;
              piVar15[2] = 0;
              *(undefined1 *)(piVar15 + 3) = 0;
            }
            piVar7 = piVar15;
            if (iStack_28 != 0) {
              piStack_2c[2] = (int)piVar15;
              piVar7 = piStack_30;
            }
            piStack_30 = piVar7;
            local_54 = local_54 + _DAT_007e682c;
            piStack_2c = piVar15;
          }
          else {
            piVar15 = operator_new(0xe);
            if (piVar15 == (int *)0x0) {
              piVar15 = (int *)0x0;
            }
            else {
              *piVar15 = iVar11;
              piVar15[1] = (int)piStack_2c;
              piVar15[2] = 0;
              *(undefined1 *)(piVar15 + 3) = 0;
            }
            if (iStack_28 == 0) {
              local_54 = local_54 + _DAT_007e681c;
              piStack_30 = piVar15;
              piStack_2c = piVar15;
            }
            else {
              local_54 = local_54 + _DAT_007e681c;
              piStack_2c[2] = (int)piVar15;
              piStack_2c = piVar15;
            }
          }
          iStack_28 = iStack_28 + 1;
        }
      }
LAB_0067bb2f:
      piVar15 = piVar2;
    } while (piVar2 != (int *)0x0);
    if (0 < iStack_28) {
      local_54 = local_54 + _DAT_007e67e8;
    }
  }
LAB_0067bb51:
  iStack_1c = 0;
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  if (bVar6) {
    if ((0 < piVar16[0x45f9]) || (bVar3 = false, 0 < piVar16[0x45fa])) {
      bVar3 = true;
    }
    iVar10 = *(int *)(*(int *)(param_1 + 10) + 0x360c);
    while (iVar10 != 0) {
      iVar10 = *(int *)(iVar10 + 10);
      iVar11 = FUN_00428460();
      if ((((iVar11 != 0) && (iVar11 != 8)) &&
          ((bVar3 || ((*(int *)(iVar11 + 0x76) != 7 && (*(int *)(iVar11 + 0x76) != 2)))))) &&
         (cVar8 = (**(code **)(*(int *)(iVar9 + 0x216) + 0x24))(), cVar8 == '\0')) {
        piVar16 = (int *)FUN_004582d0();
        cVar8 = (**(code **)(*piVar16 + 0x24))();
        if ((cVar8 == '\0') && ((iVar11 = FUN_0075a2b0(), iVar11 == 0 || (iVar11 == 6)))) {
          FUN_004739f0();
        }
      }
    }
  }
  if (iStack_28 < 1) {
    while (piStack_30 != (int *)0x0) {
      piStack_30 = (int *)piStack_30[2];
      FUN_00796cd8();
    }
  }
  else {
    fVar20 = (float10)FUN_005885d0();
    fVar19 = (float10)_DAT_007e34c0;
    iVar9 = FUN_0044d810();
    iVar10 = FUN_0044d810();
    uVar17 = iVar10 - iVar9 >> 0x1f;
    iVar11 = FUN_006b8000();
    fVar4 = (float)iVar11 +
            ((float)(fVar20 * fVar19 + (float10)local_54) -
            (float)(int)(((iVar10 - iVar9 ^ uVar17) - uVar17) * 10));
    if ((_DAT_007e681c < fVar4) && (*(float *)(param_1 + 0x4c) < fVar4)) {
      *(undefined1 *)(param_1 + 0xac) = 0;
      puVar13 = (undefined4 *)(param_1 + 0xea);
      iVar9 = 5;
      do {
        puVar13[-5] = 0;
        *puVar13 = 0;
        puVar13[-0xf] = 0;
        puVar13[-10] = 0;
        puVar13[5] = 0;
        puVar13[10] = 0;
        puVar13[0xf] = 0;
        puVar13[0x14] = 0;
        puVar13 = puVar13 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar9 = 0;
      do {
        FUN_00442c60();
        iVar9 = iVar9 + 1;
      } while (iVar9 < 6);
      iVar9 = 0;
      if (piStack_30 != (int *)0x0) {
        piVar16 = piStack_30;
        piVar15 = (int *)(param_1 + 0xae);
        do {
          if (4 < iVar9) break;
          piVar2 = (int *)piVar16[2];
          iVar9 = iVar9 + 1;
          *piVar15 = *piVar16;
          piVar16 = piVar2;
          piVar15 = piVar15 + 1;
        } while (piVar2 != (int *)0x0);
      }
    }
    while (iStack_1c != 0) {
      iStack_1c = *(int *)(iStack_1c + 10);
      FUN_00796cd8();
    }
    while (piStack_30 != (int *)0x0) {
      piStack_30 = (int *)piStack_30[2];
      FUN_00796cd8();
    }
  }
  ExceptionList = local_c;
  return 0;
}


