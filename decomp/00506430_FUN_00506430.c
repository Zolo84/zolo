// FUN_00506430 @ 506430 size=1180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00506430(int param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  int local_10c;
  char local_100 [256];
  
  if (DAT_00dc191a == '\0') {
    return (undefined4 *)0x0;
  }
  DAT_00ad36cc._0_1_ = 0;
  iVar11 = 0;
  iVar8 = *(int *)(*DAT_00d12b40 + 0x416);
  bVar2 = true;
  if (iVar8 == 0) {
    piVar10 = (int *)(param_1 + 0x232);
    do {
      if (0 < *piVar10) {
        if (bVar2) {
          uVar7 = 0xffffffff;
          pcVar3 = s____________________________00849e28;
          do {
            pcVar13 = pcVar3;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar13 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar13;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          iVar8 = -1;
          pcVar3 = (char *)&DAT_00ad36cc;
          do {
            pcVar12 = pcVar3;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar12 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar12;
          } while (cVar1 != '\0');
          pcVar3 = pcVar13 + -uVar7;
          pcVar13 = pcVar12 + -1;
          for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar13 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar13 = pcVar13 + 1;
          }
          pcVar3 = (char *)FUN_0042b6c9(s_EQUIPMENT_LIST_HEADER_STYLE_0_00849d90);
          uVar7 = 0xffffffff;
          do {
            pcVar13 = pcVar3;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar13 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar13;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          bVar2 = false;
          iVar8 = -1;
          pcVar3 = (char *)&DAT_00ad36cc;
          do {
            pcVar12 = pcVar3;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar12 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar12;
          } while (cVar1 != '\0');
          pcVar3 = pcVar13 + -uVar7;
          pcVar13 = pcVar12 + -1;
          for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar13 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar13 = pcVar13 + 1;
          }
        }
        uVar5 = 0;
        if (0 < *piVar10) {
          uVar5 = __ftol();
        }
        uVar5 = FUN_00506030(iVar11,uVar5);
        uVar6 = FUN_0042b6c9(s_EQUIPMENT_LIST_TEXT_STYLE_0_00849d74);
        FUN_007a630a(local_100,uVar6,uVar5);
        uVar7 = 0xffffffff;
        pcVar3 = local_100;
        do {
          pcVar13 = pcVar3;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar8 = -1;
        pcVar3 = (char *)&DAT_00ad36cc;
        do {
          pcVar12 = pcVar3;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        pcVar3 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      iVar11 = iVar11 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar11 < 0x25);
  }
  else {
    if (iVar8 == 1) {
      piVar10 = (int *)(param_1 + 0x232);
      do {
        if (0 < *piVar10) {
          if (bVar2) {
            uVar7 = 0xffffffff;
            pcVar3 = s____________________________00849e28;
            do {
              pcVar13 = pcVar3;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar13 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar13;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            iVar8 = -1;
            pcVar3 = (char *)&DAT_00ad36cc;
            do {
              pcVar12 = pcVar3;
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              pcVar12 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar12;
            } while (cVar1 != '\0');
            pcVar3 = pcVar13 + -uVar7;
            pcVar13 = pcVar12 + -1;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar13 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar13 = pcVar13 + 1;
            }
            pcVar3 = (char *)FUN_0042b6c9(s_EQUIPMENT_LIST_HEADER_STYLE_1_00849dcc);
            uVar7 = 0xffffffff;
            do {
              pcVar13 = pcVar3;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar13 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar13;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            bVar2 = false;
            iVar8 = -1;
            pcVar3 = (char *)&DAT_00ad36cc;
            do {
              pcVar12 = pcVar3;
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              pcVar12 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar12;
            } while (cVar1 != '\0');
            pcVar3 = pcVar13 + -uVar7;
            pcVar13 = pcVar12 + -1;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar13 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar13 = pcVar13 + 1;
            }
          }
          iVar8 = *piVar10;
          iVar4 = iVar8;
          if (*(float *)(param_1 + 0xf0) != _DAT_007e4088) {
            iVar4 = __ftol();
          }
          uVar5 = 0;
          if (0 < iVar8) {
            uVar5 = __ftol();
          }
          uVar5 = FUN_00506030(iVar11,uVar5,iVar4);
          uVar6 = FUN_0042b6c9(s_EQUIPMENT_LIST_TEXT_STYLE_1_00849db0);
          FUN_007a630a(local_100,uVar6,uVar5);
          uVar7 = 0xffffffff;
          pcVar3 = local_100;
          do {
            pcVar13 = pcVar3;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar13 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar13;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          iVar8 = -1;
          pcVar3 = (char *)&DAT_00ad36cc;
          do {
            pcVar12 = pcVar3;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar12 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar12;
          } while (cVar1 != '\0');
          pcVar3 = pcVar13 + -uVar7;
          pcVar13 = pcVar12 + -1;
          for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar13 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar13 = pcVar13 + 1;
          }
        }
        iVar11 = iVar11 + 1;
        piVar10 = piVar10 + 1;
        if (0x24 < iVar11) {
          return &DAT_00ad36cc;
        }
      } while( true );
    }
    if (iVar8 == 2) {
      piVar10 = (int *)(param_1 + 0x232);
      local_10c = 0;
      do {
        if (0 < *piVar10) {
          if (bVar2) {
            uVar7 = 0xffffffff;
            pcVar3 = s____________________________00849e28;
            do {
              pcVar13 = pcVar3;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar13 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar13;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            iVar8 = -1;
            pcVar3 = (char *)&DAT_00ad36cc;
            do {
              pcVar12 = pcVar3;
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              pcVar12 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar12;
            } while (cVar1 != '\0');
            pcVar3 = pcVar13 + -uVar7;
            pcVar13 = pcVar12 + -1;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar13 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar13 = pcVar13 + 1;
            }
            pcVar3 = (char *)FUN_0042b6c9(s_EQUIPMENT_LIST_HEADER_STYLE_2_00849e08);
            uVar7 = 0xffffffff;
            do {
              pcVar13 = pcVar3;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar13 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar13;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            bVar2 = false;
            iVar8 = -1;
            pcVar3 = (char *)&DAT_00ad36cc;
            do {
              pcVar12 = pcVar3;
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              pcVar12 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar12;
            } while (cVar1 != '\0');
            pcVar3 = pcVar13 + -uVar7;
            pcVar13 = pcVar12 + -1;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar13 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar13 = pcVar13 + 1;
            }
          }
          iVar8 = *piVar10;
          iVar11 = 0;
          if (0 < iVar8) {
            iVar11 = iVar8;
            if (*(float *)(param_1 + 0xf0) != _DAT_007e4088) {
              iVar11 = __ftol();
            }
            iVar4 = __ftol();
            iVar11 = iVar11 - iVar4;
          }
          iVar4 = iVar8;
          if (*(float *)(param_1 + 0xf0) != _DAT_007e4088) {
            iVar4 = __ftol();
          }
          uVar5 = 0;
          if (0 < iVar8) {
            uVar5 = __ftol();
          }
          uVar5 = FUN_00506030(local_10c,uVar5,iVar4,iVar11);
          uVar6 = FUN_0042b6c9(s_EQUIPMENT_LIST_TEXT_STYLE_2_00849dec);
          FUN_007a630a(local_100,uVar6,uVar5);
          uVar7 = 0xffffffff;
          pcVar3 = local_100;
          do {
            pcVar13 = pcVar3;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar13 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar13;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          iVar8 = -1;
          pcVar3 = (char *)&DAT_00ad36cc;
          do {
            pcVar12 = pcVar3;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar12 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar12;
          } while (cVar1 != '\0');
          pcVar3 = pcVar13 + -uVar7;
          pcVar13 = pcVar12 + -1;
          for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar13 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar13 = pcVar13 + 1;
          }
        }
        piVar10 = piVar10 + 1;
        local_10c = local_10c + 1;
        if (0x24 < local_10c) {
          return &DAT_00ad36cc;
        }
      } while( true );
    }
  }
  return &DAT_00ad36cc;
}


