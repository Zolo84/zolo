// FUN_006ec210 @ 6ec210 size=1017

undefined4 FUN_006ec210(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  
  param_1 = param_1 * 0x1a;
  if ((&DAT_00d3635b)[param_1] == '\0') {
    return 0;
  }
  if ((&DAT_00d3635a)[param_1] == '\0') {
    FUN_007a630a(&DAT_00d37f54,s__s_LOG_0086f268,*(undefined4 *)(&DAT_00d36362 + param_1));
    uVar9 = FUN_0042b6c9(&DAT_00d37f54);
    FUN_007a630a(param_2,&DAT_0083a374,uVar9);
  }
  else {
    uVar9 = *(undefined4 *)(&DAT_00d36362 + param_1);
    FUN_007a630a(&DAT_00d37f54,s__s_HEADER_0086d454,uVar9);
    pcVar2 = (char *)FUN_0042b6c9(&DAT_00d37f54);
    FUN_007a630a(&DAT_00d37f54,&DAT_0086d44c,uVar9);
    pcVar3 = (char *)FUN_0042b6c9(&DAT_00d37f54);
    FUN_007a630a(&DAT_00d37f54,&DAT_0086d444,uVar9);
    pcVar4 = (char *)FUN_0042b6c9(&DAT_00d37f54);
    FUN_007a630a(&DAT_00d37f54,&DAT_0086d43c,uVar9);
    pcVar5 = (char *)FUN_0042b6c9(&DAT_00d37f54);
    FUN_007a630a(&DAT_00d37f54,&DAT_0086d434,uVar9);
    pcVar6 = (char *)FUN_0042b6c9(&DAT_00d37f54);
    FUN_007a630a(&DAT_00d37f54,&DAT_0086d48c,uVar9);
    pcVar7 = (char *)FUN_0042b6c9(&DAT_00d37f54);
    FUN_007a630a(&DAT_00d37f54,&DAT_0086d544,uVar9);
    pcVar8 = (char *)FUN_0042b6c9(&DAT_00d37f54);
    uVar10 = 0xffffffff;
    do {
      pcVar14 = pcVar2;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar14 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar14;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar2 = pcVar14 + -uVar10;
    pcVar14 = param_2;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar14 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar14 = pcVar14 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar2 = &DAT_0086d430;
    do {
      pcVar14 = pcVar2;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar14 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar14;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    iVar12 = -1;
    pcVar2 = param_2;
    do {
      pcVar13 = pcVar2;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar13 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar13;
    } while (cVar1 != '\0');
    pcVar2 = pcVar14 + -uVar10;
    pcVar14 = pcVar13 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar14 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar14 = pcVar14 + 1;
    }
    uVar10 = 0xffffffff;
    do {
      pcVar2 = pcVar3;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar2 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar2;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    iVar12 = -1;
    pcVar3 = param_2;
    do {
      pcVar14 = pcVar3;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar14 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar14;
    } while (cVar1 != '\0');
    pcVar3 = pcVar2 + -uVar10;
    pcVar2 = pcVar14 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar2 = pcVar2 + 1;
    }
    iVar12 = -1;
    pcVar3 = pcVar4;
    do {
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar12 != -2) {
      uVar10 = 0xffffffff;
      pcVar3 = &DAT_0086d430;
      do {
        pcVar2 = pcVar3;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar2 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar2;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      iVar12 = -1;
      pcVar3 = param_2;
      do {
        pcVar14 = pcVar3;
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        pcVar14 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar14;
      } while (cVar1 != '\0');
      pcVar3 = pcVar2 + -uVar10;
      pcVar2 = pcVar14 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar2 = pcVar2 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar2 = pcVar2 + 1;
      }
      uVar10 = 0xffffffff;
      do {
        pcVar3 = pcVar4;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar3 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar3;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      iVar12 = -1;
      pcVar4 = param_2;
      do {
        pcVar2 = pcVar4;
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        pcVar2 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar2;
      } while (cVar1 != '\0');
      pcVar4 = pcVar3 + -uVar10;
      pcVar3 = pcVar2 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar3 + 1;
      }
      iVar12 = -1;
      pcVar4 = pcVar5;
      do {
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (iVar12 != -2) {
        uVar10 = 0xffffffff;
        pcVar4 = &DAT_0086d430;
        do {
          pcVar3 = pcVar4;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar3 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar3;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar12 = -1;
        pcVar4 = param_2;
        do {
          pcVar2 = pcVar4;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pcVar2 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar2;
        } while (cVar1 != '\0');
        pcVar4 = pcVar3 + -uVar10;
        pcVar3 = pcVar2 + -1;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar3 = pcVar3 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar3 = pcVar3 + 1;
        }
        uVar10 = 0xffffffff;
        do {
          pcVar4 = pcVar5;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar4 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar4;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        iVar12 = -1;
        pcVar5 = param_2;
        do {
          pcVar3 = pcVar5;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pcVar3 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar3;
        } while (cVar1 != '\0');
        pcVar5 = pcVar4 + -uVar10;
        pcVar4 = pcVar3 + -1;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar4 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar4 = pcVar4 + 1;
        }
        iVar12 = -1;
        pcVar5 = pcVar6;
        do {
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (iVar12 != -2) {
          uVar10 = 0xffffffff;
          pcVar5 = &DAT_0086d430;
          do {
            pcVar4 = pcVar5;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar4 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar4;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          iVar12 = -1;
          pcVar5 = param_2;
          do {
            pcVar3 = pcVar5;
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            pcVar3 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar3;
          } while (cVar1 != '\0');
          pcVar5 = pcVar4 + -uVar10;
          pcVar4 = pcVar3 + -1;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar4 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar4 = pcVar4 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar4 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar4 = pcVar4 + 1;
          }
          uVar10 = 0xffffffff;
          do {
            pcVar5 = pcVar6;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar5 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar5;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          iVar12 = -1;
          pcVar6 = param_2;
          do {
            pcVar4 = pcVar6;
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            pcVar4 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar4;
          } while (cVar1 != '\0');
          pcVar6 = pcVar5 + -uVar10;
          pcVar5 = pcVar4 + -1;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar5 = pcVar5 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar5 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar5 = pcVar5 + 1;
          }
          iVar12 = -1;
          pcVar6 = pcVar7;
          do {
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          if (iVar12 != -2) {
            uVar10 = 0xffffffff;
            pcVar6 = &DAT_0086d430;
            do {
              pcVar5 = pcVar6;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar5 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar5;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            iVar12 = -1;
            pcVar6 = param_2;
            do {
              pcVar4 = pcVar6;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar4 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar4;
            } while (cVar1 != '\0');
            pcVar6 = pcVar5 + -uVar10;
            pcVar5 = pcVar4 + -1;
            for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar5 = pcVar5 + 4;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar5 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar5 = pcVar5 + 1;
            }
            uVar10 = 0xffffffff;
            do {
              pcVar6 = pcVar7;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar6 = pcVar7 + 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar6;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            iVar12 = -1;
            pcVar7 = param_2;
            do {
              pcVar5 = pcVar7;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar5 = pcVar7 + 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar5;
            } while (cVar1 != '\0');
            pcVar7 = pcVar6 + -uVar10;
            pcVar6 = pcVar5 + -1;
            for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
              pcVar7 = pcVar7 + 4;
              pcVar6 = pcVar6 + 4;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar6 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar6 = pcVar6 + 1;
            }
            iVar12 = -1;
            pcVar7 = pcVar8;
            do {
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            if (iVar12 != -2) {
              uVar10 = 0xffffffff;
              pcVar7 = &DAT_0086d430;
              do {
                pcVar6 = pcVar7;
                if (uVar10 == 0) break;
                uVar10 = uVar10 - 1;
                pcVar6 = pcVar7 + 1;
                cVar1 = *pcVar7;
                pcVar7 = pcVar6;
              } while (cVar1 != '\0');
              uVar10 = ~uVar10;
              iVar12 = -1;
              pcVar7 = param_2;
              do {
                pcVar5 = pcVar7;
                if (iVar12 == 0) break;
                iVar12 = iVar12 + -1;
                pcVar5 = pcVar7 + 1;
                cVar1 = *pcVar7;
                pcVar7 = pcVar5;
              } while (cVar1 != '\0');
              pcVar7 = pcVar6 + -uVar10;
              pcVar6 = pcVar5 + -1;
              for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar6 = pcVar6 + 4;
              }
              for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                *pcVar6 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar6 = pcVar6 + 1;
              }
              uVar10 = 0xffffffff;
              do {
                pcVar7 = pcVar8;
                if (uVar10 == 0) break;
                uVar10 = uVar10 - 1;
                pcVar7 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar7;
              } while (cVar1 != '\0');
              uVar10 = ~uVar10;
              iVar12 = -1;
              pcVar8 = param_2;
              do {
                pcVar6 = pcVar8;
                if (iVar12 == 0) break;
                iVar12 = iVar12 + -1;
                pcVar6 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar6;
              } while (cVar1 != '\0');
              pcVar8 = pcVar7 + -uVar10;
              pcVar7 = pcVar6 + -1;
              for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar7 = pcVar7 + 4;
              }
              for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                *pcVar7 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar7 = pcVar7 + 1;
              }
              FUN_006ec610(param_2);
              return 1;
            }
          }
        }
      }
    }
  }
  FUN_006ec610(param_2);
  return 1;
}


