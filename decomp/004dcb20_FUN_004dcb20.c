// FUN_004dcb20 @ 4dcb20 size=3652

/* WARNING: Removing unreachable block (ram,0x004dd184) */
/* WARNING: Removing unreachable block (ram,0x004dd196) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dcb20(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bfba8;
  local_c = ExceptionList;
  if (((&DAT_0089cad8)[param_1] == 0) && (DAT_00d0ca90 != 0)) {
    param_1 = *(int *)(DAT_00d0ca90 + 6);
  }
  iVar10 = (&DAT_0089cad8)[param_1];
  DAT_00a98440 = param_2;
  DAT_00a98448 = param_1;
  ExceptionList = &local_c;
  FUN_004d87c0();
  iVar7 = 0;
  if (0 < DAT_00877690) {
    do {
      FUN_004e89a0(0xf);
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_00877690);
  }
  iVar7 = DAT_00877690;
  puVar9 = &DAT_00aa733c;
  for (iVar5 = DAT_00877690; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  if (DAT_00d0ca90 != 0) {
    piVar6 = *(int **)(DAT_00d0ca90 + 0x3b6c);
    while (piVar6 != (int *)0x0) {
      piVar1 = (int *)piVar6[2];
      piVar3 = *(int **)(*piVar6 + 0x10e);
      while (piVar6 = piVar1, piVar3 != (int *)0x0) {
        piVar6 = (int *)piVar3[2];
        (&DAT_00aa733c)[*piVar3] = (&DAT_00aa733c)[*piVar3] + 1;
        piVar3 = piVar6;
        iVar7 = DAT_00877690;
      }
    }
  }
  switch(param_2) {
  case 0:
    iVar10 = 1;
    DAT_00a98444 = 0x441ff;
    if (1 < iVar7) {
      iVar5 = 0x4b2;
      do {
        iVar7 = DAT_00ab27b4 + iVar5;
        if ((*(int *)(iVar7 + 0x254) == 8) || (*(int *)(iVar7 + 0x254) == 9)) {
          uVar13 = 0x17;
        }
        else if (*(int *)(iVar7 + 0x3d4) == 0) {
          uVar13 = 2;
        }
        else {
          uVar13 = (&DAT_008ca214)[*(int *)(*(int *)(iVar7 + 0x3d8) + 6) * 0x47];
        }
        FUN_004e8a40(uVar13);
        iVar10 = iVar10 + 1;
        iVar5 = iVar5 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar10 < DAT_00877690);
    }
    break;
  case 1:
    DAT_00a98444 = 0x241ff;
    if (*(int *)(*DAT_00d12b40 + 0x40a) == 1) {
      DAT_00a98444 = 0xa41ff;
    }
    iVar10 = 0;
    if (0 < iVar7) {
      iVar5 = 0;
      do {
        switch(*(undefined4 *)(iVar5 + 0x254 + DAT_00ab27b4)) {
        case 0:
          FUN_004e8a40(2);
          break;
        case 1:
          FUN_004e8a40(1);
          break;
        case 2:
          FUN_004e8a40(10);
          break;
        case 3:
          FUN_004e8a40(7);
          break;
        case 4:
          FUN_004e8a40(0x11);
          break;
        case 5:
          FUN_004e8a40(0x16);
          break;
        case 6:
          FUN_004e8a40(0xb);
          break;
        case 7:
          FUN_004e8a40(8);
          break;
        case 8:
        case 9:
          FUN_004e8a40(0x17);
          break;
        case 10:
          FUN_004e8a40(0);
          break;
        default:
          FUN_00402500(0,s_Invalid_terrain_type__00847904);
        }
        iVar10 = iVar10 + 1;
        iVar5 = iVar5 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar10 < DAT_00877690);
    }
    break;
  case 2:
    iVar10 = 0;
    DAT_00a98444 = 0xa41ff;
    if (0 < iVar7) {
      iVar5 = 0;
      do {
        iVar7 = *(int *)(iVar5 + 0x254 + DAT_00ab27b4);
        if ((iVar7 == 8) || (iVar7 == 9)) {
          uVar13 = 0x17;
          goto LAB_004dcd79;
        }
        switch(*(undefined4 *)(iVar5 + DAT_00ab27b4 + 0x3ac)) {
        case 1:
        case 3:
        case 5:
          uVar13 = 0xe;
          break;
        case 2:
        case 4:
          if (*(int *)(iVar5 + DAT_00ab27b4 + 0x250) == 4) goto switchD_004dcd4b_caseD_6;
        case 0:
          uVar13 = 2;
          break;
        case 6:
switchD_004dcd4b_caseD_6:
          uVar13 = 0x13;
          break;
        default:
          FUN_00402500(0,s_Invalid_weather_type__0084791c);
          goto LAB_004dcd7e;
        }
LAB_004dcd79:
        FUN_004e8a40(uVar13);
LAB_004dcd7e:
        iVar10 = iVar10 + 1;
        iVar5 = iVar5 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar10 < DAT_00877690);
    }
    break;
  case 3:
    iVar5 = 1;
    DAT_00a98444 = 0x5001;
    if (1 < iVar7) {
      iVar8 = 0x4b2;
      do {
        iVar7 = *(int *)(DAT_00ab27b4 + iVar8 + 0x254);
        if ((iVar7 == 8) || (iVar7 == 9)) {
          uVar13 = 0x17;
LAB_004dd6c0:
          FUN_004e8a40(uVar13);
        }
        else {
          FUN_004e8a40(2);
          iVar7 = *(int *)(iVar8 + 0x3d8 + DAT_00ab27b4);
          if (iVar7 != 0) {
            iVar7 = *(int *)(iVar7 + 6);
            FUN_004e8a40(1);
            if (iVar7 == param_1) {
              FUN_004e8a40(1);
              FUN_004e89a0(3);
            }
            else {
              iVar2 = *(int *)((&DAT_0089cad8)[param_1] + 0x12da);
              if (*(char *)(iVar2 + iVar7 * 0x2c + 0x2c) == '\0') {
                if (*(int *)(*(int *)((&DAT_0089cad8)[iVar7] + 0x12da) + 0x3b30) ==
                    *(int *)((&DAT_0089cad8)[param_1] + 6)) {
                  FUN_004e8a40(1);
                  FUN_004e89a0(0xc);
                }
                else {
                  iVar2 = iVar2 + iVar7 * 0x2c;
                  if (*(char *)(iVar2 + 0x32) == '\0') {
                    if (*(char *)(iVar2 + 0x31) == '\0') {
                      if (iVar10 != 0) {
                        cVar4 = FUN_004e8ab0(iVar10);
                        if (cVar4 != '\0') {
                          uVar13 = 0xb;
                          goto LAB_004dd6c0;
                        }
                        cVar4 = FUN_004e8ad0(iVar10);
                        if (cVar4 != '\0') {
                          FUN_004e8a40(0xb);
                          FUN_004e89a0(0x1f);
                          goto LAB_004dd6c5;
                        }
                      }
                      uVar13 = 2;
                      goto LAB_004dd6c0;
                    }
                    FUN_004e8a40(1);
                    FUN_004e89a0(0x1f);
                  }
                  else {
                    FUN_004e8a40(1);
                    FUN_004e89a0(0x18);
                  }
                }
              }
              else {
                FUN_004e89a0(0);
                FUN_004e8a40(0x10);
                if (iVar10 != 0) {
                  cVar4 = FUN_004e8ab0(iVar10);
                  if (cVar4 == '\0') {
                    cVar4 = FUN_004e8ad0(iVar10);
                    if (cVar4 != '\0') {
                      FUN_004e89a0(0x12);
                    }
                  }
                  else {
                    FUN_004e89a0(0x1f);
                  }
                }
              }
            }
          }
        }
LAB_004dd6c5:
        iVar5 = iVar5 + 1;
        iVar8 = iVar8 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar5 < DAT_00877690);
    }
    break;
  case 4:
    iVar10 = 0;
    DAT_00a98444 = 0x5001;
    if (0 < iVar7) {
      iVar5 = 0;
      do {
        if (*(int *)(iVar5 + 0x3d4 + DAT_00ab27b4) == 0) {
          iVar7 = *(int *)(iVar5 + DAT_00ab27b4 + 0x254);
          if ((iVar7 == 8) || (iVar7 == 9)) {
            uVar13 = 0x17;
          }
          else {
            uVar13 = 0;
          }
        }
        else {
          uVar13 = 2;
        }
        FUN_004e8a40(uVar13);
        iVar10 = iVar10 + 1;
        iVar5 = iVar5 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar10 < DAT_00877690);
    }
    break;
  case 5:
    iVar10 = 0;
    DAT_00a98444 = 0x241ff;
    if (0 < iVar7) {
      iVar5 = 0;
      do {
        iVar7 = FUN_0064ec00();
        if (iVar7 == 0) {
LAB_004dcc5b:
          iVar7 = FUN_0064ec20();
          if (iVar7 != 0) {
            uVar12 = 0;
            iVar7 = iVar10;
            uVar13 = FUN_0064ec20(iVar10,0);
            cVar4 = FUN_0049fd90(uVar13,iVar7,uVar12);
            if (cVar4 != '\0') {
              uVar13 = 1;
              goto LAB_004dcced;
            }
          }
          iVar7 = FUN_0064ec60();
          if (iVar7 != 0) {
            uVar12 = 0;
            iVar7 = iVar10;
            uVar13 = FUN_0064ec60(iVar10,0);
            cVar4 = FUN_0049fd90(uVar13,iVar7,uVar12);
            if (cVar4 != '\0') {
              uVar13 = 1;
              goto LAB_004dcced;
            }
          }
          iVar7 = *(int *)(iVar5 + 0x254 + DAT_00ab27b4);
          if ((iVar7 < 8) || (9 < iVar7)) {
            uVar13 = 8;
          }
          else {
            uVar13 = 0x17;
          }
        }
        else {
          uVar12 = 0;
          iVar7 = iVar10;
          uVar13 = FUN_0064ec00(iVar10,0);
          cVar4 = FUN_0049fb80(uVar13,iVar7,uVar12);
          if (cVar4 == '\0') goto LAB_004dcc5b;
          uVar13 = 1;
        }
LAB_004dcced:
        FUN_004e8a40(uVar13);
        iVar10 = iVar10 + 1;
        iVar5 = iVar5 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar10 < DAT_00877690);
    }
    break;
  case 6:
    iVar10 = 0;
    DAT_00a98444 = 0x4800;
    if (0 < iVar7) {
      iVar5 = 0;
      do {
        switch(*(undefined4 *)(iVar5 + 0x254 + DAT_00ab27b4)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          if (*(int *)(iVar5 + DAT_00ab27b4 + 0x3d8) == DAT_00d0ca90) {
            fVar11 = (float10)FUN_004ed140();
            if (fVar11 <= (float10)_DAT_007e3380) {
              FUN_004e8a40(0xb);
            }
            else {
              FUN_004e8a40(1);
            }
          }
          else {
            FUN_004e8a40(2);
          }
          break;
        case 8:
        case 9:
          FUN_004e8a40(0x17);
          break;
        case 10:
          FUN_004e8a40(0);
          break;
        default:
          FUN_00402500(0,s_Invalid_terrain_type__00847904);
        }
        iVar10 = iVar10 + 1;
        iVar5 = iVar5 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar10 < DAT_00877690);
    }
    break;
  case 7:
    iVar10 = 0;
    DAT_00a98444 = 0x800;
    if (0 < iVar7) {
      iVar5 = 0;
      piVar6 = &DAT_00aa733c;
      do {
        iVar7 = *(int *)(iVar5 + 0x254 + DAT_00ab27b4);
        switch(iVar7) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          if ((((iVar7 == 8) || (iVar7 == 9)) || (*(char *)(iVar5 + DAT_00ab27b4 + 0x470) == '\0'))
             || (*(int *)(iVar5 + DAT_00ab27b4 + 0x3d8) != DAT_00d0ca90)) {
            FUN_004e8a40(2);
          }
          else {
            FUN_004e8a40(1);
          }
          break;
        case 8:
          if (*piVar6 < 1) goto switchD_004dd1d3_caseD_9;
          FUN_004e8a40(0xc);
          break;
        case 9:
switchD_004dd1d3_caseD_9:
          FUN_004e8a40(0x17);
          break;
        case 10:
          FUN_004e8a40(0);
          break;
        default:
          FUN_00402500(0,s_Invalid_terrain_type__00847904);
        }
        iVar10 = iVar10 + 1;
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar10 < DAT_00877690);
    }
    break;
  default:
    FUN_00402500(0,s_Illegal_color_code__008478f0);
    iVar7 = DAT_00877690;
    break;
  case 9:
    iVar10 = 0;
    DAT_00a98444 = 0x243f5;
    local_4 = 0;
    if (0 < iVar7) {
      iVar5 = 0;
      piVar6 = &DAT_00aa733c;
      do {
        switch(*(undefined4 *)(iVar5 + 0x254 + DAT_00ab27b4)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          FUN_004ecea0();
          uVar13 = __ftol();
          FUN_004e89a0(uVar13);
          cVar4 = FUN_0049ee30(iVar5 + DAT_00ab27b4);
          if (cVar4 == '\0') {
            FUN_004e8a40(0x10);
          }
          else {
            FUN_004e8a40(0xb);
          }
          break;
        case 8:
          if (*piVar6 < 1) goto switchD_004dd0bc_caseD_9;
          FUN_004e8a40(0xc);
          break;
        case 9:
switchD_004dd0bc_caseD_9:
          FUN_004e8a40(0x17);
          break;
        case 10:
          FUN_004e8a40(0);
          break;
        default:
          FUN_00402500(0,s_Invalid_terrain_type__00847904);
        }
        iVar10 = iVar10 + 1;
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar10 < DAT_00877690);
    }
    local_4 = 0xffffffff;
    break;
  case 10:
    DAT_00a98444 = 0x241ff;
    param_1 = 0;
    if (0 < iVar7) {
      iVar10 = 0;
      do {
        iVar7 = DAT_00ab27b4 + iVar10;
        switch(*(undefined4 *)(iVar7 + 0x254)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          iVar5 = *(int *)(iVar7 + 0x3d8);
          if ((iVar5 == 0) || (*(int *)(iVar7 + 0x19e) == 0)) {
            FUN_004e8a40(2);
          }
          else if ((iVar5 == DAT_00d0ca90) ||
                  ((*(int *)(iVar5 + 0x3350) != 0 &&
                   (*(int *)(iVar5 + 0x3350) == *(int *)(DAT_00d0ca90 + 0x3350))))) {
            if (*(int *)(iVar7 + 0x19e) < 0xb) {
              FUN_004e8a40(1);
            }
            else {
              FUN_004e8a40(0xb);
            }
          }
          else {
            cVar4 = FUN_0044b280(*(undefined4 *)(DAT_00d0ca90 + 6));
            if (cVar4 == '\0') {
              if (*(int *)(DAT_00ab27b4 + iVar10 + 0x19e) < 0xb) {
                FUN_004e8a40(7);
              }
              else {
                FUN_004e8a40(6);
              }
            }
            else if (*(int *)(iVar10 + 0x19e + DAT_00ab27b4) < 0xb) {
              FUN_004e8a40(0x10);
            }
            else {
              FUN_004e8a40(0x15);
            }
          }
          break;
        case 8:
        case 9:
          FUN_004e8a40(0x17);
          break;
        case 10:
          FUN_004e8a40(0);
          break;
        default:
          FUN_00402500(0,s_Invalid_terrain_type__00847904);
        }
        param_1 = param_1 + 1;
        iVar10 = iVar10 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (param_1 < DAT_00877690);
    }
    break;
  case 0xb:
    iVar5 = 1;
    if (1 < iVar7) {
      iVar8 = 0x4b2;
      do {
        iVar7 = *(int *)(iVar8 + 0x254 + DAT_00ab27b4);
        if ((iVar7 == 8) || (iVar7 == 9)) {
          uVar13 = 0x17;
        }
        else {
          iVar7 = *(int *)(iVar8 + DAT_00ab27b4 + 0x3d8);
          if ((iVar7 == 0) || (iVar7 != iVar10)) {
            uVar13 = 2;
          }
          else {
            iVar7 = *(int *)(iVar8 + DAT_00ab27b4 + 0x222);
            if (iVar7 < 1) {
              uVar13 = 1;
            }
            else {
              iVar7 = iVar7 * 3;
              if (0x1e < iVar7) {
                iVar7 = 0x1e;
              }
              FUN_004e89a0(0x1e - iVar7);
              uVar13 = 0x10;
            }
          }
        }
        FUN_004e8a40(uVar13);
        iVar5 = iVar5 + 1;
        iVar8 = iVar8 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar5 < DAT_00877690);
    }
    break;
  case 0xc:
    iVar10 = 1;
    DAT_00a98444 = 0x441fd;
    if (1 < iVar7) {
      iVar5 = 0x4b2;
      do {
        iVar7 = *(int *)(DAT_00ab27b4 + iVar5 + 0x288);
        if (iVar7 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined4 *)(&DAT_008e8de4 + iVar7 * 4);
        }
        FUN_004e8a40(uVar13);
        iVar10 = iVar10 + 1;
        iVar5 = iVar5 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar10 < DAT_00877690);
    }
    break;
  case 0xd:
    iVar10 = 1;
    DAT_00a98444 = 0x441fd;
    if (1 < iVar7) {
      iVar5 = 0x4b2;
      do {
        iVar7 = *(int *)(DAT_00ab27b4 + 0x288 + iVar5);
        if ((iVar7 == 0) || (*(char *)((int)&DAT_00a6b160 + iVar7) == '\0')) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined4 *)(&DAT_008e8de4 + iVar7 * 4);
        }
        FUN_004e8a40(uVar13);
        iVar10 = iVar10 + 1;
        iVar5 = iVar5 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar10 < DAT_00877690);
    }
    break;
  case 0xe:
    iVar10 = 1;
    DAT_00a98444 = 0x441fd;
    if (1 < iVar7) {
      iVar5 = 0x4b2;
      do {
        iVar7 = *(int *)(iVar5 + 0x28c + DAT_00ab27b4);
        if (iVar7 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined4 *)(&DAT_008ece04 + iVar7 * 4);
        }
        FUN_004e8a40(uVar13);
        iVar10 = iVar10 + 1;
        iVar5 = iVar5 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar10 < DAT_00877690);
    }
    break;
  case 0xf:
    iVar10 = 1;
    DAT_00a98444 = 0x441fd;
    if (1 < iVar7) {
      iVar5 = 0x4b2;
      do {
        iVar7 = *(int *)(iVar5 + 0x28c + DAT_00ab27b4);
        if ((iVar7 == 0) || (*(char *)((int)&DAT_00a4cc38 + iVar7) == '\0')) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined4 *)(&DAT_008ece04 + iVar7 * 4);
        }
        FUN_004e8a40(uVar13);
        iVar10 = iVar10 + 1;
        iVar5 = iVar5 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar10 < DAT_00877690);
    }
    break;
  case 0x10:
    iVar10 = 1;
    DAT_00a98444 = 0x441fd;
    if (1 < iVar7) {
      puVar9 = &DAT_00a61524;
      do {
        FUN_004e8a40(*puVar9);
        iVar10 = iVar10 + 1;
        puVar9 = puVar9 + 1;
        iVar7 = DAT_00877690;
      } while (iVar10 < DAT_00877690);
    }
    break;
  case 0x11:
    iVar5 = 1;
    if (1 < iVar7) {
      iVar8 = 0x4b2;
      do {
        iVar7 = *(int *)(DAT_00ab27b4 + iVar8 + 0x254);
        if ((iVar7 == 8) || (iVar7 == 9)) {
          uVar13 = 0x17;
        }
        else {
          iVar7 = *(int *)(DAT_00ab27b4 + iVar8 + 0x3d8);
          if (iVar7 == 0) {
            uVar13 = 2;
          }
          else if (iVar7 == iVar10) {
            uVar13 = 0xb;
          }
          else if ((iVar10 == 0) || (cVar4 = FUN_004e8ab0(iVar10), cVar4 == '\0')) {
            uVar13 = 10;
          }
          else {
            uVar13 = 1;
          }
        }
        FUN_004e8a40(uVar13);
        iVar5 = iVar5 + 1;
        iVar8 = iVar8 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar5 < DAT_00877690);
    }
    break;
  case 0x12:
    iVar5 = 1;
    if (1 < iVar7) {
      iVar8 = 0x4b2;
      do {
        iVar7 = *(int *)(DAT_00ab27b4 + iVar8 + 0x254);
        if ((iVar7 == 8) || (iVar7 == 9)) {
          uVar13 = 0x17;
        }
        else if ((iVar10 == 0) || (cVar4 = FUN_004e8ab0(iVar10), cVar4 == '\0')) {
          uVar13 = 2;
        }
        else {
          uVar13 = 1;
        }
        FUN_004e8a40(uVar13);
        iVar5 = iVar5 + 1;
        iVar8 = iVar8 + 0x4b2;
        iVar7 = DAT_00877690;
      } while (iVar5 < DAT_00877690);
    }
  }
  if (DAT_008477ac != 0) {
    FUN_004e89d0(0xfffffff0);
    iVar7 = DAT_00877690;
  }
  if (DAT_00d0ca90 != 0) {
    FUN_00654700();
    iVar7 = DAT_00877690;
  }
  iVar10 = 0;
  if (0 < iVar7) {
    iVar5 = 0;
    do {
      if (*(char *)(DAT_00ab27b4 + iVar5 + 0x180) != '\0') {
        FUN_004e89a0(0);
        FUN_004e8a40(0x19);
        FUN_004e8a10(0);
        iVar7 = DAT_00877690;
      }
      iVar10 = iVar10 + 1;
      iVar5 = iVar5 + 0x4b2;
    } while (iVar10 < iVar7);
  }
  ExceptionList = local_c;
  return;
}


