// FUN_005bd94b @ 5bd94b size=4216

void FUN_005bd94b(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  void *pvVar6;
  bool bVar7;
  undefined4 *local_1d8;
  undefined4 *local_1d0;
  undefined4 *local_1cc;
  undefined4 *local_1c8;
  int local_164;
  int local_158;
  int local_154;
  char local_128 [272];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007cc599;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00426120(s_db_armynames_csv_008594f8);
  local_8 = 0;
  local_14 = FUN_00426720();
  for (local_18 = 0; local_18 < local_14; local_18 = local_18 + 1) {
    FUN_004265c0(local_128);
    if (local_128[0] != '\0') {
      iVar3 = FUN_004af6b0(local_128);
      if (iVar3 == 0) {
        FUN_00429a00(s_ERROR___Invalid_TAG___s__in_army_0085950c,local_128,local_18 + 1);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      FUN_004265c0(local_128);
      sVar4 = _strlen(local_128);
      if (0x3f < sVar4) {
        sVar4 = _strlen(local_128);
        iVar5 = sVar4 - 0x3f;
        sVar4 = _strlen(local_128);
        FUN_00429a00(s_WARNING___Too_long_unit_name_in_a_00859544,local_18 + 1,local_128,sVar4,iVar5
                    );
        if (DAT_00dc4b5e != '\0') {
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
      }
      sVar4 = _strlen(local_128);
      pvVar6 = operator_new(sVar4 + 1);
      FUN_007a74f0(pvVar6,local_128);
      iVar3 = iVar3 * 0x12;
      iVar5 = *(int *)(&DAT_00be19e0 + iVar3);
      local_1c8 = operator_new(0xe);
      if (local_1c8 == (undefined4 *)0x0) {
        local_1c8 = (undefined4 *)0x0;
      }
      else {
        *local_1c8 = pvVar6;
        local_1c8[1] = iVar5;
        local_1c8[2] = 0;
        *(undefined1 *)(local_1c8 + 3) = 0;
      }
      *(undefined4 **)(&DAT_00be19e0 + iVar3) = local_1c8;
      iVar2 = *(int *)(&DAT_00be19e4 + iVar3);
      *(int *)(&DAT_00be19e4 + iVar3) = *(int *)(&DAT_00be19e4 + iVar3) + 1;
      if (iVar2 == 0) {
        *(undefined4 *)(&DAT_00be19dc + iVar3) = *(undefined4 *)(&DAT_00be19e0 + iVar3);
      }
      else {
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(&DAT_00be19e0 + iVar3);
      }
    }
  }
  FUN_00426120(s_db_navynames_csv_00859598);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_14 = FUN_00426720();
  for (local_18 = 0; local_18 < local_14; local_18 = local_18 + 1) {
    FUN_004265c0(local_128);
    iVar3 = FUN_004af6b0(local_128);
    if (iVar3 == 0) {
      FUN_00429a00(s_ERROR___Invalid_TAG___s__in_navy_008595ac,local_128,local_18 + 1);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
    FUN_004265c0(local_128);
    sVar4 = _strlen(local_128);
    if (0x3f < sVar4) {
      sVar4 = _strlen(local_128);
      iVar5 = sVar4 - 0x3f;
      sVar4 = _strlen(local_128);
      FUN_00429a00(s_WARNING___Too_long_unit_name_in_n_008595e4,local_18 + 1,local_128,sVar4,iVar5);
      if (DAT_00dc4b5e != '\0') {
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
    }
    sVar4 = _strlen(local_128);
    pvVar6 = operator_new(sVar4 + 1);
    FUN_007a74f0(pvVar6,local_128);
    iVar3 = iVar3 * 0x12;
    iVar5 = *(int *)(&DAT_00cb8590 + iVar3);
    local_1cc = operator_new(0xe);
    if (local_1cc == (undefined4 *)0x0) {
      local_1cc = (undefined4 *)0x0;
    }
    else {
      *local_1cc = pvVar6;
      local_1cc[1] = iVar5;
      local_1cc[2] = 0;
      *(undefined1 *)(local_1cc + 3) = 0;
    }
    *(undefined4 **)(&DAT_00cb8590 + iVar3) = local_1cc;
    iVar2 = *(int *)(&DAT_00cb8594 + iVar3);
    *(int *)(&DAT_00cb8594 + iVar3) = *(int *)(&DAT_00cb8594 + iVar3) + 1;
    if (iVar2 == 0) {
      *(undefined4 *)(&DAT_00cb858c + iVar3) = *(undefined4 *)(&DAT_00cb8590 + iVar3);
    }
    else {
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(&DAT_00cb8590 + iVar3);
    }
  }
  FUN_00426120(s_db_airnames_csv_00859638);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_14 = FUN_00426720();
  for (local_18 = 0; local_18 < local_14; local_18 = local_18 + 1) {
    FUN_004265c0(local_128);
    iVar3 = FUN_004af6b0(local_128);
    if (iVar3 == 0) {
      FUN_00429a00(s_ERROR___Invalid_TAG___s__in_airn_00859648,local_128,local_18 + 1);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
    FUN_004265c0(local_128);
    sVar4 = _strlen(local_128);
    if (0x3f < sVar4) {
      sVar4 = _strlen(local_128);
      iVar5 = sVar4 - 0x3f;
      sVar4 = _strlen(local_128);
      FUN_00429a00(s_WARNING___Too_long_unit_name_in_a_00859680,local_18 + 1,local_128,sVar4,iVar5);
      if (DAT_00dc4b5e != '\0') {
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
    }
    sVar4 = _strlen(local_128);
    pvVar6 = operator_new(sVar4 + 1);
    FUN_007a74f0(pvVar6,local_128);
    iVar3 = iVar3 * 0x12;
    iVar5 = *(int *)(&DAT_00be3318 + iVar3);
    local_1d0 = operator_new(0xe);
    if (local_1d0 == (undefined4 *)0x0) {
      local_1d0 = (undefined4 *)0x0;
    }
    else {
      *local_1d0 = pvVar6;
      local_1d0[1] = iVar5;
      local_1d0[2] = 0;
      *(undefined1 *)(local_1d0 + 3) = 0;
    }
    *(undefined4 **)(&DAT_00be3318 + iVar3) = local_1d0;
    iVar2 = *(int *)(&DAT_00be331c + iVar3);
    *(int *)(&DAT_00be331c + iVar3) = *(int *)(&DAT_00be331c + iVar3) + 1;
    if (iVar2 == 0) {
      *(undefined4 *)(&DAT_00be3314 + iVar3) = *(undefined4 *)(&DAT_00be3318 + iVar3);
    }
    else {
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(&DAT_00be3318 + iVar3);
    }
  }
  FUN_00426120(s_db_unitnames_csv_008596d4);
  local_8 = CONCAT31(local_8._1_3_,3);
  local_14 = FUN_00426720();
  for (local_18 = 0; local_18 < local_14; local_18 = local_18 + 1) {
    FUN_004265c0(local_128);
    iVar3 = FUN_004af6b0(local_128);
    if (iVar3 == 0) {
      FUN_00429a00(s_ERROR___Invalid_TAG___s__in_unit_008596e8,local_128,local_18 + 1);
    }
    FUN_004265c0(local_128);
    iVar5 = FUN_007a8730(local_128,&DAT_00859720);
    if (iVar5 == 0) {
      local_154 = 0x15;
    }
    else {
      iVar5 = FUN_007a8730(local_128,&DAT_00859724);
      if (iVar5 == 0) {
        local_154 = 0x1a;
      }
      else {
        iVar5 = FUN_007a8730(local_128,&DAT_00859728);
        if (iVar5 == 0) {
          local_154 = 0x17;
        }
        else {
          iVar5 = FUN_007a8730(local_128,&DAT_0085972c);
          if (iVar5 == 0) {
            local_154 = 0x16;
          }
          else {
            iVar5 = FUN_007a8730(local_128,&DAT_00859730);
            if (iVar5 == 0) {
              local_154 = 0x18;
            }
            else {
              iVar5 = FUN_007a8730(local_128,&DAT_00859734);
              if (iVar5 == 0) {
                local_154 = 0x19;
              }
              else {
                iVar5 = FUN_007a8730(local_128,&DAT_00859738);
                if (iVar5 == 0) {
                  local_154 = 0;
                }
                else {
                  iVar5 = FUN_007a8730(local_128,&DAT_0085973c);
                  if (iVar5 == 0) {
                    local_154 = 1;
                  }
                  else {
                    iVar5 = FUN_007a8730(local_128,&PTR_DAT_00859740);
                    if (iVar5 == 0) {
                      local_154 = 2;
                    }
                    else {
                      iVar5 = FUN_007a8730(local_128,&DAT_00859744);
                      if (iVar5 == 0) {
                        local_154 = 3;
                      }
                      else {
                        iVar5 = FUN_007a8730(local_128,s_L_Arm_00859748);
                        if (iVar5 == 0) {
                          local_154 = 4;
                        }
                        else {
                          iVar5 = FUN_007a8730(local_128,&DAT_00859750);
                          if (iVar5 == 0) {
                            local_154 = 5;
                          }
                          else {
                            iVar5 = FUN_007a8730(local_128,&PTR_PTR_00859754);
                            if (iVar5 == 0) {
                              local_154 = 6;
                            }
                            else {
                              iVar5 = FUN_007a8730(local_128,&DAT_00859758);
                              if (iVar5 == 0) {
                                local_154 = 7;
                              }
                              else {
                                iVar5 = FUN_007a8730(local_128,&PTR_DAT_0085975c);
                                if (iVar5 == 0) {
                                  local_154 = 8;
                                }
                                else {
                                  iVar5 = FUN_007a8730(local_128,&DAT_00859760);
                                  if (iVar5 == 0) {
                                    local_154 = 9;
                                  }
                                  else {
                                    iVar5 = FUN_007a8730(local_128,&PTR_BYTE_00859764);
                                    if (iVar5 == 0) {
                                      local_154 = 0x11;
                                    }
                                    else {
                                      iVar5 = FUN_007a8730(local_128,&DAT_00859768);
                                      if (iVar5 == 0) {
                                        local_154 = 10;
                                      }
                                      else {
                                        iVar5 = FUN_007a8730(local_128,s_Int_F_0085976c);
                                        if (iVar5 == 0) {
                                          local_154 = 0xd;
                                        }
                                        else {
                                          iVar5 = FUN_007a8730(local_128,&DAT_00859774);
                                          if (iVar5 == 0) {
                                            local_154 = 0xc;
                                          }
                                          else {
                                            iVar5 = FUN_007a8730(local_128,s_Esc_F_00859778);
                                            if (iVar5 == 0) {
                                              local_154 = 0xf;
                                            }
                                            else {
                                              iVar5 = FUN_007a8730(local_128,&DAT_00859780);
                                              if (iVar5 == 0) {
                                                local_154 = 0xe;
                                              }
                                              else {
                                                iVar5 = FUN_007a8730(local_128,&DAT_00859784);
                                                if (iVar5 == 0) {
                                                  local_154 = 0xf;
                                                }
                                                else {
                                                  iVar5 = FUN_007a8730(local_128,&DAT_00859788);
                                                  if (iVar5 == 0) {
                                                    local_154 = 0x10;
                                                  }
                                                  else {
                                                    iVar5 = FUN_007a8730(local_128,&DAT_0085978c);
                                                    if (iVar5 == 0) {
                                                      local_154 = 0x12;
                                                    }
                                                    else {
                                                      iVar5 = FUN_007a8730(local_128,&DAT_00859790);
                                                      if (iVar5 == 0) {
                                                        local_154 = 0x1c;
                                                      }
                                                      else {
                                                        iVar5 = FUN_007a8730(local_128,&DAT_00859794
                                                                            );
                                                        if (iVar5 == 0) {
                                                          local_154 = 0x1d;
                                                        }
                                                        else {
                                                          iVar5 = FUN_007a8730(local_128,
                                                                               &DAT_00859798);
                                                          if (iVar5 == 0) {
                                                            local_154 = 0x1e;
                                                          }
                                                          else {
                                                            iVar5 = FUN_007a8730(local_128,
                                                                                 &DAT_0085979c);
                                                            if (iVar5 == 0) {
                                                              local_154 = 0x13;
                                                            }
                                                            else {
                                                              iVar5 = FUN_007a8730(local_128,
                                                                                   &DAT_008597a0);
                                                              if (iVar5 == 0) {
                                                                local_154 = 0x14;
                                                              }
                                                              else {
                                                                iVar5 = FUN_007a8730(local_128,
                                                                                     &DAT_008597a4);
                                                                if (iVar5 == 0) {
                                                                  local_154 = 0xb;
                                                                }
                                                                else {
                                                                  iVar5 = FUN_007a8730(local_128,
                                                                                       &DAT_008597a8
                                                                                      );
                                                                  if (iVar5 == 0) {
                                                                    local_154 = 0x1b;
                                                                  }
                                                                  else {
                                                                    iVar5 = FUN_007a8730(local_128,
                                                                                         &
                                                  DAT_008597ac);
                                                  if (iVar5 == 0) {
                                                    local_154 = 0x1f;
                                                  }
                                                  else {
                                                    iVar5 = FUN_007a8730(local_128,s_R_Int_008597b0)
                                                    ;
                                                    if (iVar5 == 0) {
                                                      local_154 = 0x20;
                                                    }
                                                    else {
                                                      local_154 = FUN_007a7b3c(local_128);
                                                      if (((local_154 < 1) &&
                                                          (iVar5 = FUN_007a8730(local_128,
                                                                                &DAT_008597b8),
                                                          iVar5 != 0)) || (0x8b < local_154)) {
                                                        FUN_00429a00(
                                                  s_ERROR___Invalid_unit_type___s__i_008597bc,
                                                  local_128,local_18 + 1);
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
    FUN_004265c0(local_128);
    sVar4 = _strlen(local_128);
    if (0x3f < (int)sVar4) {
      FUN_00429a00(s_WARNING___Too_long_unit_name_in_u_008597f8,local_18 + 1,local_128,sVar4,
                   sVar4 - 0x3f);
    }
    pvVar6 = operator_new(sVar4 + 1);
    local_164 = 0;
    for (local_158 = 0; local_158 < (int)sVar4; local_158 = local_158 + 1) {
      cVar1 = local_128[local_158];
      bVar7 = *(char *)(*DAT_00d12b40 + 0x422) != '\0';
      if (!bVar7) {
        if ((cVar1 < 'a') || ('z' < cVar1)) {
          if ((cVar1 < 'A') || ('Z' < cVar1)) {
            if ((cVar1 < '0') || ('9' < cVar1)) {
              switch(cVar1) {
              case -0x76:
              case -0x6f:
              case -0x6e:
              case -0x66:
              case -0x4c:
              case -0x3e:
              case -0x3c:
              case -0x3b:
              case -0x38:
              case -0x37:
              case -0x2b:
              case -0x2a:
              case -0x28:
              case -0x24:
              case -0x21:
              case -0x20:
              case -0x1f:
              case -0x1e:
              case -0x1d:
              case -0x1c:
              case -0x1b:
              case -0x1a:
              case -0x19:
              case -0x18:
              case -0x17:
              case -0x15:
              case -0x13:
              case -0xf:
              case -0xd:
              case -0xb:
              case -10:
              case -8:
              case -7:
              case -6:
              case -4:
              case ' ':
              case '!':
              case '\'':
              case '(':
              case ')':
              case '-':
              case '.':
              case '/':
              case '`':
                bVar7 = true;
              }
            }
            else {
              bVar7 = true;
            }
          }
          else {
            bVar7 = true;
          }
        }
        else {
          bVar7 = true;
        }
      }
      if (bVar7) {
        *(char *)((int)pvVar6 + local_164) = cVar1;
        local_164 = local_164 + 1;
      }
    }
    *(undefined1 *)((int)pvVar6 + local_158) = 0;
    iVar5 = local_154 * 0x12 + iVar3 * 0x9d8;
    iVar3 = *(int *)(&DAT_00be4b48 + iVar5 + 8);
    local_1d8 = operator_new(0xe);
    if (local_1d8 == (undefined4 *)0x0) {
      local_1d8 = (undefined4 *)0x0;
    }
    else {
      *local_1d8 = pvVar6;
      local_1d8[1] = iVar3;
      local_1d8[2] = 0;
      *(undefined1 *)(local_1d8 + 3) = 0;
    }
    *(undefined4 **)(&DAT_00be4b48 + iVar5 + 8) = local_1d8;
    iVar2 = *(int *)(&DAT_00be4b48 + iVar5 + 0xc);
    *(int *)(&DAT_00be4b48 + iVar5 + 0xc) = *(int *)(&DAT_00be4b48 + iVar5 + 0xc) + 1;
    if (iVar2 == 0) {
      *(undefined4 *)(&DAT_00be4b48 + iVar5 + 4) = *(undefined4 *)(&DAT_00be4b48 + iVar5 + 8);
    }
    else {
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(&DAT_00be4b48 + iVar5 + 8);
    }
  }
  local_8._0_1_ = 2;
  FUN_004262d0();
  local_8._0_1_ = 1;
  FUN_004262d0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004262d0();
  local_8 = 0xffffffff;
  FUN_004262d0();
  ExceptionList = local_10;
  return;
}


