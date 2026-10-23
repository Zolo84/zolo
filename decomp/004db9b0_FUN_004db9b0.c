// FUN_004db9b0 @ 4db9b0 size=1626

void __thiscall
FUN_004db9b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  bool bVar14;
  int local_18;
  int local_10;
  undefined *local_c;
  int local_8;
  
  iVar5 = param_2;
  local_8 = param_6;
  do {
    local_8 = local_8 + -1;
    bVar8 = (byte)param_6;
    local_18 = 1 << (bVar8 & 0x1f);
    uVar6 = (uint)*(byte *)(DAT_00aa0cd0 + DAT_00aa0cc4) & DAT_00aa0cd4 & 0xff;
    bVar14 = (char)(byte)DAT_00aa0cd4 < '\0';
    DAT_00aa0cd4._0_1_ = (byte)DAT_00aa0cd4 << 1 | bVar14;
    DAT_00aa0cd0 = DAT_00aa0cd0 + (uint)bVar14;
    if (uVar6 == 0) {
LAB_004dbdd2:
      local_c = (undefined *)0x0;
      uVar6 = (uint)(byte)(&DAT_00aa6324)[DAT_00aa7334];
      DAT_00aa7334 = DAT_00aa7334 + 1;
      pbVar1 = &DAT_00aa4324 + DAT_00aa7338;
      DAT_00aa7338 = DAT_00aa7338 + 1;
      local_10 = uVar6 * 0x10000;
      iVar7 = param_3 * 0x40;
      bVar2 = PTR_DAT_00847864[param_2 + local_18 + iVar7];
      bVar3 = PTR_DAT_00847864[param_2 + (local_18 + param_3) * 0x40];
      local_8 = (uint)bVar2 * 0x10000;
      bVar4 = PTR_DAT_00847864[param_2 + local_18 + (local_18 + param_3) * 0x40];
      iVar9 = DAT_00ab27b4 + *(int *)(DAT_00aa4320 + (uint)*pbVar1 * 4) * 0x4b2;
      iVar10 = *(int *)(iVar9 + 0x13e);
      iVar9 = *(int *)(iVar9 + 0x142);
      iVar11 = local_10;
      if (0 < local_18) {
        do {
          PTR_DAT_00847864[param_2 + (int)local_c + iVar7] = (char)((uint)iVar11 >> 0x10);
          iVar11 = iVar11 + ((int)(local_8 + uVar6 * -0x10000) >> (bVar8 & 0x1f));
          local_c = (undefined *)((int)local_c + 1);
        } while ((int)local_c < local_18);
      }
      iVar11 = param_3 * 0x20;
      param_3 = *(int *)(param_1 + 0x2d00a) * param_3 + *(int *)(param_1 + 0x2d006) + param_2 * 2;
      local_c = PTR_DAT_0084786c + param_2 + iVar11;
      if (0 < local_18) {
        iVar11 = local_18 + -1;
        param_2 = iVar7;
        do {
          PTR_DAT_00847864[iVar5 + param_2] = (char)((uint)local_10 >> 0x10);
          if (-1 < iVar11) {
            param_5 = local_8 + 0x8000;
            puVar13 = (undefined1 *)(param_3 + iVar11 * 2);
            iVar7 = iVar11;
            do {
              uVar12 = (uint)(byte)(&DAT_00aa41cb)
                                   [((param_5 >> 0x10) - (uint)(byte)local_c[iVar7]) - iVar10] << 6
                       | (iVar9 << 1) / 2;
              *puVar13 = (&DAT_00a44c34)[uVar12 * 2];
              puVar13[1] = (&DAT_00a44c35)[uVar12 * 2];
              param_5 = param_5 + (local_10 - local_8 >> (bVar8 & 0x1f));
              iVar7 = iVar7 + -1;
              puVar13 = puVar13 + -2;
            } while (-1 < iVar7);
          }
          param_3 = param_3 + *(int *)(param_1 + 0x2d00a);
          local_c = local_c + 0x20;
          local_10 = local_10 + ((int)((uint)bVar3 * 0x10000 + uVar6 * -0x10000) >> (bVar8 & 0x1f));
          local_8 = local_8 + ((int)((uint)bVar4 * 0x10000 + (uint)bVar2 * -0x10000) >>
                              (bVar8 & 0x1f));
          param_2 = param_2 + 0x40;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      return;
    }
    if (param_6 < 2) {
      if (uVar6 != 0) {
        pbVar1 = &DAT_00aa4324 + DAT_00aa7338;
        DAT_00aa7338 = DAT_00aa7338 + 1;
        iVar5 = *(int *)(DAT_00aa4320 + (uint)*pbVar1 * 4);
        bVar8 = (&DAT_00aa6324)[DAT_00aa7334];
        DAT_00aa7334 = DAT_00aa7334 + 1;
        iVar9 = param_3 * 0x40;
        PTR_DAT_00847864[param_2 + iVar9 + 0x41] = bVar8;
        iVar10 = param_3 * 0x20;
        iVar5 = DAT_00ab27b4 + iVar5 * 0x4b2;
        uVar6 = (uint)(byte)(&DAT_00aa41cb)
                            [((uint)bVar8 - (uint)(byte)PTR_DAT_0084786c[param_2 + iVar10 + 0x21]) -
                             *(int *)(iVar5 + 0x13e)] << 6 | *(uint *)(iVar5 + 0x142);
        *(undefined *)
         (*(int *)(param_1 + 0x2d00a) * (param_3 + 1) + *(int *)(param_1 + 0x2d006) + 2 +
         param_2 * 2) = (&DAT_00a44c34)[uVar6 * 2];
        *(undefined *)
         (*(int *)(param_1 + 0x2d00a) * (param_3 + 1) + *(int *)(param_1 + 0x2d006) + 3 +
         param_2 * 2) = (&DAT_00a44c35)[uVar6 * 2];
        pbVar1 = &DAT_00aa4324 + DAT_00aa7338;
        DAT_00aa7338 = DAT_00aa7338 + 1;
        iVar5 = *(int *)(DAT_00aa4320 + (uint)*pbVar1 * 4);
        bVar8 = (&DAT_00aa6324)[DAT_00aa7334];
        DAT_00aa7334 = DAT_00aa7334 + 1;
        PTR_DAT_00847864[param_2 + (param_3 + 1) * 0x40] = bVar8;
        iVar5 = DAT_00ab27b4 + iVar5 * 0x4b2;
        uVar6 = (uint)(byte)(&DAT_00aa41cb)
                            [((uint)bVar8 -
                             (uint)(byte)PTR_DAT_0084786c[param_2 + (param_3 + 1) * 0x20]) -
                             *(int *)(iVar5 + 0x13e)] << 6 | *(uint *)(iVar5 + 0x142);
        *(undefined *)
         (*(int *)(param_1 + 0x2d00a) * (param_3 + 1) + *(int *)(param_1 + 0x2d006) + param_2 * 2) =
             (&DAT_00a44c34)[uVar6 * 2];
        *(undefined *)
         (*(int *)(param_1 + 0x2d00a) * (param_3 + 1) + *(int *)(param_1 + 0x2d006) + 1 +
         param_2 * 2) = (&DAT_00a44c35)[uVar6 * 2];
        pbVar1 = &DAT_00aa4324 + DAT_00aa7338;
        DAT_00aa7338 = DAT_00aa7338 + 1;
        iVar5 = *(int *)(DAT_00aa4320 + (uint)*pbVar1 * 4);
        bVar8 = (&DAT_00aa6324)[DAT_00aa7334];
        DAT_00aa7334 = DAT_00aa7334 + 1;
        PTR_DAT_00847864[param_2 + iVar9 + 1] = bVar8;
        iVar5 = DAT_00ab27b4 + iVar5 * 0x4b2;
        uVar6 = (uint)(byte)(&DAT_00aa41cb)
                            [((uint)bVar8 - (uint)(byte)PTR_DAT_0084786c[param_2 + iVar10 + 1]) -
                             *(int *)(iVar5 + 0x13e)] << 6 | *(uint *)(iVar5 + 0x142);
        *(undefined *)
         (*(int *)(param_1 + 0x2d00a) * param_3 + *(int *)(param_1 + 0x2d006) + 2 + param_2 * 2) =
             (&DAT_00a44c34)[uVar6 * 2];
        *(undefined *)
         (*(int *)(param_1 + 0x2d00a) * param_3 + *(int *)(param_1 + 0x2d006) + 3 + param_2 * 2) =
             (&DAT_00a44c35)[uVar6 * 2];
        pbVar1 = &DAT_00aa4324 + DAT_00aa7338;
        DAT_00aa7338 = DAT_00aa7338 + 1;
        iVar5 = *(int *)(DAT_00aa4320 + (uint)*pbVar1 * 4);
        bVar8 = (&DAT_00aa6324)[DAT_00aa7334];
        DAT_00aa7334 = DAT_00aa7334 + 1;
        PTR_DAT_00847864[param_2 + iVar9] = bVar8;
        iVar5 = DAT_00ab27b4 + iVar5 * 0x4b2;
        uVar6 = (uint)(byte)(&DAT_00aa41cb)
                            [((uint)bVar8 - (uint)(byte)PTR_DAT_0084786c[param_2 + iVar10]) -
                             *(int *)(iVar5 + 0x13e)] << 6 | *(uint *)(iVar5 + 0x142);
        *(undefined *)
         (*(int *)(param_1 + 0x2d00a) * param_3 + *(int *)(param_1 + 0x2d006) + param_2 * 2) =
             (&DAT_00a44c34)[uVar6 * 2];
        *(undefined *)
         (*(int *)(param_1 + 0x2d00a) * param_3 + *(int *)(param_1 + 0x2d006) + 1 + param_2 * 2) =
             (&DAT_00a44c35)[uVar6 * 2];
        return;
      }
      goto LAB_004dbdd2;
    }
    local_18 = local_18 >> 1;
    FUN_004db9b0(local_18 + param_2,local_18 + param_3,param_4 + local_18,local_18 + param_5,local_8
                );
    FUN_004db9b0(param_2,local_18 + param_3,param_4,local_18 + param_5,local_8);
    FUN_004db9b0(local_18 + param_2,param_3,param_4 + local_18,param_5,local_8);
    param_6 = param_6 + -1;
  } while( true );
}


