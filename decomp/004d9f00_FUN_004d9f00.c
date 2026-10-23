// FUN_004d9f00 @ 4d9f00 size=4096

/* WARNING: Type propagation algorithm not settling */

uint FUN_004d9f00(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int local_3c;
  int local_38;
  int local_34;
  int local_24;
  int local_20;
  
  local_3c = param_2 * 0x22;
  iVar19 = 1 << ((byte)param_3 & 0x1f);
  pbVar2 = (byte *)(local_3c + param_1 + param_4);
  bVar3 = *pbVar2;
  uVar11 = (uint)*(byte *)(local_3c + iVar19 + param_1 + param_4);
  iVar8 = (iVar19 + param_2) * 0x22;
  bVar4 = *(byte *)(iVar8 + param_1 + param_4);
  bVar5 = *(byte *)(iVar8 + iVar19 + param_1 + param_4);
  local_34 = uVar11 << 0x18;
  iVar14 = (uint)bVar3 << 0x18;
  FUN_00402500(0,s_pw____d_008478e8,param_3);
  local_38 = param_2 * 0x20;
  iVar8 = param_1 + local_38;
  iVar10 = *(int *)(&DAT_00a9cc14 + iVar8 * 4);
  if ((iVar10 < 0) || (DAT_00877690 + 3 < iVar10)) {
    FUN_007a6966(s_Illegal_ID__008478d0);
  }
  if (iVar19 != 0) {
    local_3c = local_3c + param_4;
    local_20 = iVar19;
    do {
      if (iVar19 != 0) {
        iVar17 = iVar14 + 0x800000;
        local_24 = -iVar19;
        iVar18 = param_1;
        do {
          uVar9 = (uint)*(byte *)(local_3c + iVar18) - (iVar17 >> 0x18);
          uVar12 = (int)uVar9 >> 0x1f;
          if (((*(int *)(&DAT_00a9dc98 + param_3 * 4) <= (int)((uVar9 ^ uVar12) - uVar12)) ||
              (*(int *)(&DAT_00a9cc14 + (local_38 + iVar18) * 4) != iVar10)) ||
             ((&DAT_00a9bc5b)[iVar18 + local_38] != '\0')) {
            FUN_00402500(0,s_pw____d_008478e8,param_3);
            iVar10 = param_2 + -1;
            (&DAT_00a9ac7c)[DAT_00a9cc88] = 1;
            DAT_00a9cc88 = DAT_00a9cc88 + 1;
            if (param_3 != 1) {
              param_3 = param_3 + -1;
              iVar8 = param_2 + (iVar19 >> 1);
              iVar10 = (iVar19 >> 1) + param_1;
              FUN_004d9f00(iVar10,iVar8,param_3,param_4,param_5);
              FUN_004d9f00(param_1,iVar8,param_3,param_4,param_5);
              FUN_004d9f00(iVar10,param_2,param_3,param_4,param_5);
              uVar11 = FUN_004d9f00(param_1,param_2,param_3,param_4,param_5);
              return uVar11 & 0xffffff00;
            }
            iVar14 = *(int *)(&DAT_00a9cc98 + iVar8 * 4);
            iVar17 = iVar10 * 0x20;
            bVar3 = (&DAT_00a9bc9c)[param_1 + iVar17];
            iVar19 = iVar14;
            if ((bVar3 == 0) ||
               (((iVar18 = *(int *)(DAT_00ab27b4 + 0x254 + iVar14 * 0x4b2), iVar18 == 8 ||
                 (iVar18 == 9)) && (iVar18 != 9)))) {
              iVar10 = *(int *)(DAT_00a9cc84 + iVar14 * 4);
              if (iVar10 != -1) goto LAB_004da505;
              if ((DAT_00a9cc80 < 0) || (iVar18 = DAT_00a9cc84, DAT_00877690 + 3 < DAT_00a9cc80))
              goto LAB_004da4ea;
              goto LAB_004da4fc;
            }
            iVar16 = -1;
            if (iVar18 == 9) {
              iVar19 = FUN_004ef010((DAT_00a9cc90 + param_1) * DAT_00a9dcb6,
                                    (DAT_00a9cc94 + 1 + iVar10) * DAT_00a9dcb6,iVar14,DAT_00ab27b4);
              iVar16 = iVar14;
            }
            iVar10 = FUN_004ef010((DAT_00a9cc90 + param_1) * DAT_00a9dcb6,
                                  (DAT_00a9cc94 + 1 + iVar10) * DAT_00a9dcb6,iVar19,DAT_00ab27b4);
            iVar14 = DAT_00a9cc84;
            if ((((iVar19 == iVar10) || (iVar19 == iVar16)) ||
                (iVar18 = *(int *)(DAT_00ab27b4 + 0x254 + iVar10 * 0x4b2), iVar18 == 8)) ||
               (iVar18 == 9)) {
              iVar10 = *(int *)(DAT_00a9cc84 + iVar19 * 4);
              if (iVar10 != -1) goto LAB_004da505;
              goto joined_r0x004da4b5;
            }
            iVar15 = 0;
            iVar18 = DAT_00ab27b4 + iVar19 * 0x4b2;
            iVar7 = *(int *)(iVar18 + 0x294);
            if (iVar7 < 1) goto LAB_004da365;
            piVar13 = *(int **)(iVar18 + 0x298);
            piVar20 = piVar13;
            goto LAB_004da359;
          }
          iVar17 = iVar17 + (local_34 - iVar14) / iVar19;
          iVar18 = iVar18 + 1;
          local_24 = local_24 + 1;
        } while (local_24 != 0);
      }
      local_3c = local_3c + 0x22;
      local_38 = local_38 + 0x20;
      local_34 = local_34 + (int)((bVar5 - uVar11) * 0x1000000) / iVar19;
      iVar14 = iVar14 + (int)(((uint)bVar4 - (uint)bVar3) * 0x1000000) / iVar19;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  FUN_00402500(0,s_pw____d_008478e8,param_3);
  (&DAT_00a9ac7c)[DAT_00a9cc88] = 0;
  DAT_00a9cc88 = DAT_00a9cc88 + 1;
  iVar8 = *(int *)(&DAT_00a9cc14 + iVar8 * 4);
  if ((iVar8 < 0) || (DAT_00877690 + 2 < iVar8)) {
    FUN_007a6966(s_error_008478e0);
  }
  iVar14 = DAT_00a9cc84;
  iVar10 = *(int *)(DAT_00a9cc84 + iVar8 * 4);
  if (iVar10 == -1) {
    if ((DAT_00a9cc80 < 0) || (DAT_00877690 + 3 < DAT_00a9cc80)) {
      FUN_007a6966(s_Illegal_ID__008478d0);
    }
    iVar10 = DAT_00a9cc80;
    *(int *)(iVar14 + iVar8 * 4) = DAT_00a9cc80;
    DAT_00a9cc80 = DAT_00a9cc80 + 1;
  }
  if ((iVar10 < 0) || (DAT_00877690 + 2 < iVar10)) {
    FUN_007a6966(s_error_008478e0);
  }
  (&DAT_00a98c7c)[DAT_00a9cc8c] = bVar3;
  DAT_00a9cc8c = DAT_00a9cc8c + 1;
  (&DAT_00a99c7c)[DAT_00a9cc7c] = (char)iVar10;
  DAT_00a9cc7c = DAT_00a9cc7c + 1;
  return CONCAT31((int3)((uint)DAT_00a9cc7c >> 8),1);
  while( true ) {
    iVar15 = iVar15 + 1;
    piVar20 = piVar20 + 3;
    if (iVar7 <= iVar15) break;
LAB_004da359:
    if (*piVar20 == iVar10) {
      if (iVar15 != -1) {
        if (iVar16 == -1) goto LAB_004da3fd;
        iVar10 = 0;
        if (iVar7 < 1) goto LAB_004da3b6;
        goto LAB_004da3aa;
      }
      break;
    }
  }
LAB_004da365:
  iVar10 = *(int *)(DAT_00a9cc84 + iVar19 * 4);
  if (iVar10 == -1) {
joined_r0x004da4b5:
    if ((DAT_00a9cc80 < 0) ||
       (iVar14 = iVar19, iVar18 = DAT_00a9cc84, DAT_00877690 + 3 < DAT_00a9cc80)) {
LAB_004da4ea:
      iVar18 = DAT_00a9cc84;
      FUN_007a6966(s_Illegal_ID__008478d0);
      iVar14 = iVar19;
    }
LAB_004da4fc:
    iVar10 = DAT_00a9cc80;
    *(int *)(iVar18 + iVar14 * 4) = DAT_00a9cc80;
    goto LAB_004da4ff;
  }
  goto LAB_004da505;
LAB_004da3fd:
  iVar10 = *(int *)(DAT_00a9cc84 + iVar19 * 4);
  piVar13 = (int *)(DAT_00a9cc84 + iVar19 * 4);
  if (iVar10 == -1) {
    if ((DAT_00a9cc80 < 0) || (DAT_00877690 + 3 < DAT_00a9cc80)) {
      FUN_007a6966(s_Illegal_ID__008478d0);
    }
    iVar10 = DAT_00a9cc80;
    *piVar13 = DAT_00a9cc80;
    DAT_00a9cc80 = DAT_00a9cc80 + 1;
  }
  if (0x3a < iVar10) {
    iVar10 = 0x3b;
  }
  iVar10 = bVar3 + 0x43ff + (iVar10 * 0x80 + iVar15) * 2;
  piVar13 = (int *)(DAT_00a9cc84 + iVar10 * 4);
  iVar10 = *(int *)(DAT_00a9cc84 + iVar10 * 4);
  if (iVar10 == -1) {
    if ((DAT_00a9cc80 < 0) || (DAT_00877690 + 3 < DAT_00a9cc80)) {
      FUN_007a6966(s_Illegal_ID__008478d0);
    }
    iVar10 = DAT_00a9cc80;
    *piVar13 = DAT_00a9cc80;
LAB_004da4ff:
    DAT_00a9cc80 = DAT_00a9cc80 + 1;
  }
  goto LAB_004da505;
  while( true ) {
    iVar19 = iVar19 + 1;
    piVar13 = piVar13 + 3;
    if (iVar7 <= iVar19) break;
LAB_004da6a7:
    if (*piVar13 == iVar18) {
      if (iVar19 != -1) goto LAB_004da6fa;
      break;
    }
  }
LAB_004da6b3:
  iVar19 = *(int *)(DAT_00a9cc84 + iVar18 * 4);
  if (iVar19 == -1) {
    if ((DAT_00a9cc80 < 0) || (DAT_00877690 + 3 < DAT_00a9cc80)) {
      FUN_007a6966(s_Illegal_ID__008478d0);
    }
    iVar19 = DAT_00a9cc80;
    *(int *)(iVar10 + iVar18 * 4) = DAT_00a9cc80;
    goto LAB_004da7fc;
  }
  goto LAB_004da802;
LAB_004da6fa:
  iVar10 = *(int *)(DAT_00a9cc84 + iVar14 * 4);
  piVar13 = (int *)(DAT_00a9cc84 + iVar14 * 4);
  if (iVar10 == -1) {
    if ((DAT_00a9cc80 < 0) || (DAT_00877690 + 3 < DAT_00a9cc80)) {
      FUN_007a6966(s_Illegal_ID__008478d0);
    }
    iVar10 = DAT_00a9cc80;
    *piVar13 = DAT_00a9cc80;
    DAT_00a9cc80 = DAT_00a9cc80 + 1;
  }
  if (0x3a < iVar10) {
    iVar10 = 0x3b;
  }
  iVar10 = bVar3 + 0x43ff + (iVar10 * 0x80 + iVar15) * 2;
  piVar13 = (int *)(DAT_00a9cc84 + iVar10 * 4);
  iVar19 = *(int *)(DAT_00a9cc84 + iVar10 * 4);
  if (iVar19 != -1) goto LAB_004da802;
  if ((DAT_00a9cc80 < 0) || (DAT_00877690 + 3 < DAT_00a9cc80)) {
    FUN_007a6966(s_Illegal_ID__008478d0);
  }
  iVar19 = DAT_00a9cc80;
  *piVar13 = DAT_00a9cc80;
  goto LAB_004da7fc;
  while( true ) {
    iVar19 = iVar19 + 1;
    piVar13 = piVar13 + 3;
    if (iVar7 <= iVar19) break;
LAB_004da99c:
    if (*piVar13 == iVar18) {
      if (iVar19 != -1) goto LAB_004da9ef;
      break;
    }
  }
LAB_004da9a8:
  iVar19 = *(int *)(DAT_00a9cc84 + iVar18 * 4);
  if (iVar19 == -1) {
    if ((DAT_00a9cc80 < 0) || (DAT_00877690 + 3 < DAT_00a9cc80)) {
      FUN_007a6966(s_Illegal_ID__008478d0);
    }
    iVar19 = DAT_00a9cc80;
    *(int *)(iVar10 + iVar18 * 4) = DAT_00a9cc80;
    goto LAB_004daaf1;
  }
  goto LAB_004daaf7;
LAB_004da9ef:
  iVar10 = *(int *)(DAT_00a9cc84 + iVar14 * 4);
  piVar13 = (int *)(DAT_00a9cc84 + iVar14 * 4);
  if (iVar10 == -1) {
    if ((DAT_00a9cc80 < 0) || (DAT_00877690 + 3 < DAT_00a9cc80)) {
      FUN_007a6966(s_Illegal_ID__008478d0);
    }
    iVar10 = DAT_00a9cc80;
    *piVar13 = DAT_00a9cc80;
    DAT_00a9cc80 = DAT_00a9cc80 + 1;
  }
  if (0x3a < iVar10) {
    iVar10 = 0x3b;
  }
  iVar10 = uVar11 + 0x43ff + (iVar10 * 0x80 + iVar15) * 2;
  piVar13 = (int *)(DAT_00a9cc84 + iVar10 * 4);
  iVar19 = *(int *)(DAT_00a9cc84 + iVar10 * 4);
  if (iVar19 != -1) goto LAB_004daaf7;
  if ((DAT_00a9cc80 < 0) || (DAT_00877690 + 3 < DAT_00a9cc80)) {
    FUN_007a6966(s_Illegal_ID__008478d0);
  }
  iVar19 = DAT_00a9cc80;
  *piVar13 = DAT_00a9cc80;
  goto LAB_004daaf1;
  while( true ) {
    iVar14 = iVar14 + 1;
    piVar13 = piVar13 + 3;
    if (iVar18 <= iVar14) break;
LAB_004dac91:
    if (*piVar13 == iVar19) {
      if (iVar14 != -1) goto LAB_004dace4;
      break;
    }
  }
LAB_004dac9d:
  iVar14 = *(int *)(DAT_00a9cc84 + iVar19 * 4);
  if (iVar14 != -1) goto LAB_004dadec;
  if ((DAT_00a9cc80 < 0) || (DAT_00877690 + 3 < DAT_00a9cc80)) {
    FUN_007a6966(s_Illegal_ID__008478d0);
  }
  iVar14 = DAT_00a9cc80;
  *(int *)(iVar8 + iVar19 * 4) = DAT_00a9cc80;
  goto LAB_004dade6;
LAB_004dace4:
  iVar8 = *(int *)(DAT_00a9cc84 + iVar10 * 4);
  piVar13 = (int *)(DAT_00a9cc84 + iVar10 * 4);
  if (iVar8 == -1) {
    if ((DAT_00a9cc80 < 0) || (DAT_00877690 + 3 < DAT_00a9cc80)) {
      FUN_007a6966(s_Illegal_ID__008478d0);
    }
    iVar8 = DAT_00a9cc80;
    *piVar13 = DAT_00a9cc80;
    DAT_00a9cc80 = DAT_00a9cc80 + 1;
  }
  if (0x3a < iVar8) {
    iVar8 = 0x3b;
  }
  iVar8 = bVar3 + 0x43ff + (iVar8 * 0x80 + iVar16) * 2;
  piVar13 = (int *)(DAT_00a9cc84 + iVar8 * 4);
  iVar14 = *(int *)(DAT_00a9cc84 + iVar8 * 4);
  if (iVar14 != -1) goto LAB_004dadec;
  if ((DAT_00a9cc80 < 0) || (DAT_00877690 + 3 < DAT_00a9cc80)) {
    FUN_007a6966(s_Illegal_ID__008478d0);
  }
  iVar14 = DAT_00a9cc80;
  *piVar13 = DAT_00a9cc80;
  goto LAB_004dade6;
  while( true ) {
    iVar10 = iVar10 + 1;
    piVar13 = piVar13 + 3;
    if (iVar7 <= iVar10) break;
LAB_004da3aa:
    if (*piVar13 == iVar16) {
      if (iVar10 != -1) goto LAB_004da3fd;
      break;
    }
  }
LAB_004da3b6:
  iVar10 = *(int *)(DAT_00a9cc84 + iVar16 * 4);
  if (iVar10 == -1) {
    if ((DAT_00a9cc80 < 0) || (DAT_00877690 + 3 < DAT_00a9cc80)) {
      FUN_007a6966(s_Illegal_ID__008478d0);
    }
    iVar10 = DAT_00a9cc80;
    *(int *)(iVar14 + iVar16 * 4) = DAT_00a9cc80;
    goto LAB_004da4ff;
  }
LAB_004da505:
  (&DAT_00a99c7c)[DAT_00a9cc7c] = (char)iVar10;
  DAT_00a9cc7c = DAT_00a9cc7c + 1;
  iVar10 = (&DAT_00a9cc94)[iVar8];
  bVar3 = (&DAT_00a9bc9b)[param_1 + iVar17];
  iVar14 = iVar10;
  if ((bVar3 == 0) ||
     (((iVar19 = *(int *)(DAT_00ab27b4 + 0x254 + iVar10 * 0x4b2), iVar19 == 8 || (iVar19 == 9)) &&
      (iVar19 != 9)))) {
    iVar19 = *(int *)(DAT_00a9cc84 + iVar10 * 4);
    if (iVar19 == -1) {
      if ((DAT_00a9cc80 < 0) || (iVar18 = DAT_00a9cc84, DAT_00877690 + 3 < DAT_00a9cc80))
      goto LAB_004da7e7;
      goto LAB_004da7f9;
    }
  }
  else {
    iVar18 = -1;
    if (iVar19 == 9) {
      iVar14 = FUN_004ef010((DAT_00a9cc90 + -1 + param_1) * DAT_00a9dcb6,
                            (DAT_00a9cc94 + param_2) * DAT_00a9dcb6,iVar10,DAT_00ab27b4);
      iVar18 = iVar10;
    }
    iVar19 = FUN_004ef010((DAT_00a9cc90 + -1 + param_1) * DAT_00a9dcb6,
                          (DAT_00a9cc94 + param_2) * DAT_00a9dcb6,iVar14,DAT_00ab27b4);
    iVar10 = DAT_00a9cc84;
    if (((iVar14 == iVar19) || (iVar14 == iVar18)) ||
       ((iVar16 = *(int *)(DAT_00ab27b4 + 0x254 + iVar19 * 0x4b2), iVar16 == 8 || (iVar16 == 9)))) {
      iVar19 = *(int *)(DAT_00a9cc84 + iVar14 * 4);
    }
    else {
      iVar15 = 0;
      iVar16 = DAT_00ab27b4 + iVar14 * 0x4b2;
      iVar7 = *(int *)(iVar16 + 0x294);
      if (0 < iVar7) {
        piVar13 = *(int **)(iVar16 + 0x298);
        piVar20 = piVar13;
        do {
          if (*piVar20 == iVar19) {
            if (iVar15 != -1) {
              if (iVar18 == -1) goto LAB_004da6fa;
              iVar19 = 0;
              if (iVar7 < 1) goto LAB_004da6b3;
              goto LAB_004da6a7;
            }
            break;
          }
          iVar15 = iVar15 + 1;
          piVar20 = piVar20 + 3;
        } while (iVar15 < iVar7);
      }
      iVar19 = *(int *)(DAT_00a9cc84 + iVar14 * 4);
    }
    if (iVar19 == -1) {
      if ((DAT_00a9cc80 < 0) ||
         (iVar10 = iVar14, iVar18 = DAT_00a9cc84, DAT_00877690 + 3 < DAT_00a9cc80)) {
LAB_004da7e7:
        iVar18 = DAT_00a9cc84;
        FUN_007a6966(s_Illegal_ID__008478d0);
        iVar10 = iVar14;
      }
LAB_004da7f9:
      iVar19 = DAT_00a9cc80;
      *(int *)(iVar18 + iVar10 * 4) = DAT_00a9cc80;
LAB_004da7fc:
      DAT_00a9cc80 = DAT_00a9cc80 + 1;
    }
  }
LAB_004da802:
  (&DAT_00a99c7c)[DAT_00a9cc7c] = (char)iVar19;
  DAT_00a9cc7c = DAT_00a9cc7c + 1;
  iVar10 = *(int *)(&DAT_00a9cc18 + iVar8 * 4);
  uVar11 = (uint)*(byte *)((int)&DAT_00a9bc7c + param_1 + iVar17);
  iVar14 = iVar10;
  if ((uVar11 == 0) ||
     (((iVar19 = *(int *)(DAT_00ab27b4 + 0x254 + iVar10 * 0x4b2), iVar19 == 8 || (iVar19 == 9)) &&
      (iVar19 != 9)))) {
    iVar19 = *(int *)(DAT_00a9cc84 + iVar10 * 4);
    if (iVar19 == -1) {
      if ((DAT_00a9cc80 < 0) || (iVar18 = DAT_00a9cc84, DAT_00877690 + 3 < DAT_00a9cc80))
      goto LAB_004daadc;
      goto LAB_004daaee;
    }
  }
  else {
    iVar18 = -1;
    if (iVar19 == 9) {
      iVar14 = FUN_004ef010((DAT_00a9cc90 + param_1) * DAT_00a9dcb6,
                            (DAT_00a9cc94 + param_2 + -1) * DAT_00a9dcb6,iVar10,DAT_00ab27b4);
      iVar18 = iVar10;
    }
    iVar19 = FUN_004ef010((DAT_00a9cc90 + param_1) * DAT_00a9dcb6,
                          (DAT_00a9cc94 + param_2 + -1) * DAT_00a9dcb6,iVar14,DAT_00ab27b4);
    iVar10 = DAT_00a9cc84;
    if (((iVar14 == iVar19) || (iVar14 == iVar18)) ||
       ((iVar16 = *(int *)(DAT_00ab27b4 + 0x254 + iVar19 * 0x4b2), iVar16 == 8 || (iVar16 == 9)))) {
      iVar19 = *(int *)(DAT_00a9cc84 + iVar14 * 4);
    }
    else {
      iVar15 = 0;
      iVar16 = DAT_00ab27b4 + iVar14 * 0x4b2;
      iVar7 = *(int *)(iVar16 + 0x294);
      if (0 < iVar7) {
        piVar13 = *(int **)(iVar16 + 0x298);
        piVar20 = piVar13;
        do {
          if (*piVar20 == iVar19) {
            if (iVar15 != -1) {
              if (iVar18 == -1) goto LAB_004da9ef;
              iVar19 = 0;
              if (iVar7 < 1) goto LAB_004da9a8;
              goto LAB_004da99c;
            }
            break;
          }
          iVar15 = iVar15 + 1;
          piVar20 = piVar20 + 3;
        } while (iVar15 < iVar7);
      }
      iVar19 = *(int *)(DAT_00a9cc84 + iVar14 * 4);
    }
    if (iVar19 == -1) {
      if ((DAT_00a9cc80 < 0) ||
         (iVar10 = iVar14, iVar18 = DAT_00a9cc84, DAT_00877690 + 3 < DAT_00a9cc80)) {
LAB_004daadc:
        iVar18 = DAT_00a9cc84;
        FUN_007a6966(s_Illegal_ID__008478d0);
        iVar10 = iVar14;
      }
LAB_004daaee:
      iVar19 = DAT_00a9cc80;
      *(int *)(iVar18 + iVar10 * 4) = DAT_00a9cc80;
LAB_004daaf1:
      DAT_00a9cc80 = DAT_00a9cc80 + 1;
    }
  }
LAB_004daaf7:
  (&DAT_00a99c7c)[DAT_00a9cc7c] = (char)iVar19;
  DAT_00a9cc7c = DAT_00a9cc7c + 1;
  iVar8 = *(int *)(&DAT_00a9cc14 + iVar8 * 4);
  bVar3 = (&DAT_00a9bc7b)[param_1 + iVar17];
  iVar10 = iVar8;
  if ((bVar3 == 0) ||
     (((iVar14 = *(int *)(DAT_00ab27b4 + 0x254 + iVar8 * 0x4b2), iVar14 == 8 || (iVar14 == 9)) &&
      (iVar14 != 9)))) {
    iVar14 = *(int *)(DAT_00a9cc84 + iVar8 * 4);
    if (iVar14 != -1) goto LAB_004dadec;
    if ((DAT_00a9cc80 < 0) || (iVar19 = DAT_00a9cc84, DAT_00877690 + 3 < DAT_00a9cc80))
    goto LAB_004dadd1;
  }
  else {
    iVar19 = -1;
    if (iVar14 == 9) {
      iVar10 = FUN_004ef010((DAT_00a9cc90 + -1 + param_1) * DAT_00a9dcb6,
                            (DAT_00a9cc94 + param_2 + -1) * DAT_00a9dcb6,iVar8,DAT_00ab27b4);
      iVar19 = iVar8;
    }
    iVar14 = FUN_004ef010((DAT_00a9cc90 + -1 + param_1) * DAT_00a9dcb6,
                          (DAT_00a9cc94 + param_2 + -1) * DAT_00a9dcb6,iVar10,DAT_00ab27b4);
    iVar8 = DAT_00a9cc84;
    if (((iVar10 == iVar14) || (iVar10 == iVar19)) ||
       ((iVar17 = *(int *)(DAT_00ab27b4 + 0x254 + iVar14 * 0x4b2), iVar17 == 8 || (iVar17 == 9)))) {
      iVar14 = *(int *)(DAT_00a9cc84 + iVar10 * 4);
    }
    else {
      iVar16 = 0;
      iVar17 = DAT_00ab27b4 + iVar10 * 0x4b2;
      iVar18 = *(int *)(iVar17 + 0x294);
      if (0 < iVar18) {
        piVar13 = *(int **)(iVar17 + 0x298);
        piVar20 = piVar13;
        do {
          if (*piVar20 == iVar14) {
            if (iVar16 != -1) {
              if (iVar19 == -1) goto LAB_004dace4;
              iVar14 = 0;
              if (iVar18 < 1) goto LAB_004dac9d;
              goto LAB_004dac91;
            }
            break;
          }
          iVar16 = iVar16 + 1;
          piVar20 = piVar20 + 3;
        } while (iVar16 < iVar18);
      }
      iVar14 = *(int *)(DAT_00a9cc84 + iVar10 * 4);
    }
    if (iVar14 != -1) goto LAB_004dadec;
    if ((DAT_00a9cc80 < 0) ||
       (iVar8 = iVar10, iVar19 = DAT_00a9cc84, DAT_00877690 + 3 < DAT_00a9cc80)) {
LAB_004dadd1:
      iVar19 = DAT_00a9cc84;
      FUN_007a6966(s_Illegal_ID__008478d0);
      iVar8 = iVar10;
    }
  }
  iVar14 = DAT_00a9cc80;
  *(int *)(iVar19 + iVar8 * 4) = DAT_00a9cc80;
LAB_004dade6:
  DAT_00a9cc80 = DAT_00a9cc80 + 1;
LAB_004dadec:
  (&DAT_00a99c7c)[DAT_00a9cc7c] = (char)iVar14;
  DAT_00a9cc7c = DAT_00a9cc7c + 1;
  uVar6 = *(undefined1 *)(param_1 + (param_2 + 1) * 0x22 + param_4);
  bVar3 = pbVar2[1];
  bVar4 = *pbVar2;
  (&DAT_00a98c7c)[DAT_00a9cc8c] = pbVar2[0x23];
  puVar1 = &DAT_00a98c7d + DAT_00a9cc8c;
  DAT_00a9cc8c = DAT_00a9cc8c + 1;
  *puVar1 = uVar6;
  pbVar2 = &DAT_00a98c7d + DAT_00a9cc8c;
  DAT_00a9cc8c = DAT_00a9cc8c + 1;
  *pbVar2 = bVar3;
  pbVar2 = &DAT_00a98c7d + DAT_00a9cc8c;
  DAT_00a9cc8c = DAT_00a9cc8c + 1;
  *pbVar2 = bVar4;
  DAT_00a9cc8c = DAT_00a9cc8c + 1;
  return DAT_00a9cc8c & 0xffffff00;
}


