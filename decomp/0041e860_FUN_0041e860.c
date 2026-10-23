// FUN_0041e860 @ 41e860 size=15369

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e860(ushort *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  byte *pbVar11;
  short *psVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ushort *puVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  byte bVar21;
  undefined4 *puVar22;
  int iVar23;
  int *piVar24;
  undefined4 *puVar25;
  uint *puVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  int iVar42;
  uint uVar43;
  int iVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  int iVar48;
  uint uVar49;
  int iVar50;
  uint uVar51;
  int iVar52;
  uint uVar53;
  int iVar54;
  uint uVar55;
  int iVar56;
  uint uVar57;
  int iVar58;
  uint uVar59;
  int iVar60;
  uint uVar61;
  int iVar62;
  uint uVar63;
  int iVar64;
  uint uVar65;
  int iVar66;
  uint uVar67;
  int iVar68;
  uint uVar69;
  int iVar70;
  uint uVar71;
  int iVar72;
  uint uVar73;
  int iVar74;
  uint uVar75;
  int iVar76;
  uint uVar77;
  int iVar78;
  uint uVar79;
  int iVar80;
  uint uVar81;
  int iVar82;
  uint uVar83;
  int iVar84;
  uint uVar85;
  int iVar86;
  uint uVar87;
  int iVar88;
  uint uVar89;
  int iVar90;
  uint uVar91;
  int iVar92;
  uint uVar93;
  int iVar94;
  uint uVar95;
  int iVar96;
  uint uVar97;
  int iVar98;
  uint uVar99;
  int iVar100;
  uint uVar101;
  int iVar102;
  uint uVar103;
  int iVar104;
  uint uVar105;
  int iVar106;
  uint uVar107;
  int iVar108;
  uint uVar109;
  int iVar110;
  uint uVar111;
  int iVar112;
  uint uVar113;
  int iVar114;
  uint uVar115;
  int iVar116;
  uint uVar117;
  int iVar118;
  uint uVar119;
  int iVar120;
  uint uVar121;
  int iVar122;
  uint uVar123;
  int iVar124;
  int local_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int aiStack_18 [6];
  
  iVar9 = (int)param_1;
  iVar7 = *(int *)((int)param_1 + 0x28);
  if (2 < *(int *)((int)param_1 + 0x268)) {
    FUN_007a6628(&DAT_0087cb88,s__d_in_block___d_after_MTF___1_2_c_008396c0,
                 *(undefined4 *)((int)param_1 + 0x44),*(undefined4 *)((int)param_1 + 0x274),
                 *(undefined4 *)((int)param_1 + 0x54));
  }
  iVar20 = *(int *)((int)param_1 + 0x54);
  puVar22 = (undefined4 *)((int)param_1 + 0x9324);
  uVar14 = iVar20 + 2;
  local_2c = 6;
  do {
    if (0 < (int)uVar14) {
      puVar25 = puVar22;
      for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar25 = 0xf0f0f0f;
        puVar25 = puVar25 + 1;
      }
      for (uVar13 = uVar14 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar25 = 0xf;
        puVar25 = (undefined4 *)((int)puVar25 + 1);
      }
    }
    puVar22 = (undefined4 *)((int)puVar22 + 0x102);
    local_2c = local_2c + -1;
  } while (local_2c != 0);
  if (*(int *)((int)param_1 + 0x274) < 1) {
    FUN_0041b650();
  }
  uStack_30 = *(int *)((int)param_1 + 0x274);
  if ((int)uStack_30 < 200) {
    uVar13 = 2;
  }
  else if ((int)uStack_30 < 600) {
    uVar13 = 3;
  }
  else if ((int)uStack_30 < 0x4b0) {
    uVar13 = 4;
  }
  else {
    uVar13 = (0x95f < (int)uStack_30) + 5;
  }
  param_1 = (ushort *)0x0;
  if (uVar13 != 0) {
    uStack_34 = 0;
    iStack_40 = iVar9 + (uVar13 + 0x91) * 0x102;
    uStack_38 = uVar13;
    do {
      iVar19 = 0;
      iVar23 = (int)param_1 + -1;
      iStack_3c = 0;
      if (0 < (int)uStack_30 / (int)uStack_38) {
        iVar15 = iVar9 + 0x278 + iVar23 * 4;
        do {
          iStack_3c = iVar19;
          if (iVar20 + 1 <= iVar23) break;
          iVar19 = iVar19 + *(int *)(iVar15 + 4);
          iVar15 = iVar15 + 4;
          iVar23 = iVar23 + 1;
          iStack_3c = iVar19;
        } while (iVar19 < (int)uStack_30 / (int)uStack_38);
      }
      if ((((int)param_1 < iVar23) && (uStack_38 != uVar13)) && (uStack_38 != 1)) {
        uVar16 = uStack_34 & 0x80000001;
        if ((int)uVar16 < 0) {
          uVar16 = (uVar16 - 1 | 0xfffffffe) + 1;
        }
        if (uVar16 == 1) {
          iStack_3c = iStack_3c - *(int *)(iVar9 + 0x278 + iVar23 * 4);
          iVar23 = iVar23 + -1;
        }
      }
      if (2 < *(int *)(iVar9 + 0x268)) {
        FUN_007a6628(&DAT_0087cb88,s_initial_group__d____d_____d___ha_00839684,uStack_38,param_1,
                     iVar23,iStack_3c,
                     ((double)iStack_3c * _DAT_007e3870) / (double)*(int *)(iVar9 + 0x274));
      }
      iVar19 = 0;
      if (0 < (int)uVar14) {
        do {
          if ((iVar19 < (int)param_1) || (iVar23 < iVar19)) {
            *(undefined1 *)(iStack_40 + iVar19) = 0xf;
          }
          else {
            *(undefined1 *)(iStack_40 + iVar19) = 0;
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < (int)uVar14);
      }
      iStack_40 = iStack_40 + -0x102;
      uStack_38 = uStack_38 - 1;
      uStack_34 = uStack_34 + 1;
      param_1 = (ushort *)(iVar23 + 1);
      uStack_30 = uStack_30 - iStack_3c;
    } while (0 < (int)uStack_38);
  }
  local_2c = 0;
  do {
    if (uVar13 != 0) {
      puVar22 = (undefined4 *)(iVar9 + 0xb160);
      piVar24 = aiStack_18;
      for (uVar16 = uVar13; param_1 = (ushort *)uVar13, uVar16 != 0; uVar16 = uVar16 - 1) {
        *piVar24 = 0;
        piVar24 = piVar24 + 1;
      }
      do {
        uVar16 = uVar14;
        puVar25 = puVar22;
        if (0 < (int)uVar14) {
          for (; uVar16 != 0; uVar16 = uVar16 - 1) {
            *puVar25 = 0;
            puVar25 = puVar25 + 1;
          }
        }
        puVar22 = puVar22 + 0x102;
        param_1 = (ushort *)((int)param_1 - 1);
      } while (param_1 != (ushort *)0x0);
    }
    if ((uVar13 == 6) && (0 < (int)uVar14)) {
      pbVar11 = (byte *)(iVar9 + 0x9324);
      puVar26 = (uint *)(iVar9 + 0xc994);
      do {
        puVar26[-1] = (uint)pbVar11[0x102] << 0x10 | (uint)*pbVar11;
        *puVar26 = (uint)pbVar11[0x306] << 0x10 | (uint)pbVar11[0x204];
        pbVar1 = pbVar11 + 0x408;
        pbVar2 = pbVar11 + 0x50a;
        pbVar11 = pbVar11 + 1;
        puVar26[1] = (uint)*pbVar2 << 0x10 | (uint)*pbVar1;
        puVar26 = puVar26 + 4;
      } while ((int)(pbVar11 + (-0x9324 - iVar9)) < (int)uVar14);
    }
    iVar20 = 0;
    iStack_3c = 0;
    uStack_38 = 0;
    while (iVar23 = *(int *)(iVar9 + 0x274), iVar20 < iVar23) {
      iVar19 = iVar20 + 0x31;
      iVar15 = iVar19;
      if (iVar23 <= iVar19) {
        iVar15 = iVar23 + -1;
      }
      if (uVar13 != 0) {
        puVar22 = &uStack_28;
        for (uVar16 = uVar13 >> 1; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar22 = 0;
          puVar22 = puVar22 + 1;
        }
        for (uVar16 = (uint)((uVar13 & 1) != 0); uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined2 *)puVar22 = 0;
          puVar22 = (undefined4 *)((int)puVar22 + 2);
        }
      }
      if ((uVar13 == 6) && (iVar15 - iVar20 == 0x31)) {
        uVar16 = (uint)*(ushort *)(iVar7 + iVar20 * 2);
        uVar27 = (uint)*(ushort *)(iVar7 + 2 + iVar20 * 2);
        iVar23 = uVar16 * 0x10 + iVar9;
        iVar28 = uVar27 * 0x10 + iVar9;
        uVar29 = (uint)*(ushort *)(iVar7 + 4 + iVar20 * 2);
        iVar30 = uVar29 * 0x10 + iVar9;
        uVar31 = (uint)*(ushort *)(iVar7 + 6 + iVar20 * 2);
        iVar32 = uVar31 * 0x10 + iVar9;
        uVar33 = (uint)*(ushort *)(iVar7 + 8 + iVar20 * 2);
        iVar34 = uVar33 * 0x10 + iVar9;
        uVar35 = (uint)*(ushort *)(iVar7 + 10 + iVar20 * 2);
        iVar36 = uVar35 * 0x10 + iVar9;
        uVar37 = (uint)*(ushort *)(iVar7 + 0xc + iVar20 * 2);
        iVar38 = uVar37 * 0x10 + iVar9;
        uVar39 = (uint)*(ushort *)(iVar7 + 0xe + iVar20 * 2);
        iVar40 = uVar39 * 0x10 + iVar9;
        uVar41 = (uint)*(ushort *)(iVar7 + 0x10 + iVar20 * 2);
        iVar42 = uVar41 * 0x10 + iVar9;
        uVar43 = (uint)*(ushort *)(iVar7 + 0x12 + iVar20 * 2);
        iVar44 = uVar43 * 0x10 + iVar9;
        uVar45 = (uint)*(ushort *)(iVar7 + 0x14 + iVar20 * 2);
        iVar46 = uVar45 * 0x10 + iVar9;
        uVar47 = (uint)*(ushort *)(iVar7 + 0x16 + iVar20 * 2);
        iVar48 = uVar47 * 0x10 + iVar9;
        uVar49 = (uint)*(ushort *)(iVar7 + 0x18 + iVar20 * 2);
        iVar50 = uVar49 * 0x10 + iVar9;
        uVar51 = (uint)*(ushort *)(iVar7 + 0x1a + iVar20 * 2);
        iVar52 = uVar51 * 0x10 + iVar9;
        uVar53 = (uint)*(ushort *)(iVar7 + 0x1c + iVar20 * 2);
        iVar54 = uVar53 * 0x10 + iVar9;
        uVar55 = (uint)*(ushort *)(iVar7 + 0x1e + iVar20 * 2);
        iVar56 = uVar55 * 0x10 + iVar9;
        uVar57 = (uint)*(ushort *)(iVar7 + 0x20 + iVar20 * 2);
        iVar58 = uVar57 * 0x10 + iVar9;
        uVar59 = (uint)*(ushort *)(iVar7 + 0x22 + iVar20 * 2);
        iVar60 = uVar59 * 0x10 + iVar9;
        uVar61 = (uint)*(ushort *)(iVar7 + 0x24 + iVar20 * 2);
        iVar62 = uVar61 * 0x10 + iVar9;
        uVar63 = (uint)*(ushort *)(iVar7 + 0x26 + iVar20 * 2);
        iVar64 = uVar63 * 0x10 + iVar9;
        uVar65 = (uint)*(ushort *)(iVar7 + 0x28 + iVar20 * 2);
        iVar66 = uVar65 * 0x10 + iVar9;
        uVar67 = (uint)*(ushort *)(iVar7 + 0x2a + iVar20 * 2);
        iVar68 = uVar67 * 0x10 + iVar9;
        uVar69 = (uint)*(ushort *)(iVar7 + 0x2c + iVar20 * 2);
        iVar70 = uVar69 * 0x10 + iVar9;
        uVar71 = (uint)*(ushort *)(iVar7 + 0x2e + iVar20 * 2);
        iVar72 = uVar71 * 0x10 + iVar9;
        uVar73 = (uint)*(ushort *)(iVar7 + 0x30 + iVar20 * 2);
        iVar74 = uVar73 * 0x10 + iVar9;
        uVar75 = (uint)*(ushort *)(iVar7 + 0x32 + iVar20 * 2);
        iVar76 = uVar75 * 0x10 + iVar9;
        uVar77 = (uint)*(ushort *)(iVar7 + 0x34 + iVar20 * 2);
        iVar78 = uVar77 * 0x10 + iVar9;
        uVar79 = (uint)*(ushort *)(iVar7 + 0x36 + iVar20 * 2);
        iVar80 = uVar79 * 0x10 + iVar9;
        uVar81 = (uint)*(ushort *)(iVar7 + 0x38 + iVar20 * 2);
        iVar82 = uVar81 * 0x10 + iVar9;
        uVar83 = (uint)*(ushort *)(iVar7 + 0x3a + iVar20 * 2);
        iVar84 = uVar83 * 0x10 + iVar9;
        uVar85 = (uint)*(ushort *)(iVar7 + 0x3c + iVar20 * 2);
        iVar86 = uVar85 * 0x10 + iVar9;
        uVar87 = (uint)*(ushort *)(iVar7 + 0x3e + iVar20 * 2);
        iVar88 = uVar87 * 0x10 + iVar9;
        uVar89 = (uint)*(ushort *)(iVar7 + 0x40 + iVar20 * 2);
        iVar90 = uVar89 * 0x10 + iVar9;
        uVar91 = (uint)*(ushort *)(iVar7 + 0x42 + iVar20 * 2);
        iVar92 = uVar91 * 0x10 + iVar9;
        uVar93 = (uint)*(ushort *)(iVar7 + 0x44 + iVar20 * 2);
        iVar94 = uVar93 * 0x10 + iVar9;
        uVar95 = (uint)*(ushort *)(iVar7 + 0x46 + iVar20 * 2);
        iVar96 = uVar95 * 0x10 + iVar9;
        uVar97 = (uint)*(ushort *)(iVar7 + 0x48 + iVar20 * 2);
        iVar98 = uVar97 * 0x10 + iVar9;
        uVar99 = (uint)*(ushort *)(iVar7 + 0x4a + iVar20 * 2);
        iVar100 = uVar99 * 0x10 + iVar9;
        uVar101 = (uint)*(ushort *)(iVar7 + 0x4c + iVar20 * 2);
        iVar102 = uVar101 * 0x10 + iVar9;
        uVar103 = (uint)*(ushort *)(iVar7 + 0x4e + iVar20 * 2);
        iVar104 = uVar103 * 0x10 + iVar9;
        uVar105 = (uint)*(ushort *)(iVar7 + 0x50 + iVar20 * 2);
        iVar106 = uVar105 * 0x10 + iVar9;
        uVar107 = (uint)*(ushort *)(iVar7 + 0x52 + iVar20 * 2);
        iVar108 = uVar107 * 0x10 + iVar9;
        uVar109 = (uint)*(ushort *)(iVar7 + 0x54 + iVar20 * 2);
        iVar110 = uVar109 * 0x10 + iVar9;
        uVar111 = (uint)*(ushort *)(iVar7 + 0x56 + iVar20 * 2);
        iVar112 = uVar111 * 0x10 + iVar9;
        uVar113 = (uint)*(ushort *)(iVar7 + 0x58 + iVar20 * 2);
        iVar114 = uVar113 * 0x10 + iVar9;
        uVar115 = (uint)*(ushort *)(iVar7 + 0x5a + iVar20 * 2);
        iVar116 = uVar115 * 0x10 + iVar9;
        uVar117 = (uint)*(ushort *)(iVar7 + 0x5c + iVar20 * 2);
        iVar118 = uVar117 * 0x10 + iVar9;
        uVar119 = (uint)*(ushort *)(iVar7 + 0x5e + iVar20 * 2);
        iVar120 = uVar119 * 0x10 + iVar9;
        uVar121 = (uint)*(ushort *)(iVar7 + 0x60 + iVar20 * 2);
        iVar122 = uVar121 * 0x10 + iVar9;
        uVar123 = (uint)*(ushort *)(iVar7 + iVar19 * 2);
        iVar124 = uVar123 * 0x10 + iVar9;
        uStack_24 = *(int *)(iVar23 + 0xc994) + *(int *)(iVar28 + 0xc994) +
                    *(int *)(iVar30 + 0xc994) + *(int *)(iVar32 + 0xc994) +
                    *(int *)(iVar34 + 0xc994) + *(int *)(iVar36 + 0xc994) +
                    *(int *)(iVar38 + 0xc994) + *(int *)(iVar40 + 0xc994) +
                    *(int *)(iVar42 + 0xc994) + *(int *)(iVar44 + 0xc994) +
                    *(int *)(iVar46 + 0xc994) + *(int *)(iVar48 + 0xc994) +
                    *(int *)(iVar50 + 0xc994) + *(int *)(iVar52 + 0xc994) +
                    *(int *)(iVar54 + 0xc994) + *(int *)(iVar56 + 0xc994) +
                    *(int *)(iVar58 + 0xc994) + *(int *)(iVar60 + 0xc994) +
                    *(int *)(iVar62 + 0xc994) + *(int *)(iVar64 + 0xc994) +
                    *(int *)(iVar66 + 0xc994) + *(int *)(iVar68 + 0xc994) +
                    *(int *)(iVar70 + 0xc994) + *(int *)(iVar72 + 0xc994) +
                    *(int *)(iVar74 + 0xc994) + *(int *)(iVar76 + 0xc994) +
                    *(int *)(iVar78 + 0xc994) + *(int *)(iVar80 + 0xc994) +
                    *(int *)(iVar82 + 0xc994) + *(int *)(iVar84 + 0xc994) +
                    *(int *)(iVar86 + 0xc994) + *(int *)(iVar88 + 0xc994) +
                    *(int *)(iVar90 + 0xc994) + *(int *)(iVar92 + 0xc994) +
                    *(int *)(iVar94 + 0xc994) + *(int *)(iVar96 + 0xc994) +
                    *(int *)(iVar98 + 0xc994) + *(int *)(iVar100 + 0xc994) +
                    *(int *)(iVar102 + 0xc994) + *(int *)(iVar104 + 0xc994) +
                    *(int *)(iVar106 + 0xc994) + *(int *)(iVar108 + 0xc994) +
                    *(int *)(iVar110 + 0xc994) + *(int *)(iVar112 + 0xc994) +
                    *(int *)(iVar114 + 0xc994) + *(int *)(iVar116 + 0xc994) +
                    *(int *)(iVar118 + 0xc994) + *(int *)(iVar120 + 0xc994) +
                    *(int *)(iVar122 + 0xc994) + *(int *)(iVar124 + 0xc994);
        uStack_20 = *(int *)(iVar23 + 0xc998) + *(int *)(iVar28 + 0xc998) +
                    *(int *)(iVar30 + 0xc998) + *(int *)(iVar32 + 0xc998) +
                    *(int *)(iVar34 + 0xc998) + *(int *)(iVar36 + 0xc998) +
                    *(int *)(iVar38 + 0xc998) + *(int *)(iVar40 + 0xc998) +
                    *(int *)(iVar42 + 0xc998) + *(int *)(iVar44 + 0xc998) +
                    *(int *)(iVar46 + 0xc998) + *(int *)(iVar48 + 0xc998) +
                    *(int *)(iVar50 + 0xc998) + *(int *)(iVar52 + 0xc998) +
                    *(int *)(iVar54 + 0xc998) + *(int *)(iVar56 + 0xc998) +
                    *(int *)(iVar58 + 0xc998) + *(int *)(iVar60 + 0xc998) +
                    *(int *)(iVar62 + 0xc998) + *(int *)(iVar64 + 0xc998) +
                    *(int *)(iVar66 + 0xc998) + *(int *)(iVar68 + 0xc998) +
                    *(int *)(iVar70 + 0xc998) + *(int *)(iVar72 + 0xc998) +
                    *(int *)(iVar74 + 0xc998) + *(int *)(iVar76 + 0xc998) +
                    *(int *)(iVar78 + 0xc998) + *(int *)(iVar80 + 0xc998) +
                    *(int *)(iVar82 + 0xc998) + *(int *)(iVar84 + 0xc998) +
                    *(int *)(iVar86 + 0xc998) + *(int *)(iVar88 + 0xc998) +
                    *(int *)(iVar90 + 0xc998) + *(int *)(iVar92 + 0xc998) +
                    *(int *)(iVar94 + 0xc998) + *(int *)(iVar96 + 0xc998) +
                    *(int *)(iVar98 + 0xc998) + *(int *)(iVar100 + 0xc998) +
                    *(int *)(iVar102 + 0xc998) + *(int *)(iVar104 + 0xc998) +
                    *(int *)(iVar106 + 0xc998) + *(int *)(iVar108 + 0xc998) +
                    *(int *)(iVar110 + 0xc998) + *(int *)(iVar112 + 0xc998) +
                    *(int *)(iVar114 + 0xc998) + *(int *)(iVar116 + 0xc998) +
                    *(int *)(iVar118 + 0xc998) + *(int *)(iVar120 + 0xc998) +
                    *(int *)(iVar122 + 0xc998) + *(int *)(iVar124 + 0xc998);
        uStack_28 = *(int *)((uVar16 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar27 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar29 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar31 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar33 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar35 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar37 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar39 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar41 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar43 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar45 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar47 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar49 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar51 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar53 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar55 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar57 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar59 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar61 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar63 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar65 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar67 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar69 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar71 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar73 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar75 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar77 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar79 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar81 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar83 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar85 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar87 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar89 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar91 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar93 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar95 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar97 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar99 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar101 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar103 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar105 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar107 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar109 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar111 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar113 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar115 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar117 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar119 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar121 + 0xc99) * 0x10 + iVar9) +
                    *(int *)((uVar123 + 0xc99) * 0x10 + iVar9);
      }
      else if (iVar20 <= iVar15) {
        param_1 = (ushort *)(iVar7 + iVar20 * 2);
        iVar23 = (iVar15 - iVar20) + 1;
        do {
          if (uVar13 != 0) {
            psVar12 = (short *)&uStack_28;
            pbVar11 = (byte *)(*param_1 + 0x9324 + iVar9);
            uVar16 = uVar13;
            do {
              *psVar12 = *psVar12 + (ushort)*pbVar11;
              pbVar11 = pbVar11 + 0x102;
              psVar12 = psVar12 + 1;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          param_1 = param_1 + 1;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
      }
      iVar23 = -1;
      iVar28 = 0;
      uStack_30 = 999999999;
      if (uVar13 != 0) {
        param_1 = (ushort *)&uStack_28;
        do {
          if (*param_1 < uStack_30) {
            iVar23 = iVar28;
            uStack_30 = (uint)*param_1;
          }
          iVar28 = iVar28 + 1;
          param_1 = param_1 + 1;
        } while (iVar28 < (int)uVar13);
      }
      uStack_38 = uStack_38 + uStack_30;
      aiStack_18[iVar23] = aiStack_18[iVar23] + 1;
      *(char *)(iStack_3c + 0x680 + iVar9) = (char)iVar23;
      iStack_3c = iStack_3c + 1;
      if ((uVar13 == 6) && (iVar15 - iVar20 == 0x31)) {
        iVar23 = (iVar23 + 0x2c) * 0x102;
        iVar28 = (uint)*(ushort *)(iVar7 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 2 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 4 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 6 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 8 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 10 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0xc + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0xe + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x10 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x12 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x14 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x16 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x18 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x1a + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x1c + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x1e + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x20 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x22 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x24 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x26 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x28 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x2a + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x2c + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x2e + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x30 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x32 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x34 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x36 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x38 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x3a + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x3c + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x3e + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x40 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x42 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x44 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x46 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x48 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x4a + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x4c + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x4e + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x50 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x52 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x54 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x56 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x58 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        piVar24 = (int *)(iVar9 + ((uint)*(ushort *)(iVar7 + 0x5a + iVar20 * 2) + iVar23) * 4);
        *piVar24 = *piVar24 + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x5c + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar28 = (uint)*(ushort *)(iVar7 + 0x5e + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar28 * 4) = *(int *)(iVar9 + iVar28 * 4) + 1;
        iVar20 = (uint)*(ushort *)(iVar7 + 0x60 + iVar20 * 2) + iVar23;
        *(int *)(iVar9 + iVar20 * 4) = *(int *)(iVar9 + iVar20 * 4) + 1;
        iVar23 = (uint)*(ushort *)(iVar7 + iVar19 * 2) + iVar23;
        *(int *)(iVar9 + iVar23 * 4) = *(int *)(iVar9 + iVar23 * 4) + 1;
        iVar20 = iVar15 + 1;
      }
      else {
        if (iVar20 <= iVar15) {
          puVar17 = (ushort *)(iVar7 + iVar20 * 2);
          iVar20 = (iVar15 - iVar20) + 1;
          do {
            uVar6 = *puVar17;
            puVar17 = puVar17 + 1;
            iVar19 = (uint)uVar6 + (iVar23 + 0x2c) * 0x102;
            iVar20 = iVar20 + -1;
            *(int *)(iVar9 + iVar19 * 4) = *(int *)(iVar9 + iVar19 * 4) + 1;
          } while (iVar20 != 0);
        }
        iVar20 = iVar15 + 1;
      }
    }
    if (2 < *(int *)(iVar9 + 0x268)) {
      FUN_007a6628(&DAT_0087cb88,s_pass__d__size_is__d__grp_uses_ar_00839658,local_2c + 1,
                   (int)(uStack_38 + ((int)uStack_38 >> 0x1f & 7U)) >> 3);
      for (uVar16 = uVar13; uVar16 != 0; uVar16 = uVar16 - 1) {
        FUN_007a6628(&DAT_0087cb88,&DAT_00839654);
      }
      FUN_007a6628();
    }
    if (uVar13 != 0) {
      iVar20 = iVar9 + 0x9324;
      iVar23 = iVar9 + 0xb160;
      param_1 = (ushort *)uVar13;
      do {
        FUN_004249a0(iVar20,iVar23);
        iVar23 = iVar23 + 0x408;
        iVar20 = iVar20 + 0x102;
        param_1 = (ushort *)((int)param_1 - 1);
      } while (param_1 != (ushort *)0x0);
    }
    local_2c = local_2c + 1;
  } while ((int)local_2c < 4);
  if (7 < uVar13) {
    FUN_0041b650();
  }
  if ((0x7fff < iStack_3c) || (0x4652 < iStack_3c)) {
    FUN_0041b650();
  }
  iVar20 = 0;
  if (uVar13 != 0) {
    do {
      *(char *)((int)&uStack_28 + iVar20) = (char)iVar20;
      iVar20 = iVar20 + 1;
    } while (iVar20 < (int)uVar13);
  }
  iVar20 = 0;
  if (0 < iStack_3c) {
    cVar10 = (char)uStack_28;
    do {
      cVar3 = *(char *)(iVar9 + 0x680 + iVar20);
      iVar23 = 0;
      while (cVar3 != cVar10) {
        cVar4 = *(char *)((int)&uStack_28 + iVar23 + 1);
        *(char *)((int)&uStack_28 + iVar23 + 1) = cVar10;
        iVar23 = iVar23 + 1;
        cVar10 = cVar4;
      }
      *(char *)(iVar20 + 0x4cd2 + iVar9) = (char)iVar23;
      iVar20 = iVar20 + 1;
      uStack_28 = CONCAT31(uStack_28._1_3_,cVar10);
    } while (iVar20 < iStack_3c);
  }
  if (uVar13 != 0) {
    local_2c = iVar9 + 0x9930;
    param_1 = (ushort *)(iVar9 + 0x9324);
    uStack_30 = uVar13;
    do {
      bVar21 = 0;
      iVar20 = 0;
      bVar18 = 0x20;
      if (0 < (int)uVar14) {
        do {
          bVar5 = *(byte *)((int)param_1 + iVar20);
          if (bVar21 < bVar5) {
            bVar21 = bVar5;
          }
          if (bVar5 < bVar18) {
            bVar18 = bVar5;
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < (int)uVar14);
        if (0x14 < bVar21) {
          FUN_0041b650();
        }
        if (bVar18 == 0) {
          FUN_0041b650();
        }
      }
      FUN_00424cb0(local_2c,param_1,bVar18,bVar21,uVar14);
      param_1 = (ushort *)((int)param_1 + 0x102);
      local_2c = local_2c + 0x408;
      uStack_30 = uStack_30 - 1;
    } while (uStack_30 != 0);
  }
  iVar23 = 0;
  iVar20 = iVar9 + 0x58;
  do {
    *(undefined1 *)((int)&uStack_28 + iVar23) = 0;
    iVar19 = 0;
    do {
      if (*(char *)(iVar19 + iVar20) != '\0') {
        *(undefined1 *)((int)&uStack_28 + iVar23) = 1;
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < 0x10);
    iVar23 = iVar23 + 1;
    iVar20 = iVar20 + 0x10;
  } while (iVar23 < 0x10);
  iVar20 = *(int *)(iVar9 + 0x4c);
  iVar23 = 0;
  do {
    iVar19 = *(int *)(iVar9 + 0x25c);
    if (*(char *)((int)&uStack_28 + iVar23) == '\0') {
      while (7 < iVar19) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar19 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar19;
      }
      iVar19 = *(int *)(iVar9 + 0x25c);
      cVar10 = (char)iVar19;
      iVar15 = 0;
    }
    else {
      while (7 < iVar19) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar19 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar19;
      }
      iVar19 = *(int *)(iVar9 + 0x25c);
      cVar10 = (char)iVar19;
      iVar15 = 1;
    }
    iVar19 = iVar19 + 1;
    iVar23 = iVar23 + 1;
    *(uint *)(iVar9 + 600) = *(uint *)(iVar9 + 600) | iVar15 << (0x1fU - cVar10 & 0x1f);
    *(int *)(iVar9 + 0x25c) = iVar19;
  } while (iVar23 < 0x10);
  param_1 = (ushort *)(iVar9 + 0x58);
  local_2c = 0;
  do {
    if (*(char *)((int)&uStack_28 + local_2c) != '\0') {
      iStack_40 = 0;
      do {
        if (*(char *)(iStack_40 + (int)param_1) == '\0') {
          while (7 < iVar19) {
            *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
                 (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
            iVar19 = *(int *)(iVar9 + 0x25c) + -8;
            *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
            *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
            *(int *)(iVar9 + 0x25c) = iVar19;
          }
          iVar19 = *(int *)(iVar9 + 0x25c);
          cVar10 = (char)iVar19;
          iVar23 = 0;
        }
        else {
          while (7 < iVar19) {
            *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
                 (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
            iVar19 = *(int *)(iVar9 + 0x25c) + -8;
            *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
            *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
            *(int *)(iVar9 + 0x25c) = iVar19;
          }
          iVar19 = *(int *)(iVar9 + 0x25c);
          cVar10 = (char)iVar19;
          iVar23 = 1;
        }
        iVar19 = iVar19 + 1;
        *(uint *)(iVar9 + 600) = *(uint *)(iVar9 + 600) | iVar23 << (0x1fU - cVar10 & 0x1f);
        iStack_40 = iStack_40 + 1;
        *(int *)(iVar9 + 0x25c) = iVar19;
      } while (iStack_40 < 0x10);
    }
    local_2c = local_2c + 1;
    param_1 = (ushort *)((int)param_1 + 0x10);
  } while ((int)local_2c < 0x10);
  if (2 < *(int *)(iVar9 + 0x268)) {
    FUN_007a6628(&DAT_0087cb88,s_bytes__mapping__d__00839634,*(int *)(iVar9 + 0x4c) - iVar20);
  }
  iVar20 = *(int *)(iVar9 + 0x25c);
  iVar23 = *(int *)(iVar9 + 0x4c);
  while (7 < iVar20) {
    *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
         (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
    iVar20 = *(int *)(iVar9 + 0x25c) + -8;
    *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
    *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
    *(int *)(iVar9 + 0x25c) = iVar20;
  }
  iVar20 = *(int *)(iVar9 + 0x25c);
  iVar19 = iVar20 + 3;
  *(int *)(iVar9 + 0x25c) = iVar19;
  *(uint *)(iVar9 + 600) = *(uint *)(iVar9 + 600) | uVar13 << (0x1dU - (char)iVar20 & 0x1f);
  while (7 < iVar19) {
    *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
         (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
    iVar19 = *(int *)(iVar9 + 0x25c) + -8;
    *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
    *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
    *(int *)(iVar9 + 0x25c) = iVar19;
  }
  iVar20 = *(int *)(iVar9 + 0x25c);
  *(int *)(iVar9 + 0x25c) = iVar20 + 0xf;
  *(uint *)(iVar9 + 600) = *(uint *)(iVar9 + 600) | iStack_3c << (0x11U - (char)iVar20 & 0x1f);
  if (0 < iStack_3c) {
    pbVar11 = (byte *)(iVar9 + 0x4cd2);
    do {
      iVar20 = 0;
      if (*pbVar11 != 0) {
        do {
          iVar19 = *(int *)(iVar9 + 0x25c);
          while (7 < iVar19) {
            *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
                 (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
            iVar19 = *(int *)(iVar9 + 0x25c) + -8;
            *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
            *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
            *(int *)(iVar9 + 0x25c) = iVar19;
          }
          iVar19 = *(int *)(iVar9 + 0x25c);
          *(int *)(iVar9 + 0x25c) = iVar19 + 1;
          *(uint *)(iVar9 + 600) = *(uint *)(iVar9 + 600) | 1 << (0x1fU - (char)iVar19 & 0x1f);
          iVar20 = iVar20 + 1;
        } while (iVar20 < (int)(uint)*pbVar11);
      }
      iVar20 = *(int *)(iVar9 + 0x25c);
      while (7 < iVar20) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar20 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar20;
      }
      pbVar11 = pbVar11 + 1;
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) | 0 << (0x1fU - (char)*(int *)(iVar9 + 0x25c) & 0x1f);
      *(int *)(iVar9 + 0x25c) = *(int *)(iVar9 + 0x25c) + 1;
    } while ((int)(pbVar11 + (-0x4cd2 - iVar9)) < iStack_3c);
  }
  if (2 < *(int *)(iVar9 + 0x268)) {
    FUN_007a6628(&DAT_0087cb88,s_selectors__d__00839624,*(int *)(iVar9 + 0x4c) - iVar23);
  }
  iVar20 = *(int *)(iVar9 + 0x4c);
  if (uVar13 != 0) {
    pbVar11 = (byte *)(iVar9 + 0x9324);
    local_2c = uVar13;
    do {
      iVar23 = *(int *)(iVar9 + 0x25c);
      uVar16 = (uint)*pbVar11;
      while (7 < iVar23) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar23 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar23;
      }
      iVar23 = *(int *)(iVar9 + 0x25c);
      *(int *)(iVar9 + 0x25c) = iVar23 + 5;
      iVar19 = 0;
      *(uint *)(iVar9 + 600) = *(uint *)(iVar9 + 600) | uVar16 << (0x1bU - (char)iVar23 & 0x1f);
      if (0 < (int)uVar14) {
        do {
          if ((int)uVar16 < (int)(uint)pbVar11[iVar19]) {
            do {
              iVar23 = *(int *)(iVar9 + 0x25c);
              while (7 < iVar23) {
                *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
                     (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
                iVar23 = *(int *)(iVar9 + 0x25c) + -8;
                *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
                *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
                *(int *)(iVar9 + 0x25c) = iVar23;
              }
              iVar23 = *(int *)(iVar9 + 0x25c);
              *(int *)(iVar9 + 0x25c) = iVar23 + 2;
              *(uint *)(iVar9 + 600) = *(uint *)(iVar9 + 600) | 2 << (0x1eU - (char)iVar23 & 0x1f);
              uVar16 = uVar16 + 1;
            } while ((int)uVar16 < (int)(uint)pbVar11[iVar19]);
          }
          if ((int)(uint)pbVar11[iVar19] < (int)uVar16) {
            do {
              iVar23 = *(int *)(iVar9 + 0x25c);
              while (7 < iVar23) {
                *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
                     (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
                iVar23 = *(int *)(iVar9 + 0x25c) + -8;
                *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
                *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
                *(int *)(iVar9 + 0x25c) = iVar23;
              }
              iVar23 = *(int *)(iVar9 + 0x25c);
              *(int *)(iVar9 + 0x25c) = iVar23 + 2;
              *(uint *)(iVar9 + 600) = *(uint *)(iVar9 + 600) | 3 << (0x1eU - (char)iVar23 & 0x1f);
              uVar16 = uVar16 - 1;
            } while ((int)(uint)pbVar11[iVar19] < (int)uVar16);
          }
          iVar23 = *(int *)(iVar9 + 0x25c);
          while (7 < iVar23) {
            *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
                 (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
            iVar23 = *(int *)(iVar9 + 0x25c) + -8;
            *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
            *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
            *(int *)(iVar9 + 0x25c) = iVar23;
          }
          uVar8 = *(undefined4 *)(iVar9 + 0x25c);
          iVar19 = iVar19 + 1;
          *(int *)(iVar9 + 0x25c) = *(int *)(iVar9 + 0x25c) + 1;
          *(uint *)(iVar9 + 600) = *(uint *)(iVar9 + 600) | 0 << (0x1fU - (char)uVar8 & 0x1f);
        } while (iVar19 < (int)uVar14);
      }
      pbVar11 = pbVar11 + 0x102;
      local_2c = local_2c - 1;
    } while (local_2c != 0);
  }
  if (2 < *(int *)(iVar9 + 0x268)) {
    FUN_007a6628(&DAT_0087cb88,s_code_lengths__d__00839610,*(int *)(iVar9 + 0x4c) - iVar20);
  }
  iVar20 = *(int *)(iVar9 + 0x4c);
  local_44 = 0;
  param_1 = (ushort *)0x0;
  while (iVar23 = *(int *)(iVar9 + 0x274), (int)param_1 < iVar23) {
    iVar19 = (int)param_1 + 0x31;
    iVar15 = iVar19;
    if (iVar23 <= iVar19) {
      iVar15 = iVar23 + -1;
    }
    if (uVar13 <= *(byte *)(local_44 + 0x680 + iVar9)) {
      FUN_0041b650();
    }
    if ((uVar13 == 6) && (iVar15 - (int)param_1 == 0x31)) {
      uVar14 = (uint)*(byte *)(local_44 + 0x680 + iVar9);
      iVar23 = iVar9 + (uVar14 + 0x92) * 0x102;
      uVar16 = (uint)*(ushort *)(iVar7 + (int)param_1 * 2);
      iVar28 = iVar9 + (uVar14 + 0x26) * 0x408;
      iVar30 = *(int *)(iVar28 + uVar16 * 4);
      bVar21 = *(byte *)(iVar23 + uVar16);
      iVar32 = *(int *)(iVar9 + 0x25c);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 2 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 4 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 6 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 8 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 10 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0xc + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0xe + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x10 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x12 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x14 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x16 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x18 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x1a + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x1c + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x1e + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x20 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x22 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x24 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x26 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x28 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x2a + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x2c + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x2e + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x30 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x32 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x34 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x36 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x38 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x3a + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x3c + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x3e + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x40 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x42 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x44 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x46 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x48 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x4a + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x4c + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x4e + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x50 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x52 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x54 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x56 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x58 + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x5a + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x5c + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar32 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar32;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x5e + (int)param_1 * 2);
      iVar30 = *(int *)(iVar28 + uVar14 * 4);
      bVar21 = *(byte *)(iVar23 + uVar14);
      while (7 < iVar32) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar32 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar32;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar30 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar30 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar30;
      uVar14 = (uint)*(ushort *)(iVar7 + 0x60 + (int)param_1 * 2);
      bVar21 = *(byte *)(iVar23 + uVar14);
      uStack_28 = *(int *)(iVar28 + uVar14 * 4);
      while (7 < iVar30) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar30 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar30;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           uStack_28 << ((' ' - (char)*(undefined4 *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      iVar30 = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
      *(int *)(iVar9 + 0x25c) = iVar30;
      uVar14 = (uint)*(ushort *)(iVar7 + iVar19 * 2);
      bVar21 = *(byte *)(iVar23 + uVar14);
      iVar23 = *(int *)(iVar28 + uVar14 * 4);
      while (7 < iVar30) {
        *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
             (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
        iVar30 = *(int *)(iVar9 + 0x25c) + -8;
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
        *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
        *(int *)(iVar9 + 0x25c) = iVar30;
      }
      *(uint *)(iVar9 + 600) =
           *(uint *)(iVar9 + 600) |
           iVar23 << ((' ' - (char)*(int *)(iVar9 + 0x25c)) - bVar21 & 0x1f);
      *(uint *)(iVar9 + 0x25c) = *(int *)(iVar9 + 0x25c) + (uint)bVar21;
    }
    else if ((int)param_1 <= iVar15) {
      iVar23 = (iVar15 - (int)param_1) + 1;
      param_1 = (ushort *)(iVar7 + (int)param_1 * 2);
      do {
        uVar14 = (uint)*(byte *)(local_44 + 0x680 + iVar9);
        iVar19 = *(int *)(iVar9 + ((uint)*param_1 + (uVar14 + 0x26) * 0x102) * 4);
        bVar21 = *(byte *)((uint)*param_1 + (uVar14 + 0x92) * 0x102 + iVar9);
        iVar28 = *(int *)(iVar9 + 0x25c);
        while (7 < iVar28) {
          *(char *)(*(int *)(iVar9 + 0x2c) + *(int *)(iVar9 + 0x4c)) =
               (char)((uint)*(undefined4 *)(iVar9 + 600) >> 0x18);
          iVar28 = *(int *)(iVar9 + 0x25c) + -8;
          *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 1;
          *(int *)(iVar9 + 600) = *(int *)(iVar9 + 600) << 8;
          *(int *)(iVar9 + 0x25c) = iVar28;
        }
        iVar28 = *(int *)(iVar9 + 0x25c);
        *(uint *)(iVar9 + 0x25c) = iVar28 + (uint)bVar21;
        *(uint *)(iVar9 + 600) =
             *(uint *)(iVar9 + 600) | iVar19 << ((' ' - (char)iVar28) - bVar21 & 0x1f);
        param_1 = param_1 + 1;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
    }
    local_44 = local_44 + 1;
    param_1 = (ushort *)(iVar15 + 1);
  }
  if (local_44 != iStack_3c) {
    FUN_0041b650();
  }
  if (2 < *(int *)(iVar9 + 0x268)) {
    FUN_007a6628(&DAT_0087cb88,s_codes__d_00839604,*(int *)(iVar9 + 0x4c) - iVar20);
  }
  return;
}


