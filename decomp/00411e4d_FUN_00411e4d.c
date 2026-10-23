// FUN_00411e4d @ 411e4d size=2661

int __thiscall
FUN_00411e4d(int param_1,byte *param_2,int param_3,int param_4,int *param_5,int *param_6,
            undefined2 param_7)

{
  short sVar1;
  int iVar2;
  undefined2 unaff_1000031e;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  int local_6c;
  int local_68;
  int local_64;
  byte *local_5c;
  byte *local_54;
  uint local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_c;
  
  iVar3 = param_3;
  if (param_2 == (byte *)0x0) {
    param_3 = 0;
  }
  else {
    iVar2 = param_6[3];
    iVar5 = param_6[6] / iVar2;
    local_20 = (**(code **)(*param_6 + 8))();
    local_20 = local_20 + param_4 * iVar5 * iVar2;
    pbVar6 = param_2;
    param_3 = iVar3;
LAB_00411eb0:
    param_2 = pbVar6;
    bVar9 = *param_2;
    pbVar6 = param_2 + 1;
    if (bVar9 != 0) {
      if (*(int *)(*(int *)(param_1 + 8) + (uint)bVar9 * 4) != 0) {
        pbVar4 = pbVar6;
        switch(bVar9) {
        case 10:
        case 0xd:
          param_4 = param_4 + *(int *)(param_1 + 0x10);
          if ((*pbVar6 == 10) || (*pbVar6 == 0xd)) {
            pbVar6 = param_2 + 2;
          }
          param_2 = pbVar6;
          local_20 = local_20 + iVar5 * *(int *)(param_1 + 0x10) * iVar2;
          pbVar6 = param_2;
          param_3 = iVar3;
          break;
        case 0x20:
        case 0xbad1abe1bad1abe1:
                    /* WARNING: Calculation of case label failed */
          if (*(int *)(*(int *)(param_1 + 8) + 0x80) == 0) {
            local_64 = *(int *)(param_1 + 4);
          }
          else {
            local_64 = (int)*(short *)(*(int *)(*(int *)(param_1 + 8) + 0x80) + 6);
          }
          param_3 = param_3 + local_64;
          break;
        case 0x5c:
          goto switchD_00411f1f_caseD_5c;
        case 0xa7:
          if (*pbVar6 == 0x59) {
            param_7 = FUN_00584270(0xd0,0xe8,0xf8);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0x57) {
            param_7 = FUN_00584270(0xff,0xff,0xff);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0x5a) {
            param_7 = FUN_00584270(0,0,0);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0x47) {
            param_7 = FUN_00584270(0,100,0);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0x52) {
            param_7 = FUN_00584270(0xf0,0,0);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0x4e) {
            param_7 = FUN_00584270(0xff,100,100);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0x4d) {
            param_7 = FUN_00584270(100,0xff,100);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0x41) {
            param_7 = FUN_00584270(0,0x40,0);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0x42) {
            param_7 = FUN_00584270(0,0,0xc0);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0x43) {
            param_7 = FUN_00584270(0x80,0,0);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0x44) {
            param_7 = FUN_00584270(0xff,0xff,0);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0x45) {
            param_7 = FUN_00584270(0xff,0,0xff);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0x46) {
            param_7 = FUN_00584270(0xff,0x80,0);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0x48) {
            param_7 = FUN_00584270(0x80,0x80,0x80);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0x49) {
            param_7 = FUN_00584270(0,0,0xff);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0x4a) {
            param_7 = FUN_00584270(0,0xc0,0);
            pbVar6 = param_2 + 2;
            break;
          }
          if (*pbVar6 == 0xa7) {
            pbVar6 = param_2 + 2;
            param_7 = unaff_1000031e;
            break;
          }
        case 0x25:
          pbVar4 = param_2;
          if (*pbVar6 == 0x20) {
switchD_00411f1f_caseD_5c:
            param_2 = pbVar4;
            bVar9 = *param_2;
            pbVar6 = param_2 + 1;
            if (bVar9 == 0x6e) {
              param_4 = param_4 + *(int *)(param_1 + 0x10);
              local_20 = local_20 + iVar5 * *(int *)(param_1 + 0x10) * iVar2;
              param_3 = iVar3;
            }
            else {
switchD_00411f1f_caseD_a8:
                    /* WARNING: Calculation of case label failed */
              param_2 = pbVar6;
              local_30 = (uint)bVar9;
              if (*(int *)(param_1 + 0x14 + local_30 * 4) == 0) {
                pbVar6 = param_2;
                if (*(int *)(*(int *)(param_1 + 8) + local_30 * 4) != 0) {
                  local_2c = 0;
                  if ((((param_3 + *(short *)(*(int *)(*(int *)(param_1 + 8) + local_30 * 4) + 6) <=
                         param_5[2]) && (param_4 <= param_5[3] - *(int *)(param_1 + 0x10))) &&
                      (param_5[1] <= param_4)) && (*param_5 <= param_3)) {
                    if (iVar2 == 2) {
                      local_54 = (byte *)**(undefined4 **)(*(int *)(param_1 + 8) + local_30 * 4);
                      iVar8 = *(short *)(*(int *)(*(int *)(param_1 + 8) + local_30 * 4) + 6) + -1 +
                              param_3;
                      local_28 = param_3;
                      local_c = (int)*(short *)(*(int *)(*(int *)(param_1 + 8) + local_30 * 4) + 4);
                      while (iVar7 = local_c + -1, local_c != 0) {
                        bVar9 = *local_54;
                        local_1c = (*local_54 >> 4) + 1;
                        local_54 = local_54 + 1;
                        local_c = iVar7;
                        if ((bVar9 & 0xf) == 0) {
                          while (iVar7 = local_1c + -1, local_1c != 0) {
                            local_28 = local_28 + 1;
                            local_1c = iVar7;
                            if (iVar8 < local_28) {
                              local_28 = param_3;
                              local_2c = local_2c + iVar5;
                            }
                          }
                        }
                        else if (*(char *)(param_1 + 0x414) == '\0') {
                          while (iVar7 = local_1c + -1, local_1c != 0) {
                            *(undefined2 *)(local_20 + (local_2c + local_28) * 2) = param_7;
                            local_28 = local_28 + 1;
                            local_1c = iVar7;
                            if (iVar8 < local_28) {
                              local_28 = param_3;
                              local_2c = local_2c + iVar5;
                            }
                          }
                        }
                        else {
                          while (iVar7 = local_1c + -1, local_1c != 0) {
                            *(undefined2 *)(local_20 + (local_2c + local_28) * 2) = param_7;
                            *(undefined2 *)(local_20 + (local_2c + 1 + local_28 + iVar5) * 2) = 0;
                            local_28 = local_28 + 1;
                            local_1c = iVar7;
                            if (iVar8 < local_28) {
                              local_28 = param_3;
                              local_2c = local_2c + iVar5;
                            }
                          }
                        }
                      }
                    }
                    else {
                      local_5c = (byte *)**(undefined4 **)(*(int *)(param_1 + 8) + local_30 * 4);
                      iVar8 = *(short *)(*(int *)(*(int *)(param_1 + 8) + local_30 * 4) + 6) +
                              param_3;
                      sVar1 = *(short *)(*(int *)(*(int *)(param_1 + 8) + local_30 * 4) + 6);
                      local_28 = param_3;
                      local_c = (int)*(short *)(*(int *)(*(int *)(param_1 + 8) + local_30 * 4) + 4);
                      while (iVar7 = local_c + -1, local_c != 0) {
                        bVar9 = *local_5c & 0xf;
                        local_1c = (*local_5c >> 4) + 1;
                        local_5c = local_5c + 1;
                        local_c = iVar7;
                        if (bVar9 == 0) {
                          local_28 = local_28 + local_1c;
                          while (iVar8 < local_28) {
                            local_2c = local_2c + iVar5;
                            local_28 = -(int)sVar1;
                          }
                        }
                        else if (*(char *)(param_1 + 0x414) == '\0') {
                          while (iVar7 = local_1c + -1, local_1c != 0) {
                            *(byte *)(local_20 + local_28 + local_2c) = bVar9;
                            local_28 = local_28 + 1;
                            local_1c = iVar7;
                            if (iVar8 < local_28) {
                              local_28 = param_3;
                              local_2c = local_2c + iVar5;
                            }
                          }
                        }
                        else {
                          while (iVar7 = local_1c + -1, local_1c != 0) {
                            *(byte *)(local_20 + local_28 + local_2c) = bVar9;
                            *(undefined1 *)(local_20 + local_28 + 1 + local_2c + iVar5) = 0;
                            local_28 = local_28 + 1;
                            local_1c = iVar7;
                            if (iVar8 < local_28) {
                              local_28 = param_3;
                              local_2c = local_2c + iVar5;
                            }
                          }
                        }
                      }
                    }
                  }
                  if (*(int *)(*(int *)(param_1 + 8) + local_30 * 4) == 0) {
                    local_6c = *(int *)(param_1 + 4);
                  }
                  else {
                    local_6c = (int)*(short *)(*(int *)(*(int *)(param_1 + 8) + local_30 * 4) + 6);
                  }
                  param_3 = param_3 + local_6c;
                }
              }
              else {
                FUN_00415d30(param_6);
                (**(code **)(**(int **)(param_1 + 0x14 + local_30 * 4) + 0x18))(param_3,param_4);
                (**(code **)(**(int **)(param_1 + 0x14 + local_30 * 4) + 0x10))(0);
                if (*(int *)(*(int *)(param_1 + 8) + local_30 * 4) == 0) {
                  local_68 = *(int *)(param_1 + 4);
                }
                else {
                  local_68 = (int)*(short *)(*(int *)(*(int *)(param_1 + 8) + local_30 * 4) + 6);
                }
                pbVar6 = param_2;
                param_3 = param_3 + local_68;
              }
            }
          }
          else {
            param_7 = FUN_00584270(((char)param_2[3] + -0x30) * 0x20,
                                   ((char)param_2[2] + -0x30) * 0x20,((char)*pbVar6 + -0x30) * 0x20)
            ;
            pbVar6 = param_2 + 4;
          }
          break;
        default:
          goto switchD_00411f1f_caseD_a8;
        }
      }
      goto LAB_00411eb0;
    }
    (**(code **)(*param_6 + 0xc))();
  }
  return param_3;
}


