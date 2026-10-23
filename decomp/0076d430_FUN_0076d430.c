// FUN_0076d430 @ 76d430 size=3480

void __thiscall FUN_0076d430(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int local_23c;
  int *local_230;
  int local_228;
  undefined2 local_220;
  undefined4 local_21e;
  int local_218;
  int local_212;
  char local_20c [256];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e0ca6;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x1be90);
  ExceptionList = &local_c;
  local_218 = param_1;
  pvVar5 = operator_new(8);
  local_4 = 0;
  if (pvVar5 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)FUN_00426120(param_2);
  }
  local_4 = 0xffffffff;
  iVar7 = FUN_00426720();
  iVar7 = iVar7 + -1;
  FUN_004265c0(local_20c);
  local_212 = FUN_004af6b0(local_20c);
  if ((0 < param_3) && (local_212 != param_3)) goto joined_r0x0076e1a3;
  if (DAT_00dc4b5e != '\0') {
    if (DAT_00dc3a00 == '\0') {
LAB_0076d539:
      FUN_007a630a(local_10c,param_2);
    }
    else {
      FUN_007a630a(local_10c,s__s__s_0083a350,&DAT_00dc3a00,param_2);
      iVar8 = FUN_007a6615(local_10c,&DAT_008390e0);
      if (iVar8 == 0) goto LAB_0076d539;
      FUN_007a6429(iVar8);
    }
    FUN_00429a00(&DAT_0083f5a0,local_10c);
    if ((DAT_00dc4b5e != '\0') && (iVar7 < 1)) {
      FUN_00429a00(s_WARNING___No_ministers_found_in___0087810c,param_2);
    }
  }
  FUN_004265c0(local_20c);
  iVar8 = FUN_007a8730(s_Ruling_Cabinet___Start_008780f4,local_20c);
  if (iVar8 != 0) {
    if (puVar6 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return;
    }
    (**(code **)*puVar6)(1);
    ExceptionList = local_c;
    return;
  }
  FUN_00426330(1);
  local_23c = 0;
  local_228 = 0;
  if (0 < iVar7) {
    do {
      FUN_004265c0(local_20c);
      iVar8 = FUN_007a7b3c(local_20c);
      if (iVar8 < 1) {
        FUN_004265c0(local_20c);
        iVar8 = _strncmp(local_20c,s_A_Cabinet___00877960,9);
        if (iVar8 == 0) {
          local_23c = 1;
        }
        else {
          iVar8 = _strncmp(local_20c,s_B_Cabinet___00877954,9);
          if (iVar8 == 0) {
            local_23c = 2;
          }
          else {
            iVar8 = FUN_007a8730(local_20c,s_Shadow_Fascist_Cabinet_0087793c);
            if (iVar8 == 0) {
              local_23c = 3;
            }
            else {
              iVar8 = FUN_007a8730(local_20c,s_Shadow_Communist_Cabinet_00877920);
              if (iVar8 == 0) {
                local_23c = 4;
              }
              else {
                iVar8 = FUN_007a8730(local_20c,s_Shadow_RS_Cabinet_0087790c);
                if (iVar8 == 0) {
                  local_23c = 6;
                }
                else {
                  iVar8 = FUN_007a8730(local_20c,s_Shadow_CE_Cabinet_008778f8);
                  if (iVar8 == 0) {
                    local_23c = 5;
                  }
                  else {
                    iVar8 = FUN_007a8730(local_20c,s_Shadow_LC_Cabinet_008778e4);
                    if (iVar8 == 0) {
                      local_23c = 7;
                    }
                    else {
                      iVar8 = FUN_007a8730(local_20c,s_Shadow_Democratic_Cabinet_008778c8);
                      if (iVar8 == 0) {
                        local_23c = 7;
                      }
                      else {
                        iVar8 = FUN_007a8730(local_20c,s_Replacements_008778b8);
                        if (iVar8 == 0) {
                          local_23c = 8;
                        }
                        else {
                          if (DAT_00dc4b5f != '\0') {
                            FUN_00429a50(s_Ministerfile_corrupt___s_0087789c,param_2);
                          }
                          FUN_00429a00(s_ERROR___Corrupted_minister_file___00877874,param_2);
                          DAT_00dc4b60 = DAT_00dc4b60 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_0076e17f:
        FUN_00426330(1);
      }
      else {
        if ((local_23c != 0) && (local_23c != 8)) goto LAB_0076e17f;
        uVar9 = FUN_007a7b3c(local_20c);
        local_220 = 9;
        local_21e = uVar9;
        iVar8 = FUN_00428ee0(&local_220);
        if (iVar8 == 0) {
          local_230 = (int *)0x0;
LAB_0076d64b:
          pvVar5 = operator_new(0xc0);
          local_4 = 1;
          if (pvVar5 == (void *)0x0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)FUN_00761c60();
          }
          piVar10[0x1f] = local_212;
          local_4 = 0xffffffff;
          (**(code **)(piVar10[2] + 4))(&local_220);
        }
        else {
          piVar10 = (int *)(iVar8 + -8);
          local_230 = piVar10;
          if (piVar10 == (int *)0x0) goto LAB_0076d64b;
          if ((DAT_00dc4b5e != '\0') &&
             ((DAT_00893750 == 0 || (*(char *)(DAT_00893750 + 0x111) == '\0')))) {
            FUN_00429a00(s_ERROR___Already_loaded_minister_I_008780c4,uVar9,param_2);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          if ((DAT_00dc4b5f != '\0') &&
             ((DAT_00893750 == 0 || (*(char *)(DAT_00893750 + 0x111) == '\0')))) {
            FUN_00429a50(s_ID_conflict_for_minister__ID__d__0087809c,uVar9,param_2);
          }
        }
        FUN_004265c0(local_20c);
        iVar8 = FUN_007a8730(local_20c,s_Head_of_State_0087808c);
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = FUN_007a8730(local_20c,s_Head_of_Government_00878078);
          if (iVar8 == 0) {
            iVar8 = 1;
          }
          else {
            iVar8 = FUN_007a8730(local_20c,s_Foreign_Minister_00878064);
            if (iVar8 == 0) {
              iVar8 = 2;
            }
            else {
              iVar8 = FUN_007a8730(local_20c,s_Minister_of_Armament_0087804c);
              if (iVar8 == 0) {
                iVar8 = 3;
              }
              else {
                iVar8 = FUN_007a8730(local_20c,s_Minister_of_Security_00878034);
                if (iVar8 == 0) {
                  iVar8 = 4;
                }
                else {
                  iVar8 = FUN_007a8730(local_20c,s_Head_of_Military_Intelligence_00878014);
                  if (iVar8 == 0) {
                    iVar8 = 5;
                  }
                  else {
                    iVar8 = FUN_007a8730(local_20c,s_Chief_of_Staff_00878004);
                    if (iVar8 == 0) {
                      iVar8 = 6;
                    }
                    else {
                      iVar8 = FUN_007a8730(local_20c,s_Chief_of_Army_00877ff4);
                      if (iVar8 == 0) {
                        iVar8 = 7;
                      }
                      else {
                        iVar8 = FUN_007a8730(local_20c,s_Chief_of_Navy_00877fe4);
                        if (iVar8 == 0) {
                          iVar8 = 8;
                        }
                        else {
                          iVar8 = FUN_007a8730(local_20c,s_Chief_of_Air_Force_00877fd0);
                          if (iVar8 == 0) {
                            iVar8 = 9;
                          }
                          else {
                            iVar8 = FUN_007a8730(local_20c,s_Chief_of_Air_00877fc0);
                            if (iVar8 == 0) {
                              iVar8 = 9;
                            }
                            else {
                              iVar8 = 10;
                              if (DAT_00dc4b5f != '\0') {
                                FUN_00429a50(s_Minister_file_error___s___Invali_00877f6c,param_2,
                                             local_20c,*(undefined4 *)((int)piVar10 + 0xe));
                              }
                              if (DAT_00dc4b5e != '\0') {
                                FUN_00429a00(s_ERROR___Invalid_government_posit_00877f20,local_20c,
                                             *(undefined4 *)((int)piVar10 + 0xe),param_2);
                                DAT_00dc4b60 = DAT_00dc4b60 + 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        piVar10[0x20] = iVar8;
        cVar4 = (**(code **)(piVar10[0x21] + 0x24))(local_23c);
        if (cVar4 == '\0') {
          iVar8 = piVar10[0x23];
          pvVar5 = operator_new(0xe);
          local_4 = 2;
          if (pvVar5 == (void *)0x0) {
            iVar11 = 0;
          }
          else {
            iVar11 = FUN_0049a7a0(local_23c,iVar8,0);
          }
          iVar2 = piVar10[0x24];
          local_4 = 0xffffffff;
          piVar10[0x23] = iVar11;
          piVar10[0x24] = iVar2 + 1;
          if (iVar2 == 0) {
            piVar10[0x22] = iVar11;
          }
          else {
            *(int *)(iVar8 + 8) = iVar11;
          }
        }
        if (local_23c == 1) {
          iVar8 = *(int *)((int)piVar10 + 0x9e);
          pvVar5 = operator_new(0xe);
          local_4 = 3;
          if (pvVar5 == (void *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_0049a7a0(0x790,iVar8,0);
          }
          iVar11 = *(int *)((int)piVar10 + 0xa2);
          local_4 = 0xffffffff;
          *(undefined4 *)((int)piVar10 + 0x9e) = uVar9;
          *(int *)((int)piVar10 + 0xa2) = iVar11 + 1;
          if (iVar11 == 0) {
            *(undefined4 *)((int)piVar10 + 0x9a) = uVar9;
          }
          else {
            *(undefined4 *)(iVar8 + 8) = uVar9;
          }
        }
        else if (local_23c == 2) {
          iVar8 = piVar10[0x2c];
          pvVar5 = operator_new(0xe);
          local_4 = 4;
          if (pvVar5 == (void *)0x0) {
            iVar11 = 0;
          }
          else {
            iVar11 = FUN_0049a7a0(0x790,iVar8,0);
          }
          iVar2 = piVar10[0x2d];
          local_4 = 0xffffffff;
          piVar10[0x2c] = iVar11;
          piVar10[0x2d] = iVar2 + 1;
          if (iVar2 == 0) {
            piVar10[0x2b] = iVar11;
          }
          else {
            *(int *)(iVar8 + 8) = iVar11;
          }
        }
        FUN_004265c0(local_20c);
        if (local_230 == (int *)0x0) {
          FUN_00425ba0(local_20c);
        }
        if (iVar1 == 0x3f800000) {
          FUN_004265c0(local_20c);
          iVar8 = FUN_007a7b3c(local_20c);
          *(int *)((int)piVar10 + 0x1a) = iVar8;
          if ((iVar8 < 1) && (iVar8 = FUN_007a8730(local_20c,&DAT_0085813c), iVar8 != 0)) {
            if (DAT_00dc4b5f != '\0') {
              uVar9 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe));
              FUN_00429a50(s_Minister_file_error___s___Incorr_00877ed0,param_2,local_20c,uVar9);
            }
            if (DAT_00dc4b5e != '\0') {
              uVar9 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe),param_2);
              FUN_00429a00(s_ERROR___Incorrect_Start_Year___s_00877e88,local_20c,uVar9);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
          FUN_004265c0(local_20c);
          iVar8 = FUN_007a7b3c(local_20c);
          *(int *)((int)piVar10 + 0x1e) = iVar8;
          if ((iVar8 < 1) && (iVar8 = FUN_007a8730(local_20c,&DAT_0085813c), iVar8 != 0)) {
            if (DAT_00dc4b5f != '\0') {
              uVar9 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe));
              FUN_00429a50(s_Minister_file_error___s___Incorr_00877e38,param_2,local_20c,uVar9);
            }
            if (DAT_00dc4b5e != '\0') {
              uVar9 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe),param_2);
              FUN_00429a00(s_ERROR___Incorrect_End_Year___s__f_00877df0,local_20c,uVar9);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
        }
        else {
          FUN_004265c0(local_20c);
          iVar8 = FUN_007a7b3c(local_20c);
          if ((iVar8 < 1) && (iVar11 = FUN_007a8730(local_20c,&DAT_0085813c), iVar11 != 0)) {
            if (DAT_00dc4b5f != '\0') {
              uVar9 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe));
              FUN_00429a50(s_Minister_file_error___s___Incorr_00877ed0,param_2,local_20c,uVar9);
            }
            if (DAT_00dc4b5e != '\0') {
              uVar9 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe),param_2);
              FUN_00429a00(s_ERROR___Incorrect_Start_Year___s_00877e88,local_20c,uVar9);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
          if (iVar8 < 100) {
            iVar8 = iVar8 + 0x76c;
          }
          *(int *)((int)piVar10 + 0x1a) = iVar8;
        }
        if (DAT_00dc195c != '\0') {
          bVar3 = false;
          FUN_004265c0(local_20c);
          iVar8 = FUN_007a7b3c(local_20c);
          if ((iVar8 < 1) && (iVar11 = FUN_007a8730(local_20c,&DAT_0085813c), iVar11 != 0)) {
            if (DAT_00dc4b5f != '\0') {
              uVar9 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe));
              FUN_00429a50(s_Minister_file_error___s___Incorr_00877d9c,param_2,local_20c,uVar9);
            }
            if (DAT_00dc4b5e != '\0') {
              uVar9 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe),param_2);
              FUN_00429a00(s_ERROR___Incorrect_Retirement_Yea_00877d50,local_20c,uVar9);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
          iVar11 = *(int *)((int)piVar10 + 0x1a);
          if (iVar8 < iVar11) {
            if (DAT_00dc4b5f != '\0') {
              uVar9 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe));
              FUN_00429a50(s_Minister_file_error___s___Retire_00877cf4,param_2,iVar8,iVar11,uVar9);
            }
            if (DAT_00dc4b5e != '\0') {
              uVar9 = *(undefined4 *)((int)piVar10 + 0x1a);
              uVar12 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe),param_2);
              FUN_00429a00(s_ERROR___Retirement_Year___d__<_S_00877ca0,iVar8,uVar9,uVar12);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
            bVar3 = true;
          }
          iVar11 = *(int *)((int)piVar10 + 0x1e);
          if (iVar8 < iVar11) {
            if (DAT_00dc4b5f != '\0') {
              uVar9 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe));
              FUN_00429a50(s_Minister_file_error___s___Retire_00877c44,param_2,iVar8,iVar11,uVar9);
            }
            if (DAT_00dc4b5e != '\0') {
              uVar9 = *(undefined4 *)((int)piVar10 + 0x1e);
              uVar12 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe),param_2);
              FUN_00429a00(s_ERROR___Retirement_Year___d__<_E_00877bf0,iVar8,uVar9,uVar12);
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
            }
          }
          else if (!bVar3) {
            *(int *)((int)piVar10 + 0x22) = iVar8;
          }
        }
        iVar8 = *(int *)((int)piVar10 + 0x1e);
        iVar11 = *(int *)((int)piVar10 + 0x1a);
        if (iVar8 < iVar11) {
          if (DAT_00dc4b5f != '\0') {
            uVar9 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe));
            FUN_00429a50(s_Minister_file_error___s___End_Ye_00877b98,param_2,iVar8,iVar11,uVar9);
          }
          if (DAT_00dc4b5e != '\0') {
            uVar9 = *(undefined4 *)((int)piVar10 + 0x1a);
            uVar12 = *(undefined4 *)((int)piVar10 + 0x1e);
            uVar13 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe),param_2);
            FUN_00429a00(s_ERROR___End_Year___d__<_Start_Ye_00877b48,uVar12,uVar9,uVar13);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
        }
        FUN_004265c0(local_20c);
        if (local_230 == (int *)0x0) {
          uVar9 = FUN_007639b0(local_20c);
          FUN_00763e10(uVar9);
        }
        FUN_004265c0(local_20c);
        if (local_230 == (int *)0x0) {
          cVar4 = FUN_00767650(local_20c);
          if (cVar4 == '\0') {
            if (DAT_00dc4b5f != '\0') {
              uVar9 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe),param_2);
              FUN_00429a50(s_Minister_file_error__Unknown_min_00877ac4,local_20c,uVar9);
            }
            if (DAT_00dc4b5e != '\0') {
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
              uVar9 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe),param_2);
              FUN_00429a00(s_ERROR___Unknown_minister_persona_00877a48,local_20c,uVar9);
            }
          }
          iVar8 = *(int *)((int)piVar10 + 0xba);
          if (((iVar8 != 0) && (iVar11 = *(int *)(iVar8 + 4), iVar11 != 10)) &&
             (iVar2 = piVar10[0x20], iVar2 != iVar11)) {
            if (DAT_00dc4b5f != '\0') {
              uVar9 = *(undefined4 *)(iVar8 + 0xc);
              uVar12 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe),param_2);
              uVar12 = FUN_00763b00(iVar11,uVar12);
              uVar12 = FUN_00763b00(iVar2,uVar12);
              FUN_00429a50(s_Minister_file_error__Wrong_gover_008779d8,uVar9,uVar12);
            }
            if (DAT_00dc4b5e != '\0') {
              DAT_00dc4b60 = DAT_00dc4b60 + 1;
              iVar8 = piVar10[0x20];
              uVar9 = *(undefined4 *)(*(int *)((int)piVar10 + 0xba) + 4);
              uVar12 = *(undefined4 *)(*(int *)((int)piVar10 + 0xba) + 0xc);
              uVar13 = (**(code **)(*piVar10 + 0xc))(*(undefined4 *)((int)piVar10 + 0xe),param_2);
              uVar9 = FUN_00763b00(uVar9,uVar13);
              uVar9 = FUN_00763b00(iVar8,uVar9);
              FUN_00429a00(s_ERROR___Wrong_government_positio_0087796c,uVar12,uVar9);
            }
          }
        }
        FUN_004265c0(local_20c);
        if (local_230 == (int *)0x0) {
          uVar9 = FUN_007638d0(local_20c);
          FUN_00763e20(uVar9);
        }
        FUN_004265c0(local_20c);
        if (local_230 == (int *)0x0) {
          FUN_00761ee0(local_20c);
        }
        FUN_00426330(1);
        iVar8 = local_218;
        if (local_230 == (int *)0x0) {
          iVar11 = *(int *)(local_218 + 0x167c2);
          puVar14 = operator_new(0xe);
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            *puVar14 = piVar10;
            puVar14[1] = iVar11;
            puVar14[2] = 0;
            *(undefined1 *)(puVar14 + 3) = 0;
          }
          iVar2 = *(int *)(iVar8 + 0x167c6);
          *(undefined4 **)(iVar8 + 0x167c2) = puVar14;
          *(int *)(iVar8 + 0x167c6) = iVar2 + 1;
          if (iVar2 == 0) {
            *(undefined4 **)(iVar8 + 0x167be) = puVar14;
          }
          else {
            *(undefined4 **)(iVar11 + 8) = puVar14;
          }
        }
      }
      local_228 = local_228 + 1;
    } while (local_228 < iVar7);
  }
joined_r0x0076e1a3:
  if (puVar6 != (undefined4 *)0x0) {
    (**(code **)*puVar6)(1);
  }
  ExceptionList = local_c;
  return;
}


