// FUN_0075dfc0 @ 75dfc0 size=3570

void FUN_0075dfc0(uint param_1)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  int iStack_48;
  int iStack_44;
  int *piStack_40;
  int iStack_2c;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 local_1c;
  void *local_18;
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e03b3;
  local_c = ExceptionList;
  if (DAT_00d546b1 == '\0') {
    ExceptionList = &local_c;
    FUN_007a7c01(param_1);
    iVar6 = DAT_00877690;
    iVar11 = (int)*(char *)(DAT_00893530 + 0x16);
    local_1c = (undefined1)param_1;
    local_24 = 0;
    iVar5 = DAT_00877690;
    if (DAT_00877690 < 0) {
      iVar5 = 0;
    }
    local_18 = operator_new(iVar5 * 4);
    FUN_0075f090(local_18,iVar6,&local_24);
    local_14 = (void *)((int)local_18 + iVar6 * 4);
    iVar6 = 0;
    local_4 = 0;
    piVar2 = DAT_00d546bc;
    if (0 < DAT_00877690) {
      do {
        *(undefined4 *)((int)local_18 + iVar6 * 4) = 0;
        iVar6 = iVar6 + 1;
        piVar2 = DAT_00d546bc;
      } while (iVar6 < DAT_00877690);
    }
    while (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[2];
      piVar9 = *(int **)(*piVar2 + 0x1a);
      while (piVar2 = piVar1, piVar9 != (int *)0x0) {
        piVar2 = (int *)piVar9[2];
        *(undefined4 *)((int)local_18 + *piVar9 * 4) = 1;
        piVar9 = piVar2;
      }
    }
    iVar6 = 0;
    local_10 = local_14;
    piVar2 = DAT_00d546bc;
    if (0 < DAT_00877690) {
      iVar5 = 0;
      do {
        bVar14 = (int)(param_1 + iVar6) % 0x3c == 0;
        cVar4 = FUN_0075dd20(iVar11,iVar5 + DAT_00ab27b4);
        if ((cVar4 != '\0') ||
           ((cVar4 = FUN_0075dac0(iVar11,iVar5 + DAT_00ab27b4), cVar4 != '\0' && (bVar14)))) {
          iVar7 = *(int *)(iVar5 + 0x3ac + DAT_00ab27b4);
          if (iVar7 == 0) {
            *(undefined4 *)(iVar5 + 0x3ac + DAT_00ab27b4) = 1;
          }
          else if (iVar7 == 2) {
            *(undefined4 *)(iVar5 + 0x3ac + DAT_00ab27b4) = 3;
          }
          else if (iVar7 == 4) {
            *(undefined4 *)(iVar5 + 0x3ac + DAT_00ab27b4) = 5;
          }
        }
        else {
          cVar4 = FUN_0075dbb0(iVar11,iVar5 + DAT_00ab27b4);
          if ((cVar4 == '\0') || (!bVar14)) {
            cVar4 = FUN_0075de30(iVar11,iVar5 + DAT_00ab27b4);
            if (cVar4 != '\0') {
              iVar7 = *(int *)(iVar5 + 0x3ac + DAT_00ab27b4);
              if (iVar7 == 3) {
                *(undefined4 *)(iVar5 + 0x3ac + DAT_00ab27b4) = 2;
              }
              else if (iVar7 == 5) {
                *(undefined4 *)(iVar5 + 0x3ac + DAT_00ab27b4) = 4;
              }
              else if (iVar7 == 1) {
                *(undefined4 *)(iVar5 + 0x3ac + DAT_00ab27b4) = 0;
              }
              else if ((iVar7 == 6) && (iVar7 = _rand(), iVar7 % 0xc == 0)) {
                *(undefined4 *)(iVar5 + 0x3ac + DAT_00ab27b4) = 0;
              }
            }
          }
          else {
            iVar13 = *(int *)(iVar5 + 0x3ac + DAT_00ab27b4);
            iVar7 = iVar5 + DAT_00ab27b4;
            if (iVar13 == 3) {
              *(undefined4 *)(iVar7 + 0x3ac) = 2;
            }
            else if (iVar13 == 5) {
              *(undefined4 *)(iVar7 + 0x3ac) = 4;
            }
            else if ((iVar13 != 2) && (iVar13 != 4)) {
              if ((*(int *)(iVar7 + 0x250) == 4) &&
                 (cVar4 = FUN_0075dbb0(iVar11,iVar7), cVar4 != '\0')) {
                *(undefined4 *)(iVar5 + 0x3ac + DAT_00ab27b4) = 6;
              }
              else {
                *(undefined4 *)(iVar5 + 0x3ac + DAT_00ab27b4) = 0;
              }
            }
          }
        }
        if (*(int *)((int)local_18 + iVar6 * 4) == 0) {
          iVar7 = iVar5 + DAT_00ab27b4;
          switch(*(undefined4 *)(iVar5 + 0x3ac + DAT_00ab27b4)) {
          case 2:
          case 4:
            if ((*(int *)(iVar7 + 0x250) == 4) &&
               (cVar4 = FUN_0075dbb0(iVar11,iVar7), cVar4 != '\0')) {
              *(undefined4 *)(iVar5 + 0x3ac + DAT_00ab27b4) = 6;
            }
            else {
              *(undefined4 *)(iVar5 + 0x3ac + DAT_00ab27b4) = 0;
            }
            break;
          case 3:
          case 5:
            *(undefined4 *)(iVar7 + 0x3ac) = 1;
          }
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x4b2;
        piVar2 = DAT_00d546bc;
      } while (iVar6 < DAT_00877690);
    }
joined_r0x0075e33c:
    if (piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[2];
      iVar6 = *piVar2;
      param_1 = _rand();
      iVar5 = 10;
      cVar4 = FUN_0075ded0(iVar11,DAT_00ab27b4 + *(int *)(iVar6 + 0x32) * 0x4b2);
      if (cVar4 != '\0') {
        iVar5 = 0x14;
      }
      iVar7 = (**(code **)(*(int *)(iVar6 + 0x16) + 4))();
      if (iVar7 == 0) {
        FUN_0075d960(iVar6,param_1);
      }
      else if (*(int *)(iVar6 + 0x32) != 0) {
        if (((int)param_1 % iVar5 == 0) ||
           (iVar5 = *(int *)(DAT_00ab27b4 + 0x250 + *(int *)(iVar6 + 0x32) * 0x4b2), iVar5 == 8))
        goto LAB_0075e411;
        if (iVar5 == 5) {
          cVar4 = FUN_004ea7d0();
          if (cVar4 == '\0') {
            if ((10 < iVar11) || (iVar11 < 3)) goto LAB_0075e411;
          }
          else if ((4 < iVar11) && (iVar11 < 9)) {
LAB_0075e411:
            cVar4 = FUN_004e8460();
            iVar5 = DAT_00ab27b4 + *(int *)(iVar6 + 0x32) * 0x4b2;
            if (cVar4 == '\0') {
              *(undefined4 *)(iVar5 + 0x3ac) = 0;
            }
            else {
              *(undefined4 *)(iVar5 + 0x3ac) = 1;
            }
            (**(code **)(*(int *)(iVar6 + 0x16) + 0x18))(*(undefined4 *)(iVar6 + 0x32));
            *(undefined1 *)(DAT_00ab27b4 + *(int *)(iVar6 + 0x32) * 0x4b2 + 0x3e9) = 0;
            *(undefined4 *)(iVar6 + 0x32) = 0;
          }
        }
      }
      iStack_48 = 0;
      bVar14 = false;
      piStack_40 = *(int **)(iVar6 + 0x1a);
      piVar2 = piVar1;
      if (*(int **)(iVar6 + 0x1a) != (int *)0x0) goto LAB_0075e4ac;
      goto LAB_0075ecb8;
    }
    iVar6 = __ftol();
    if (iVar6 < 1) {
      iVar6 = 1;
    }
    iVar5 = 0;
    piVar2 = DAT_00d546bc;
    while (piVar2 != (int *)0x0) {
      piVar1 = piVar2 + 2;
      iVar11 = *piVar2;
      piVar2 = (int *)*piVar1;
      if (*(char *)(iVar11 + 0x3a) == '\0') {
        iVar5 = iVar5 + 1;
      }
    }
    if (iVar5 < iVar6) {
      pvStack_20 = operator_new(0x3c);
      local_4._0_1_ = 1;
      if (pvStack_20 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0075f210();
      }
      piVar2 = DAT_00d546c0;
      local_4 = (uint)local_4._1_3_ << 8;
      DAT_00d546c0 = operator_new(0xe);
      if (DAT_00d546c0 == (int *)0x0) {
        DAT_00d546c0 = (int *)0x0;
      }
      else {
        *DAT_00d546c0 = iVar6;
        DAT_00d546c0[1] = (int)piVar2;
        DAT_00d546c0[2] = 0;
        *(undefined1 *)(DAT_00d546c0 + 3) = 0;
      }
      iVar5 = DAT_00d546c4 + 1;
      bVar14 = DAT_00d546c4 != 0;
      piVar1 = DAT_00d546c0;
      DAT_00d546c4 = iVar5;
      if (bVar14) {
        piVar2[2] = (int)DAT_00d546c0;
        piVar1 = DAT_00d546bc;
      }
      DAT_00d546bc = piVar1;
      FUN_0075d960(iVar6,param_1);
    }
    FUN_00796cd8(local_18);
  }
  ExceptionList = local_c;
  return;
LAB_0075e4ac:
  do {
    if (*piStack_40 == iStack_48) break;
    piVar1 = (int *)piStack_40[2];
    iVar5 = *piStack_40;
    param_1 = _rand();
    iVar7 = *(int *)(iVar6 + 0x32);
    if (iVar7 == 0) {
      iVar13 = iVar5 * 0x4b2;
      iVar7 = *(int *)(DAT_00ab27b4 + iVar13 + 0x250);
      if (iVar7 == 8) {
        bVar3 = 1;
        goto LAB_0075ec1a;
      }
      if (iVar7 == 5) {
        cVar4 = FUN_004ea7d0();
        if (cVar4 == '\0') {
          if ((iVar11 < 0xb) && (2 < iVar11)) goto LAB_0075ec18;
          bVar3 = 1;
        }
        else {
          if ((iVar11 < 5) || (8 < iVar11)) goto LAB_0075ec18;
          bVar3 = 1;
        }
      }
      else {
LAB_0075ec18:
        bVar3 = 0;
      }
LAB_0075ec1a:
      if ((int)param_1 % (int)(2 - (uint)bVar3) == 0) {
        cVar4 = FUN_004e8460();
        if (cVar4 == '\0') {
          if ((*(int *)(iVar13 + 0x250 + DAT_00ab27b4) == 4) &&
             (cVar4 = FUN_0075dbb0(iVar11,iVar13 + DAT_00ab27b4), cVar4 != '\0')) {
            *(undefined4 *)(iVar13 + 0x3ac + DAT_00ab27b4) = 6;
          }
          else {
            *(undefined4 *)(iVar13 + 0x3ac + DAT_00ab27b4) = 0;
          }
        }
        else {
          *(undefined4 *)(iVar13 + 0x3ac + DAT_00ab27b4) = 1;
        }
        (**(code **)(*(int *)(iVar6 + 0x16) + 0x18))(iVar5);
      }
    }
    else {
      if (iVar5 == iVar7) {
        iVar7 = 0;
      }
      else {
        cVar4 = FUN_004e7940(iVar7);
        if (cVar4 == '\0') {
          iStack_44 = 0;
          if (0 < *(int *)(iVar5 * 0x4b2 + 0x290 + DAT_00ab27b4)) {
            do {
              cVar4 = FUN_004e7940(iVar7);
              if (cVar4 != '\0') {
                iVar7 = 2;
                goto LAB_0075e585;
              }
              iStack_44 = iStack_44 + 1;
            } while (iStack_44 < *(int *)(iVar5 * 0x4b2 + 0x290 + DAT_00ab27b4));
          }
          iVar7 = 3;
        }
        else {
          iVar7 = 1;
        }
      }
LAB_0075e585:
      if (iVar7 != 0) {
        if (iVar7 == 1) {
          if (!bVar14) {
            iVar13 = FUN_0075d520(*(undefined4 *)(iVar6 + 0x32),iVar5);
            iVar7 = *(int *)(iVar6 + 0x36);
            if ((iVar13 == iVar7) && (*(int *)(iVar6 + 0x2c) <= *(int *)(iVar6 + 0x28))) {
              *(undefined1 *)(DAT_00ab27b4 + *(int *)(iVar6 + 0x32) * 0x4b2 + 0x3e9) = 0;
              iVar7 = DAT_00ab27b4 + iVar5 * 0x4b2;
            }
            else if (*(int *)(iVar6 + 0x2c) + 3 < *(int *)(iVar6 + 0x28)) {
              iVar13 = FUN_0075d520(*(undefined4 *)(iVar6 + 0x32),iVar5);
              if (iVar13 != iVar7) {
                if (iVar13 == 7) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = iVar13 + 1;
                }
                if (iVar8 != iVar7) {
                  if (iVar13 == 0) {
                    iVar13 = 7;
                  }
                  else {
                    iVar13 = iVar13 + -1;
                  }
                  if (iVar13 != iVar7) goto LAB_0075e82c;
                }
              }
              *(undefined1 *)(DAT_00ab27b4 + *(int *)(iVar6 + 0x32) * 0x4b2 + 0x3e9) = 0;
              iVar7 = DAT_00ab27b4 + iVar5 * 0x4b2;
            }
            else {
LAB_0075e82c:
              if (*(int *)(iVar6 + 0x28) <= *(int *)(iVar6 + 0x2c) + 6) goto LAB_0075e8bd;
              iVar7 = *(int *)(iVar6 + 0x36);
              uVar10 = param_1 & 0x80000001;
              bVar14 = uVar10 == 0;
              if ((int)uVar10 < 0) {
                bVar14 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
              }
              if (bVar14) {
                if (iVar7 == 7) {
                  *(undefined4 *)(iVar6 + 0x36) = 0;
                }
                else {
                  iVar7 = iVar7 + 1;
LAB_0075e870:
                  *(int *)(iVar6 + 0x36) = iVar7;
                }
              }
              else {
                if (iVar7 != 0) {
                  iVar7 = iVar7 + -1;
                  goto LAB_0075e870;
                }
                *(undefined4 *)(iVar6 + 0x36) = 7;
              }
              *(undefined1 *)(DAT_00ab27b4 + *(int *)(iVar6 + 0x32) * 0x4b2 + 0x3e9) = 0;
              iVar7 = DAT_00ab27b4 + iVar5 * 0x4b2;
            }
            *(undefined1 *)(iVar7 + 0x3e9) = 1;
            *(int *)(iVar6 + 0x32) = iVar5;
            *(undefined4 *)(iVar6 + 0x28) = 0;
            bVar14 = true;
          }
LAB_0075e8bd:
          iVar13 = iVar5 * 0x4b2;
          iVar7 = *(int *)(iVar13 + 0x3ac + DAT_00ab27b4);
          if (((iVar7 == 4) || (iVar7 == 5)) ||
             (((int)param_1 % 0x49 != 0 &&
              ((*(int *)(iVar13 + DAT_00ab27b4 + 0x250) != 7 || ((int)param_1 % 0x18 != 0)))))) {
            iVar7 = *(int *)(iVar13 + DAT_00ab27b4 + 0x3ac);
            if (((iVar7 == 4) || (iVar7 == 5)) && ((int)param_1 % 100 == 0)) {
              cVar4 = FUN_004e8460();
              if (cVar4 == '\0') {
                *(undefined4 *)(iVar13 + 0x3ac + DAT_00ab27b4) = 2;
              }
              else {
                *(undefined4 *)(iVar13 + 0x3ac + DAT_00ab27b4) = 3;
              }
            }
          }
          else {
            cVar4 = FUN_004e8460();
            if (cVar4 == '\0') {
              *(undefined4 *)(iVar13 + 0x3ac + DAT_00ab27b4) = 4;
            }
            else {
              *(undefined4 *)(iVar13 + 0x3ac + DAT_00ab27b4) = 5;
            }
          }
        }
        else if (iVar7 == 2) {
          iVar13 = iVar5 * 0x4b2;
          iVar7 = *(int *)(iVar13 + 0x3ac + DAT_00ab27b4);
          if (((iVar7 == 4) || (iVar7 == 5)) ||
             (((int)param_1 % 100 != 0 &&
              ((*(int *)(iVar13 + DAT_00ab27b4 + 0x250) != 7 || ((int)param_1 % 0x30 != 0)))))) {
            iVar7 = *(int *)(iVar13 + DAT_00ab27b4 + 0x3ac);
            if (((iVar7 == 4) || (iVar7 == 5)) && ((int)param_1 % 0x30 == 0)) {
              cVar4 = FUN_004e8460();
              if (cVar4 == '\0') {
                *(undefined4 *)(iVar13 + 0x3ac + DAT_00ab27b4) = 2;
              }
              else {
                *(undefined4 *)(iVar13 + 0x3ac + DAT_00ab27b4) = 3;
              }
            }
          }
          else {
            cVar4 = FUN_004e8460();
            if (cVar4 == '\0') {
              *(undefined4 *)(iVar13 + 0x3ac + DAT_00ab27b4) = 4;
            }
            else {
              *(undefined4 *)(iVar13 + 0x3ac + DAT_00ab27b4) = 5;
            }
          }
        }
        else {
          iVar7 = iVar5 * 0x4b2;
          cVar4 = FUN_0075ded0(iVar11,iVar7 + DAT_00ab27b4);
          if ((int)param_1 % (int)((-(uint)(cVar4 != '\0') & 6) + 6) == 0) {
            cVar4 = FUN_004e8460();
            if (cVar4 == '\0') {
              if ((*(int *)(iVar7 + 0x250 + DAT_00ab27b4) == 4) &&
                 (cVar4 = FUN_0075dbb0(iVar11,iVar7 + DAT_00ab27b4), cVar4 != '\0')) {
                *(undefined4 *)(iVar7 + 0x3ac + DAT_00ab27b4) = 6;
                (**(code **)(*(int *)(iVar6 + 0x16) + 0x18))(iVar5);
              }
              else {
                *(undefined4 *)(iVar7 + 0x3ac + DAT_00ab27b4) = 0;
                (**(code **)(*(int *)(iVar6 + 0x16) + 0x18))(iVar5);
              }
            }
            else {
              *(undefined4 *)(iVar7 + 0x3ac + DAT_00ab27b4) = 1;
              (**(code **)(*(int *)(iVar6 + 0x16) + 0x18))(iVar5);
            }
          }
        }
      }
      iStack_2c = 0;
      iVar5 = iVar5 * 0x4b2;
      if (0 < *(int *)(iVar5 + 0x290 + DAT_00ab27b4)) {
        iStack_44 = 0;
        do {
          iVar7 = *(int *)(*(int *)(iVar5 + 0x298 + DAT_00ab27b4) + iStack_44);
          iVar13 = iVar7 * 0x4b2;
          cVar4 = FUN_004e8480();
          if ((cVar4 != '\0') || (iVar8 = *(int *)(iVar13 + 0x250 + DAT_00ab27b4), iVar8 == 8))
          goto LAB_0075eb93;
          if (iVar8 == 5) {
            cVar4 = FUN_004ea7d0();
            if (cVar4 == '\0') {
              if ((iVar11 < 0xb) && (2 < iVar11)) goto LAB_0075ea43;
            }
            else if ((iVar11 < 5) || (8 < iVar11)) goto LAB_0075ea43;
          }
          else {
LAB_0075ea43:
            cVar4 = FUN_0075ded0(iVar11,iVar13 + DAT_00ab27b4);
            iVar8 = *(int *)(iVar6 + 0x32);
            pvStack_20 = (void *)((-(uint)(cVar4 != '\0') & 0xfffffffe) + 5);
            if (iVar7 == iVar8) {
              iVar8 = 0;
            }
            else {
              cVar4 = FUN_004e7940(iVar8);
              if (cVar4 == '\0') {
                iVar12 = 0;
                if (0 < *(int *)(iVar13 + 0x290 + DAT_00ab27b4)) {
                  do {
                    cVar4 = FUN_004e7940(iVar8);
                    if (cVar4 != '\0') {
                      iVar8 = 2;
                      goto LAB_0075eae9;
                    }
                    iVar12 = iVar12 + 1;
                  } while (iVar12 < *(int *)(iVar13 + 0x290 + DAT_00ab27b4));
                }
                iVar8 = 3;
              }
              else {
                iVar8 = 1;
              }
            }
LAB_0075eae9:
            iVar8 = iVar8 * (int)pvStack_20;
            if (iVar8 < 1) {
              iVar8 = 1;
            }
            if ((int)param_1 % iVar8 == 0) {
              cVar4 = FUN_004e8460();
              if (cVar4 == '\0') {
                *(undefined4 *)(iVar13 + 0x3ac + DAT_00ab27b4) = 2;
              }
              else {
                *(undefined4 *)(iVar13 + 0x3ac + DAT_00ab27b4) = 3;
              }
              iVar13 = *(int *)(iVar6 + 0x1e);
              piVar9 = operator_new(0xe);
              if (piVar9 == (int *)0x0) {
                piVar9 = (int *)0x0;
              }
              else {
                *piVar9 = iVar7;
                piVar9[1] = iVar13;
                piVar9[2] = 0;
                *(undefined1 *)(piVar9 + 3) = 0;
              }
              iVar8 = *(int *)(iVar6 + 0x22);
              *(int **)(iVar6 + 0x1e) = piVar9;
              *(int *)(iVar6 + 0x22) = iVar8 + 1;
              if (iVar8 == 0) {
                *(int **)(iVar6 + 0x1a) = piVar9;
              }
              else {
                *(int **)(iVar13 + 8) = piVar9;
              }
              if (iStack_48 == 0) {
                iStack_48 = iVar7;
              }
            }
          }
LAB_0075eb93:
          iStack_2c = iStack_2c + 1;
          iStack_44 = iStack_44 + 0xc;
        } while (iStack_2c < *(int *)(iVar5 + 0x290 + DAT_00ab27b4));
      }
    }
    piStack_40 = piVar1;
  } while (piVar1 != (int *)0x0);
  if (!bVar14) {
LAB_0075ecb8:
    *(int *)(iVar6 + 0x28) = *(int *)(iVar6 + 0x28) + 1;
  }
  goto joined_r0x0075e33c;
}


