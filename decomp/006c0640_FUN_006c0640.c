// FUN_006c0640 @ 6c0640 size=3334

undefined4 __thiscall FUN_006c0640(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  bool bVar11;
  float10 fVar12;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d7e89;
  local_c = ExceptionList;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
LAB_006c0684:
  while (iVar4 = FUN_00535490(), iVar4 != 1) {
    if (iVar4 == 2) {
      while (local_1c != (int *)0x0) {
        piVar7 = (int *)local_1c[2];
        FUN_00796cd8(local_1c);
        local_1c = piVar7;
      }
      ExceptionList = local_c;
      return 0;
    }
    piVar7 = (int *)FUN_00534391();
    if (*piVar7 == 4) {
      FUN_005343dc();
      while (local_1c != (int *)0x0) {
        piVar7 = (int *)local_1c[2];
        FUN_00796cd8(local_1c);
        local_1c = piVar7;
      }
      ExceptionList = local_c;
      return 0;
    }
  }
  piVar7 = local_1c;
  piVar5 = local_18;
  if (DAT_00dc4b5e != '\0') {
    iVar4 = param_2[1];
    for (; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
      cVar3 = (*(code *)PTR_FUN_007e3798)(*piVar7,iVar4);
      if (cVar3 != '\0') {
        if (piVar7 != (int *)0x0) {
          FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
        break;
      }
    }
    iVar4 = param_2[1];
    piVar5 = operator_new(0xe);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      *piVar5 = iVar4;
      piVar5[1] = (int)local_18;
      piVar5[2] = 0;
      *(undefined1 *)(piVar5 + 3) = 0;
    }
    iVar4 = local_14 + 1;
    bVar11 = local_14 != 0;
    piVar7 = piVar5;
    local_14 = iVar4;
    if (bVar11) {
      local_18[2] = (int)piVar5;
      piVar7 = local_1c;
    }
  }
  local_18 = piVar5;
  local_1c = piVar7;
  iVar4 = param_2[1];
  if (iVar4 < 0x39a) {
    if (iVar4 == 0x399) {
      fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x50) = (float)fVar12;
      goto LAB_006c0684;
    }
    if (0x34e < iVar4) {
      switch(iVar4) {
      case 0x38d:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x2c) = (float)fVar12;
        break;
      case 0x38e:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x28) = (float)fVar12;
        break;
      case 0x38f:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x24) = (float)fVar12;
        break;
      default:
        goto switchD_006c078a_caseD_1d;
      case 0x391:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x30) = (float)fVar12;
        break;
      case 0x392:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x34) = (float)fVar12;
        break;
      case 0x395:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x4c) = (float)fVar12;
        break;
      case 0x396:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x58) = (float)fVar12;
        break;
      case 0x397:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x54) = (float)fVar12;
        break;
      case 0x398:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x48) = (float)fVar12;
      }
      goto LAB_006c0684;
    }
    if (iVar4 == 0x34e) {
      fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x1c) = (float)fVar12;
      goto LAB_006c0684;
    }
    if (iVar4 < 0x17e) {
      if (iVar4 == 0x17d) {
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x10) = (float)fVar12;
        goto LAB_006c0684;
      }
      switch(iVar4) {
      case 0x1b:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x38) = (float)fVar12;
        goto LAB_006c0684;
      case 0x1c:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x3c) = (float)fVar12;
        goto LAB_006c0684;
      case 0x65:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x40) = (float)fVar12;
        goto LAB_006c0684;
      case 0xbc:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 8) = (float)fVar12;
        goto LAB_006c0684;
      case 0xbe:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0xc) = (float)fVar12;
        goto LAB_006c0684;
      }
    }
    else if (iVar4 < 0x349) {
      if (iVar4 == 0x348) {
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x14) = (float)fVar12;
        goto LAB_006c0684;
      }
      if (iVar4 == 0x17e) {
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x20) = (float)fVar12;
        goto LAB_006c0684;
      }
      if (iVar4 == 0x1ad) {
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x44) = (float)fVar12;
        goto LAB_006c0684;
      }
    }
    else if (iVar4 == 0x34b) {
      fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
      *(float *)(param_1 + 0x18) = (float)fVar12;
      goto LAB_006c0684;
    }
  }
  else {
    if (iVar4 < 0x447) {
      if (iVar4 == 0x446) {
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x6c) = (float)fVar12;
      }
      else {
        switch(iVar4) {
        case 0x39a:
          fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x5c) = (float)fVar12;
          break;
        default:
          goto switchD_006c078a_caseD_1d;
        case 0x434:
          puVar9 = *(undefined4 **)(param_1 + 0x94);
          while (puVar9 != (undefined4 *)0x0) {
            puVar1 = (undefined4 *)puVar9[2];
            FUN_00796cd8(*puVar9);
            FUN_00796cd8(puVar9);
            puVar9 = puVar1;
          }
          *(undefined4 *)(param_1 + 0x94) = 0;
          *(undefined4 *)(param_1 + 0x98) = 0;
          *(undefined4 *)(param_1 + 0x9c) = 0;
          do {
            while (iVar4 = FUN_00535490(), iVar4 == 1) {
              iVar4 = FUN_007a7b3c(param_2 + 2);
              if ((iVar4 < 1) || (DAT_00877690 <= iVar4)) {
                if (DAT_00dc4b5e != '\0') {
                  FUN_00429a00(s_ERROR___Invalid_Province_ID___s__0086a850,param_2 + 2,
                               *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
              }
              else {
                pvVar6 = operator_new(8);
                local_4._0_1_ = 3;
                if (pvVar6 == (void *)0x0) {
                  piVar7 = (int *)0x0;
                }
                else {
                  piVar7 = (int *)FUN_0076c7a0();
                }
                local_4 = (uint)local_4._1_3_ << 8;
                *piVar7 = iVar4;
                fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
                piVar7[1] = (int)(float)fVar12;
                cVar3 = (**(code **)(*(int *)(param_1 + 0x90) + 0x24))(piVar7);
                if (cVar3 == '\0') {
                  iVar8 = *(int *)(param_1 + 0x98);
                  puVar9 = operator_new(0xe);
                  if (puVar9 == (undefined4 *)0x0) {
                    puVar9 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar9 = piVar7;
                    puVar9[1] = iVar8;
                    puVar9[2] = 0;
                    *(undefined1 *)(puVar9 + 3) = 0;
                  }
                  iVar2 = *(int *)(param_1 + 0x9c);
                  *(undefined4 **)(param_1 + 0x98) = puVar9;
                  *(int *)(param_1 + 0x9c) = iVar2 + 1;
                  if (iVar2 == 0) {
                    *(undefined4 **)(param_1 + 0x94) = puVar9;
                  }
                  else {
                    *(undefined4 **)(iVar8 + 8) = puVar9;
                  }
                }
                if (DAT_00dc4b5e != '\0') {
                  piVar7 = (int *)(DAT_00ab27b4 + iVar4 * 0x4b2);
                  iVar8 = *(int *)(DAT_00ab27b4 + 0x254 + iVar4 * 0x4b2);
                  if ((iVar8 == 8) || (iVar8 == 9)) {
                    uVar10 = (**(code **)(*piVar7 + 0xc))
                                       (*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                    FUN_00429a00(s_ERROR___Invalid_Province_ID___d__0086a914,iVar4,uVar10);
                    DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  }
                  iVar8 = 0;
                  puVar9 = *(undefined4 **)(param_1 + 0x94);
                  if (*(undefined4 **)(param_1 + 0x94) != (undefined4 *)0x0) {
                    do {
                      piVar5 = puVar9 + 2;
                      if (*(int *)*puVar9 == iVar4) {
                        iVar8 = iVar8 + 1;
                      }
                      puVar9 = (undefined4 *)*piVar5;
                    } while ((undefined4 *)*piVar5 != (undefined4 *)0x0);
                    if (1 < iVar8) {
                      uVar10 = (**(code **)(*piVar7 + 0xc))
                                         (iVar8,*param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                      FUN_00429a00(s_ERROR___Province_ID___d____s__us_0086a8ac,iVar4,uVar10);
                      DAT_00dc4b60 = DAT_00dc4b60 + 1;
                    }
                  }
                }
              }
            }
            if (iVar4 == 2) {
              while (local_1c != (int *)0x0) {
                piVar7 = (int *)local_1c[2];
                FUN_00796cd8(local_1c);
                local_1c = piVar7;
              }
              ExceptionList = local_c;
              return 0;
            }
            piVar7 = (int *)FUN_00534391();
          } while (*piVar7 != 4);
          FUN_005343dc();
          break;
        case 0x437:
          fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x60) = (float)fVar12;
          break;
        case 0x438:
          iVar4 = FUN_007a7b3c(param_2 + 0x104);
          if ((-1 < iVar4) && (iVar4 < 4)) {
            *(int *)(param_1 + 0x84) = iVar4;
          }
          break;
        case 0x439:
          iVar4 = param_2[0x103];
          if (iVar4 == 0x43c) {
            *(undefined4 *)(param_1 + 0x88) = 0;
          }
          else if (iVar4 == 0x43d) {
            *(undefined4 *)(param_1 + 0x88) = 1;
          }
          else if (iVar4 == 0x25f) {
            *(undefined4 *)(param_1 + 0x88) = 2;
          }
          else if (iVar4 == 0x25e) {
            *(undefined4 *)(param_1 + 0x88) = 4;
          }
          else {
            *(undefined4 *)(param_1 + 0x88) = 3;
          }
          break;
        case 0x43a:
          iVar4 = param_2[0x103];
          if (iVar4 == 0x43c) {
            *(undefined4 *)(param_1 + 0x8c) = 0;
          }
          else if (iVar4 == 0x43d) {
            *(undefined4 *)(param_1 + 0x8c) = 1;
          }
          else if (iVar4 == 0x25f) {
            *(undefined4 *)(param_1 + 0x8c) = 2;
          }
          else if (iVar4 == 0x25e) {
            *(undefined4 *)(param_1 + 0x8c) = 4;
          }
          else {
            *(undefined4 *)(param_1 + 0x8c) = 3;
          }
          break;
        case 0x43b:
          puVar9 = *(undefined4 **)(param_1 + 0xa6);
          while (puVar9 != (undefined4 *)0x0) {
            puVar1 = (undefined4 *)puVar9[2];
            FUN_00796cd8(*puVar9);
            FUN_00796cd8(puVar9);
            puVar9 = puVar1;
          }
          *(undefined4 *)(param_1 + 0xa6) = 0;
          *(undefined4 *)(param_1 + 0xaa) = 0;
          *(undefined4 *)(param_1 + 0xae) = 0;
          do {
            while (iVar4 = FUN_00535490(), iVar4 == 1) {
              iVar4 = FUN_004af6b0(param_2 + 2);
              if (iVar4 == 0) {
                if (DAT_00dc4b5e != '\0') {
                  FUN_00429a00(s_ERROR___Invalid_country_TAG___s__0086a988,param_2 + 2,
                               *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                  DAT_00dc4b60 = DAT_00dc4b60 + 1;
                }
              }
              else {
                pvVar6 = operator_new(8);
                local_4._0_1_ = 1;
                if (pvVar6 == (void *)0x0) {
                  piVar7 = (int *)0x0;
                }
                else {
                  piVar7 = (int *)FUN_0076c770();
                }
                local_4 = (uint)local_4._1_3_ << 8;
                *piVar7 = iVar4;
                iVar8 = FUN_007a7b3c(param_2 + 0x104);
                piVar7[1] = iVar8;
                cVar3 = (**(code **)(*(int *)(param_1 + 0xa2) + 0x24))(piVar7);
                if (cVar3 == '\0') {
                  iVar8 = *(int *)(param_1 + 0xaa);
                  puVar9 = operator_new(0xe);
                  if (puVar9 == (undefined4 *)0x0) {
                    puVar9 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar9 = piVar7;
                    puVar9[1] = iVar8;
                    puVar9[2] = 0;
                    *(undefined1 *)(puVar9 + 3) = 0;
                  }
                  iVar2 = *(int *)(param_1 + 0xae);
                  *(undefined4 **)(param_1 + 0xaa) = puVar9;
                  *(int *)(param_1 + 0xae) = iVar2 + 1;
                  if (iVar2 == 0) {
                    *(undefined4 **)(param_1 + 0xa6) = puVar9;
                  }
                  else {
                    *(undefined4 **)(iVar8 + 8) = puVar9;
                  }
                }
                if (DAT_00dc4b5e != '\0') {
                  iVar8 = 0;
                  puVar9 = *(undefined4 **)(param_1 + 0xa6);
                  if (puVar9 != (undefined4 *)0x0) {
                    do {
                      piVar7 = puVar9 + 2;
                      if (*(int *)*puVar9 == iVar4) {
                        iVar8 = iVar8 + 1;
                      }
                      puVar9 = (undefined4 *)*piVar7;
                    } while ((undefined4 *)*piVar7 != (undefined4 *)0x0);
                    if (1 < iVar8) {
                      FUN_00429a00(s_ERROR___Country_TAG___s__is_used_0086a9e0,param_2 + 2,iVar8,
                                   *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                      DAT_00dc4b60 = DAT_00dc4b60 + 1;
                    }
                  }
                }
              }
            }
            if (iVar4 == 2) {
              while (local_1c != (int *)0x0) {
                piVar7 = (int *)local_1c[2];
                FUN_00796cd8(local_1c);
                local_1c = piVar7;
              }
              ExceptionList = local_c;
              return 0;
            }
            piVar7 = (int *)FUN_00534391();
          } while (*piVar7 != 4);
          FUN_005343dc();
          break;
        case 0x444:
          fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 100) = (float)fVar12;
          break;
        case 0x445:
          fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
          *(float *)(param_1 + 0x68) = (float)fVar12;
        }
      }
      goto LAB_006c0684;
    }
    if (iVar4 < 0x462) {
      if (iVar4 == 0x461) {
        puVar9 = *(undefined4 **)(param_1 + 0xb8);
        while (puVar9 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)puVar9[2];
          FUN_00796cd8(*puVar9);
          FUN_00796cd8(puVar9);
          puVar9 = puVar1;
        }
        *(undefined4 *)(param_1 + 0xb8) = 0;
        *(undefined4 *)(param_1 + 0xbc) = 0;
        *(undefined4 *)(param_1 + 0xc0) = 0;
        do {
          while (iVar4 = FUN_00535490(), iVar4 == 1) {
            iVar4 = FUN_004af6b0(param_2 + 2);
            if (iVar4 == 0) {
              if (DAT_00dc4b5e != '\0') {
                FUN_00429a00(s_ERROR___Invalid_country_TAG___s__0086a7a4,param_2 + 2,
                             *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                DAT_00dc4b60 = DAT_00dc4b60 + 1;
              }
            }
            else {
              pvVar6 = operator_new(8);
              local_4._0_1_ = 2;
              if (pvVar6 == (void *)0x0) {
                piVar7 = (int *)0x0;
              }
              else {
                piVar7 = (int *)FUN_0076c770();
              }
              local_4 = (uint)local_4._1_3_ << 8;
              *piVar7 = iVar4;
              iVar8 = FUN_007a7b3c(param_2 + 0x104);
              piVar7[1] = iVar8;
              cVar3 = (**(code **)(*(int *)(param_1 + 0xb4) + 0x24))(piVar7);
              if (cVar3 == '\0') {
                iVar8 = *(int *)(param_1 + 0xbc);
                puVar9 = operator_new(0xe);
                if (puVar9 == (undefined4 *)0x0) {
                  puVar9 = (undefined4 *)0x0;
                }
                else {
                  *puVar9 = piVar7;
                  puVar9[1] = iVar8;
                  puVar9[2] = 0;
                  *(undefined1 *)(puVar9 + 3) = 0;
                }
                iVar2 = *(int *)(param_1 + 0xc0);
                *(undefined4 **)(param_1 + 0xbc) = puVar9;
                *(int *)(param_1 + 0xc0) = iVar2 + 1;
                if (iVar2 == 0) {
                  *(undefined4 **)(param_1 + 0xb8) = puVar9;
                }
                else {
                  *(undefined4 **)(iVar8 + 8) = puVar9;
                }
              }
              if (DAT_00dc4b5e != '\0') {
                iVar8 = 0;
                puVar9 = *(undefined4 **)(param_1 + 0xb8);
                if (puVar9 != (undefined4 *)0x0) {
                  do {
                    piVar7 = puVar9 + 2;
                    if (*(int *)*puVar9 == iVar4) {
                      iVar8 = iVar8 + 1;
                    }
                    puVar9 = (undefined4 *)*piVar7;
                  } while ((undefined4 *)*piVar7 != (undefined4 *)0x0);
                  if (1 < iVar8) {
                    FUN_00429a00(s_ERROR___Country_TAG___s__is_used_0086a7f4,param_2 + 2,iVar8,
                                 *param_2 + 0x216,*(int *)(*param_2 + 0x212) + 1);
                    DAT_00dc4b60 = DAT_00dc4b60 + 1;
                  }
                }
              }
            }
          }
          if (iVar4 == 2) {
            while (local_1c != (int *)0x0) {
              piVar7 = (int *)local_1c[2];
              FUN_00796cd8(local_1c);
              local_1c = piVar7;
            }
            ExceptionList = local_c;
            return 0;
          }
          piVar7 = (int *)FUN_00534391();
        } while (*piVar7 != 4);
        FUN_005343dc();
        goto LAB_006c0684;
      }
      switch(iVar4) {
      case 0x447:
        uVar10 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 4) = uVar10;
        goto LAB_006c0684;
      case 0x448:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x70) = (float)fVar12;
        goto LAB_006c0684;
      case 0x449:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x74) = (float)fVar12;
        goto LAB_006c0684;
      case 0x44a:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x78) = (float)fVar12;
        goto LAB_006c0684;
      case 1099:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x7c) = (float)fVar12;
        goto LAB_006c0684;
      case 0x44c:
        fVar12 = (float10)FUN_00429d80(param_2 + 0x104);
        *(float *)(param_1 + 0x80) = (float)fVar12;
        goto LAB_006c0684;
      }
    }
    else {
      if (iVar4 == 0x683) {
        uVar10 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0xc6) = uVar10;
        goto LAB_006c0684;
      }
      if (iVar4 == 0x684) {
        uVar10 = FUN_007a7b3c(param_2 + 0x104);
        *(undefined4 *)(param_1 + 0xca) = uVar10;
        goto LAB_006c0684;
      }
    }
  }
switchD_006c078a_caseD_1d:
  FUN_005349b0(s_unknown_lhs_in_frontprefs_0086a788);
  while (local_1c != (int *)0x0) {
    piVar7 = (int *)local_1c[2];
    FUN_00796cd8(local_1c);
    local_1c = piVar7;
  }
  ExceptionList = local_c;
  return 0xfffffffe;
}


