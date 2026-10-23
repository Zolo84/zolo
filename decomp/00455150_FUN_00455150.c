// FUN_00455150 @ 455150 size=1842

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00455150(int param_1,int param_2,int param_3,int *param_4)

{
  float fVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  undefined **ppuVar6;
  short *psVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined **local_1dc;
  float local_1d4 [51];
  char local_108 [260];
  
  DAT_0089f138._0_1_ = 0;
  if (*(int *)(*DAT_00d12b40 + 0x41e) == 0) goto LAB_00455874;
  pfVar8 = local_1d4;
  for (iVar11 = 0x33; iVar11 != 0; iVar11 = iVar11 + -1) {
    *pfVar8 = 0.0;
    pfVar8 = pfVar8 + 1;
  }
  bVar5 = false;
  local_1dc = (undefined **)0xffffffff;
  if (param_2 == 0) {
    if (param_3 == 0x8c) {
      iVar11 = *param_4;
      if (iVar11 != 0) {
        bVar4 = false;
        bVar5 = true;
        pfVar8 = local_1d4;
        iVar15 = 0x33;
        psVar7 = (short *)(param_1 + 0xab10 + iVar11 * 0x66);
        do {
          sVar3 = *psVar7;
          *pfVar8 = (float)(int)sVar3;
          if ((!bVar4) && ((float)(int)sVar3 != _DAT_007e3380)) {
            bVar4 = true;
          }
          psVar7 = psVar7 + 1;
          pfVar8 = pfVar8 + 1;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        iVar11 = *(int *)((&DAT_00dbf99a)[iVar11] + 0x18);
        ppuVar6 = (undefined **)iVar11;
        if (((iVar11 != 0) && (iVar11 != 1)) && (ppuVar6 = local_1dc, iVar11 == 2)) {
          ppuVar6 = (undefined **)iVar11;
        }
        local_1dc = ppuVar6;
        if (!bVar4) goto LAB_00455874;
      }
    }
    else {
      psVar7 = (short *)(param_1 + 0x7348 + param_3 * 0x66);
      iVar11 = 0x33;
      pfVar8 = local_1d4;
      do {
        sVar3 = *psVar7;
        psVar7 = psVar7 + 1;
        iVar11 = iVar11 + -1;
        *pfVar8 = (float)(int)sVar3;
        pfVar8 = pfVar8 + 1;
      } while (iVar11 != 0);
      local_1dc = (undefined **)0x5;
      do {
        if (*param_4 != 0) {
          iVar11 = 0x33;
          psVar7 = (short *)(param_1 + 0xab10 + *param_4 * 0x66);
          pfVar8 = local_1d4;
          do {
            sVar3 = *psVar7;
            psVar7 = psVar7 + 1;
            iVar11 = iVar11 + -1;
            *pfVar8 = (float)(int)sVar3 + *pfVar8;
            pfVar8 = pfVar8 + 1;
          } while (iVar11 != 0);
        }
        param_4 = param_4 + 1;
        local_1dc = (undefined **)((int)local_1dc + -1);
      } while (local_1dc != (undefined **)0x0);
      iVar11 = (&DAT_00dbd1a2)[param_3];
      if (iVar11 < 0xc) {
        local_1dc = (undefined **)0x0;
      }
      else {
        if ((0x14 < iVar11) && (iVar11 != 0x8c)) goto LAB_00455200;
        local_1dc = (undefined **)0x1;
      }
    }
  }
  else {
    pfVar8 = (float *)(param_2 + 0x164);
    iVar11 = 0x33;
    pfVar12 = local_1d4;
    do {
      fVar1 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      iVar11 = iVar11 + -1;
      *pfVar12 = fVar1 * _DAT_007e4088;
      pfVar12 = pfVar12 + 1;
    } while (iVar11 != 0);
    if (*(char *)(param_2 + 0x15f) == '\0') {
      if (*(char *)(param_2 + 0x160) == '\0') {
        if (*(char *)(param_2 + 0x161) != '\0') {
LAB_00455200:
          local_1dc = (undefined **)0x2;
        }
      }
      else {
        local_1dc = (undefined **)0x1;
      }
    }
    else {
      local_1dc = (undefined **)0x0;
    }
  }
  iVar11 = 0x33;
  pfVar8 = local_1d4;
  do {
    iVar11 = iVar11 + -1;
    *pfVar8 = *pfVar8 * _DAT_007e543c + _DAT_0083c528;
    pfVar8 = pfVar8 + 1;
  } while (iVar11 != 0);
  if (local_1dc == (undefined **)0x0) {
    FUN_0042b6c9(s_MODIFIERS_HEADER_3_0083c978);
    FUN_007a630a();
    uVar13 = 0xffffffff;
    pcVar17 = local_108;
    do {
      pcVar19 = pcVar17;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar19 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar19;
    } while (cVar2 != '\0');
    uVar13 = ~uVar13;
    piVar16 = &DAT_0083c414;
    iVar11 = -1;
    pcVar17 = (char *)&DAT_0089f138;
    do {
      pcVar18 = pcVar17;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar18 = pcVar17 + 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar18;
    } while (cVar2 != '\0');
    pcVar17 = pcVar19 + -uVar13;
    pcVar19 = pcVar18 + -1;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar19 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar19 = pcVar19 + 1;
    }
    local_1dc = &PTR_s_EYR_CLEAR_0083c4dc;
    do {
      if (((!bVar5) || (local_1d4[piVar16[-1]] != _DAT_0083c528)) ||
         ((local_1d4[*piVar16] != _DAT_0083c528 || (local_1d4[piVar16[1]] != _DAT_0083c528)))) {
        uVar9 = FUN_0042b6c9(*local_1dc);
        dVar22 = (double)local_1d4[piVar16[1]];
        dVar21 = (double)local_1d4[*piVar16];
        dVar20 = (double)local_1d4[piVar16[-1]];
        uVar10 = FUN_0042b6c9(s_MODIFIERS_LINE_3_0083c964);
        FUN_007a630a(local_108,uVar10,dVar20,dVar21,dVar22,uVar9);
        uVar13 = 0xffffffff;
        pcVar17 = local_108;
        do {
          pcVar19 = pcVar17;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar19 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar19;
        } while (cVar2 != '\0');
        uVar13 = ~uVar13;
        iVar11 = -1;
        pcVar17 = (char *)&DAT_0089f138;
        do {
          pcVar18 = pcVar17;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pcVar18 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar2 != '\0');
        pcVar17 = pcVar19 + -uVar13;
        pcVar19 = pcVar18 + -1;
        for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar19 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar19 = pcVar19 + 1;
        }
      }
      local_1dc = local_1dc + 1;
      piVar16 = piVar16 + 3;
    } while ((int)local_1dc < 0x83c51c);
    iVar11 = 0;
    do {
      if ((!bVar5) || (local_1d4[*(int *)((int)&DAT_0083c4d0 + iVar11)] != _DAT_0083c528)) {
        uVar9 = FUN_0042b6c9(*(undefined4 *)((int)&PTR_s_EYR_RIVER_ATTACK_0083c51c + iVar11));
        dVar22 = (double)local_1d4[*(int *)((int)&DAT_0083c4d0 + iVar11)];
        uVar10 = FUN_0042b6c9();
        FUN_007a630a(local_108,uVar10,dVar22,uVar9);
        uVar13 = 0xffffffff;
        pcVar17 = local_108;
        do {
          pcVar19 = pcVar17;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar19 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar19;
        } while (cVar2 != '\0');
        uVar13 = ~uVar13;
        iVar15 = -1;
        pcVar17 = (char *)&DAT_0089f138;
        do {
          pcVar18 = pcVar17;
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          pcVar18 = pcVar17 + 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar18;
        } while (cVar2 != '\0');
        pcVar17 = pcVar19 + -uVar13;
        pcVar19 = pcVar18 + -1;
        for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
          pcVar17 = pcVar17 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar19 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          pcVar19 = pcVar19 + 1;
        }
      }
      iVar11 = iVar11 + 4;
    } while (iVar11 < 0xc);
  }
  else {
    if (local_1dc == (undefined **)0x1) {
      FUN_0042b6c9(s_MODIFIERS_HEADER_2_0083c9b4);
      FUN_007a630a();
      uVar13 = 0xffffffff;
      pcVar17 = local_108;
      do {
        pcVar19 = pcVar17;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar19 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar19;
      } while (cVar2 != '\0');
      uVar13 = ~uVar13;
      piVar16 = &DAT_0083c368;
      iVar11 = -1;
      pcVar17 = (char *)&DAT_0089f138;
      do {
        pcVar18 = pcVar17;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar18 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar18;
      } while (cVar2 != '\0');
      pcVar17 = pcVar19 + -uVar13;
      pcVar19 = pcVar18 + -1;
      for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar19 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar19 = pcVar19 + 1;
      }
      local_1dc = &PTR_s_EYR_CLEAR_0083c3cc;
      do {
        if (((!bVar5) || (local_1d4[*piVar16] != _DAT_0083c528)) ||
           (local_1d4[piVar16[1]] != _DAT_0083c528)) {
          uVar9 = FUN_0042b6c9(*local_1dc);
          dVar22 = (double)local_1d4[piVar16[1]];
          dVar21 = (double)local_1d4[*piVar16];
          uVar10 = FUN_0042b6c9();
          FUN_007a630a(local_108,uVar10,dVar21,dVar22,uVar9);
          uVar13 = 0xffffffff;
          pcVar17 = local_108;
          do {
            pcVar19 = pcVar17;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            pcVar19 = pcVar17 + 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar19;
          } while (cVar2 != '\0');
          uVar13 = ~uVar13;
          iVar11 = -1;
          pcVar17 = (char *)&DAT_0089f138;
          do {
            pcVar18 = pcVar17;
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            pcVar18 = pcVar17 + 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar18;
          } while (cVar2 != '\0');
          pcVar17 = pcVar19 + -uVar13;
          pcVar19 = pcVar18 + -1;
          for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar19 = pcVar19 + 4;
          }
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pcVar19 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar19 = pcVar19 + 1;
          }
        }
        local_1dc = local_1dc + 1;
        piVar16 = piVar16 + 2;
      } while ((int)local_1dc < 0x83c3ec);
      iVar11 = 0;
      do {
        if ((!bVar5) || (local_1d4[*(int *)((int)&DAT_0083c3a8 + iVar11)] != _DAT_0083c528)) {
          uVar9 = FUN_0042b6c9(*(undefined4 *)((int)&PTR_s_EYR_PLAIN_0083c3ec + iVar11));
          dVar22 = (double)local_1d4[*(int *)((int)&DAT_0083c3a8 + iVar11)];
          uVar10 = FUN_0042b6c9();
          FUN_007a630a(local_108,uVar10,dVar22,uVar9);
          uVar13 = 0xffffffff;
          pcVar17 = local_108;
          do {
            pcVar19 = pcVar17;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            pcVar19 = pcVar17 + 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar19;
          } while (cVar2 != '\0');
          uVar13 = ~uVar13;
          iVar15 = -1;
          pcVar17 = (char *)&DAT_0089f138;
          do {
            pcVar18 = pcVar17;
            if (iVar15 == 0) break;
            iVar15 = iVar15 + -1;
            pcVar18 = pcVar17 + 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar18;
          } while (cVar2 != '\0');
          pcVar17 = pcVar19 + -uVar13;
          pcVar19 = pcVar18 + -1;
          for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar19 = pcVar19 + 4;
          }
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pcVar19 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar19 = pcVar19 + 1;
          }
        }
        iVar11 = iVar11 + 4;
        if (0x23 < iVar11) {
          return &DAT_0089f138;
        }
      } while( true );
    }
    if (local_1dc == (undefined **)0x2) {
      FUN_0042b6c9(s_MODIFIERS_HEADER_2_0083c9b4);
      FUN_007a630a();
      uVar13 = 0xffffffff;
      pcVar17 = local_108;
      do {
        pcVar19 = pcVar17;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar19 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar19;
      } while (cVar2 != '\0');
      uVar13 = ~uVar13;
      piVar16 = &DAT_0083c314;
      iVar11 = -1;
      pcVar17 = (char *)&DAT_0089f138;
      do {
        pcVar18 = pcVar17;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar18 = pcVar17 + 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar18;
      } while (cVar2 != '\0');
      pcVar17 = pcVar19 + -uVar13;
      pcVar19 = pcVar18 + -1;
      for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar19 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar19 = pcVar19 + 1;
      }
      local_1dc = &PTR_s_EYR_CLEAR_0083c34c;
      do {
        if (((!bVar5) || (local_1d4[*piVar16] != _DAT_0083c528)) ||
           (local_1d4[piVar16[1]] != _DAT_0083c528)) {
          uVar9 = FUN_0042b6c9(*local_1dc);
          dVar22 = (double)local_1d4[piVar16[1]];
          dVar21 = (double)local_1d4[*piVar16];
          uVar10 = FUN_0042b6c9();
          FUN_007a630a(local_108,uVar10,dVar21,dVar22,uVar9);
          uVar13 = 0xffffffff;
          pcVar17 = local_108;
          do {
            pcVar19 = pcVar17;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            pcVar19 = pcVar17 + 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar19;
          } while (cVar2 != '\0');
          uVar13 = ~uVar13;
          iVar11 = -1;
          pcVar17 = (char *)&DAT_0089f138;
          do {
            pcVar18 = pcVar17;
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            pcVar18 = pcVar17 + 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar18;
          } while (cVar2 != '\0');
          pcVar17 = pcVar19 + -uVar13;
          pcVar19 = pcVar18 + -1;
          for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pcVar19 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar19 = pcVar19 + 4;
          }
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pcVar19 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar19 = pcVar19 + 1;
          }
        }
        local_1dc = local_1dc + 1;
        piVar16 = piVar16 + 2;
        if (0x83c367 < (int)local_1dc) {
          return &DAT_0089f138;
        }
      } while( true );
    }
  }
LAB_00455874:
  return &DAT_0089f138;
}


