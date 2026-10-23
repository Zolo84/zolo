// FUN_006630a0 @ 6630a0 size=2804

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006630a0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *extraout_ECX;
  int *piVar11;
  void *pvVar12;
  float *pfVar13;
  bool bVar14;
  float10 fVar15;
  float *pfStack00000004;
  int *piStack0000000c;
  int *piStack00000010;
  int iStack00000014;
  undefined4 *puStack0000002c;
  undefined4 *puStack00000030;
  int iStack00000034;
  float fStack0000003c;
  void *in_stack_000017f8;
  void *pvStack_14;
  float *pfStack_10;
  int *piStack_c;
  int *local_8;
  
  piStack_c = (int *)0xffffffff;
  pfStack_10 = (float *)&LAB_007d3996;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_007a69e0();
  local_8 = extraout_ECX;
  cVar5 = FUN_0044beb0();
  if (cVar5 == '\0') {
    iVar6 = (**(code **)(*(int *)((int)extraout_ECX + 0xb6) + 4))();
    if (1 < iVar6) {
      do {
        (**(code **)(*(int *)((int)extraout_ECX + 0xb6) + 0x18))();
        FUN_00459df0();
        iVar6 = (**(code **)(*(int *)((int)extraout_ECX + 0xb6) + 4))();
      } while (1 < iVar6);
      ExceptionList = in_stack_000017f8;
      return;
    }
  }
  else {
    iVar6 = (**(code **)(*(int *)((int)extraout_ECX + 0xde) + 4))();
    iVar7 = (**(code **)(*(int *)((int)extraout_ECX + 0xb6) + 4))();
    if (iVar7 < iVar6) {
      for (pvStack_14 = *(void **)((int)extraout_ECX + 0xe2); pvStack_14 != (void *)0x0;
          pvStack_14 = *(void **)((int)pvStack_14 + 8)) {
        FUN_00428eb0();
        FUN_00446d10();
        FUN_00526b00();
        FUN_00449290();
        FUN_00667670();
        FUN_00462100();
        piVar8 = (int *)FUN_004e9370();
        iVar6 = *(int *)((int)extraout_ECX + 10);
        (**(code **)(*piVar8 + 0xc))();
        (**(code **)(*(int *)(iVar6 + 0xe) + 0xc))();
        FUN_00458570();
        iVar6 = FUN_00428ee0();
        if (iVar6 == 0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)(iVar6 + -0x14);
        }
        (**(code **)(*extraout_ECX + 0x1c8))();
        FUN_00528280();
        FUN_00528280();
        FUN_00528280();
        FUN_00528280();
        FUN_00528270();
        iVar6 = *(int *)((int)extraout_ECX + 10);
        (**(code **)(*piVar8 + 0xc))();
        (**(code **)(*(int *)(iVar6 + 0xe) + 0xc))();
        FUN_00458570();
      }
    }
    (**(code **)(*(int *)((int)extraout_ECX + 0xb6) + 4))();
    puVar9 = (undefined4 *)&stack0x0000133c;
    iVar6 = 0x98;
    do {
      *puVar9 = 0;
      puVar9 = puVar9 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    piVar8 = *(int **)(*(int *)(*(int *)((int)extraout_ECX + 10) + 0x120) + 0x178);
    while (piVar8 != (int *)0x0) {
      piVar1 = (int *)piVar8[2];
      *(undefined4 *)(&stack0x0000050c + *piVar8 * 8) = 0xbf800000;
      piVar8 = piVar1;
    }
    pfStack_10 = (float *)&stack0x0000133c;
    piStack_c = (int *)0x1c6;
    pfStack00000004 = (float *)&DAT_008ec358;
    do {
      pfStack_10[-1] = (float)piStack_c;
      if (*pfStack_10 == _DAT_007e3380) {
        pvStack_14 = (void *)0x0;
        piVar8 = (int *)*pfStack00000004;
        if ((int *)*pfStack00000004 != (int *)0x0) {
          do {
            piVar1 = (int *)piVar8[2];
            iVar6 = *piVar8;
            if (*(char *)(iVar6 + 0x180) == '\0') {
              iVar7 = *(int *)(iVar6 + 0x14a);
              while (iVar7 != 0) {
                iVar7 = *(int *)(iVar7 + 8);
                cVar5 = FUN_0044b280();
                if (cVar5 != '\0') {
                  pvStack_14 = (void *)((float)pvStack_14 + _DAT_007e5e34);
                }
              }
              piVar8 = *(int **)(*(int *)(iVar6 + 0x1c2) + 4);
              while (piVar8 != (int *)0x0) {
                piVar11 = (int *)piVar8[2];
                iVar6 = *piVar8;
                piVar8 = piVar11;
                if (*(int *)(iVar6 + 0x264) == 0x18) {
                  FUN_006a9d50();
                  cVar5 = FUN_0044b280();
                  if (cVar5 != '\0') {
                    iVar6 = (**(code **)(*(int *)(iVar6 + 0x22) + 4))();
                    pvStack_14 = (void *)((float)pvStack_14 - (float)iVar6 * _DAT_007e68d8);
                  }
                }
              }
            }
            piVar8 = piVar1;
          } while (piVar1 != (int *)0x0);
          if (_DAT_007e3380 < (float)pvStack_14) {
            iVar6 = _rand();
            iVar7 = __ftol();
            pvStack_14 = (void *)((float)(iVar6 % (iVar7 + 1)) + (float)pvStack_14);
          }
        }
        *pfStack_10 = (float)pvStack_14;
      }
      pfStack00000004 = (float *)((int)pfStack00000004 + 0x12);
      piStack_c = (int *)((int)piStack_c + 1);
      pfStack_10 = pfStack_10 + 2;
    } while ((int)pfStack00000004 < 0x8ece08);
    piStack0000000c = (int *)0x0;
    piStack00000010 = (int *)0x0;
    iStack00000014 = 0;
    piVar8 = *(int **)((int)extraout_ECX + 0xba);
    while (piVar11 = piStack00000010, piVar1 = piStack0000000c, piVar8 != (int *)0x0) {
      piVar2 = (int *)piVar8[2];
      piVar3 = (int *)*piVar8;
      iVar6 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
      piVar8 = piVar2;
      piStack0000000c = piVar1;
      piStack00000010 = piVar11;
      if (iVar6 != 0) {
        iVar6 = FUN_004e9370();
        iVar6 = *(int *)(iVar6 + 0x288);
        (**(code **)(*piVar3 + 0x14))();
        cVar5 = FUN_00664680();
        if (cVar5 == '\0') {
          if (((piVar3[0x99] != 0x17) ||
              (0xd < (((((int)*(short *)(DAT_00893530 + 0x18) - (int)*(short *)((int)piVar3 + 0x276)
                        ) * 0xc - (int)(char)piVar3[0x9d]) + (int)*(char *)(DAT_00893530 + 0x16)) *
                      0x1e - (int)*(char *)((int)piVar3 + 0x273)) +
                     (int)*(char *)(DAT_00893530 + 0x15))) ||
             (*(float *)(&stack0x0000050c + iVar6 * 8) <= _DAT_007e3380)) {
            piStack00000010 = operator_new(0xe);
            if (piStack00000010 == (int *)0x0) {
              piStack00000010 = (int *)0x0;
            }
            else {
              *piStack00000010 = (int)piVar3;
              piStack00000010[1] = (int)piVar11;
              piStack00000010[2] = 0;
              *(undefined1 *)(piStack00000010 + 3) = 0;
            }
            iVar6 = iStack00000014 + 1;
            bVar14 = iStack00000014 != 0;
            piStack0000000c = piStack00000010;
            iStack00000014 = iVar6;
            if (bVar14) {
              piVar11[2] = (int)piStack00000010;
              piStack0000000c = piVar1;
            }
          }
          else {
            *(undefined4 *)(&stack0x00000508 + iVar6 * 8) = 0x1c5;
          }
        }
        else {
          iVar6 = FUN_0051b230();
          if ((*(int *)(iVar6 + 0x254) == 8) || (*(int *)(iVar6 + 0x254) == 9)) {
            if (piVar3[0x99] == 0x17) {
              FUN_0050bca0();
            }
            cVar5 = (**(code **)(*(int *)((int)piVar3 + 0x22e) + 8))();
            if (cVar5 != '\0') {
              (**(code **)(*piVar3 + 0x14))();
              iVar6 = FUN_00518b70();
              if (iVar6 != 0) {
                (**(code **)(*piVar3 + 0x14))();
                FUN_00518b70();
                FUN_004e9370();
                FUN_006aaff0();
              }
            }
          }
        }
      }
    }
    pvVar12 = (void *)0x0;
    pvStack_14 = (void *)0x0;
    if (0 < iStack00000014) {
      piVar8 = (int *)&stack0x00000048;
      piVar11 = (int *)&stack0x00001338;
      iVar6 = 0x98;
      do {
        if ((_DAT_007e3380 < (float)piVar11[1]) && (*piVar11 != 0x1c5)) {
          *piVar8 = *piVar11;
          piVar8[1] = piVar11[1];
          pvVar12 = (void *)((int)pvVar12 + 1);
          piVar8 = piVar8 + 2;
        }
        piVar11 = piVar11 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pvStack_14 = pvVar12;
      if (0 < (int)pvVar12) {
        FUN_007a78e3();
        piVar8 = extraout_ECX;
        piVar11 = piVar1;
        if (piVar1 != (int *)0x0) {
          do {
            piStack_c = (int *)piVar11[2];
            piVar2 = (int *)*piVar11;
            piVar11 = piStack_c;
            if (((piVar2[0x99] != 2) &&
                (iVar6 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 4))(), iVar6 != 0)) &&
               (pfStack_10 = (float *)0x0, 0 < (int)pvVar12)) {
              pfVar13 = (float *)&stack0x0000004c;
              do {
                if (((_DAT_007e3380 < *pfVar13) && (0x1c5 < (int)pfVar13[-1])) &&
                   (iVar6 = (**(code **)(*(int *)((int)&DAT_008ea368 + (int)pfVar13[-1] * 0x12) + 4)
                            )(), iVar6 != 0)) {
                  (**(code **)(*piVar2 + 0x14))();
                  cVar5 = FUN_00518d60();
                  if (cVar5 != '\0') {
                    iVar6 = *(int *)((int)local_8 + 10);
                    FUN_004c7bfa();
                    (**(code **)(*(int *)((int)piVar2 + 0x22) + 4))();
                    (**(code **)(*piVar2 + 0xc))();
                    (**(code **)(*(int *)(iVar6 + 0xe) + 0xc))();
                    FUN_00458570();
                    FUN_0050b600();
                    *(undefined4 *)(&stack0x00000048 + (int)pfStack_10 * 8) = 0x1c5;
                    (*(code *)PTR_FUN_007e4cac)();
                    (*(code *)PTR_FUN_007e4ca0)();
                    pvVar12 = pvStack_14;
                    piVar8 = local_8;
                    piVar11 = piStack_c;
                    break;
                  }
                }
                pfStack_10 = (float *)((int)pfStack_10 + 1);
                pfVar13 = pfVar13 + 2;
                pvVar12 = pvStack_14;
                piVar8 = local_8;
                piVar11 = piStack_c;
              } while ((int)pfStack_10 < (int)pvStack_14);
            }
          } while (piVar11 != (int *)0x0);
          while (piVar1 != (int *)0x0) {
            piStack_c = (int *)piVar1[2];
            piVar11 = (int *)*piVar1;
            piVar1 = piStack_c;
            if ((piVar11[0x99] != 2) &&
               (iVar6 = (**(code **)(*(int *)((int)piVar11 + 0x22) + 4))(), iVar6 != 0)) {
              puStack0000002c = (undefined4 *)0x0;
              puStack00000030 = (undefined4 *)0x0;
              iStack00000034 = 0;
              iVar6 = *(int *)((int)piVar8 + 0xe2);
              if (iVar6 != 0) {
                do {
                  iVar6 = *(int *)(iVar6 + 8);
                  iVar7 = FUN_004e9370();
                  cVar5 = FUN_00522bc0();
                  puVar9 = puStack0000002c;
                  puVar10 = puStack00000030;
                  if (cVar5 != '\0') {
                    uVar4 = *(undefined4 *)(iVar7 + 0x12);
                    puVar10 = operator_new(0xe);
                    if (puVar10 == (undefined4 *)0x0) {
                      puVar10 = (undefined4 *)0x0;
                    }
                    else {
                      *puVar10 = uVar4;
                      puVar10[1] = puStack00000030;
                      puVar10[2] = 0;
                      *(undefined1 *)(puVar10 + 3) = 0;
                    }
                    iVar7 = iStack00000034 + 1;
                    bVar14 = iStack00000034 != 0;
                    piVar8 = local_8;
                    puVar9 = puVar10;
                    iStack00000034 = iVar7;
                    if (bVar14) {
                      puStack00000030[2] = puVar10;
                      puVar9 = puStack0000002c;
                    }
                  }
                  puStack00000030 = puVar10;
                  puStack0000002c = puVar9;
                } while (iVar6 != 0);
                if (0 < iStack00000034) {
                  pfStack_10 = (float *)0x0;
                  if (0 < (int)pvStack_14) {
                    pfStack00000004 = (float *)&stack0x0000004c;
                    do {
                      if (((_DAT_007e3380 < *pfStack00000004) && (0x1c5 < (int)pfStack00000004[-1]))
                         && (iVar6 = (**(code **)(*(int *)((int)&DAT_008ea368 +
                                                          (int)pfStack00000004[-1] * 0x12) + 4))(),
                            iVar6 != 0)) {
                        iVar6 = 0;
                        fStack0000003c = 999999.0;
                        puVar9 = puStack0000002c;
                        while (puVar9 != (undefined4 *)0x0) {
                          puVar9 = (undefined4 *)puVar9[2];
                          iVar7 = FUN_004e9370();
                          fVar15 = (float10)FUN_004ed6d0();
                          if (fVar15 < (float10)fStack0000003c) {
                            fStack0000003c = (float)fVar15;
                            iVar6 = *(int *)(iVar7 + 0x12);
                          }
                        }
                        if (iVar6 == *(int *)((int)piVar11 + 0x212)) {
                          iVar6 = *(int *)((int)local_8 + 10);
                          FUN_004c7bfa();
                          (**(code **)(*(int *)((int)piVar11 + 0x22) + 4))();
                          (**(code **)(*piVar11 + 0xc))();
                          (**(code **)(*(int *)(iVar6 + 0xe) + 0xc))();
                          FUN_00458570();
                        }
                        else {
                          if (iVar6 < 1) goto LAB_00663970;
                          piVar8 = (int *)FUN_004e9370();
                          iVar6 = *(int *)((int)local_8 + 10);
                          FUN_004c7bfa();
                          (**(code **)(*piVar8 + 0xc))();
                          (**(code **)(*(int *)((int)piVar11 + 0x22) + 4))();
                          (**(code **)(*piVar11 + 0xc))();
                          (**(code **)(*(int *)(iVar6 + 0xe) + 0xc))();
                          FUN_00458570();
                        }
                        FUN_0050b600();
                        *(undefined4 *)(&stack0x00000048 + (int)pfStack_10 * 8) = 0x1c5;
                        (*(code *)PTR_FUN_007e4cac)();
                        (*(code *)PTR_FUN_007e4ca0)();
                        break;
                      }
LAB_00663970:
                      pfStack_10 = (float *)((int)pfStack_10 + 1);
                      pfStack00000004 = pfStack00000004 + 2;
                    } while ((int)pfStack_10 < (int)pvStack_14);
                  }
                  (*(code *)PTR_FUN_007e379c)();
                  piVar8 = local_8;
                }
              }
              while (piVar1 = piStack_c, puStack0000002c != (undefined4 *)0x0) {
                puStack0000002c = (undefined4 *)puStack0000002c[2];
                FUN_00796cd8();
              }
            }
          }
        }
        (*(code *)PTR_FUN_007e4c94)();
      }
    }
    FUN_00527230();
  }
  ExceptionList = in_stack_000017f8;
  return;
}


