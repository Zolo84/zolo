// FUN_004396a0 @ 4396a0 size=1258

undefined4 FUN_004396a0(char *param_1,char *param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  int local_42c;
  int local_424;
  char local_418 [256];
  char local_318 [4];
  char acStack_314 [252];
  char local_218 [256];
  uint local_118 [5];
  char local_104 [260];
  
  if (DAT_00dc3a00 == '\0') {
    uVar3 = 0xffffffff;
    do {
      pcVar2 = param_1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar2 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar2;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar2 + -uVar3;
    pcVar9 = local_218;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  else {
    FUN_007a630a(local_218,s__s__s_0083a350,&DAT_00dc3a00,param_1);
  }
  if (&stack0x00000000 == (undefined1 *)0x218) {
    uVar3 = 0xffffffff;
    pcVar2 = &DAT_0083bb48;
    do {
      pcVar9 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar9 + -uVar3;
    pcVar9 = (char *)0xfffffe00;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar2 = param_2;
    do {
      pcVar9 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar2 = (char *)0xfffffe00;
    do {
      pcVar10 = pcVar2;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar10;
    } while (cVar1 != '\0');
    pcVar2 = pcVar9 + -uVar3;
    pcVar9 = pcVar10 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  else {
    uVar3 = 0xffffffff;
    pcVar2 = local_218;
    do {
      pcVar9 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar9 + -uVar3;
    pcVar9 = local_418;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar2 = &DAT_0083bb50;
    do {
      pcVar9 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar2 = local_418;
    do {
      pcVar10 = pcVar2;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar10;
    } while (cVar1 != '\0');
    pcVar2 = pcVar9 + -uVar3;
    pcVar9 = pcVar10 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar2 = param_2;
    do {
      pcVar9 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar2 = local_418;
    do {
      pcVar10 = pcVar2;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar10;
    } while (cVar1 != '\0');
    pcVar2 = pcVar9 + -uVar3;
    pcVar9 = pcVar10 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  local_42c = 0;
  local_424 = 1;
  do {
    if (local_424 == 0) {
      if (&stack0x00000000 == (undefined1 *)0x218) {
        uVar3 = 0xffffffff;
        pcVar2 = &DAT_0083bb48;
        do {
          pcVar9 = pcVar2;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar9 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar9;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar2 = pcVar9 + -uVar3;
        pcVar9 = (char *)0xfffffe00;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar9 = pcVar9 + 4;
        }
      }
      else {
        uVar3 = 0xffffffff;
        pcVar2 = local_218;
        do {
          pcVar9 = pcVar2;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar9 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar9;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar2 = pcVar9 + -uVar3;
        pcVar9 = local_418;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar9 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar9 = pcVar9 + 1;
        }
        uVar3 = 0xffffffff;
        pcVar2 = &DAT_0083bb50;
        do {
          pcVar9 = pcVar2;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar9 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar9;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        iVar5 = -1;
        pcVar2 = local_418;
        do {
          pcVar10 = pcVar2;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar10 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar10;
        } while (cVar1 != '\0');
        pcVar2 = pcVar9 + -uVar3;
        pcVar9 = pcVar10 + -1;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar9 = pcVar9 + 4;
        }
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar9 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar3 = 0xffffffff;
      pcVar2 = param_2;
      do {
        pcVar9 = pcVar2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar9 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar9;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar5 = -1;
      pcVar2 = local_418;
      do {
        pcVar10 = pcVar2;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar10 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar10;
      } while (cVar1 != '\0');
      pcVar2 = pcVar9 + -uVar3;
      pcVar9 = pcVar10 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar9 = pcVar9 + 4;
      }
      bVar11 = false;
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar9 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    else {
      if (&stack0x00000000 == (undefined1 *)0x218) {
        uVar3 = 0xffffffff;
        pcVar2 = &DAT_0083bb38;
        do {
          pcVar9 = pcVar2;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar9 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar9;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar2 = pcVar9 + -uVar3;
        pcVar9 = (char *)0xfffffe00;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar9 = pcVar9 + 4;
        }
      }
      else {
        uVar3 = 0xffffffff;
        pcVar2 = local_218;
        do {
          pcVar9 = pcVar2;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar9 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar9;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar2 = pcVar9 + -uVar3;
        pcVar9 = local_418;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar9 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar9 = pcVar9 + 1;
        }
        uVar3 = 0xffffffff;
        pcVar2 = &DAT_0083bb40;
        do {
          pcVar9 = pcVar2;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar9 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar9;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        iVar5 = -1;
        pcVar2 = local_418;
        do {
          pcVar10 = pcVar2;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar10 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar10;
        } while (cVar1 != '\0');
        pcVar2 = pcVar9 + -uVar3;
        pcVar9 = pcVar10 + -1;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar9 = pcVar9 + 4;
        }
      }
      bVar11 = true;
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar9 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    iVar5 = FUN_007a7c64(local_418,local_118);
    if (iVar5 == -1) {
      FUN_007a7df9(0xffffffff);
    }
    else {
      iVar8 = local_42c + 0x10000;
      do {
        uVar3 = local_118[0];
        uVar4 = 0xffffffff;
        pcVar2 = &DAT_0083bb30;
        do {
          pcVar9 = pcVar2;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar9 = pcVar2 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar9;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        local_318[0] = '\0';
        pcVar2 = pcVar9 + -uVar4;
        pcVar9 = local_318;
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar9 = pcVar9 + 4;
        }
        iVar7 = 4;
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar9 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar9 = pcVar9 + 1;
        }
        if ((uVar3 == 0x10) && (param_3 != '\0')) {
          if (local_104[0] != '.') {
            uVar4 = 0xffffffff;
            pcVar2 = &DAT_0083bb28;
            do {
              pcVar9 = pcVar2;
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              pcVar9 = pcVar2 + 1;
              cVar1 = *pcVar2;
              pcVar2 = pcVar9;
            } while (cVar1 != '\0');
            uVar4 = ~uVar4;
            iVar7 = 5;
            pcVar2 = pcVar9 + -uVar4;
            pcVar9 = local_318;
            for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
              pcVar2 = pcVar2 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar9 = *pcVar2;
              pcVar2 = pcVar2 + 1;
              pcVar9 = pcVar9 + 1;
            }
LAB_00439a7f:
            if (local_104[0] != '.') {
              pcVar2 = local_104;
              do {
                if (0xfe < iVar7) break;
                acStack_314[iVar7 + -4] = *pcVar2;
                pcVar9 = pcVar2 + 1;
                iVar7 = iVar7 + 1;
                pcVar2 = pcVar2 + 1;
              } while (*pcVar9 != '.');
            }
            acStack_314[iVar7 + -4] = '\0';
            iVar7 = iVar8;
            if (((uVar3 & 0x10) != 0) && (param_3 != '\0')) {
              uVar3 = 0xffffffff;
              pcVar2 = &DAT_00839588;
              do {
                pcVar9 = pcVar2;
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1;
                pcVar9 = pcVar2 + 1;
                cVar1 = *pcVar2;
                pcVar2 = pcVar9;
              } while (cVar1 != '\0');
              uVar3 = ~uVar3;
              iVar7 = -1;
              pcVar2 = local_318;
              do {
                pcVar10 = pcVar2;
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                pcVar10 = pcVar2 + 1;
                cVar1 = *pcVar2;
                pcVar2 = pcVar10;
              } while (cVar1 != '\0');
              pcVar2 = pcVar9 + -uVar3;
              pcVar9 = pcVar10 + -1;
              for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
                pcVar2 = pcVar2 + 4;
                pcVar9 = pcVar9 + 4;
              }
              for (uVar3 = uVar3 & 3; iVar7 = local_42c, uVar3 != 0; uVar3 = uVar3 - 1) {
                *pcVar9 = *pcVar2;
                pcVar2 = pcVar2 + 1;
                pcVar9 = pcVar9 + 1;
              }
            }
            FUN_00436a00(local_318,iVar7,1,&DAT_0088f28c);
            local_42c = local_42c + 1;
            iVar8 = iVar8 + 1;
          }
        }
        else if (((uVar3 & 0x20) != 0) && ((param_3 == '\0' && (!bVar11)))) {
          if ((uVar3 & 1) == 0) {
            uVar4 = 0xffffffff;
            pcVar2 = &DAT_0083bb30;
            do {
              pcVar9 = pcVar2;
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              pcVar9 = pcVar2 + 1;
              cVar1 = *pcVar2;
              pcVar2 = pcVar9;
            } while (cVar1 != '\0');
            uVar4 = ~uVar4;
            pcVar9 = pcVar9 + -uVar4;
          }
          else {
            uVar4 = 0xffffffff;
            pcVar2 = &DAT_0083bb30;
            do {
              pcVar9 = pcVar2;
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              pcVar9 = pcVar2 + 1;
              cVar1 = *pcVar2;
              pcVar2 = pcVar9;
            } while (cVar1 != '\0');
            uVar4 = ~uVar4;
            pcVar9 = pcVar9 + -uVar4;
          }
          pcVar2 = local_318;
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar2 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar2 = pcVar2 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar2 = pcVar2 + 1;
          }
          goto LAB_00439a7f;
        }
        iVar7 = FUN_007a7d31(iVar5,local_118);
      } while (iVar7 == 0);
      FUN_007a7df9(iVar5);
    }
    bVar11 = local_424 == 0;
    local_424 = local_424 + -1;
    if (bVar11) {
      return 1;
    }
  } while( true );
}


