// FUN_004de350 @ 4de350 size=2403

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004de350(undefined4 param_1,undefined4 param_2)

{
  short *psVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  short *psVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  short *psVar13;
  ushort *puVar14;
  void *pvVar15;
  undefined4 *puVar16;
  int iVar17;
  int local_3bc;
  int local_3ac;
  int local_3a4;
  int local_3a0;
  void *local_39c;
  undefined4 local_394;
  undefined1 local_38c [896];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bfc6f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_39c = operator_new(0x28);
  iVar17 = 0;
  local_4 = 0;
  if (local_39c == (void *)0x0) {
    DAT_00ab278c = (undefined4 *)0x0;
  }
  else {
    DAT_00ab278c = (undefined4 *)FUN_0040e950(param_1);
  }
  local_4 = 0xffffffff;
  FUN_00426120(&DAT_00dc4a5c);
  local_4 = 1;
  FUN_00426d70(param_2,&DAT_0082ef98);
  local_4 = CONCAT31(local_4._1_3_,2);
  DAT_00ab2788 = operator_new(40000000);
  DAT_00ab0f80 = operator_new(20000000);
  DAT_00ab27a0 = 0;
  local_3ac = FUN_00426720();
  local_3ac = local_3ac + -1;
  local_39c = (void *)local_3ac;
  FUN_00426330(1);
  if (0 < local_3ac) {
    do {
      FUN_00426330(1);
      FUN_004263f0((int)DAT_00ab0f80 + 8);
      FUN_004262f0(5);
      FUN_004265c0(local_38c);
      iVar6 = FUN_007a8730(local_38c,s_clear_008479f0);
      if (((((iVar6 != 0) && (iVar6 = FUN_007a8730(local_38c,s_forest_008479e8), iVar6 != 0)) &&
           (iVar6 = FUN_007a8730(local_38c,s_mountain_008479dc), iVar6 != 0)) &&
          (((iVar6 = FUN_007a8730(local_38c,&DAT_008479d4), iVar6 != 0 &&
            (iVar6 = FUN_007a8730(local_38c,&DAT_008479cc), iVar6 != 0)) &&
           ((iVar6 = FUN_007a8730(local_38c,s_marsh_008479c4), iVar6 != 0 &&
            ((iVar6 = FUN_007a8730(local_38c,s_desert_008479bc), iVar6 != 0 &&
             (iVar6 = FUN_007a8730(local_38c,&DAT_008479b8), iVar6 != 0)))))))) &&
         (iVar6 = FUN_007a8730(local_38c,s_ocean_008479b0), iVar6 != 0)) {
        FUN_007a8730(local_38c,s_river_008479a8);
      }
      FUN_004262f0(0x26);
      _DAT_00ab27a4 = 1;
      _DAT_00ab27a8 = 0;
      FUN_004263f0((int)DAT_00ab0f80 + 4);
      sVar4 = *(short *)((int)DAT_00ab0f80 + 4);
      while (sVar4 != -1) {
        FUN_004263f0((int)DAT_00ab0f80 + 6);
        if (*(short *)((int)DAT_00ab0f80 + 8) == -1) {
          *(undefined2 *)((int)DAT_00ab0f80 + 8) = (undefined2)DAT_00877690;
        }
        _DAT_00ab2794 = 100000;
        _DAT_00ab2790 = 0xffffffff;
        _DAT_00ab279c = 100000;
        _DAT_00ab2798 = 0xffffffff;
        _DAT_00ab27a4 = 1;
        _DAT_00ab27a8 = 0;
        FUN_004263f0((int)DAT_00ab0f80 + 4);
        sVar4 = *(short *)((int)DAT_00ab0f80 + 4);
      }
      local_3ac = local_3ac + -1;
    } while (local_3ac != 0);
  }
  iVar6 = 0;
  do {
    piVar3 = (int *)((int)DAT_00ab2788 + DAT_00ab27a0 * 10);
    iVar10 = (short)iVar6 * 0x8000;
    local_394 = iVar6 << 0x10;
    iVar11 = local_394;
    *piVar3 = iVar10;
    local_394 = CONCAT22((short)iVar6,0x7500);
    piVar3[1] = iVar11;
    *(undefined2 *)(piVar3 + 2) = 0;
    DAT_00ab27a0 = DAT_00ab27a0 + 1;
    piVar3 = (int *)((int)DAT_00ab2788 + DAT_00ab27a0 * 10);
    *piVar3 = iVar10 + 0x7500;
    piVar3[1] = local_394;
    *(undefined2 *)(piVar3 + 2) = 0;
    DAT_00ab27a0 = DAT_00ab27a0 + 1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x2d00);
  FUN_007a78e3(DAT_00ab2788,DAT_00ab27a0,10,&LAB_004de310);
  iVar6 = 0;
  if (0 < DAT_00ab27a0) {
    iVar11 = 0;
    iVar10 = 0;
    do {
      puVar9 = (undefined4 *)((int)DAT_00ab2788 + iVar10);
      if (((*(short *)((int)DAT_00ab2788 + iVar10 + 4) == 0) && (*(short *)((int)puVar9 + 0xe) == 0)
          ) && (*(short *)((int)puVar9 + 6) == *(short *)(puVar9 + 4))) {
        puVar16 = (undefined4 *)((int)DAT_00ab2788 + iVar11);
        *puVar16 = *puVar9;
        iVar6 = iVar6 + 2;
        iVar10 = iVar10 + 0x14;
        puVar16[1] = puVar9[1];
        *(undefined2 *)(puVar16 + 2) = *(undefined2 *)(puVar9 + 2);
      }
      else {
        puVar16 = (undefined4 *)((int)DAT_00ab2788 + iVar11);
        *puVar16 = *puVar9;
        iVar6 = iVar6 + 1;
        iVar10 = iVar10 + 10;
        puVar16[1] = puVar9[1];
        *(undefined2 *)(puVar16 + 2) = *(undefined2 *)(puVar9 + 2);
      }
      iVar17 = iVar17 + 1;
      iVar11 = iVar11 + 10;
    } while (iVar6 < DAT_00ab27a0);
  }
  iVar6 = 1;
  iVar11 = 1;
  if (1 < iVar17) {
    iVar10 = 10;
    DAT_00ab27a0 = iVar17;
    do {
      psVar13 = (short *)((int)DAT_00ab2788 + iVar6 * 10);
      if (*(short *)((int)DAT_00ab2788 + iVar6 * 10 + 8) == psVar13[-1]) {
        psVar7 = psVar13 + 3;
        do {
          if ((0x74ff < psVar13[2]) || (*psVar7 != psVar7[-5])) break;
          psVar1 = psVar7 + 6;
          iVar6 = iVar6 + 1;
          psVar2 = psVar7 + 1;
          psVar13 = psVar7 + 2;
          psVar7 = psVar7 + 5;
        } while (*psVar1 == *psVar2);
      }
      iVar11 = iVar11 + 1;
      puVar9 = (undefined4 *)((int)DAT_00ab2788 + iVar6 * 10);
      puVar16 = (undefined4 *)(iVar10 + (int)DAT_00ab2788);
      iVar10 = iVar10 + 10;
      iVar6 = iVar6 + 1;
      *puVar16 = *puVar9;
      puVar16[1] = puVar9[1];
      *(undefined2 *)(puVar16 + 2) = *(undefined2 *)(puVar9 + 2);
    } while (iVar6 < DAT_00ab27a0);
  }
  iVar6 = 0;
  iVar17 = 0;
  local_3bc = 0;
  DAT_00ab27a0 = iVar11;
  if (0 < iVar11) {
    do {
      iVar11 = iVar17;
      if (((iVar17 < DAT_00ab27a0 + -1) &&
          (psVar13 = (short *)((int)DAT_00ab2788 + iVar17 * 10),
          *(short *)((int)DAT_00ab2788 + iVar17 * 10 + 4) == psVar13[7])) &&
         (psVar7 = psVar13 + 3, psVar13[3] == psVar13[8])) {
        do {
          if ((psVar13[2] != psVar13[7]) || (*psVar7 != psVar7[5])) break;
          iVar17 = iVar17 + 1;
          psVar13 = psVar7 + 2;
          if (psVar7[6] != 0) {
            iVar11 = iVar17;
          }
          psVar7 = psVar7 + 5;
        } while (iVar17 < DAT_00ab27a0 + -1);
      }
      puVar9 = (undefined4 *)((int)DAT_00ab2788 + iVar11 * 10);
      puVar16 = (undefined4 *)(iVar6 + (int)DAT_00ab2788);
      iVar6 = iVar6 + 10;
      *puVar16 = *puVar9;
      puVar16[1] = puVar9[1];
      local_3bc = local_3bc + 1;
      *(undefined2 *)(puVar16 + 2) = *(undefined2 *)(puVar9 + 2);
      iVar17 = iVar17 + 1;
    } while (iVar17 < DAT_00ab27a0);
  }
  DAT_00ab27a0 = local_3bc;
  puVar8 = operator_new(local_3bc << 2);
  puVar9 = operator_new(0xb400);
  iVar17 = 0;
  if (0 < DAT_00ab27a0) {
    iVar6 = 0;
    puVar12 = puVar8;
    do {
      iVar17 = iVar17 + 1;
      *puVar12 = *(undefined2 *)(iVar6 + 4 + (int)DAT_00ab2788);
      puVar12[1] = *(undefined2 *)(iVar6 + 8 + (int)DAT_00ab2788);
      iVar6 = iVar6 + 10;
      puVar12 = puVar12 + 2;
    } while (iVar17 < DAT_00ab27a0);
  }
  puVar16 = puVar9;
  for (iVar17 = 0x2d00; iVar17 != 0; iVar17 = iVar17 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  iVar17 = 0;
  if (0 < DAT_00ab27a0) {
    do {
      iVar11 = iVar17 * 10;
      iVar10 = (int)*(short *)(iVar11 + 6 + (int)DAT_00ab2788);
      puVar9[iVar10] = iVar17;
      iVar6 = iVar11 + 6 + (int)DAT_00ab2788;
      sVar4 = *(short *)(iVar11 + 6 + (int)DAT_00ab2788);
      while (iVar10 == sVar4) {
        psVar13 = (short *)(iVar6 + 10);
        iVar6 = iVar6 + 10;
        iVar17 = iVar17 + 1;
        sVar4 = *psVar13;
      }
    } while (iVar17 < DAT_00ab27a0);
  }
  FUN_00427330(&DAT_00ab27a0,4,1);
  FUN_00427330(puVar9,4,0x2d00);
  FUN_00427330(puVar8,4,DAT_00ab27a0);
  FUN_00426d70(s_______Build_Files_borderfile_raw_00847984,&DAT_0082ef98);
  local_4 = CONCAT31(local_4._1_3_,3);
  local_3a4 = 0;
  local_3bc = 0;
  iVar17 = DAT_00ab27a0;
  do {
    bVar5 = false;
    iVar6 = puVar9[local_3bc];
    local_3a0 = iVar6 + 1;
    puVar14 = puVar8 + iVar6 * 2 + 1;
    do {
      if ((iVar17 <= iVar6) ||
         (((local_3bc + 1 < 0x2d00 && ((int)puVar9[local_3bc + 1] <= iVar6)) &&
          (puVar9[local_3bc + 1] != 0)))) break;
      iVar11 = 0x74ff;
      if (local_3a0 < iVar17) {
        iVar11 = (int)(short)puVar14[1];
      }
      iVar17 = (int)(short)puVar14[-1];
      if (iVar11 < iVar17) {
        iVar11 = 0x74ff;
        bVar5 = true;
      }
      FUN_004273c0(local_3bc * 0x7500 + iVar17);
      local_3a4 = (*puVar14 & 0x1f) << 3;
      if ((short)*puVar14 == DAT_00877690) {
        local_3a4 = 0;
      }
      if (*puVar14 == 0) {
        local_3a4 = 0xff;
      }
      if (iVar17 < iVar11) {
        iVar11 = iVar11 - iVar17;
        do {
          FUN_004272b0(&local_3a4,1);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      iVar6 = iVar6 + 1;
      local_3a0 = local_3a0 + 1;
      puVar14 = puVar14 + 2;
      iVar17 = DAT_00ab27a0;
    } while (!bVar5);
    local_3bc = local_3bc + 1;
    if (0x2cff < local_3bc) {
      FUN_004266f0();
      FUN_00426330(1);
      pvVar15 = local_39c;
      if (0 < (int)local_39c) {
        do {
          FUN_00426330(1);
          FUN_004263f0((int)DAT_00ab0f80 + 8);
          FUN_004262f0(5);
          FUN_004265c0(local_38c);
          iVar17 = FUN_007a8730(local_38c,s_clear_008479f0);
          if (((iVar17 != 0) && (iVar17 = FUN_007a8730(local_38c,s_forest_008479e8), iVar17 != 0))
             && ((((iVar17 = FUN_007a8730(local_38c,s_mountain_008479dc), iVar17 != 0 &&
                   ((iVar17 = FUN_007a8730(local_38c,&DAT_008479d4), iVar17 != 0 &&
                    (iVar17 = FUN_007a8730(local_38c,&DAT_008479cc), iVar17 != 0)))) &&
                  (iVar17 = FUN_007a8730(local_38c,s_marsh_008479c4), iVar17 != 0)) &&
                 (((iVar17 = FUN_007a8730(local_38c,s_desert_008479bc), iVar17 != 0 &&
                   (iVar17 = FUN_007a8730(local_38c,&DAT_008479b8), iVar17 != 0)) &&
                  (iVar17 = FUN_007a8730(local_38c,s_ocean_008479b0), iVar17 != 0)))))) {
            FUN_007a8730(local_38c,s_river_008479a8);
          }
          FUN_004262f0(0x26);
          while ((FUN_004263f0((int)DAT_00ab0f80 + 4), *(short *)((int)DAT_00ab0f80 + 4) != -1 &&
                 (FUN_004263f0((int)DAT_00ab0f80 + 6), *(short *)((int)DAT_00ab0f80 + 8) != -1))) {
            psVar13 = puVar8 + puVar9[*(short *)((int)DAT_00ab0f80 + 6)] * 2;
            sVar4 = *psVar13;
            while (sVar4 <= *(short *)((int)DAT_00ab0f80 + 4)) {
              psVar13 = psVar13 + 2;
              sVar4 = *psVar13;
            }
          }
          pvVar15 = (void *)((int)pvVar15 + -1);
        } while (pvVar15 != (void *)0x0);
      }
      if (DAT_00ab278c != (undefined4 *)0x0) {
        (**(code **)*DAT_00ab278c)(1);
      }
      FUN_00796cd8(puVar8);
      FUN_00796cd8(puVar9);
      FUN_00796cd8(DAT_00ab0f80);
      FUN_00796cd8(DAT_00ab2788);
      local_4._0_1_ = 2;
      FUN_00426f80();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00426f80();
      local_4 = 0xffffffff;
      FUN_004262d0();
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}


