// FUN_005068d0 @ 5068d0 size=1244

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_005068d0(int param_1,undefined4 param_2,float param_3,int param_4,undefined4 param_5,int param_6
            ,undefined4 param_7,int param_8,undefined4 param_9,int param_10,undefined4 param_11,
            int param_12,undefined4 param_13)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  char *pcVar13;
  int *local_2c0;
  int local_2bc [37];
  int local_228 [37];
  char local_194 [256];
  int local_94 [37];
  
  DAT_00ad36cc._0_1_ = 0;
  if (DAT_00dc191a != '\0') {
    iVar3 = 0;
    piVar11 = local_2bc;
    for (iVar7 = 0x25; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar11 = 0;
      piVar11 = piVar11 + 1;
    }
    piVar11 = local_228;
    for (iVar7 = 0x25; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar11 = 0;
      piVar11 = piVar11 + 1;
    }
    piVar11 = local_94;
    for (iVar7 = 0x25; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar11 = 0;
      piVar11 = piVar11 + 1;
    }
    local_2c0 = (int *)0x0;
    do {
      switch(local_2c0) {
      case (int *)0x0:
        if (param_1 != 0x8c) {
          iVar3 = FUN_00789c90(param_1,param_2);
          goto switchD_00506937_default;
        }
        goto LAB_00506ba0;
      case (int *)0x1:
        iVar3 = param_4;
        uVar5 = param_5;
        if (param_4 < 1) goto LAB_00506ba0;
        goto LAB_0050697d;
      case (int *)0x2:
        uVar5 = param_7;
        iVar3 = param_6;
        break;
      case (int *)0x3:
        uVar5 = param_9;
        iVar3 = param_8;
        break;
      case (int *)0x4:
        uVar5 = param_11;
        iVar3 = param_10;
        break;
      case (int *)0x5:
        uVar5 = param_13;
        iVar3 = param_12;
        break;
      default:
        goto switchD_00506937_default;
      }
      if (iVar3 < 1) {
LAB_00506ba0:
        iVar3 = 0;
      }
      else {
LAB_0050697d:
        iVar3 = FUN_00789ce0(iVar3,uVar5);
switchD_00506937_default:
        if (iVar3 != 0) {
          piVar11 = (int *)(iVar3 + 0xd2);
          iVar7 = 0;
          do {
            iVar9 = *piVar11;
            if (0 < iVar9) {
              *(int *)((int)local_228 + iVar7) = *(int *)((int)local_228 + iVar7) + iVar9;
              *(int *)((int)local_2bc + iVar7) = *(int *)((int)local_2bc + iVar7) + iVar9;
            }
            iVar7 = iVar7 + 4;
            piVar11 = piVar11 + 1;
          } while (iVar7 < 0x94);
        }
      }
      local_2c0 = (int *)((int)local_2c0 + 1);
    } while ((int)local_2c0 < 6);
    if (param_3 != _DAT_007e4088) {
      iVar3 = 0;
      do {
        if (0 < *(int *)((int)local_2bc + iVar3)) {
          iVar7 = __ftol();
          *(int *)((int)local_2bc + iVar3) = iVar7;
          *(int *)((int)local_94 + iVar3) = *(int *)((int)local_228 + iVar3) - iVar7;
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 < 0x94);
    }
    bVar2 = true;
    iVar3 = *(int *)(*DAT_00d12b40 + 0x416);
    if (iVar3 == 0) {
      local_2c0 = local_2bc;
      iVar3 = 0;
      do {
        iVar7 = *local_2c0;
        if (0 < iVar7) {
          if (bVar2) {
            uVar8 = 0xffffffff;
            pcVar4 = s____________________________00849e28;
            do {
              pcVar13 = pcVar4;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar13 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar13;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            iVar9 = -1;
            pcVar4 = (char *)&DAT_00ad36cc;
            do {
              pcVar12 = pcVar4;
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              pcVar12 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar12;
            } while (cVar1 != '\0');
            pcVar4 = pcVar13 + -uVar8;
            pcVar13 = pcVar12 + -1;
            for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
              pcVar4 = pcVar4 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar13 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              pcVar13 = pcVar13 + 1;
            }
            pcVar4 = (char *)FUN_0042b6c9(s_EQUIPMENT_LIST_HEADER_STYLE_0_00849d90);
            uVar8 = 0xffffffff;
            do {
              pcVar13 = pcVar4;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar13 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar13;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            bVar2 = false;
            iVar9 = -1;
            pcVar4 = (char *)&DAT_00ad36cc;
            do {
              pcVar12 = pcVar4;
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              pcVar12 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar12;
            } while (cVar1 != '\0');
            pcVar4 = pcVar13 + -uVar8;
            pcVar13 = pcVar12 + -1;
            for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
              pcVar4 = pcVar4 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar13 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              pcVar13 = pcVar13 + 1;
            }
          }
          uVar5 = FUN_00506030(iVar3,iVar7);
          uVar6 = FUN_0042b6c9(s_EQUIPMENT_LIST_TEXT_STYLE_0_00849d74);
          FUN_007a630a(local_194,uVar6,uVar5);
          uVar8 = 0xffffffff;
          pcVar4 = local_194;
          do {
            pcVar13 = pcVar4;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar13 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar13;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar7 = -1;
          pcVar4 = (char *)&DAT_00ad36cc;
          do {
            pcVar12 = pcVar4;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar12 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar12;
          } while (cVar1 != '\0');
          pcVar4 = pcVar13 + -uVar8;
          pcVar13 = pcVar12 + -1;
          for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar13 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar13 = pcVar13 + 1;
          }
        }
        iVar3 = iVar3 + 1;
        local_2c0 = local_2c0 + 1;
      } while (iVar3 < 0x25);
    }
    else {
      if (iVar3 == 1) {
        iVar3 = 0;
        do {
          iVar7 = local_2bc[iVar3];
          if (0 < iVar7) {
            if (bVar2) {
              uVar8 = 0xffffffff;
              pcVar4 = s____________________________00849e28;
              do {
                pcVar13 = pcVar4;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar13 = pcVar4 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar13;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              iVar9 = -1;
              pcVar4 = (char *)&DAT_00ad36cc;
              do {
                pcVar12 = pcVar4;
                if (iVar9 == 0) break;
                iVar9 = iVar9 + -1;
                pcVar12 = pcVar4 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar12;
              } while (cVar1 != '\0');
              pcVar4 = pcVar13 + -uVar8;
              pcVar13 = pcVar12 + -1;
              for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
                pcVar4 = pcVar4 + 4;
                pcVar13 = pcVar13 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar13 = *pcVar4;
                pcVar4 = pcVar4 + 1;
                pcVar13 = pcVar13 + 1;
              }
              pcVar4 = (char *)FUN_0042b6c9(s_EQUIPMENT_LIST_HEADER_STYLE_1_00849dcc);
              uVar8 = 0xffffffff;
              do {
                pcVar13 = pcVar4;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar13 = pcVar4 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar13;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              bVar2 = false;
              iVar9 = -1;
              pcVar4 = (char *)&DAT_00ad36cc;
              do {
                pcVar12 = pcVar4;
                if (iVar9 == 0) break;
                iVar9 = iVar9 + -1;
                pcVar12 = pcVar4 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar12;
              } while (cVar1 != '\0');
              pcVar4 = pcVar13 + -uVar8;
              pcVar13 = pcVar12 + -1;
              for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
                pcVar4 = pcVar4 + 4;
                pcVar13 = pcVar13 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar13 = *pcVar4;
                pcVar4 = pcVar4 + 1;
                pcVar13 = pcVar13 + 1;
              }
            }
            uVar5 = FUN_00506030(iVar3,iVar7,local_228[iVar3]);
            uVar6 = FUN_0042b6c9(s_EQUIPMENT_LIST_TEXT_STYLE_1_00849db0);
            FUN_007a630a(local_194,uVar6,uVar5);
            uVar8 = 0xffffffff;
            pcVar4 = local_194;
            do {
              pcVar13 = pcVar4;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar13 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar13;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            iVar7 = -1;
            pcVar4 = (char *)&DAT_00ad36cc;
            do {
              pcVar12 = pcVar4;
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              pcVar12 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar12;
            } while (cVar1 != '\0');
            pcVar4 = pcVar13 + -uVar8;
            pcVar13 = pcVar12 + -1;
            for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
              pcVar4 = pcVar4 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar13 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              pcVar13 = pcVar13 + 1;
            }
          }
          iVar3 = iVar3 + 1;
          if (0x24 < iVar3) {
            return &DAT_00ad36cc;
          }
        } while( true );
      }
      if (iVar3 == 2) {
        iVar3 = 0;
        do {
          iVar7 = local_2bc[iVar3];
          if (0 < iVar7) {
            if (bVar2) {
              uVar8 = 0xffffffff;
              pcVar4 = s____________________________00849e28;
              do {
                pcVar13 = pcVar4;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar13 = pcVar4 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar13;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              iVar9 = -1;
              pcVar4 = (char *)&DAT_00ad36cc;
              do {
                pcVar12 = pcVar4;
                if (iVar9 == 0) break;
                iVar9 = iVar9 + -1;
                pcVar12 = pcVar4 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar12;
              } while (cVar1 != '\0');
              pcVar4 = pcVar13 + -uVar8;
              pcVar13 = pcVar12 + -1;
              for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
                pcVar4 = pcVar4 + 4;
                pcVar13 = pcVar13 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar13 = *pcVar4;
                pcVar4 = pcVar4 + 1;
                pcVar13 = pcVar13 + 1;
              }
              pcVar4 = (char *)FUN_0042b6c9(s_EQUIPMENT_LIST_HEADER_STYLE_2_00849e08);
              uVar8 = 0xffffffff;
              do {
                pcVar13 = pcVar4;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar13 = pcVar4 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar13;
              } while (cVar1 != '\0');
              uVar8 = ~uVar8;
              bVar2 = false;
              iVar9 = -1;
              pcVar4 = (char *)&DAT_00ad36cc;
              do {
                pcVar12 = pcVar4;
                if (iVar9 == 0) break;
                iVar9 = iVar9 + -1;
                pcVar12 = pcVar4 + 1;
                cVar1 = *pcVar4;
                pcVar4 = pcVar12;
              } while (cVar1 != '\0');
              pcVar4 = pcVar13 + -uVar8;
              pcVar13 = pcVar12 + -1;
              for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
                pcVar4 = pcVar4 + 4;
                pcVar13 = pcVar13 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar13 = *pcVar4;
                pcVar4 = pcVar4 + 1;
                pcVar13 = pcVar13 + 1;
              }
            }
            uVar5 = FUN_00506030(iVar3,iVar7,local_228[iVar3],local_94[iVar3]);
            uVar6 = FUN_0042b6c9(s_EQUIPMENT_LIST_TEXT_STYLE_2_00849dec);
            FUN_007a630a(local_194,uVar6,uVar5);
            uVar8 = 0xffffffff;
            pcVar4 = local_194;
            do {
              pcVar13 = pcVar4;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar13 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar13;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            iVar7 = -1;
            pcVar4 = (char *)&DAT_00ad36cc;
            do {
              pcVar12 = pcVar4;
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              pcVar12 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar12;
            } while (cVar1 != '\0');
            pcVar4 = pcVar13 + -uVar8;
            pcVar13 = pcVar12 + -1;
            for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
              pcVar4 = pcVar4 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar13 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              pcVar13 = pcVar13 + 1;
            }
          }
          iVar3 = iVar3 + 1;
          if (0x24 < iVar3) {
            return &DAT_00ad36cc;
          }
        } while( true );
      }
    }
  }
  return &DAT_00ad36cc;
}


