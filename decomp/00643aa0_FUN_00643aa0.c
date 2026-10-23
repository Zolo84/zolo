// FUN_00643aa0 @ 643aa0 size=1194

undefined4 __thiscall FUN_00643aa0(int *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined1 local_200 [256];
  undefined1 auStack_100 [256];
  
  pcVar1 = (char *)(param_2 + 0x410);
LAB_00643ab9:
  while( true ) {
    iVar3 = FUN_00535490();
    FUN_00429d50(pcVar1,local_200);
    if (iVar3 == 1) break;
    piVar8 = (int *)FUN_00534391();
    if (*piVar8 == 4) {
      FUN_005343dc();
      return 0;
    }
  }
  iVar3 = *(int *)(param_2 + 4);
  if (0x1c1 < iVar3) {
    if (iVar3 == 0x1c8) {
      FUN_00643ff0(param_2);
    }
    else if (iVar3 == 0x1c9) {
      if (*(int *)(param_2 + 0x40c) == 0x111) {
        *(undefined1 *)((int)param_1 + 0x452) = 1;
      }
      else if (*(int *)(param_2 + 0x40c) != 0x112) {
        FUN_005349b0(s_Illegal_Argument_0085150c);
      }
    }
    else {
      if (iVar3 != 0x523) goto switchD_00643b03_caseD_1a8;
      iVar3 = 0;
      pcVar11 = s_BUTTON_LOCATE_ARMIES_00861f2c;
      do {
        iVar7 = FUN_007a8730(pcVar1,pcVar11);
        if (iVar7 == 0) {
          *(undefined4 *)((int)param_1 + 0x92) = (&DAT_00861f28)[iVar3 * 0x41];
          goto LAB_00643ab9;
        }
        pcVar11 = pcVar11 + 0x104;
        iVar3 = iVar3 + 1;
      } while ((int)pcVar11 < 0x866234);
      *(undefined4 *)((int)param_1 + 0x92) = 0xffffffff;
    }
    goto LAB_00643ab9;
  }
  if (iVar3 != 0x1c1) {
    switch(iVar3) {
    case 0x1a7:
      cVar2 = (**(code **)(*param_1 + 0x68))();
      if (cVar2 == '\0') {
        FUN_007a630a(auStack_100,s_gfx_interface_button_area__s_008660c8,local_200);
        (**(code **)(param_1[0xf4] + 0x2c))(auStack_100);
      }
      else {
        FUN_00415d40();
        uVar13 = 0;
        uVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
        uVar5 = FUN_0042b6c9(local_200);
        FUN_00433740(uVar5,uVar4,uVar13);
      }
      goto LAB_00643ab9;
    default:
switchD_00643b03_caseD_1a8:
      FUN_005349b0(s_InterfaceButton___Unexpected_Fie_0086603c);
      return 0xfffffffe;
    case 0x1be:
      cVar2 = (**(code **)(*param_1 + 0x6c))();
      if (cVar2 == '\0') {
        pcVar11 = s_gfx_interface_button_area__s_008660c8;
      }
      else {
        pcVar11 = s_gfx_interface_piw_buildings__s_008660a8;
      }
      FUN_007a630a(auStack_100,pcVar11,local_200);
      (**(code **)(*param_1 + 0x2c))(auStack_100);
      (**(code **)(*param_1 + 0x34))(4);
      goto LAB_00643ab9;
    case 0x1bf:
      iVar3 = FUN_007a8730(s_enter_008660a0,pcVar1);
      if (iVar3 == 0) {
        param_1[0x22] = 0xd;
      }
      else {
        iVar3 = FUN_007a8730(&PTR_LAB_0086609c,pcVar1);
        if (iVar3 == 0) {
          param_1[0x22] = 0xe;
        }
        else {
          iVar3 = FUN_007a8730(&DAT_00866098,pcVar1);
          if (iVar3 == 0) {
            param_1[0x22] = 7;
          }
          else {
            iVar3 = FUN_007a8730(&DAT_00866094,pcVar1);
            if (iVar3 == 0) {
              param_1[0x22] = 0xff;
            }
            else {
              iVar3 = FUN_007a8730(&DAT_00866090,pcVar1);
              if (iVar3 == 0) {
                param_1[0x22] = 0x162;
              }
              else {
                iVar3 = FUN_007a8730(&DAT_0086608c,pcVar1);
                if (iVar3 == 0) {
                  param_1[0x22] = 0x161;
                }
                else {
                  iVar3 = FUN_007a8730(&DAT_00866088,pcVar1);
                  if (iVar3 == 0) {
                    param_1[0x22] = 0x160;
                  }
                  else {
                    iVar3 = FUN_007a8730(&DAT_00866084,pcVar1);
                    if (iVar3 == 0) {
                      param_1[0x22] = 0x15f;
                    }
                    else {
                      iVar3 = FUN_007a8730(&DAT_00866080,pcVar1);
                      if (iVar3 == 0) {
                        param_1[0x22] = 0x15e;
                      }
                      else {
                        iVar3 = FUN_007a8730(&DAT_0086607c,pcVar1);
                        if (iVar3 == 0) {
                          param_1[0x22] = 0x15d;
                        }
                        else {
                          iVar3 = FUN_007a8730(&DAT_00866078,pcVar1);
                          if (iVar3 == 0) {
                            param_1[0x22] = 0x15c;
                          }
                          else {
                            iVar3 = FUN_007a8730(&DAT_00866074,pcVar1);
                            if (iVar3 == 0) {
                              param_1[0x22] = 0x15b;
                            }
                            else {
                              iVar3 = FUN_007a8730(&DAT_00866070,pcVar1);
                              if (iVar3 == 0) {
                                param_1[0x22] = 0x15a;
                              }
                              else {
                                iVar3 = FUN_007a8730(s_space_00866068,pcVar1);
                                if (iVar3 == 0) {
                                  param_1[0x22] = 0x20;
                                }
                                else {
                                  iVar3 = FUN_007a8730(s_pause_00866060,pcVar1);
                                  if (iVar3 == 0) {
                                    param_1[0x22] = 0x13;
                                  }
                                  else {
                                    param_1[0x22] = (int)*pcVar1;
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
      goto LAB_00643ab9;
    case 0x1c0:
      goto switchD_00643b03_caseD_1c0;
    }
  }
  if (*pcVar1 == '\0') {
    *(undefined1 *)((int)param_1 + 0x2b2) = 0;
    goto LAB_00643ab9;
  }
  pcVar6 = (char *)FUN_0042b6c9(local_200);
  pcVar11 = (char *)((int)param_1 + 0x2b2);
  goto LAB_00643e1a;
switchD_00643b03_caseD_1c0:
  if (*pcVar1 == '\0') {
    *(undefined1 *)((int)param_1 + 0x1b2) = 0;
    goto LAB_00643ab9;
  }
  pcVar6 = (char *)FUN_0042b6c9(local_200);
  pcVar11 = (char *)((int)param_1 + 0x1b2);
LAB_00643e1a:
  uVar9 = 0xffffffff;
  do {
    pcVar12 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar12 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar12;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  pcVar6 = pcVar12 + -uVar9;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar11 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar11 = pcVar11 + 1;
  }
  goto LAB_00643ab9;
}


