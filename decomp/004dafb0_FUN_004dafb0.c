// FUN_004dafb0 @ 4dafb0 size=1231

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dafb0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  
  iVar10 = 0x1267;
  if (param_1 < 0) {
    param_1 = param_1 + 0x7500;
  }
  if (0x74ff < param_1) {
    param_1 = param_1 + -0x7500;
  }
  bVar6 = (byte)param_3;
  iVar4 = (((param_2 >> (bVar6 & 0x1f)) >> 5) * ((0x7500 >> (bVar6 & 0x1f)) >> 5) +
          ((param_1 >> (bVar6 & 0x1f)) >> 5)) * 4;
  pbVar9 = (byte *)((&DAT_00aa10e0)[param_3 * 3] + iVar4);
  iVar4 = (((uint)*(byte *)((&DAT_00aa10e0)[param_3 * 3] + 3 + iVar4) * 0x100 + (uint)pbVar9[2]) *
           0x100 + (uint)pbVar9[1]) * 0x100 + (uint)*pbVar9;
  DAT_00aa0cc0 = (&DAT_00aa10e4)[param_3 * 3] + iVar4;
  DAT_00aa7324 = -1;
  do {
    DAT_00aa7324 = DAT_00aa7324 + 1;
    iVar4 = iVar4 + 2;
    *(uint *)(DAT_00aa4320 + DAT_00aa7324 * 4) =
         (*(byte *)(DAT_00aa0cc0 + 1 + DAT_00aa7324 * 2) & 0x7f) << 8 |
         (uint)*(byte *)(DAT_00aa0cc0 + DAT_00aa7324 * 2);
  } while (*(byte *)(DAT_00aa0cc0 + 1 + DAT_00aa7324 * 2) < 0x80);
  iVar7 = DAT_00aa7324 + 1;
  param_1 = 0;
  DAT_00aa7324 = iVar7;
  if (0 < iVar7) {
    do {
      uVar1 = *(uint *)(DAT_00aa4320 + param_1 * 4);
      if (DAT_00877690 < (int)uVar1) {
        iVar7 = *(int *)(DAT_00aa4320 + -0x10 + ((int)uVar1 >> 8 & 0x3fU) * 4);
        uVar5 = (int)uVar1 >> 1 & 0xf;
        if (DAT_00877690 < iVar7) {
          iVar7 = 0;
        }
        iVar8 = iVar7 * 0x4b2;
        iVar2 = *(int *)(DAT_00ab27b4 + iVar8 + 0x290);
        if (iVar2 <= (int)uVar5) {
          uVar5 = iVar2 - 1;
        }
        if (((int)uVar5 < 0) || (iVar7 < 1)) {
          *(int *)(DAT_00aa4320 + param_1 * 4) = iVar7;
          iVar7 = DAT_00aa7324;
        }
        else {
          iVar2 = *(int *)(*(int *)(DAT_00ab27b4 + iVar8 + 0x298) + uVar5 * 0xc);
          if (((((DAT_00a98444 & 0x4000) == 0) || (cVar3 = FUN_004ed310(iVar2), cVar3 != '\0')) ||
              (*(char *)(iVar8 + 0x180 + DAT_00ab27b4) != '\0')) ||
             (*(char *)(DAT_00ab27b4 + 0x180 + iVar2 * 0x4b2) != '\0')) {
            *(int *)(DAT_00aa4320 + param_1 * 4) = iVar7;
            iVar7 = DAT_00aa7324;
          }
          else if (*(char *)(iVar8 + 0x46e + DAT_00ab27b4) == '\0') {
            *(uint *)(DAT_00aa4320 + param_1 * 4) = (DAT_00877690 - (uVar1 & 1)) + 3;
            iVar7 = DAT_00aa7324;
          }
          else {
            *(uint *)(DAT_00aa4320 + param_1 * 4) = (DAT_00877690 - (uVar1 & 1)) + 1;
            iVar7 = DAT_00aa7324;
          }
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < iVar7);
  }
  DAT_00aa732c = 0;
  DAT_00aa7330 = 0;
  DAT_00aa0cc4 = (byte *)((&DAT_00aa10e4)[param_3 * 3] + iVar4);
  DAT_00aa0cd4._0_1_ = 2;
  DAT_00aa0cd0 = 0;
  if ((*DAT_00aa0cc4 & 1) == 0) {
    DAT_00aa732c = 1;
    DAT_00aa7330 = 1;
  }
  else {
    FUN_004dc920(4);
    FUN_004dc920(4);
    FUN_004dc920(4);
    FUN_004dc920(4);
  }
  iVar4 = iVar4 + DAT_00aa0cd0;
  if (1 < (byte)DAT_00aa0cd4) {
    iVar4 = iVar4 + 1;
  }
  iVar4 = (&DAT_00aa10e4)[param_3 * 3] + iVar4;
  _DAT_00aa0ccc = iVar4;
  if (DAT_00aa7324 == 1) {
    iVar10 = 0;
    iVar7 = 0;
    if (0 < DAT_00aa732c) {
      do {
        (&DAT_00aa4324)[iVar7] = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < DAT_00aa732c);
    }
    goto LAB_004db3f0;
  }
  if (DAT_00aa7324 == 2) {
    iVar10 = 0;
    iVar7 = 0;
    if (0 < DAT_00aa732c) {
      do {
        (&DAT_00aa4324)[iVar7] = *(byte *)(iVar4 + iVar10) & 1;
        (&DAT_00aa4325)[iVar7] = *(byte *)(iVar4 + iVar10) >> 1 & 1;
        (&DAT_00aa4326)[iVar7] = *(byte *)(iVar4 + iVar10) >> 2 & 1;
        (&DAT_00aa4327)[iVar7] = *(byte *)(iVar4 + iVar10) >> 3 & 1;
        (&DAT_00aa4328)[iVar7] = *(byte *)(iVar4 + iVar10) >> 4 & 1;
        (&DAT_00aa4329)[iVar7] = *(byte *)(iVar4 + iVar10) >> 5 & 1;
        (&DAT_00aa432a)[iVar7] = *(byte *)(iVar4 + iVar10) >> 6 & 1;
        (&DAT_00aa432b)[iVar7] = *(byte *)(iVar4 + iVar10) >> 7;
        iVar7 = iVar7 + 8;
        iVar10 = iVar10 + 1;
      } while (iVar7 < DAT_00aa732c);
    }
    goto LAB_004db3f0;
  }
  if (DAT_00aa7324 < 3) {
    if (4 < DAT_00aa7324) goto LAB_004db390;
    if (DAT_00aa7324 < 0x11) goto LAB_004db3f0;
  }
  else {
    if (DAT_00aa7324 < 5) {
      iVar10 = 0;
      iVar7 = 0;
      if (0 < DAT_00aa732c) {
        do {
          (&DAT_00aa4324)[iVar7] = *(byte *)(iVar4 + iVar10) & 3;
          (&DAT_00aa4325)[iVar7] = *(byte *)(iVar4 + iVar10) >> 2 & 3;
          (&DAT_00aa4326)[iVar7] = *(byte *)(iVar4 + iVar10) >> 4 & 3;
          (&DAT_00aa4327)[iVar7] = *(byte *)(iVar4 + iVar10) >> 6;
          iVar7 = iVar7 + 4;
          iVar10 = iVar10 + 1;
        } while (iVar7 < DAT_00aa732c);
      }
      goto LAB_004db3f0;
    }
LAB_004db390:
    if (DAT_00aa7324 < 0x11) {
      iVar10 = 0;
      iVar7 = 0;
      if (0 < DAT_00aa732c) {
        do {
          (&DAT_00aa4324)[iVar7] = *(byte *)(iVar4 + iVar10) & 0xf;
          (&DAT_00aa4325)[iVar7] = *(byte *)(iVar4 + iVar10) >> 4;
          iVar7 = iVar7 + 2;
          iVar10 = iVar10 + 1;
        } while (iVar7 < DAT_00aa732c);
      }
      goto LAB_004db3f0;
    }
  }
  iVar10 = 0;
  iVar7 = 0;
  if (0 < DAT_00aa732c) {
    do {
      (&DAT_00aa4324)[iVar7] = *(undefined1 *)(iVar7 + iVar4);
      iVar7 = iVar7 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar7 < DAT_00aa732c);
  }
LAB_004db3f0:
  _DAT_00aa0cc8 = iVar10 + iVar4;
  iVar10 = 0;
  if (0 < DAT_00aa7330) {
    pbVar9 = (byte *)(_DAT_00aa0cc8 + 1);
    do {
      (&DAT_00aa6324)[iVar10] = pbVar9[-1] & 0x3f;
      (&DAT_00aa6325)[iVar10] = (*pbVar9 & 0xf) << 2 | pbVar9[-1] >> 6;
      (&DAT_00aa6326)[iVar10] = (pbVar9[1] & 3) << 4 | *pbVar9 >> 4;
      (&DAT_00aa6327)[iVar10] = pbVar9[1] >> 2;
      iVar10 = iVar10 + 4;
      pbVar9 = pbVar9 + 3;
    } while (iVar10 < DAT_00aa7330);
  }
  DAT_00aa0cd0 = 0;
  DAT_00aa0cd4._0_1_ = 1;
  DAT_00aa7334 = 0;
  DAT_00aa7338 = 0;
  return;
}


