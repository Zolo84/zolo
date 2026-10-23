// FUN_004ed730 @ 4ed730 size=2136

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ed730(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  void *pvVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  float10 fVar15;
  float local_4c4;
  int local_4c0;
  int local_4bc;
  int local_4b8;
  int local_4b4;
  uint local_4b0;
  undefined4 uStack_4ac;
  undefined **local_4a8;
  int *local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  char local_494 [568];
  int local_25c;
  char local_114 [256];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007c01d1;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_007a630a(local_494,s__s_navaldist_tbl_00848eac);
  if (DAT_00dc196c == 1) {
    FUN_007a630a(local_494,s__s_navaldist2_tbl_00848e98);
  }
  FUN_00426d70(local_494,&DAT_0082eeb4);
  local_c = 0;
  cVar3 = FUN_00427570();
  if (cVar3 == '\0') {
    if (DAT_00dc3a00 != '\0') {
      FUN_007a630a();
      iVar4 = FUN_007a6615();
      if (iVar4 != 0) {
        FUN_007a6429();
        uVar8 = 0xffffffff;
        pcVar12 = local_114;
        do {
          pcVar13 = pcVar12;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar13 = pcVar12 + 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar13;
        } while (cVar3 != '\0');
        uVar8 = ~uVar8;
        pcVar12 = pcVar13 + -uVar8;
        pcVar13 = local_494;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar13 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
    }
    local_4c4 = 0.0;
    FUN_00427220(&local_4c4,4,1);
    fVar7 = local_4c4;
    if (DAT_00abf144 != '\0') goto LAB_004edf5b;
    fVar5 = local_4c4;
    if (DAT_00dc196c == 0) {
      uStack_4ac = 0;
      local_4b0 = local_25c - 4U >> 2;
      fVar5 = (float)__ftol();
      if (fVar5 != fVar7) {
        FUN_00429a00();
      }
    }
    FUN_00429a00(s_Reading__s____00848e4c);
    FUN_004ee6f0(DAT_00abc51c,DAT_00abc520);
    uVar8 = (int)fVar5 * (int)fVar5;
    if (DAT_00abc51c == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (int)DAT_00abc524 - (int)DAT_00abc51c >> 2;
    }
    if (uVar9 < uVar8) {
      uVar9 = uVar8;
      if ((int)uVar8 < 0) {
        uVar9 = 0;
      }
      pvVar6 = operator_new(uVar9 * 4);
      FUN_004ee740(DAT_00abc51c,DAT_00abc520,pvVar6);
      FUN_004ee730(DAT_00abc51c,DAT_00abc520);
      FUN_00796cd8();
      DAT_00abc524 = (void *)((int)pvVar6 + uVar8 * 4);
      iVar4 = FUN_004ee6d0();
      DAT_00abc520 = (void *)((int)pvVar6 + iVar4 * 4);
      DAT_00abc51c = pvVar6;
    }
    FUN_004ee270(DAT_00abc934,DAT_00abc938);
    if (DAT_00abc934 == (void *)0x0) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = (float)((int)DAT_00abc93c - (int)DAT_00abc934 >> 2);
    }
    if ((uint)fVar7 < (uint)fVar5) {
      fVar7 = fVar5;
      if ((int)fVar5 < 0) {
        fVar7 = 0.0;
      }
      pvVar6 = operator_new((int)fVar7 << 2);
      FUN_004ee690(DAT_00abc934,DAT_00abc938,pvVar6);
      FUN_004ee680(DAT_00abc934,DAT_00abc938);
      FUN_00796cd8();
      DAT_00abc93c = (void *)((int)pvVar6 + (int)fVar5 * 4);
      iVar4 = FUN_004ee250();
      DAT_00abc938 = (void *)((int)pvVar6 + iVar4 * 4);
      DAT_00abc934 = pvVar6;
    }
    iVar4 = 0;
    if (0 < (int)fVar5) {
      iVar10 = 0;
      do {
        *(int *)((int)DAT_00abc934 + iVar4 * 4) = iVar10;
        iVar4 = iVar4 + 1;
        iVar10 = iVar10 + (int)fVar5;
      } while (iVar4 < (int)fVar5);
    }
    FUN_00427220(DAT_00abc51c,4,uVar8);
    DAT_00abf144 = '\x01';
    FUN_00429a00(s_Done____d_naval_provinces__Read_d_00848e18,fVar5);
    if (DAT_00dc4b5f != '\0') {
      FUN_00429a00(s_Index_1_____10f_Index_1000_____1_00848de0,
                   (double)*(float *)((int)DAT_00abc51c + 4),
                   (double)*(float *)((int)DAT_00abc51c + 4000),uVar8 - 1,
                   (double)*(float *)((int)DAT_00abc51c + uVar8 * 4 + -8));
    }
    if (local_4c4 == DAT_00abf140) goto LAB_004edf5b;
  }
  FUN_00429a00();
  FUN_004ee270(DAT_00abc934,DAT_00abc938);
  fVar7 = DAT_00abf140;
  if (DAT_00abc934 == (void *)0x0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)((int)DAT_00abc93c - (int)DAT_00abc934 >> 2);
  }
  if ((uint)fVar5 < (uint)DAT_00abf140) {
    fVar5 = DAT_00abf140;
    if ((int)DAT_00abf140 < 0) {
      fVar5 = 0.0;
    }
    pvVar6 = operator_new((int)fVar5 * 4);
    FUN_004ee690(DAT_00abc934,DAT_00abc938,pvVar6);
    FUN_004ee680(DAT_00abc934,DAT_00abc938);
    FUN_00796cd8();
    DAT_00abc93c = (void *)((int)pvVar6 + (int)fVar7 * 4);
    iVar4 = FUN_004ee250();
    DAT_00abc938 = (void *)((int)pvVar6 + iVar4 * 4);
    DAT_00abc934 = pvVar6;
  }
  iVar4 = 0;
  if (0 < (int)DAT_00abf140) {
    do {
      *(int *)((int)DAT_00abc934 + iVar4 * 4) = (int)DAT_00abf140 * iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)DAT_00abf140);
  }
  FUN_004ee6f0(DAT_00abc51c,DAT_00abc520);
  uVar8 = (int)DAT_00abf140 * (int)DAT_00abf140;
  if (DAT_00abc51c == (void *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (int)DAT_00abc524 - (int)DAT_00abc51c >> 2;
  }
  if (uVar9 < uVar8) {
    uVar9 = uVar8;
    if ((int)uVar8 < 0) {
      uVar9 = 0;
    }
    pvVar6 = operator_new(uVar9 << 2);
    FUN_004ee740(DAT_00abc51c,DAT_00abc520,pvVar6);
    FUN_004ee730(DAT_00abc51c,DAT_00abc520);
    FUN_00796cd8();
    DAT_00abc524 = (void *)((int)pvVar6 + uVar8 * 4);
    iVar4 = FUN_004ee6d0();
    DAT_00abc520 = (void *)((int)pvVar6 + iVar4 * 4);
    DAT_00abc51c = pvVar6;
  }
  iVar4 = 0;
  fVar7 = DAT_00abf140;
  if (0 < (int)DAT_00abf140) {
    do {
      iVar10 = 0;
      if (0 < (int)fVar7) {
        do {
          iVar11 = *(int *)((int)DAT_00abc934 + iVar4 * 4) + iVar10;
          iVar10 = iVar10 + 1;
          *(undefined4 *)((int)DAT_00abc51c + iVar11 * 4) = 0;
          fVar7 = DAT_00abf140;
        } while (iVar10 < (int)DAT_00abf140);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)fVar7);
  }
  FUN_004ee3c0();
  local_4a8 = &PTR_FUN_007e8140;
  local_c = CONCAT31(local_c._1_3_,1);
  FUN_00429a00();
  if (DAT_00dc4b5f != '\0') {
    FUN_00429a00();
  }
  local_4bc = 0;
  if (0 < DAT_00877690) {
    local_4b4 = 0;
    iVar4 = DAT_00877690;
    do {
      iVar11 = local_4bc;
      local_4b0 = local_4b4 + DAT_00ab27b4;
      iVar10 = *(int *)(local_4b0 + 0x16a);
      if (-1 < iVar10) {
        if (DAT_00dc4b5f != '\0') {
          FUN_00429a00(s__d__d__dist__to__00848d3c,local_4bc,iVar10);
        }
        local_4b8 = 0;
        iVar4 = DAT_00877690;
        if (0 < DAT_00877690) {
          local_4c0 = 0;
          do {
            iVar11 = local_4b8;
            iVar14 = local_4c0 + DAT_00ab27b4;
            iVar4 = *(int *)(iVar14 + 0x16a);
            if (-1 < iVar4) {
              if (DAT_00dc4b5f != '\0') {
                FUN_00429a00(s__d__d___00848d30,local_4b8,iVar4);
              }
              if (*(float *)((int)DAT_00abc51c +
                            (*(int *)((int)DAT_00abc934 + iVar10 * 4) + iVar4) * 4) == _DAT_007e3380
                 ) {
                local_4c4 = 0.0;
                FUN_00431220(0,local_4b0,iVar14);
                piVar2 = local_4a4;
                while (piVar2 != (int *)0x0) {
                  piVar1 = (int *)piVar2[2];
                  iVar11 = *piVar2;
                  fVar15 = (float10)FUN_0044a9c0();
                  local_4c4 = (float)(fVar15 + (float10)local_4c4);
                  *(float *)((int)DAT_00abc51c +
                            (*(int *)((int)DAT_00abc934 + iVar10 * 4) + *(int *)(iVar11 + 0x16a)) *
                            4) = local_4c4;
                  *(float *)((int)DAT_00abc51c +
                            (*(int *)((int)DAT_00abc934 + *(int *)(iVar11 + 0x16a) * 4) + iVar10) *
                            4) = local_4c4;
                  iVar11 = local_4b8;
                  piVar2 = piVar1;
                }
                *(float *)((int)DAT_00abc51c +
                          (*(int *)((int)DAT_00abc934 + iVar10 * 4) + iVar4) * 4) = local_4c4;
                *(float *)((int)DAT_00abc51c +
                          (*(int *)((int)DAT_00abc934 + iVar4 * 4) + iVar10) * 4) = local_4c4;
              }
              if (DAT_00dc4b5f != '\0') {
                FUN_00429a00(s___0fkm___00848d24);
              }
            }
            local_4b8 = iVar11 + 1;
            local_4c0 = local_4c0 + 0x4b2;
            iVar4 = DAT_00877690;
            iVar11 = local_4bc;
          } while (local_4b8 < DAT_00877690);
        }
      }
      local_4bc = iVar11 + 1;
      local_4b4 = local_4b4 + 0x4b2;
    } while (local_4bc < iVar4);
  }
  FUN_00429a00(s_Recalculation_complete__Writing___00848cfc,local_494);
  FUN_00426d70(local_494,&DAT_0082ef98);
  local_c = CONCAT31(local_c._1_3_,2);
  cVar3 = FUN_00427570();
  if (cVar3 == '\0') {
    FUN_00427330(&DAT_00abf140,4,1);
    FUN_00427330(DAT_00abc51c,4,(int)DAT_00abf140 * (int)DAT_00abf140);
  }
  FUN_00429a00();
  local_c = CONCAT31(local_c._1_3_,1);
  FUN_00426f80();
  local_4a8 = &PTR_LAB_007e518c;
  while (local_4a4 != (int *)0x0) {
    local_4a4 = (int *)local_4a4[2];
    FUN_00796cd8();
  }
  local_4a4 = (int *)0x0;
  local_4a0 = 0;
  local_49c = 0;
LAB_004edf5b:
  local_c = 0xffffffff;
  FUN_00426f80();
  ExceptionList = local_14;
  return;
}


