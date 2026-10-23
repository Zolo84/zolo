// FUN_0076bc80 @ 76bc80 size=848

void FUN_0076bc80(void)

{
  undefined2 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int local_110;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e0ade;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = operator_new(8);
  iVar5 = 0;
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_00426120(s_db_difficulty_csv_0083b3f0);
  }
  local_4 = 0xffffffff;
  local_110 = FUN_00426720();
  local_110 = local_110 + -1;
  FUN_00426330(1);
  if (0 < local_110) {
    do {
      FUN_004265c0(local_10c);
      iVar4 = FUN_007a8730(s_HUMAN_00877210,local_10c);
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      else {
        iVar4 = FUN_007a8730(&DAT_0087720c,local_10c);
        if (iVar4 == 0) {
          iVar5 = 1;
        }
        else {
          iVar4 = FUN_007a8730(&DAT_00877204,local_10c);
          if (iVar4 == 0) {
            iVar5 = 2;
          }
          else {
            iVar4 = FUN_007a8730(s_ALLIES_008771fc,local_10c);
            if (iVar4 == 0) {
              iVar5 = 3;
            }
            else {
              iVar4 = FUN_007a8730(s_COMINTERN_008771f0,local_10c);
              if (iVar4 == 0) {
                iVar5 = 4;
              }
              else {
                iVar4 = FUN_007a8730(s_NEUTRAL_008771e8,local_10c);
                if (iVar4 == 0) {
                  iVar5 = 5;
                }
                else {
                  iVar4 = FUN_007a8730(&DAT_00875a58,local_10c);
                  if ((iVar4 != 0) && (iVar4 = FUN_007a8730(&DAT_00875a54,local_10c), iVar4 != 0)) {
                    iVar6 = 0;
                    iVar4 = FUN_007a8730(s_INDUSTRY_008771dc,local_10c);
                    if (iVar4 != 0) {
                      iVar4 = FUN_007a8730(s_RESOURCES_008771d0,local_10c);
                      if (iVar4 == 0) {
                        iVar6 = 1;
                      }
                      else {
                        iVar4 = FUN_007a8730(s_MANPOWER_008771c4,local_10c);
                        if (iVar4 == 0) {
                          iVar6 = 2;
                        }
                        else {
                          iVar4 = FUN_007a8730(s_RESEARCH_008771b8,local_10c);
                          if (iVar4 == 0) {
                            iVar6 = 3;
                          }
                          else {
                            iVar4 = FUN_007a8730(s_ORGANISATION_008771a8,local_10c);
                            if ((iVar4 == 0) ||
                               (iVar4 = FUN_007a8730(s_ORGANIZATION_00877198,local_10c), iVar4 == 0)
                               ) {
                              iVar6 = 4;
                            }
                            else {
                              iVar4 = FUN_007a8730(s_COMBAT_00877190,local_10c);
                              if (iVar4 == 0) {
                                iVar6 = 5;
                              }
                              else {
                                iVar4 = FUN_007a8730(s_MOVE_SPEED_00877184,local_10c);
                                if (iVar4 == 0) {
                                  iVar6 = 6;
                                }
                                else {
                                  iVar4 = FUN_007a8730(s_DISSENT_0087717c,local_10c);
                                  if (iVar4 == 0) {
                                    iVar6 = 7;
                                  }
                                  else {
                                    iVar4 = FUN_007a8730(s_DIPLOMACY_00877170,local_10c);
                                    if (iVar4 == 0) {
                                      iVar6 = 8;
                                    }
                                    else {
                                      iVar4 = FUN_007a8730(s_INTELLIGENCE_00877160,local_10c);
                                      if (iVar4 == 0) {
                                        iVar6 = 9;
                                      }
                                      else {
                                        iVar4 = FUN_007a8730(s_STOCKPILES_00877154,local_10c);
                                        if (iVar4 == 0) {
                                          iVar6 = 10;
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
                    iVar4 = 5;
                    puVar7 = (undefined2 *)(&DAT_00d610ec + (iVar6 + iVar5 * 0xb) * 10);
                    do {
                      FUN_004265c0(local_10c);
                      uVar1 = FUN_007a7b3c(local_10c);
                      *puVar7 = uVar1;
                      puVar7 = puVar7 + 1;
                      iVar4 = iVar4 + -1;
                    } while (iVar4 != 0);
                  }
                }
              }
            }
          }
        }
      }
      FUN_00426330(1);
      local_110 = local_110 + -1;
    } while (local_110 != 0);
  }
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  ExceptionList = local_c;
  return;
}


