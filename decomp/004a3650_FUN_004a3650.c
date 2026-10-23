// FUN_004a3650 @ 4a3650 size=2310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a3650(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  bool bVar16;
  bool bVar17;
  int iStack_40;
  float fStack_38;
  int iStack_34;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined **ppuStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bdeb0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar6 = (**(code **)(*param_1 + 0x1c))();
  iStack_34 = 1;
  do {
    if (((((&DAT_0089cad8)[iStack_34] == 0) && ((&DAT_00d68601)[iStack_34 * 0xa8] != '\0')) &&
        (cVar7 = FUN_0042dd70(DAT_00893530 + 0x14), cVar7 == '\0')) &&
       (cVar7 = FUN_0042ddd0(DAT_00893530 + 0x14), cVar7 != '\0')) {
      if (iStack_34 != *(int *)((int)param_1 + 6)) {
        if ((&DAT_0089cad8)[iStack_34] == 0) {
          iVar8 = *(int *)(&DAT_00d68602 + iStack_34 * 0xa8);
        }
        else {
          iVar8 = *(int *)((&DAT_0089cad8)[iStack_34] + 0x1185a);
        }
        if (((iVar8 != 0) &&
            ((iVar8 == *(int *)((int)param_1 + 6) || (iVar8 == *(int *)((int)param_1 + 0x1185a)))))
           || (*(int *)((int)param_1 + 0x1185a) == iStack_34)) goto LAB_004a3bef;
      }
      iVar8 = (**(code **)(*(int *)(&DAT_00d6861c + iStack_34 * 0xa8) + 4))();
      if (iVar8 < 1) {
LAB_004a376f:
        iVar8 = (**(code **)(*(int *)(&DAT_00d6862e + iStack_34 * 0xa8) + 4))();
        if (iVar8 < 1) {
LAB_004a37a2:
          iVar8 = (**(code **)(*(int *)(&DAT_00d6860a + iStack_34 * 0xa8) + 4))();
          if (0 < iVar8) {
            piVar15 = *(int **)(&DAT_00d6860e + iStack_34 * 0xa8);
            do {
              if (piVar15 == (int *)0x0) goto LAB_004a3bef;
              iVar8 = *piVar15;
              piVar15 = (int *)piVar15[2];
            } while (iVar8 != *(int *)((int)param_1 + 6));
          }
          bVar17 = true;
          iStack_40 = 0;
          uStack_28 = *(undefined4 *)(DAT_00893530 + 0x14);
          uStack_24 = *(undefined2 *)(DAT_00893530 + 0x18);
          FUN_0042dc20(-DAT_00877650);
          if (*(int *)(&DAT_00d685f8 + iStack_34 * 0xa8) == -0x40800000) {
            if (*(int *)(&DAT_00d685f0 + iStack_34 * 0xa8) < 1) {
LAB_004a3903:
              bVar17 = true;
              if (*(int *)(&DAT_00d685f4 + iStack_34 * 0xa8) < 1) {
LAB_004a39f9:
                iVar8 = param_2[2];
                piVar15 = operator_new(0xe);
                if (piVar15 == (int *)0x0) {
                  piVar15 = (int *)0x0;
                }
                else {
                  piVar15[1] = iVar8;
                  *piVar15 = iStack_34;
                  piVar15[2] = 0;
                  *(undefined1 *)(piVar15 + 3) = 0;
                }
                iVar9 = param_2[3];
                param_2[2] = (int)piVar15;
                param_2[3] = iVar9 + 1;
                if (iVar9 == 0) {
LAB_004a3bec:
                  param_2[1] = (int)piVar15;
                }
                else {
                  *(int **)(iVar8 + 8) = piVar15;
                }
              }
              else {
                iStack_40 = 0;
                piVar15 = *(int **)(&DAT_00d685d0 + iStack_34 * 0xa8);
                do {
                  if (piVar15 == (int *)0x0) {
                    if ((bVar17) && (*(int *)(&DAT_00d685f4 + iStack_34 * 0xa8) <= iStack_40))
                    goto LAB_004a39f9;
                    break;
                  }
                  piVar2 = (int *)piVar15[2];
                  iVar9 = *(int *)(DAT_00ab27b4 + 0x12 + *piVar15 * 0x4b2);
                  iVar8 = DAT_00ab27b4 + *piVar15 * 0x4b2;
                  if ((((*(int *)((int)param_1 + 0x117de) != iVar9) &&
                       (iVar10 = FUN_0044e1b0(), iVar10 != iVar9)) &&
                      (*(int **)(iVar8 + 0x3d8) == param_1)) &&
                     ((cVar7 = FUN_004e8ab0(param_1), cVar7 == '\0' &&
                      (cVar7 = FUN_004e8ad0(param_1), cVar7 == '\0')))) {
                    if (cVar6 != '\0') {
                      cVar7 = FUN_0042dd70(&uStack_28);
                      if (cVar7 != '\0') {
                        bVar17 = false;
                      }
                      if ((DAT_0087764c == '\0') && (cVar7 = FUN_004ca33c(), cVar7 != '\0')) {
                        bVar17 = false;
                      }
                    }
                    iStack_40 = iStack_40 + 1;
                  }
                  piVar15 = piVar2;
                } while (bVar17);
              }
            }
            else {
              piVar15 = (int *)(&DAT_00d685be)[iStack_34 * 0x2a];
              do {
                if (piVar15 == (int *)0x0) {
                  if ((bVar17) && (*(int *)(&DAT_00d685f0 + iStack_34 * 0xa8) <= iStack_40))
                  goto LAB_004a3903;
                  break;
                }
                piVar2 = (int *)piVar15[2];
                iVar9 = *(int *)(DAT_00ab27b4 + 0x12 + *piVar15 * 0x4b2);
                iVar8 = DAT_00ab27b4 + *piVar15 * 0x4b2;
                if ((((*(int *)((int)param_1 + 0x117de) != iVar9) &&
                     (iVar10 = FUN_0044e1b0(), iVar10 != iVar9)) &&
                    (*(int **)(iVar8 + 0x3d8) == param_1)) &&
                   ((cVar7 = FUN_004e8ab0(param_1), cVar7 == '\0' &&
                    (cVar7 = FUN_004e8ad0(param_1), cVar7 == '\0')))) {
                  if (cVar6 != '\0') {
                    cVar7 = FUN_0042dd70(&uStack_28);
                    if (cVar7 != '\0') {
                      bVar17 = false;
                    }
                    if ((DAT_0087764c == '\0') && (cVar7 = FUN_004ca33c(), cVar7 != '\0')) {
                      bVar17 = false;
                    }
                  }
                  iStack_40 = iStack_40 + 1;
                }
                piVar15 = piVar2;
              } while (bVar17);
            }
          }
          else {
            iVar8 = (**(code **)(*(int *)(iStack_34 * 0xa8 + 0xd685ba) + 4))();
            if ((float)iVar8 == _DAT_007e3380) {
              iVar8 = (**(code **)(*(int *)(iStack_34 * 0xa8 + 0xd685cc) + 4))();
              if (0 < iVar8) {
                (**(code **)(*(int *)(iStack_34 * 0xa8 + 0xd685cc) + 4))();
              }
            }
            else {
              fStack_38 = 0.0;
              iStack_40 = 0;
              piVar15 = (int *)(&DAT_00d685be)[iStack_34 * 0x2a];
              do {
                if (piVar15 == (int *)0x0) break;
                piVar2 = (int *)piVar15[2];
                iVar10 = *(int *)(DAT_00ab27b4 + 0x12 + *piVar15 * 0x4b2);
                iVar9 = DAT_00ab27b4 + *piVar15 * 0x4b2;
                if (((*(int *)((int)param_1 + 0x117de) != iVar10) &&
                    (iVar11 = FUN_0044e1b0(), iVar11 != iVar10)) &&
                   ((*(int **)(iVar9 + 0x3d8) == param_1 &&
                    ((cVar7 = FUN_004e8ab0(param_1), cVar7 == '\0' &&
                     (cVar7 = FUN_004e8ad0(param_1), cVar7 == '\0')))))) {
                  if (cVar6 != '\0') {
                    cVar7 = FUN_0042dd70(&uStack_28);
                    if (cVar7 != '\0') {
                      bVar17 = false;
                    }
                    if ((DAT_0087764c == '\0') && (cVar7 = FUN_004ca33c(), cVar7 != '\0')) {
                      bVar17 = false;
                    }
                  }
                  if (*(int *)(iVar9 + 0x12) == *(int *)(&DAT_00d685fc + iStack_34 * 0xa8)) {
                    fStack_38 = 0.25;
                  }
                  iStack_40 = iStack_40 + 1;
                }
                piVar15 = piVar2;
              } while (bVar17);
              if (0 < iStack_40) {
                fStack_38 = (float)iStack_40 / (float)iVar8 + fStack_38;
              }
              if ((bVar17) && (*(float *)(&DAT_00d685f8 + iStack_34 * 0xa8) <= fStack_38)) {
                iVar8 = param_2[2];
                piVar15 = operator_new(0xe);
                if (piVar15 == (int *)0x0) {
                  piVar15 = (int *)0x0;
                }
                else {
                  piVar15[1] = iVar8;
                  *piVar15 = iStack_34;
                  piVar15[2] = 0;
                  *(undefined1 *)(piVar15 + 3) = 0;
                }
                iVar9 = param_2[3];
                param_2[2] = (int)piVar15;
                param_2[3] = iVar9 + 1;
                if (iVar9 == 0) goto LAB_004a3bec;
                *(int **)(iVar8 + 8) = piVar15;
              }
            }
          }
        }
        else {
          piVar15 = *(int **)(&DAT_00d68632 + iStack_34 * 0xa8);
          do {
            if (piVar15 == (int *)0x0) goto LAB_004a37a2;
            iVar8 = *piVar15;
            piVar15 = (int *)piVar15[2];
          } while (iVar8 != *(int *)((int)param_1 + 6));
        }
      }
      else {
        piVar15 = *(int **)(&DAT_00d68620 + iStack_34 * 0xa8);
        do {
          if (piVar15 == (int *)0x0) goto LAB_004a376f;
          iVar8 = *piVar15;
          piVar15 = (int *)piVar15[2];
        } while ((&DAT_0089cad8)[iVar8] == 0);
      }
    }
LAB_004a3bef:
    iStack_34 = iStack_34 + 1;
  } while (iStack_34 < 0x158);
  bVar17 = true;
  iVar8 = __ftol();
  if (iVar8 == 1) {
    bVar17 = false;
  }
  else {
    if (iVar8 == 2) goto LAB_004a3d33;
    if (iVar8 == 3) {
      ExceptionList = pvStack_c;
      return;
    }
  }
  piStack_1c = (int *)0x0;
  piStack_18 = (int *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  ppuStack_20 = &PTR_FUN_007e5258;
  uStack_4 = 0;
  piVar2 = (int *)0x0;
  piVar15 = (int *)param_2[1];
  piVar1 = piStack_1c;
  while (piStack_1c = piVar1, piVar3 = piVar2, piVar2 = piStack_1c, piVar15 != (int *)0x0) {
    piVar1 = (int *)piVar15[2];
    iVar8 = *piVar15;
    iVar9 = FUN_00763e40(*(undefined4 *)(&DAT_00d68606 + iVar8 * 0xa8));
    piVar2 = piVar3;
    piVar15 = piVar1;
    piVar1 = piStack_1c;
    if ((iVar9 != 2) && (iVar10 = FUN_0044d8a0(), piVar1 = piStack_1c, iVar9 != iVar10)) {
      piStack_18 = operator_new(0xe);
      if (piStack_18 == (int *)0x0) {
        piStack_18 = (int *)0x0;
      }
      else {
        *piStack_18 = iVar8;
        piStack_18[1] = (int)piVar3;
        piStack_18[2] = 0;
        *(undefined1 *)(piStack_18 + 3) = 0;
      }
      iVar8 = iStack_14 + 1;
      bVar16 = iStack_14 != 0;
      piVar2 = piStack_18;
      piVar1 = piStack_18;
      iStack_14 = iVar8;
      if (bVar16) {
        piVar3[2] = (int)piStack_18;
        piVar1 = piStack_1c;
      }
    }
  }
  while (piVar2 != (int *)0x0) {
    piVar15 = (int *)piVar2[2];
    (**(code **)(*param_2 + 0x18))(*piVar2);
    piVar2 = piVar15;
  }
  uStack_4 = 0xffffffff;
  piVar15 = piStack_1c;
  while (piVar15 != (int *)0x0) {
    piVar2 = (int *)piVar15[2];
    FUN_00796cd8(piVar15);
    piVar15 = piVar2;
  }
  if (!bVar17) {
    ExceptionList = pvStack_c;
    return;
  }
LAB_004a3d33:
  piVar15 = (int *)0x0;
  piStack_1c = (int *)0x0;
  piStack_18 = (int *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  ppuStack_20 = &PTR_FUN_007e5258;
  uStack_4 = 1;
  piVar2 = (int *)param_2[1];
  do {
    if (piVar2 == (int *)0x0) {
      while (piVar15 != (int *)0x0) {
        piVar2 = (int *)piVar15[2];
        (**(code **)(*param_2 + 0x18))(*piVar15);
        piVar15 = piVar2;
      }
      ppuStack_20 = &PTR_LAB_007e3ff0;
      piVar15 = piStack_1c;
      while (piVar15 != (int *)0x0) {
        piVar2 = (int *)piVar15[2];
        FUN_00796cd8(piVar15);
        piVar15 = piVar2;
      }
      ExceptionList = pvStack_c;
      return;
    }
    piVar1 = (int *)param_2[1];
    piVar3 = (int *)piVar2[2];
    iVar8 = *piVar2;
    piVar2 = piVar15;
    piVar5 = piStack_1c;
joined_r0x004a3d96:
    piStack_1c = piVar5;
    piVar15 = piVar2;
    piVar2 = piVar3;
  } while (piVar1 == (int *)0x0);
  iVar9 = *piVar1;
  piVar1 = (int *)piVar1[2];
  piVar2 = piStack_1c;
  piVar5 = piStack_1c;
  if ((iVar8 != iVar9) &&
     (((iVar8 == *(int *)(&DAT_00d68602 + iVar9 * 0xa8) ||
       (iVar10 = *(int *)(&DAT_00d68602 + iVar8 * 0xa8), iVar9 == iVar10)) ||
      ((iVar10 == *(int *)(&DAT_00d68602 + iVar9 * 0xa8) && (iVar10 != 0)))))) {
    for (; piVar4 = piStack_1c, piVar15 != (int *)0x0; piVar15 = (int *)piVar15[2]) {
      cVar6 = (*(code *)ppuStack_20[3])(*piVar15,iVar9);
      if (cVar6 != '\0') {
        piVar4 = piStack_1c;
        piVar2 = piStack_1c;
        piVar5 = piStack_1c;
        if (piVar15 != (int *)0x0) goto joined_r0x004a3d96;
        break;
      }
    }
    do {
      if (piVar4 == (int *)0x0) goto LAB_004a3e40;
      cVar6 = (*(code *)ppuStack_20[3])(*piVar4,iVar8);
      if (cVar6 != '\0') {
        piVar2 = piStack_1c;
        piVar5 = piStack_1c;
        if (piVar4 != (int *)0x0) break;
        goto LAB_004a3e40;
      }
      piVar4 = (int *)piVar4[2];
    } while( true );
  }
  goto joined_r0x004a3d96;
LAB_004a3e40:
  iVar11 = FUN_0044d810();
  iVar10 = *(int *)(&DAT_00d68606 + iVar9 * 0xa8);
  uVar13 = iVar11 - iVar10 >> 0x1f;
  iVar12 = FUN_0044d810();
  piVar15 = piStack_18;
  uVar14 = iVar12 - *(int *)(&DAT_00d68606 + iVar8 * 0xa8) >> 0x1f;
  if ((int)((iVar11 - iVar10 ^ uVar13) - uVar13) <
      (int)((iVar12 - *(int *)(&DAT_00d68606 + iVar8 * 0xa8) ^ uVar14) - uVar14)) {
    piStack_18 = operator_new(0xe);
    if (piStack_18 == (int *)0x0) {
      piStack_18 = (int *)0x0;
    }
    else {
      *piStack_18 = iVar8;
      piStack_18[1] = (int)piVar15;
      piStack_18[2] = 0;
      *(undefined1 *)(piStack_18 + 3) = 0;
    }
    iVar9 = iStack_14 + 1;
    bVar17 = iStack_14 != 0;
    piVar2 = piStack_18;
    piVar5 = piStack_18;
    iStack_14 = iVar9;
    if (bVar17) {
      piVar15[2] = (int)piStack_18;
      piVar2 = piStack_1c;
      piVar5 = piStack_1c;
    }
  }
  else {
    piStack_18 = operator_new(0xe);
    if (piStack_18 == (int *)0x0) {
      piStack_18 = (int *)0x0;
    }
    else {
      *piStack_18 = iVar9;
      piStack_18[1] = (int)piVar15;
      piStack_18[2] = 0;
      *(undefined1 *)(piStack_18 + 3) = 0;
    }
    iVar9 = iStack_14 + 1;
    bVar17 = iStack_14 != 0;
    piVar2 = piStack_18;
    piVar5 = piStack_18;
    iStack_14 = iVar9;
    if (bVar17) {
      piVar15[2] = (int)piStack_18;
      piVar2 = piStack_1c;
      piVar5 = piStack_1c;
    }
  }
  goto joined_r0x004a3d96;
}


