// FUN_00657fd0 @ 657fd0 size=858

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00657fd0(int param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  float10 fVar11;
  char local_124 [256];
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_14 = *(int **)(param_1 + 4);
  iVar7 = DAT_00d0ca90;
  do {
    do {
      if (local_14 == (int *)0x0) {
        return;
      }
      piVar1 = (int *)*local_14;
      local_14 = (int *)local_14[2];
    } while ((piVar1[0x92] != iVar7) &&
            (*(char *)(*(int *)(iVar7 + 6) + 0x34ac + piVar1[0x92]) == '\0'));
    if (0 < local_8) {
      uVar6 = 0xffffffff;
      pcVar5 = &DAT_00839650;
      do {
        pcVar10 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar10;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar5 = param_2;
      do {
        pcVar9 = pcVar5;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar2 != '\0');
      pcVar5 = pcVar10 + -uVar6;
      pcVar10 = pcVar9 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    if (*(int *)((int)piVar1 + 0x14a) == 0) {
      fVar11 = (float10)FUN_0051a210();
      fVar11 = (float10)FUN_0051a470((double)fVar11);
      uVar4 = (**(code **)(*piVar1 + 0xc))((double)fVar11);
      FUN_007a630a(local_124,s__s____f___f__00866c98,uVar4);
    }
    else {
      piVar3 = (int *)FUN_0051c480();
      fVar11 = (float10)FUN_0051a210();
      fVar11 = (float10)FUN_0051a470((double)fVar11);
      uVar4 = (**(code **)(*piVar3 + 0xc))((double)fVar11);
      uVar4 = (**(code **)(*piVar1 + 0xc))(uVar4);
      FUN_007a630a(local_124,s__s___s_____f___f__0084b2b8,uVar4);
    }
    uVar6 = 0xffffffff;
    pcVar5 = local_124;
    do {
      pcVar10 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar5 = param_2;
    do {
      pcVar9 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar9;
    } while (cVar2 != '\0');
    pcVar5 = pcVar10 + -uVar6;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    cVar2 = (**(code **)(*piVar1 + 0x28))();
    if ((cVar2 != '\0') && (_DAT_007e3380 < *(float *)((int)piVar1 + 0x29e))) {
      local_18 = *(float *)((int)piVar1 + 0x29e);
      iVar7 = (int)ROUND(local_18);
      local_24 = iVar7;
      uVar4 = FUN_0042b6c9(s_DIGIN_MSG_0084b280);
      FUN_007a630a(local_124,uVar4,iVar7);
      uVar6 = 0xffffffff;
      pcVar5 = local_124;
      do {
        pcVar10 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar10;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar5 = param_2;
      do {
        pcVar9 = pcVar5;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar2 != '\0');
      pcVar5 = pcVar10 + -uVar6;
      pcVar10 = pcVar9 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    piVar1 = *(int **)((int)piVar1 + 0x26);
    while (piVar1 != (int *)0x0) {
      local_10 = (int *)piVar1[2];
      piVar1 = (int *)*piVar1;
      local_1c = (float)piVar1[0x3d];
      local_20 = (float)piVar1[0x3b];
      uVar4 = FUN_004ff320(piVar1[0x4c]);
      uVar4 = (**(code **)(*piVar1 + 0xc))((double)local_20,(double)local_1c,uVar4);
      FUN_007a630a(local_124,s____s____f___f___s_00866c84,uVar4);
      if (piVar1[0x22] != 0) {
        uVar6 = 0xffffffff;
        pcVar5 = &DAT_0083d364;
        do {
          pcVar10 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar5 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar10;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        param_1 = 0;
        iVar7 = -1;
        pcVar5 = local_124;
        do {
          pcVar9 = pcVar5;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar9 = pcVar5 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar9;
        } while (cVar2 != '\0');
        pcVar5 = pcVar10 + -uVar6;
        pcVar10 = pcVar9 + -1;
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar10 = pcVar10 + 1;
        }
        if (0 < piVar1[0x4f]) {
          local_c = piVar1 + 0x22;
          do {
            if (0 < param_1) {
              uVar6 = 0xffffffff;
              pcVar5 = &DAT_00858108;
              do {
                pcVar10 = pcVar5;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar10 = pcVar5 + 1;
                cVar2 = *pcVar5;
                pcVar5 = pcVar10;
              } while (cVar2 != '\0');
              uVar6 = ~uVar6;
              iVar7 = -1;
              pcVar5 = local_124;
              do {
                pcVar9 = pcVar5;
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                pcVar9 = pcVar5 + 1;
                cVar2 = *pcVar5;
                pcVar5 = pcVar9;
              } while (cVar2 != '\0');
              pcVar5 = pcVar10 + -uVar6;
              pcVar10 = pcVar9 + -1;
              for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
                pcVar5 = pcVar5 + 4;
                pcVar10 = pcVar10 + 4;
              }
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pcVar10 = *pcVar5;
                pcVar5 = pcVar5 + 1;
                pcVar10 = pcVar10 + 1;
              }
            }
            pcVar5 = (char *)FUN_004ff3a0(*local_c);
            uVar6 = 0xffffffff;
            do {
              pcVar10 = pcVar5;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar10 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar10;
            } while (cVar2 != '\0');
            uVar6 = ~uVar6;
            iVar7 = -1;
            pcVar5 = local_124;
            do {
              pcVar9 = pcVar5;
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              pcVar9 = pcVar5 + 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar9;
            } while (cVar2 != '\0');
            pcVar5 = pcVar10 + -uVar6;
            pcVar10 = pcVar9 + -1;
            for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar10 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar10 = pcVar10 + 1;
            }
            param_1 = param_1 + 1;
            local_c = local_c + 1;
          } while (param_1 < piVar1[0x4f]);
        }
      }
      uVar6 = 0xffffffff;
      pcVar5 = local_124;
      do {
        pcVar10 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar10;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar5 = param_2;
      do {
        pcVar9 = pcVar5;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar2 != '\0');
      pcVar5 = pcVar10 + -uVar6;
      pcVar10 = pcVar9 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; piVar1 = local_10, uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    local_8 = local_8 + 1;
    iVar7 = DAT_00d0ca90;
  } while( true );
}


