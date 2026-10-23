// FUN_0069e8d0 @ 69e8d0 size=9008

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0069e8d0(void)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  void *pvVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  int *piVar19;
  undefined4 *puVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  int *extraout_ECX;
  uint uVar24;
  bool bVar25;
  float10 fVar26;
  float10 fVar27;
  int iStack00000008;
  float fStack00000010;
  int iStack00000014;
  int iStack00000018;
  float fStack0000001c;
  float fStack00000020;
  float fStack00000028;
  uint in_stack_0000002c;
  undefined **in_stack_00000034;
  int *in_stack_00000038;
  int *in_stack_0000003c;
  int in_stack_00000040;
  undefined1 in_stack_00000044;
  int **in_stack_00000048;
  uint in_stack_00000050;
  undefined **in_stack_00000058;
  undefined4 *in_stack_0000005c;
  undefined4 *in_stack_00000060;
  int in_stack_00000064;
  undefined1 in_stack_00000068;
  void *in_stack_0000186c;
  int *piStackY_28;
  int *local_c;
  int *piStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  piStack_8 = (int *)&LAB_007d5830;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007a69e0();
  local_c = extraout_ECX;
  FUN_006a9d50();
  iVar9 = (**(code **)(extraout_ECX[0x31] + 4))();
  if (iVar9 < 1) {
    cVar7 = (**(code **)(extraout_ECX[0x31] + 8))();
    if (cVar7 == '\0') {
      ExceptionList = in_stack_0000186c;
      return;
    }
    iVar9 = extraout_ECX[0x2d];
    while (iVar9 != 0) {
      iVar9 = *(int *)(iVar9 + 8);
      (**(code **)(*extraout_ECX + 0x1ac))();
      piVar10 = (int *)(**(code **)(*extraout_ECX + 0xe0))();
      piStackY_28 = (int *)0x69e958;
      (**(code **)(*piVar10 + 0x1a8))();
    }
    ExceptionList = in_stack_0000186c;
    return;
  }
  iVar9 = extraout_ECX[0x24];
  while (iVar9 != 0) {
    iVar9 = *(int *)(iVar9 + 8);
    FUN_00796cd8();
    piStackY_28 = (int *)0x69e97e;
    FUN_00796cd8();
  }
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x26] = 0;
  iVar9 = *(int *)((int)extraout_ECX + 0xa2);
  while (iVar9 != 0) {
    iVar9 = *(int *)(iVar9 + 8);
    FUN_00796cd8();
    piStackY_28 = (int *)0x69e9b4;
    FUN_00796cd8();
  }
  *(undefined4 *)((int)extraout_ECX + 0xa2) = 0;
  *(undefined4 *)((int)extraout_ECX + 0xa6) = 0;
  *(undefined4 *)((int)extraout_ECX + 0xaa) = 0;
  (**(code **)(extraout_ECX[0x3b] + 0x10))();
  if (*(char *)((int)extraout_ECX + 0xe) == '\0') {
    ExceptionList = in_stack_0000186c;
    return;
  }
  cVar7 = FUN_006a8720();
  if (cVar7 != '\0') {
    ExceptionList = in_stack_0000186c;
    return;
  }
  for (piStack_4 = (int *)extraout_ECX[0x32]; piStack_4 != (int *)0x0;
      piStack_4 = (int *)piStack_4[2]) {
    if (*(int *)(*piStack_4 + 0x264) == 2) {
      cVar7 = (**(code **)(*(int *)(*piStack_4 + 0x22e) + 8))();
      if (cVar7 == '\0') {
        FUN_0051c0c0();
        iVar9 = FUN_004e9370();
        if ((*(int *)(iVar9 + 0x254) != 8) && (*(int *)(iVar9 + 0x254) != 9)) goto LAB_0069ea54;
      }
      FUN_0050bca0();
    }
LAB_0069ea54:
    FUN_0069d750();
  }
  piVar10 = (undefined4 *)extraout_ECX[0x32];
joined_r0x0069ea77:
  if (piVar10 != (undefined4 *)0x0) {
    piStack_4 = (int *)piVar10[2];
    piVar10 = (int *)*piVar10;
    iVar9 = piVar10[3];
    piStack_8 = piVar10;
    iVar11 = FUN_0051b230();
    if ((*(int *)(iVar11 + 0x254) != 8) && (*(int *)(iVar11 + 0x254) != 9)) {
      if (iVar9 < 1) {
LAB_0069eac7:
        iVar9 = 0;
      }
      else {
        iVar9 = FUN_004e9370();
        cVar7 = FUN_004e8f30();
        if ((cVar7 == '\0') || (iVar9 = *(int *)(iVar9 + 0x3dc), iVar9 < 1)) goto LAB_0069eac7;
      }
      cVar7 = FUN_005177f0();
      if ((cVar7 != '\0') &&
         (cVar7 = (**(code **)(*(int *)((int)piVar10 + 0x22e) + 8))(), cVar7 != '\0')) {
        piStackY_28 = (int *)0x69eaf5;
        FUN_006a1d30();
      }
    }
    iVar11 = FUN_0051c0c0();
    cVar7 = (**(code **)(*(int *)((int)piVar10 + 0x22e) + 8))();
    if ((cVar7 == '\0') && (bVar25 = false, iVar11 != 0)) goto LAB_0069eb81;
    piVar10 = *(int **)(*(int *)((int)piStack_8 + 0x2aa) + 4);
    do {
      while( true ) {
        while( true ) {
          if (piVar10 == (int *)0x0) {
            bVar25 = iVar11 == 0;
            goto LAB_0069eb81;
          }
          piVar14 = (int *)piVar10[2];
          iVar11 = *piVar10;
          iVar21 = *(int *)(iVar11 + 0x294);
          if ((iVar21 < 1) || (*(int *)(iVar11 + 0xc) == iVar21)) {
            iVar21 = *(int *)(iVar11 + 0x298);
          }
          piVar10 = piVar14;
          if (0 < iVar21) break;
          iVar11 = 0;
        }
        iVar11 = FUN_004e9370();
        if (((*(int *)(iVar11 + 0x254) != 8) && (*(int *)(iVar11 + 0x254) != 9)) &&
           (iVar11 = *(int *)(iVar11 + 0x3dc), 0 < iVar11)) break;
        iVar11 = 0;
      }
    } while (iVar11 < 1);
    goto LAB_0069eb87;
  }
  piStack_4 = piVar10;
  FUN_006a9d50();
  piVar14 = (int *)extraout_ECX[0x2d];
  piVar10 = local_c;
joined_r0x0069ec6c:
  local_c = piVar10;
  if (piVar14 != (int *)0x0) {
    piVar19 = (int *)piVar14[2];
    iVar9 = *piVar14;
    piVar14 = piVar19;
    if ((*(int *)(iVar9 + 0x298) < 1) ||
       (piStack_8 = (int *)(iVar9 + 0xc), *(int *)(iVar9 + 0x298) == *(int *)(iVar9 + 0xc))) {
      (**(code **)(*piVar10 + 0x1ac))();
      piVar10 = (int *)(**(code **)(*piVar10 + 0xe0))();
      piStackY_28 = (int *)0x69edfa;
      (**(code **)(*piVar10 + 0x1a8))();
      piVar10 = local_c;
    }
    else {
      piVar19 = (int *)(iVar9 + 0x294);
      if (0 < *(int *)(iVar9 + 0x294)) {
        bVar25 = false;
        piVar23 = *(int **)((int)piVar10 + 0xa2);
        if (*(int **)((int)piVar10 + 0xa2) != (int *)0x0) {
          do {
            piVar10 = (int *)piVar23[2];
            piVar23 = (int *)*piVar23;
            if (*piVar23 == *piVar19) {
              iVar11 = (**(code **)(*(int *)(iVar9 + 0x22) + 4))();
              piVar23[2] = piVar23[2] + iVar11;
              if (*piStack_8 == *piVar19) {
                iVar11 = (**(code **)(*(int *)(iVar9 + 0x22) + 4))();
                piVar23[1] = piVar23[1] + iVar11;
              }
              bVar25 = true;
            }
            piVar23 = piVar10;
          } while (piVar10 != (int *)0x0);
          piVar10 = local_c;
          if (bVar25) goto joined_r0x0069ec6c;
        }
        piVar10 = operator_new(0x1c);
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          *piVar10 = 0;
          piVar10[1] = 0;
          piVar10[2] = 0;
          piVar10[3] = 0;
          piVar10[4] = 0;
          piVar10[5] = 0;
          piVar10[6] = 0;
        }
        *piVar10 = *piVar19;
        piVar10[5] = *(int *)(iVar9 + 0x298);
        iVar11 = (**(code **)(*(int *)(iVar9 + 0x22) + 4))();
        piVar10[2] = piVar10[2] + iVar11;
        if (*piStack_8 == *piVar19) {
          iVar9 = (**(code **)(*(int *)(iVar9 + 0x22) + 4))();
          piVar10[1] = piVar10[1] + iVar9;
        }
        piVar19 = local_c;
        iVar9 = *(int *)((int)local_c + 0xa6);
        pvVar12 = operator_new(0xe);
        if (pvVar12 == (void *)0x0) {
          uVar13 = 0;
        }
        else {
          piStackY_28 = piVar10;
          uVar13 = FUN_006a2830();
        }
        iVar11 = *(int *)((int)piVar19 + 0xaa);
        *(undefined4 *)((int)piVar19 + 0xa6) = uVar13;
        *(int *)((int)piVar19 + 0xaa) = iVar11 + 1;
        piVar10 = local_c;
        if (iVar11 == 0) {
          *(undefined4 *)((int)piVar19 + 0xa2) = uVar13;
        }
        else {
          *(undefined4 *)(iVar9 + 8) = uVar13;
        }
      }
    }
    goto joined_r0x0069ec6c;
  }
  piStack_4 = (int *)piVar10[0x37];
  while (piStack_4 != (int *)0x0) {
    iVar9 = *piStack_4;
    bVar25 = false;
    piStack_4 = (int *)piStack_4[2];
    piVar14 = *(int **)((int)piVar10 + 0xa2);
    while (piVar14 != (int *)0x0) {
      piVar19 = (int *)piVar14[2];
      piVar23 = (int *)*piVar14;
      iVar11 = FUN_0051b230();
      piVar14 = piVar19;
      if ((*piVar23 == *(int *)(iVar11 + 0x12)) || (iVar11 = FUN_0051c0c0(), *piVar23 == iVar11)) {
        piVar23[6] = iVar9;
        bVar25 = true;
      }
    }
    cVar7 = FUN_0050bde0();
    if (((cVar7 != '\0') || (*(int *)(iVar9 + 0x264) == 0)) && (!bVar25)) {
      FUN_0050bca0();
      piVar14 = (int *)(**(code **)(*piVar10 + 0xe0))();
      (**(code **)(*piVar14 + 0x1c8))();
      FUN_00528280();
    }
  }
  in_stack_00000068 = 0;
  in_stack_0000005c = (undefined4 *)0x0;
  in_stack_00000060 = (undefined4 *)0x0;
  in_stack_00000064 = 0;
  in_stack_00000058 = &PTR_LAB_007f571c;
  piVar10 = (int *)((int)piVar10 + 0xa2);
  piStack_4 = (int *)0x0;
  piVar14 = (undefined4 *)*piVar10;
  puVar20 = in_stack_0000005c;
  while (piVar19 = local_c, in_stack_0000005c = puVar20, piStack_8 = (int *)0x0,
        puVar20 = in_stack_0000005c, local_c = piVar19, piVar14 != (undefined4 *)0x0) {
    piVar23 = (int *)*piVar14;
    piStack_8 = (int *)piVar14[2];
    if (0 < *piVar23) {
      FUN_004e9370();
    }
    if (0 < piVar23[5]) {
      FUN_004e9370();
    }
    piStackY_28 = (int *)0x69ef8c;
    cVar7 = FUN_004ed600();
    FUN_004e9370();
    cVar8 = FUN_0044b280();
    (**(code **)(*piVar19 + 0xe0))();
    iVar11 = FUN_00692220();
    iVar9 = piVar23[2];
    if ((iVar9 * 2 < iVar11) || (cVar8 == '\0' || cVar7 == '\0')) {
      piVar14 = (int *)piVar19[0x2d];
      while (piVar14 != (int *)0x0) {
        piVar15 = (int *)piVar14[2];
        iVar9 = *piVar14;
        piVar14 = piVar15;
        if (*(int *)(iVar9 + 0x294) == *piVar23) {
          (**(code **)(*piVar19 + 0x1ac))();
          piVar15 = (int *)(**(code **)(*piVar19 + 0xe0))();
          piStackY_28 = (int *)0x69f024;
          (**(code **)(*piVar15 + 0x1a8))();
        }
      }
      piVar14 = (int *)FUN_004e9370();
      iVar9 = *(int *)((int)piVar19 + 10);
      (**(code **)(*piVar14 + 0xc))();
      piStackY_28 = (int *)0x69f050;
      piStackY_28 = (int *)(**(code **)(*(int *)(iVar9 + 0xe) + 0xc))();
      FUN_007a630a();
      FUN_00458570();
      FUN_0068f420();
      puVar17 = in_stack_00000060;
      piStackY_28 = (int *)0x69f091;
      pvVar12 = operator_new(0xe);
      if (pvVar12 == (void *)0x0) {
        in_stack_00000060 = (undefined4 *)0x0;
      }
      else {
        piStackY_28 = piVar23;
        in_stack_00000060 = (undefined4 *)FUN_006a2830();
      }
      iVar9 = in_stack_00000064 + 1;
      bVar25 = in_stack_00000064 != 0;
      piVar14 = piStack_8;
      puVar20 = in_stack_00000060;
      in_stack_00000064 = iVar9;
      if (bVar25) {
        puVar17[2] = in_stack_00000060;
        puVar20 = in_stack_0000005c;
      }
    }
    else {
      iVar11 = piVar23[1];
      piVar15 = piVar23 + 1;
      piVar14 = piStack_8;
      puVar20 = in_stack_0000005c;
      if ((0 < iVar11) &&
         ((iVar9 == iVar11 || ((double)iVar9 * _DAT_007e40a8 + _DAT_007e7828 < (double)iVar11)))) {
        if (piVar23[6] == 0) {
          if (0 < *piVar23) {
            FUN_004e9370();
          }
          (**(code **)(*piVar19 + 0xe0))();
          piVar14 = (int *)FUN_006959a0();
          if (piVar14 != (int *)0x0) {
            FUN_006aa000();
            FUN_00528280();
            FUN_00528270();
            piVar23[6] = (int)piVar14;
            FUN_0050bca0();
            piStackY_28 = (int *)0x69f1a2;
            FUN_004e9370();
            piStackY_28 = piVar14;
            FUN_006aaff0();
          }
        }
        piVar14 = (int *)piVar19[0x32];
        while (piVar14 != (int *)0x0) {
          piStack_4 = (int *)piVar14[2];
          iVar9 = *piVar14;
          iVar11 = FUN_0051b230();
          if (((*(int *)(iVar11 + 0x254) == 8) || (*(int *)(iVar11 + 0x254) == 9)) ||
             (fVar27 = (float10)FUN_00525ba0(), piVar14 = piStack_4,
             fVar27 <= (float10)_DAT_007e67e0)) {
            if (*(int *)(iVar9 + 0xc) == *piVar23) {
              iVar9 = FUN_00516cc0();
              piVar23[4] = piVar23[4] + iVar9;
              iVar9 = FUN_00516cc0();
              piVar23[3] = piVar23[3] + iVar9;
              piVar14 = piStack_4;
            }
            else {
              iVar9 = FUN_0051c0c0();
              piVar14 = piStack_4;
              if (iVar9 == *piVar23) {
                iVar9 = FUN_00516cc0();
                piVar23[4] = piVar23[4] + iVar9;
                piVar14 = piStack_4;
              }
            }
          }
        }
        piStack_4 = piVar14;
        FUN_00527fb0();
        iVar9 = __ftol();
        if (*piVar15 < iVar9) {
          iVar9 = *piVar15;
        }
        piVar19 = piVar23 + 4;
        iVar9 = iVar9 - piVar23[4];
        in_stack_00000050 = 0;
        iVar11 = 0;
joined_r0x0069f275:
        if (0 < iVar9) {
          iVar21 = (**(code **)(local_c[0x31] + 4))();
          uVar24 = in_stack_00000050 + 1;
          bVar25 = (int)in_stack_00000050 < iVar21;
          in_stack_00000050 = uVar24;
          if (bVar25) {
            iVar21 = 0;
            fStack00000028 = 1e+07;
            iStack00000018 = 0;
            piStack_4 = (int *)local_c[0x32];
            iVar11 = 0;
            if (piStack_4 != (int *)0x0) {
LAB_0069f2c9:
              iVar22 = *piStack_4;
              piStack_4 = (int *)piStack_4[2];
              iVar18 = FUN_0051b230();
              if (((*(int *)(iVar18 + 0x254) != 8) && (*(int *)(iVar18 + 0x254) != 9)) &&
                 (0 < *(int *)(iVar22 + 0xc))) {
                FUN_004e9370();
              }
              piStackY_28 = (int *)0x69f331;
              cVar7 = FUN_004ed600();
              if (cVar7 != '\0') {
                iVar18 = *piVar10;
                do {
                  if (iVar18 == 0) {
                    cVar7 = (**(code **)(*(int *)(iVar22 + 0x22e) + 8))();
                    if (cVar7 == '\0') goto LAB_0069f455;
                    iVar18 = FUN_0051b230();
                    if (*(int *)(iVar18 + 0x254) != 8) goto LAB_0069f405;
                    iVar18 = local_c[0x2d];
                    goto joined_r0x0069f3c1;
                  }
                  piStackY_28 = (int *)0x69f363;
                  puVar20 = (undefined4 *)FUN_006a2160();
                  piVar14 = *(int **)*puVar20;
                } while ((*(int *)(iVar22 + 0xc) != *piVar14) || (piVar14[2] != piVar14[1]));
              }
              iVar22 = FUN_00516cc0();
              iVar11 = iVar11 + iVar22;
              goto LAB_0069f455;
            }
          }
        }
LAB_0069f4db:
        piVar4 = local_c;
        piVar14 = piStack_8;
        puVar20 = in_stack_0000005c;
        if ((iVar9 - iVar11 < 1) &&
           ((iVar9 = piVar23[3], *piVar19 == iVar9 || (*piVar15 / 3 < iVar9)))) {
          if (iVar9 < *piVar15 / 3 + 1) {
            piVar14 = (int *)local_c[0x2d];
            while (piVar14 != (int *)0x0) {
              piVar19 = (int *)piVar14[2];
              iVar9 = *piVar14;
              piVar14 = piVar19;
              if (*(int *)(iVar9 + 0x294) == *piVar23) {
                (**(code **)(*piVar4 + 0x1ac))();
                piVar19 = (int *)(**(code **)(*piVar4 + 0xe0))();
                piStackY_28 = (int *)0x69f5da;
                (**(code **)(*piVar19 + 0x1a8))();
              }
            }
            piVar14 = (int *)FUN_004e9370();
            iVar9 = *(int *)((int)piVar4 + 10);
            (**(code **)(*piVar14 + 0xc))();
            piStackY_28 = (int *)*piVar15;
            (**(code **)(*(int *)(iVar9 + 0xe) + 0xc))();
            FUN_007a630a();
            FUN_00458570();
          }
          else {
            FUN_0069db50();
            piVar14 = (int *)FUN_004e9370();
            iVar9 = *(int *)((int)piVar4 + 10);
            (**(code **)(*piVar14 + 0xc))();
            piStackY_28 = (int *)*piVar15;
            (**(code **)(*(int *)(iVar9 + 0xe) + 0xc))();
            FUN_007a630a();
            FUN_00458570();
          }
          FUN_0068f420();
          puVar17 = in_stack_00000060;
          in_stack_00000060 = operator_new(0xe);
          if (in_stack_00000060 == (undefined4 *)0x0) {
            in_stack_00000060 = (undefined4 *)0x0;
          }
          else {
            *in_stack_00000060 = piVar23;
            in_stack_00000060[1] = puVar17;
            in_stack_00000060[2] = 0;
            *(undefined1 *)(in_stack_00000060 + 3) = 0;
          }
          iVar9 = in_stack_00000064 + 1;
          bVar25 = in_stack_00000064 != 0;
          piVar14 = piStack_8;
          puVar20 = in_stack_00000060;
          in_stack_00000064 = iVar9;
          if (bVar25) {
            puVar17[2] = in_stack_00000060;
            puVar20 = in_stack_0000005c;
          }
        }
      }
    }
  }
  while (puVar20 != (undefined4 *)0x0) {
    puVar20 = (undefined4 *)puVar20[2];
    (**(code **)(*(int *)((int)piVar19 + 0x9e) + 0x18))();
    FUN_00796cd8();
  }
  puVar20 = (undefined4 *)piVar19[0x2d];
joined_r0x0069f6ca:
  if (puVar20 == (undefined4 *)0x0) goto LAB_006a0288;
  piVar14 = (int *)*puVar20;
  puVar20 = (undefined4 *)puVar20[2];
  iVar9 = piVar14[0xa5];
  if ((iVar9 < 1) || (piVar14[3] == iVar9)) {
    iVar9 = piVar14[0xa6];
  }
  if (0 < iVar9) {
    iVar9 = FUN_004e9370();
    puVar17 = *(undefined4 **)(*(int *)(iVar9 + 0x1c2) + 4);
    do {
      if (puVar17 == (undefined4 *)0x0) goto LAB_0069f7db;
      puVar3 = (undefined4 *)puVar17[2];
      cVar7 = (**(code **)(*(int *)*puVar17 + 0x28))();
      puVar17 = puVar3;
    } while ((cVar7 == '\0') || (cVar7 = FUN_0044b280(), cVar7 == '\0'));
    cVar7 = (**(code **)(piVar19[0x3b] + 0x24))();
    if (cVar7 == '\0') {
      iVar9 = piVar14[0xa5];
      if ((iVar9 < 1) || (piVar14[3] == iVar9)) {
        iVar9 = piVar14[0xa6];
      }
      iVar11 = piVar19[0x3d];
      piVar23 = piVar19 + 0x3d;
      piVar15 = operator_new(0xe);
      if (piVar15 == (int *)0x0) {
        piVar15 = (int *)0x0;
      }
      else {
        *piVar15 = iVar9;
        piVar15[1] = iVar11;
        piVar15[2] = 0;
        *(undefined1 *)(piVar15 + 3) = 0;
      }
      *piVar23 = (int)piVar15;
      iVar9 = piVar19[0x3e];
      piVar19[0x3e] = iVar9 + 1;
      if (iVar9 == 0) {
        piVar19[0x3c] = *piVar23;
        piVar19 = local_c;
      }
      else {
        *(int *)(iVar11 + 8) = *piVar23;
        piVar19 = local_c;
      }
    }
  }
LAB_0069f7db:
  piVar23 = piVar14 + 0xa6;
  iVar9 = *(int *)(DAT_00ab27b4 + 0x3d8 + *piVar23 * 0x4b2);
  if ((iVar9 != 0) && (iVar9 != *(int *)((int)piVar19 + 10))) {
    FUN_006a9d50();
    cVar7 = FUN_0044b300();
    if (cVar7 == '\0') goto LAB_0069f871;
    (**(code **)(*piVar19 + 0xe0))();
    iVar9 = FUN_00695380();
    iVar11 = (**(code **)(*(int *)((int)piVar14 + 0x22) + 4))();
    if (0 < iVar11 + iVar9) goto LAB_0069f871;
    goto LAB_0069f84a;
  }
LAB_0069f871:
  if (*(int *)((int)piVar14 + 0x2ae) == 0) {
    if (*(char *)((int)piVar14 + 0x17b) == '\0') goto code_r0x0069fc5b;
    goto LAB_0069fe5e;
  }
  iVar9 = (**(code **)(piVar14[0x47] + 4))();
  piVar19 = local_c;
  if (iVar9 != 0) goto joined_r0x0069f6ca;
  cVar7 = (**(code **)(*(int *)((int)piVar14 + 0x22e) + 8))();
  piVar19 = local_c;
  if (cVar7 == '\0') goto joined_r0x0069f6ca;
  iVar9 = piVar14[0xa5];
  if ((iVar9 < 1) || (piVar14[3] == iVar9)) {
    iVar9 = *piVar23;
  }
  if (iVar9 < 1) {
LAB_0069f8f8:
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_004e9370();
    if (((*(int *)(iVar9 + 0x254) == 8) || (*(int *)(iVar9 + 0x254) == 9)) ||
       (iVar9 = *(int *)(iVar9 + 0x3dc), iVar9 < 1)) goto LAB_0069f8f8;
  }
  iVar11 = *(int *)((int)piVar14 + 0x2ae);
  piVar19 = local_c;
  if ((((iVar9 < 1) ||
       (cVar7 = (**(code **)(*(int *)(iVar11 + 0x22e) + 8))(), piVar19 = local_c, cVar7 == '\0')) ||
      (cVar7 = (**(code **)(*(int *)((int)piVar14 + 0x22e) + 8))(), piVar19 = local_c, cVar7 == '\0'
      )) || (iVar21 = (**(code **)(piVar14[0x47] + 4))(), piVar19 = local_c, iVar21 != 0))
  goto joined_r0x0069f6ca;
  if (*(int *)(iVar11 + 0xc) != iVar9) {
    iVar9 = FUN_0051b230();
    if (*(int *)(iVar9 + 0x254) == 8) {
      piVar14 = *(int **)(*(int *)(iVar11 + 0x2aa) + 4);
      do {
        if (piVar14 == (int *)0x0) goto LAB_0069fc3d;
        piVar19 = (int *)piVar14[2];
        cVar7 = (**(code **)(*(int *)(*piVar14 + 0x22e) + 8))();
        piVar14 = piVar19;
        piVar19 = local_c;
      } while (cVar7 != '\0');
    }
    else {
LAB_0069fc3d:
      piStackY_28 = (int *)0x69fc48;
      FUN_006a1d30();
      piVar19 = local_c;
    }
    goto joined_r0x0069f6ca;
  }
  iVar9 = FUN_004e9370();
  cVar7 = FUN_00517740();
  piVar19 = local_c;
  if (cVar7 == '\0') {
    (**(code **)(*local_c + 0x1ac))();
    iVar9 = *piVar19;
    goto LAB_0069f85b;
  }
  if (*(int *)(iVar9 + 0x3d8) == 0) {
LAB_0069fb55:
    puVar17 = operator_new(0xc);
    in_stack_00000048 = (int **)puVar17;
    if (puVar17 != (undefined4 *)0x0) {
      in_stack_00000050 = in_stack_00000050 & 0xff000000;
      uVar24 = in_stack_00000050;
      iVar9 = piVar14[0xa5];
      if ((iVar9 < 1) || (piVar14[3] == iVar9)) {
        iVar9 = *piVar23;
      }
      piStackY_28 = (int *)0x69fbae;
      FUN_004c0990();
      *puVar17 = &PTR_FUN_007e7804;
      iVar11 = puVar17[1];
      *(short *)(iVar11 + 0x14) = (short)iVar9;
      *(int *)(iVar11 + 0xe) = piVar14[6];
      iVar9 = piVar14[7];
      *(undefined1 *)(iVar11 + 0x16) = 1;
      *(uint *)(iVar11 + 0x18) = uVar24;
      *(short *)(iVar11 + 0x12) = (short)iVar9;
      *(undefined2 *)(iVar11 + 0x1c) = 0;
    }
    FUN_00565c30();
    piVar19 = local_c;
    goto joined_r0x0069f6ca;
  }
  FUN_006a9d50();
  cVar7 = FUN_0044b280();
  if (cVar7 == '\0') goto LAB_0069fb55;
  fVar27 = (float10)FUN_0051a280();
  if (fVar27 < (float10)_DAT_007e68c4) goto LAB_0069fe5e;
  fStack00000010 = 0.0;
  piVar15 = *(int **)(*(int *)(iVar9 + 0x1c2) + 4);
  while (piVar15 != (int *)0x0) {
    piVar4 = (int *)piVar15[2];
    piVar5 = (int *)*piVar15;
    cVar7 = (**(code **)(*piVar5 + 0x28))();
    piVar15 = piVar4;
    if (((cVar7 != '\0') && (piVar5[0x92] != 0)) && (cVar7 = FUN_0044b280(), cVar7 != '\0')) {
      iVar9 = (**(code **)(*(int *)((int)piVar5 + 0x22) + 4))();
      fStack00000010 = (float)iVar9 + fStack00000010;
    }
  }
  fVar26 = (float10)FUN_004ed020();
  fVar6 = (float10)_DAT_007e40b8;
  fVar27 = (float10)_DAT_007e3374;
  iVar9 = (**(code **)(*(int *)((int)piVar14 + 0x22) + 4))();
  piStack_8 = (int *)(float)iVar9;
  if ((char)piVar14[0xa7] != '\0') {
    puVar17 = (undefined4 *)piVar19[0x2d];
    while (puVar17 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar17[2];
      piVar15 = (int *)*puVar17;
      puVar17 = puVar3;
      if (((piVar14 != piVar15) && (*(int *)((int)piVar15 + 0x2ae) != 0)) &&
         (piVar15[0xa6] == *piVar23)) {
        iVar9 = (**(code **)(*(int *)((int)piVar15 + 0x22) + 4))();
        piStack_8 = (int *)((float)iVar9 + (float)piStack_8);
      }
    }
  }
  if ((float)((fVar26 * fVar6 + fVar27) * (float10)fStack00000010) < (float)piStack_8) {
    piStackY_28 = (int *)0x0;
    in_stack_0000002c = in_stack_0000002c & 0xff000000;
    FUN_0050b600();
    piVar19 = local_c;
    goto joined_r0x0069f6ca;
  }
  goto LAB_0069fe5e;
LAB_0069eb81:
  piVar10 = piStack_4;
  if (!bVar25 && -1 < iVar11) {
LAB_0069eb87:
    piVar10 = piStack_4;
    if ((0 < iVar9) && (iVar11 != iVar9)) {
      iVar9 = *(int *)(DAT_00ab27b4 + iVar11 * 0x4b2 + 0x254);
      if ((iVar9 != 8) && ((iVar9 != 9 && (0 < iVar11)))) {
        FUN_004e9370();
      }
      FUN_006a9d50();
      piStackY_28 = (int *)0x69ec0a;
      cVar7 = FUN_004ed600();
      piVar14 = piStack_8;
      piVar10 = piStack_4;
      if (cVar7 == '\0') {
        (**(code **)(*piStack_8 + 0x74))();
        iVar9 = *(int *)(*(int *)((int)piVar14 + 0x2aa) + 4);
        while (piVar10 = piStack_4, iVar9 != 0) {
          iVar9 = *(int *)(iVar9 + 8);
          (**(code **)(*extraout_ECX + 0x1ac))();
          piVar10 = (int *)(**(code **)(*extraout_ECX + 0xe0))();
          piStackY_28 = (int *)0x69ec4d;
          (**(code **)(*piVar10 + 0x1a8))();
        }
      }
    }
  }
  goto joined_r0x0069ea77;
  while( true ) {
    piStackY_28 = (int *)0x69f3d3;
    puVar20 = (undefined4 *)FUN_00498700();
    cVar7 = (**(code **)(*(int *)(*(int *)*puVar20 + 0x22e) + 8))();
    if ((cVar7 == '\0') &&
       (iVar2 = *(int *)(iVar22 + 0xc), iVar16 = FUN_0051c0c0(), iVar16 == iVar2)) break;
joined_r0x0069f3c1:
    if (iVar18 == 0) goto LAB_0069f405;
  }
LAB_0069f455:
  if (piStack_4 == (int *)0x0) goto code_r0x0069f461;
  goto LAB_0069f2c9;
LAB_0069f405:
  cVar7 = FUN_005177f0();
  if (cVar7 == '\0') {
    FUN_0051b230();
    fVar27 = (float10)FUN_004ed6d0();
    if (fVar27 < (float10)fStack00000028) {
      fStack00000028 = (float)fVar27;
      iStack00000018 = (**(code **)(*(int *)(iVar22 + 0x22) + 4))();
      iVar21 = iVar22;
      if (iVar9 < iStack00000018) {
        iStack00000018 = iVar9;
      }
    }
  }
  goto LAB_0069f455;
code_r0x0069f461:
  if ((iVar21 == 0) || (cVar7 = (**(code **)(*(int *)(iVar21 + 0x22e) + 8))(), cVar7 == '\0'))
  goto LAB_0069f4db;
  iVar21 = FUN_00516cc0();
  if (iStack00000018 < iVar21) {
    FUN_00516cc0();
    piStackY_28 = (int *)0x69f4a0;
    FUN_006a12c0();
  }
  iVar21 = FUN_00516cc0();
  *piVar19 = *piVar19 + iVar21;
  iVar21 = FUN_00516cc0();
  iVar9 = iVar9 - iVar21;
  piStackY_28 = (int *)0x69f4d3;
  FUN_006a1d30();
  goto joined_r0x0069f275;
LAB_006a0288:
  piVar14 = (int *)piVar19[0x32];
joined_r0x006a0294:
  do {
    if (piVar14 == (int *)0x0) break;
    piStack_4 = (int *)piVar14[2];
    iVar9 = *piVar14;
    iVar11 = (**(code **)(*(int *)(iVar9 + 0x11c) + 4))();
    piVar14 = piStack_4;
    if (iVar11 == 0) {
      cVar7 = (**(code **)(*(int *)(iVar9 + 0x22e) + 8))();
      if (cVar7 == '\0') {
        iVar9 = FUN_0051c0c0();
        piVar19 = local_c;
      }
      else {
        iVar11 = FUN_00516cc0();
        if (iVar11 < 1) {
          FUN_006a18c0();
          piStackY_28 = (int *)0x6a0307;
          FUN_006a1d30();
          piVar14 = piStack_4;
          goto joined_r0x006a0294;
        }
        bVar25 = true;
        iVar11 = FUN_0051b230();
        piVar19 = local_c;
        if ((*(int *)(iVar11 + 0x254) != 8) && (*(int *)(iVar11 + 0x254) != 9)) {
          cVar7 = FUN_006a1450();
          piVar14 = piStack_4;
          if (cVar7 != '\0') goto joined_r0x006a0294;
          if ((undefined4 *)*piVar10 != (undefined4 *)0x0) {
            puVar20 = (undefined4 *)*piVar10;
            do {
              puVar17 = puVar20 + 2;
              piVar19 = (int *)*puVar20;
              if ((*(int *)(iVar9 + 0xc) == *piVar19) && (piVar19[2] == piVar19[1]))
              goto joined_r0x006a0294;
              puVar20 = (undefined4 *)*puVar17;
            } while ((undefined4 *)*puVar17 != (undefined4 *)0x0);
          }
          cVar7 = FUN_005177f0();
          piVar14 = piStack_4;
          if ((cVar7 != '\0') || (*(int *)(iVar9 + 0xc) < 1)) goto joined_r0x006a0294;
          iVar11 = FUN_004e9370();
          piVar19 = local_c;
          piVar14 = piStack_4;
          if ((*(int *)(iVar11 + 0x254) == 8) ||
             ((*(int *)(iVar11 + 0x254) == 9 || (*(int *)(iVar11 + 0x3dc) < 1))))
          goto joined_r0x006a0294;
          piVar14 = (int *)local_c[0x24];
          do {
            if (piVar14 == (int *)0x0) goto LAB_006a03e6;
            piVar23 = (int *)*piVar14;
            piVar14 = (int *)piVar14[2];
          } while (*piVar23 != *(int *)(iVar11 + 0x3dc));
          if (0 < piVar23[2]) {
            piStackY_28 = (int *)0x6a03de;
            FUN_006a1d30();
            bVar25 = false;
          }
        }
LAB_006a03e6:
        cVar7 = FUN_006a1450();
        if ((cVar7 != '\0') && (bVar25)) {
          piStackY_28 = (int *)0x0;
          in_stack_00000048 = (int **)((uint)in_stack_00000048 & 0xff000000);
          FUN_006a1950();
          FUN_0050b600();
          piVar14 = piStack_4;
          goto joined_r0x006a0294;
        }
        iVar9 = *(int *)(iVar9 + 0xc);
      }
      bVar25 = false;
      piVar14 = (int *)piVar19[0x24];
      if ((int *)piVar19[0x24] != (int *)0x0) {
        do {
          piVar19 = (int *)piVar14[2];
          if (*(int *)*piVar14 == iVar9) {
            piVar14 = (int *)*piVar14 + 1;
            iVar11 = FUN_00516cc0();
            *piVar14 = *piVar14 + iVar11;
            bVar25 = true;
          }
          piVar14 = piVar19;
        } while (piVar19 != (int *)0x0);
        piVar14 = piStack_4;
        if (bVar25) goto joined_r0x006a0294;
      }
      piVar19 = operator_new(0xc);
      piVar14 = (int *)0x0;
      if (piVar19 != (int *)0x0) {
        *piVar19 = 0;
        piVar19[1] = 0;
        piVar19[2] = 0;
        piVar14 = piVar19;
      }
      *piVar14 = iVar9;
      iVar9 = FUN_00516cc0();
      piVar23 = local_c;
      piVar14[1] = iVar9;
      iVar9 = local_c[0x25];
      piVar19 = local_c + 0x25;
      puVar20 = operator_new(0xe);
      if (puVar20 == (undefined4 *)0x0) {
        puVar20 = (undefined4 *)0x0;
      }
      else {
        *puVar20 = piVar14;
        puVar20[1] = iVar9;
        puVar20[2] = 0;
        *(undefined1 *)(puVar20 + 3) = 0;
      }
      *piVar19 = (int)puVar20;
      iVar11 = piVar23[0x26];
      piVar23[0x26] = iVar11 + 1;
      piVar14 = piStack_4;
      if (iVar11 == 0) {
        piVar23[0x24] = *piVar19;
      }
      else {
        *(int *)(iVar9 + 8) = *piVar19;
      }
    }
  } while( true );
  piStack_4 = (int *)0x0;
  puVar20 = (undefined4 *)local_c[0x24];
  while (piVar10 = local_c, local_c = piVar10, puVar20 != (undefined4 *)0x0) {
    puVar17 = (undefined4 *)puVar20[2];
    piVar14 = (int *)*puVar20;
    puVar20 = puVar17;
    if (piVar14[1] < piVar14[2]) {
      iVar9 = piVar14[2] - piVar14[1];
      fStack00000020 = 1e+07;
      iStack00000008 = 0;
      fStack00000010 = 0.0;
      piStack_8 = (int *)piVar10[0x32];
      if (piStack_8 != (int *)0x0) {
        do {
          iVar11 = *piStack_8;
          piStack_8 = (int *)piStack_8[2];
          cVar7 = (**(code **)(*(int *)(iVar11 + 0x22e) + 8))();
          if (cVar7 != '\0') {
            iVar21 = FUN_0051b230();
            if (*(int *)(iVar21 + 0x254) == 8) {
              piVar19 = (int *)piVar10[0x2d];
              do {
                if (piVar19 == (int *)0x0) goto LAB_006a0626;
                piVar23 = (int *)piVar19[2];
                cVar7 = (**(code **)(*(int *)(*piVar19 + 0x22e) + 8))();
                piVar19 = piVar23;
              } while ((cVar7 != '\0') ||
                      (iVar21 = *(int *)(iVar11 + 0xc), iVar22 = FUN_0051c0c0(), piVar10 = local_c,
                      iVar22 != iVar21));
            }
            else {
LAB_006a0626:
              cVar7 = FUN_005177f0();
              if ((cVar7 == '\0') && (*(int *)(iVar11 + 0xc) != *piVar14)) {
                piVar19 = (int *)piVar10[0x24];
                do {
                  if (piVar19 == (int *)0x0) goto LAB_006a0735;
                  piVar23 = (int *)*piVar19;
                  piVar19 = (int *)piVar19[2];
                } while (*piVar23 != *(int *)(iVar11 + 0xc));
                if (((piVar23 != (int *)0x0) && (cVar7 = FUN_006a1450(), cVar7 == '\0')) &&
                   (iVar21 = piVar23[1] - piVar23[2], 0 < iVar21)) {
                  iVar22 = FUN_0051b230();
                  if (((*(int *)(iVar22 + 0x254) != 8) && (*(int *)(iVar22 + 0x254) != 9)) &&
                     (0 < *(int *)(iVar11 + 0xc))) {
                    FUN_004e9370();
                  }
                  piStackY_28 = (int *)0x6a06e9;
                  cVar7 = FUN_004ed600();
                  if (cVar7 != '\0') {
                    FUN_0051b230();
                    fVar27 = (float10)FUN_004ed6d0();
                    if (iVar9 <= iVar21) {
                      fVar27 = fVar27 * (float10)_DAT_007e34c0;
                    }
                    if ((fVar27 < (float10)fStack00000020) &&
                       (fStack00000020 = (float)fVar27, iStack00000008 = iVar11,
                       fStack00000010 = (float)iVar9, iVar21 < iVar9)) {
                      fStack00000010 = (float)iVar21;
                    }
                  }
                }
              }
            }
          }
LAB_006a0735:
        } while (piStack_8 != (int *)0x0);
        if (iStack00000008 != 0) {
          iVar9 = FUN_00516cc0();
          if ((int)fStack00000010 < iVar9) {
            FUN_00516cc0();
            piStackY_28 = (int *)0x6a076a;
            FUN_006a12c0();
          }
          iVar9 = FUN_00516cc0();
          piVar14[1] = piVar14[1] + iVar9;
          piVar10 = (int *)piVar10[0x24];
          do {
            if (piVar10 == (int *)0x0) goto LAB_006a07ab;
            piVar14 = (int *)*piVar10;
            piVar10 = (int *)piVar10[2];
          } while (*piVar14 != *(int *)(iStack00000008 + 0xc));
          if (piVar14 != (int *)0x0) {
            iVar9 = FUN_00516cc0();
            piVar14[1] = piVar14[1] - iVar9;
          }
LAB_006a07ab:
          piStackY_28 = (int *)0x6a07b7;
          FUN_006a1d30();
        }
      }
    }
  }
  puVar20 = (undefined4 *)piVar10[0x2d];
joined_r0x006a07cf:
  do {
    do {
      if (puVar20 == (undefined4 *)0x0) {
        piStack_4 = (int *)local_c[0x32];
        while (piStack_4 != (int *)0x0) {
          FUN_006a2350();
          FUN_006a2360();
          FUN_006a2350();
          piVar10 = (int *)FUN_00498710();
          cVar7 = FUN_00516310();
          if ((((cVar7 == '\0') && (cVar7 = FUN_00516340(), cVar7 == '\0')) &&
              (cVar7 = FUN_006a1c70(), cVar7 == '\0')) &&
             ((cVar7 = FUN_006a1ce0(), cVar7 == '\0' && (cVar7 = FUN_005177f0(), cVar7 == '\0')))) {
            FUN_00516300();
            iVar9 = FUN_006a0cd0();
            if ((iVar9 != 0) &&
               ((cVar7 = FUN_006a1450(), cVar7 == '\0' &&
                (*(int *)(iVar9 + 4) != *(int *)(iVar9 + 8) &&
                 -1 < *(int *)(iVar9 + 4) - *(int *)(iVar9 + 8))))) {
              piStackY_28 = (int *)0x6a0bb5;
              FUN_006a1950();
              piStackY_28 = (int *)0x6a0bbb;
              FUN_004e9370();
              piStackY_28 = piVar10;
              FUN_006aaff0();
            }
          }
        }
        FUN_006a2080();
        ExceptionList = in_stack_0000186c;
        return;
      }
      puVar17 = (undefined4 *)puVar20[2];
      piVar10 = (int *)*puVar20;
      cVar7 = (**(code **)(*(int *)((int)piVar10 + 0x22e) + 8))();
      puVar20 = puVar17;
    } while ((cVar7 == '\0') || (*(int *)((int)piVar10 + 0x2ae) != 0));
    iVar9 = (**(code **)(piVar10[0x47] + 4))();
  } while ((iVar9 != 0) ||
          ((*(int *)((int)piVar10 + 0x176) != 0 || (*(char *)((int)piVar10 + 0x17b) != '\0'))));
  if (piVar10[3] == piVar10[0xa6]) goto LAB_006a088b;
  if (0 < piVar10[0xa5]) goto code_r0x006a085f;
  goto LAB_006a08b4;
code_r0x006a085f:
  if (piVar10[3] != piVar10[0xa5]) {
    iVar9 = (**(code **)(piVar10[0x47] + 4))();
    if ((iVar9 == 0) && (fVar27 = (float10)FUN_0051a210(), (float10)_DAT_007e3834 <= fVar27)) {
LAB_006a08b4:
      if (0 < piVar10[3]) {
        iVar9 = FUN_004e9370();
        if ((((*(int *)(iVar9 + 0x254) != 8) && (*(int *)(iVar9 + 0x254) != 9)) &&
            (piVar14 = *(int **)(iVar9 + 0x3dc), 0 < (int)piVar14)) &&
           (piStack_8 = piVar14, 0 < (int)piVar14)) {
          puVar17 = (undefined4 *)local_c[0x24];
          do {
            if (puVar17 == (undefined4 *)0x0) {
              iVar9 = 0;
              goto LAB_006a09ea;
            }
            puVar3 = (undefined4 *)*puVar17;
            puVar17 = (undefined4 *)puVar17[2];
          } while ((int *)*puVar3 != piVar14);
          iVar9 = puVar3[1];
          if (0 < iVar9) {
            iVar11 = (**(code **)(*(int *)((int)piVar10 + 0x22) + 4))();
            if (iVar9 < iVar11) {
              FUN_00522770();
              piStackY_28 = (int *)&stack0x0000002c;
              FUN_006a1df0();
              iVar11 = FUN_00428ee0();
              if (iVar11 == 0) {
                iVar11 = 0;
              }
              else {
                iVar11 = iVar11 + -0x14;
              }
              *(int *)(iVar11 + 0x298) = piVar10[0xa6];
              *(char *)(iVar11 + 0x29c) = (char)piVar10[0xa7];
              *(int *)(iVar11 + 0x294) = piVar10[0xa5];
              iVar11 = (**(code **)(*(int *)((int)piVar10 + 0x22) + 4))();
              while (iVar9 < iVar11) {
                in_stack_00000048 = &piStackY_28;
                FUN_00449290();
                FUN_00667670();
                FUN_0045e6f0();
                iVar11 = (**(code **)(*(int *)((int)piVar10 + 0x22) + 4))();
              }
            }
          }
LAB_006a09ea:
          iVar11 = (**(code **)(*(int *)((int)piVar10 + 0x22) + 4))();
          if (iVar11 <= iVar9) {
            piVar14 = (int *)local_c[0x32];
joined_r0x006a0a07:
            if (piVar14 != (int *)0x0) {
              piVar19 = (int *)piVar14[2];
              iVar9 = *piVar14;
              cVar7 = (**(code **)(*(int *)(iVar9 + 0x22e) + 8))();
              piVar14 = piVar19;
              if (((cVar7 != '\0') && (*(int **)(iVar9 + 0xc) == piStack_8)) &&
                 (cVar7 = FUN_00516f90(), cVar7 != '\0')) {
                puVar17 = (undefined4 *)local_c[0x2d];
                if ((undefined4 *)local_c[0x2d] != (undefined4 *)0x0) {
                  do {
                    puVar3 = (undefined4 *)puVar17[2];
                    piVar19 = (int *)*puVar17;
                    if (((piVar19 != piVar10) &&
                        (cVar7 = (**(code **)(*(int *)((int)piVar19 + 0x22e) + 8))(), cVar7 == '\0')
                        ) && ((piVar23 = (int *)FUN_0051c0c0(), piVar23 == piStack_8 ||
                              (*(int *)((int)piVar19 + 0x2ae) == iVar9)))) {
                      iVar11 = piVar19[0xa5];
                      if ((iVar11 < 1) || (piVar19[3] == iVar11)) {
                        iVar11 = piVar19[0xa6];
                      }
                      iVar21 = piVar10[0xa5];
                      if ((iVar21 < 1) || (piVar10[3] == iVar21)) {
                        iVar21 = piVar10[0xa6];
                      }
                      if (iVar11 != iVar21) goto joined_r0x006a0a07;
                    }
                    puVar17 = puVar3;
                    if (puVar3 == (undefined4 *)0x0) break;
                  } while( true );
                }
                piStackY_28 = (int *)0x6a0ae4;
                FUN_004e9370();
                piStackY_28 = piVar10;
                FUN_006aae30();
                goto joined_r0x006a07cf;
              }
              goto joined_r0x006a0a07;
            }
          }
          goto joined_r0x006a07cf;
        }
      }
      piVar10 = local_c;
      (**(code **)(*local_c + 0x1ac))();
      piVar10 = (int *)(**(code **)(*piVar10 + 0xe0))();
      piStackY_28 = (int *)0x6a090c;
      (**(code **)(*piVar10 + 0x1a8))();
      goto joined_r0x006a07cf;
    }
LAB_006a088b:
    piVar10 = local_c;
    (**(code **)(*local_c + 0x1ac))();
    piVar10 = (int *)(**(code **)(*piVar10 + 0xe0))();
    piStackY_28 = (int *)0x6a08af;
    (**(code **)(*piVar10 + 0x1a8))();
  }
  goto joined_r0x006a07cf;
code_r0x0069fc5b:
  iVar9 = piVar14[0xa5];
  if ((0 < iVar9) && (piVar19 = local_c, piVar14[3] == iVar9)) goto joined_r0x0069f6ca;
  iVar11 = *(int *)(*(int *)((int)piVar19 + 10) + 0x120);
  iVar21 = piVar14[3];
  if ((iVar9 < 1) || (iVar21 == iVar9)) {
    iVar9 = *piVar23;
  }
  if (iVar9 < 1) {
LAB_0069fcc4:
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_004e9370();
    if (((*(int *)(iVar9 + 0x254) == 8) || (*(int *)(iVar9 + 0x254) == 9)) ||
       (iVar9 = *(int *)(iVar9 + 0x3dc), iVar9 < 1)) goto LAB_0069fcc4;
  }
  iVar22 = piVar14[0xa5];
  if ((iVar22 < 1) || (piVar14[3] == iVar22)) {
    iVar22 = *piVar23;
  }
  iVar22 = DAT_00ab27b4 + iVar22 * 0x4b2;
  if (((piVar14[3] != 0) &&
      (cVar7 = (**(code **)(*(int *)((int)piVar14 + 0x22e) + 8))(), cVar7 != '\0')) &&
     (iVar18 = FUN_0051b230(), *(int *)(iVar18 + 0x482) == *(int *)(iVar22 + 0x482))) {
    piStackY_28 = piVar14;
    FUN_006aae30();
  }
  cVar7 = (**(code **)(*(int *)((int)piVar14 + 0x22e) + 8))();
  if (cVar7 == '\0') {
    FUN_0051c0c0();
    iVar9 = FUN_004e9370();
    piVar19 = local_c;
    if (((*(int *)(iVar9 + 0x254) == 8) || (*(int *)(iVar9 + 0x254) == 9)) ||
       (iVar11 = FUN_0051c0c0(), piVar19 = local_c, iVar11 < 1)) goto joined_r0x0069f6ca;
    iVar11 = FUN_004e9370();
    piVar19 = local_c;
    if (((*(int *)(iVar11 + 0x254) == 8) || (*(int *)(iVar11 + 0x254) == 9)) ||
       (*(int *)(iVar11 + 0x3dc) < 1)) goto joined_r0x0069f6ca;
    iVar21 = *(int *)(iVar9 + 0x12);
  }
  else if (0 < iVar9) {
    if (0 < iVar21) {
      iVar9 = FUN_004e9370();
      if (((*(int *)(iVar9 + 0x254) != 8) && (*(int *)(iVar9 + 0x254) != 9)) &&
         (0 < *(int *)(iVar9 + 0x3dc))) {
        FUN_004e9370();
        piStackY_28 = (int *)0x69fe30;
        cVar7 = FUN_004ed600();
        if (cVar7 != '\0') goto LAB_006a0116;
      }
    }
    fStack0000001c = 100000.0;
    iStack00000014 = 0;
    cVar7 = FUN_00525660();
    if (cVar7 != '\0') {
LAB_0069f84a:
      (**(code **)(*piVar19 + 0x1ac))();
      iVar9 = *piVar19;
LAB_0069f85b:
      piVar14 = (int *)(**(code **)(iVar9 + 0xe0))();
      piStackY_28 = (int *)0x69f86c;
      (**(code **)(*piVar14 + 0x1a8))();
      piVar19 = local_c;
      goto joined_r0x0069f6ca;
    }
    if (piVar14[3] == 0) {
LAB_0069fe5e:
      (**(code **)(*piVar19 + 0x1ac))();
      piVar14 = (int *)(**(code **)(*piVar19 + 0xe0))();
      piStackY_28 = (int *)0x69fe80;
      (**(code **)(*piVar14 + 0x1a8))();
      piVar19 = local_c;
      goto joined_r0x0069f6ca;
    }
    in_stack_00000038 = (int *)0x0;
    in_stack_0000003c = (int *)0x0;
    in_stack_00000040 = 0;
    in_stack_00000044 = 0;
    in_stack_00000034 = &PTR_LAB_007e5e04;
    iVar9 = FUN_0051b230();
    iVar9 = *(int *)(iVar9 + 0x482);
    piVar19 = operator_new(0xe);
    if (piVar19 == (int *)0x0) {
      piVar19 = (int *)0x0;
    }
    else {
      *piVar19 = iVar9;
      piVar19[1] = 0;
      piVar19[2] = 0;
      *(undefined1 *)(piVar19 + 3) = 0;
    }
    piVar23 = piVar19;
    if (in_stack_00000040 != 0) {
      _DAT_00000008 = piVar19;
      piVar23 = in_stack_00000038;
    }
    in_stack_00000038 = piVar23;
    in_stack_0000003c = piVar19;
    in_stack_00000040 = in_stack_00000040 + 1;
    iVar9 = FUN_0051b230();
    puVar17 = *(undefined4 **)(*(int *)(iVar9 + 0x482) + 0x3e);
    piVar15 = in_stack_00000038;
    piVar23 = local_c;
    while (in_stack_00000038 = piVar15, piVar4 = piVar19, local_c = piVar23,
          puVar17 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar17[2];
      piVar5 = (int *)*puVar17;
      puVar17 = puVar3;
      piVar19 = piVar4;
      piVar15 = in_stack_00000038;
      if ((*(int *)(*piVar5 + 0x4c) == 0) &&
         (cVar7 = FUN_005216c0(), piVar15 = in_stack_00000038, piVar23 = local_c, cVar7 != '\0')) {
        iVar9 = *piVar5;
        in_stack_0000003c = operator_new(0xe);
        if (in_stack_0000003c == (int *)0x0) {
          in_stack_0000003c = (int *)0x0;
        }
        else {
          *in_stack_0000003c = iVar9;
          in_stack_0000003c[1] = (int)piVar4;
          in_stack_0000003c[2] = 0;
          *(undefined1 *)(in_stack_0000003c + 3) = 0;
        }
        iVar9 = in_stack_00000040 + 1;
        bVar25 = in_stack_00000040 != 0;
        piVar19 = in_stack_0000003c;
        piVar15 = in_stack_0000003c;
        in_stack_00000040 = iVar9;
        piVar23 = local_c;
        if (bVar25) {
          piVar4[2] = (int)in_stack_0000003c;
          piVar15 = in_stack_00000038;
        }
      }
    }
    piStack_8 = in_stack_00000038;
    if (in_stack_00000038 != (int *)0x0) {
      do {
        piVar19 = piStack_8 + 2;
        iVar9 = *piStack_8;
        piStack_8 = (int *)*piVar19;
        if (*(int *)(**(int **)(iVar9 + 0x2c) + 0x3d8) != 0) {
          FUN_0044a690();
        }
        piVar19 = *(int **)(iVar9 + 0x2c);
        while (piVar19 != (int *)0x0) {
          piVar15 = (int *)piVar19[2];
          iVar9 = *piVar19;
          piVar19 = piVar15;
          if ((iVar9 != 0) && (0 < *(int *)(iVar9 + 0x12))) {
            iVar22 = FUN_004e9370();
            if ((*(int *)(iVar22 + 0x254) != 8) &&
               ((*(int *)(iVar22 + 0x254) != 9 && (0 < *(int *)(iVar22 + 0x3dc))))) {
              if (0 < *(int *)(iVar9 + 0x12)) {
                FUN_004e9370();
              }
              piStackY_28 = (int *)0x6a004a;
              cVar7 = FUN_004ed600();
              if (cVar7 != '\0') {
                piStackY_28 = (int *)0x6a005b;
                fVar27 = (float10)FUN_0044a9c0();
                fVar1 = (float)fVar27;
                cVar7 = (**(code **)(*(int *)(iVar11 + 0x146) + 0x24))();
                if (cVar7 != '\0') {
                  fVar1 = fVar1 - _DAT_007e3848;
                }
                if (fVar1 < fStack0000001c) {
                  iStack00000014 = *(int *)(iVar9 + 0x12);
                  fStack0000001c = fVar1;
                }
              }
            }
          }
        }
      } while (piStack_8 != (int *)0x0);
      if (0 < iStack00000014) {
        piStackY_28 = (int *)0x6a00bc;
        FUN_004e9370();
        piStackY_28 = piVar14;
        iVar9 = FUN_006aae30();
        iVar21 = iStack00000014;
        if (iVar9 != 0) {
          (**(code **)(*piVar23 + 0x1ac))();
          piVar14 = (int *)(**(code **)(*piVar23 + 0xe0))();
          piStackY_28 = (int *)0x6a0192;
          (**(code **)(*piVar14 + 0x1a8))();
          in_stack_00000034 = &PTR_LAB_007e5e04;
          piVar14 = in_stack_00000038;
          while (piVar14 != (int *)0x0) {
            piVar14 = (int *)piVar14[2];
            FUN_00796cd8();
          }
          in_stack_00000038 = (int *)0x0;
          in_stack_0000003c = (int *)0x0;
          in_stack_00000040 = 0;
          piVar19 = local_c;
          goto joined_r0x0069f6ca;
        }
      }
    }
    in_stack_00000034 = &PTR_LAB_007e5e04;
    piVar19 = in_stack_00000038;
    while (piVar19 != (int *)0x0) {
      piVar19 = (int *)piVar19[2];
      FUN_00796cd8();
    }
    in_stack_00000038 = (int *)0x0;
    in_stack_0000003c = (int *)0x0;
    in_stack_00000040 = 0;
  }
LAB_006a0116:
  if (0 < iVar21) {
    iVar9 = FUN_004e9370();
    if ((((*(int *)(iVar9 + 0x254) != 8) && (*(int *)(iVar9 + 0x254) != 9)) &&
        (iVar9 = *(int *)(iVar9 + 0x3dc), 0 < iVar9)) && (0 < iVar9)) {
      bVar25 = false;
      piVar19 = (int *)local_c[0x24];
      if ((int *)local_c[0x24] != (int *)0x0) {
        do {
          piVar23 = (int *)piVar19[2];
          if (*(int *)*piVar19 == iVar9) {
            piVar19 = (int *)*piVar19 + 2;
            iVar11 = (**(code **)(*(int *)((int)piVar14 + 0x22) + 4))();
            *piVar19 = *piVar19 + iVar11;
            bVar25 = true;
          }
          piVar19 = piVar23;
        } while (piVar23 != (int *)0x0);
        piVar19 = local_c;
        if (bVar25) goto joined_r0x0069f6ca;
      }
      piVar23 = operator_new(0xc);
      piVar19 = (int *)0x0;
      if (piVar23 != (int *)0x0) {
        *piVar23 = 0;
        piVar23[1] = 0;
        piVar23[2] = 0;
        piVar19 = piVar23;
      }
      *piVar19 = iVar9;
      iVar9 = (**(code **)(*(int *)((int)piVar14 + 0x22) + 4))();
      piVar23 = local_c;
      piVar19[2] = iVar9;
      iVar9 = local_c[0x25];
      piVar14 = local_c + 0x25;
      puVar17 = operator_new(0xe);
      if (puVar17 == (undefined4 *)0x0) {
        puVar17 = (undefined4 *)0x0;
      }
      else {
        *puVar17 = piVar19;
        puVar17[1] = iVar9;
        puVar17[2] = 0;
        *(undefined1 *)(puVar17 + 3) = 0;
      }
      *piVar14 = (int)puVar17;
      iVar11 = piVar23[0x26];
      piVar23[0x26] = iVar11 + 1;
      piVar19 = local_c;
      if (iVar11 == 0) {
        piVar23[0x24] = *piVar14;
      }
      else {
        *(int *)(iVar9 + 8) = *piVar14;
      }
      goto joined_r0x0069f6ca;
    }
  }
  piVar14 = local_c;
  (**(code **)(*local_c + 0x1ac))();
  piVar14 = (int *)(**(code **)(*piVar14 + 0xe0))();
  piStackY_28 = (int *)0x6a016b;
  (**(code **)(*piVar14 + 0x1a8))();
  piVar19 = local_c;
  goto joined_r0x0069f6ca;
}


