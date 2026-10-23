// FUN_004dc010 @ 4dc010 size=1703

void __thiscall
FUN_004dc010(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  undefined1 *puVar14;
  bool bVar15;
  int local_1c;
  int local_14;
  int local_10;
  char local_c;
  int local_8;
  
  iVar6 = param_2;
  local_8 = param_6;
  do {
    local_8 = local_8 + -1;
    bVar10 = (byte)param_6;
    local_1c = 1 << (bVar10 & 0x1f);
    uVar8 = (uint)*(byte *)(DAT_00aa0cd0 + DAT_00aa0cc4) & DAT_00aa0cd4 & 0xff;
    bVar15 = (char)(byte)DAT_00aa0cd4 < '\0';
    DAT_00aa0cd4._0_1_ = (byte)DAT_00aa0cd4 << 1 | bVar15;
    DAT_00aa0cd0 = DAT_00aa0cd0 + (uint)bVar15;
    if (uVar8 == 0) {
LAB_004dc46b:
      local_14 = 0;
      uVar8 = (uint)(byte)(&DAT_00aa6324)[DAT_00aa7334];
      DAT_00aa7334 = DAT_00aa7334 + 1;
      pbVar1 = &DAT_00aa4324 + DAT_00aa7338;
      DAT_00aa7338 = DAT_00aa7338 + 1;
      local_10 = uVar8 * 0x10000;
      iVar11 = param_3 * 0x40;
      bVar3 = PTR_DAT_00847864[param_2 + local_1c + iVar11];
      bVar4 = PTR_DAT_00847864[param_2 + (local_1c + param_3) * 0x40];
      local_8 = (uint)bVar3 * 0x10000;
      bVar5 = PTR_DAT_00847864[param_2 + local_1c + (local_1c + param_3) * 0x40];
      iVar2 = DAT_00ab27b4 + *(int *)(DAT_00aa4320 + (uint)*pbVar1 * 4) * 0x4b2;
      iVar7 = *(int *)(iVar2 + 0x13e);
      iVar2 = *(int *)(iVar2 + 0x142);
      local_c = ((byte)iVar2 & 0x20) + (char)iVar7;
      if (0 < local_1c) {
        iVar12 = local_10 + 0x8000;
        do {
          PTR_DAT_00847864[param_2 + local_14 + iVar11] = (char)((uint)iVar12 >> 0x10);
          (&DAT_00a9dcbc)[local_14 + param_2 + iVar11] = local_c;
          iVar12 = iVar12 + ((int)(local_8 + uVar8 * -0x10000) >> (bVar10 & 0x1f));
          local_14 = local_14 + 1;
        } while (local_14 < local_1c);
      }
      param_3 = param_3 * *(int *)(param_1 + 0x2d00a) + *(int *)(param_1 + 0x2d006) + param_2 * 2;
      if (0 < local_1c) {
        iVar12 = local_1c + -1;
        pcVar13 = &DAT_00a9dcbc + param_2 + iVar11;
        param_2 = iVar11;
        do {
          PTR_DAT_00847864[iVar6 + param_2] = (char)((uint)(local_10 + 0x8000) >> 0x10);
          *pcVar13 = local_c;
          if (-1 < iVar12) {
            param_4 = local_8 + 0x8000;
            iVar11 = iVar12;
            puVar14 = (undefined1 *)(param_3 + iVar12 * 2);
            do {
              uVar9 = (uint)(byte)(&DAT_00aa41cb)[(param_4 >> 0x10) - iVar7] << 6 | iVar2 * 2 >> 1;
              *puVar14 = (&DAT_00a44c34)[uVar9 * 2];
              puVar14[1] = (&DAT_00a44c35)[uVar9 * 2];
              param_4 = param_4 + (local_10 - local_8 >> (bVar10 & 0x1f));
              pcVar13[iVar11] = local_c;
              iVar11 = iVar11 + -1;
              puVar14 = puVar14 + -2;
            } while (-1 < iVar11);
          }
          param_3 = param_3 + *(int *)(param_1 + 0x2d00a);
          local_10 = local_10 + ((int)((uint)bVar4 * 0x10000 + uVar8 * -0x10000) >> (bVar10 & 0x1f))
          ;
          param_2 = param_2 + 0x40;
          local_8 = local_8 + ((int)((uint)bVar5 * 0x10000 + (uint)bVar3 * -0x10000) >>
                              (bVar10 & 0x1f));
          pcVar13 = pcVar13 + 0x40;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      return;
    }
    if (param_6 < 2) {
      if (uVar8 != 0) {
        pbVar1 = &DAT_00aa4324 + DAT_00aa7338;
        DAT_00aa7338 = DAT_00aa7338 + 1;
        iVar6 = *(int *)(DAT_00aa4320 + (uint)*pbVar1 * 4);
        bVar10 = (&DAT_00aa6324)[DAT_00aa7334];
        DAT_00aa7334 = DAT_00aa7334 + 1;
        iVar11 = param_3 * 0x40;
        PTR_DAT_00847864[param_2 + iVar11 + 0x41] = bVar10;
        iVar2 = DAT_00ab27b4 + iVar6 * 0x4b2;
        (&DAT_00a9dcfd)[param_2 + iVar11] =
             (*(byte *)(iVar2 + 0x142) & 0x20) + *(char *)(iVar2 + 0x13e);
        iVar6 = param_3 + 1;
        uVar8 = (uint)(byte)(&DAT_00aa41cb)[(uint)bVar10 - *(int *)(iVar2 + 0x13e)] << 6 |
                *(uint *)(iVar2 + 0x142);
        *(undefined *)
         (iVar6 * *(int *)(param_1 + 0x2d00a) + param_2 * 2 + 2 + *(int *)(param_1 + 0x2d006)) =
             (&DAT_00a44c34)[uVar8 * 2];
        iVar7 = param_2 * 2;
        *(undefined *)
         (iVar6 * *(int *)(param_1 + 0x2d00a) + iVar7 + 3 + *(int *)(param_1 + 0x2d006)) =
             (&DAT_00a44c35)[uVar8 * 2];
        pbVar1 = &DAT_00aa4324 + DAT_00aa7338;
        DAT_00aa7338 = DAT_00aa7338 + 1;
        iVar2 = *(int *)(DAT_00aa4320 + (uint)*pbVar1 * 4);
        bVar10 = (&DAT_00aa6324)[DAT_00aa7334];
        DAT_00aa7334 = DAT_00aa7334 + 1;
        PTR_DAT_00847864[param_2 + iVar6 * 0x40] = bVar10;
        iVar2 = DAT_00ab27b4 + iVar2 * 0x4b2;
        (&DAT_00a9dcfc)[param_2 + iVar11] =
             (*(byte *)(iVar2 + 0x142) & 0x20) + *(char *)(iVar2 + 0x13e);
        uVar8 = (uint)(byte)(&DAT_00aa41cb)[(uint)bVar10 - *(int *)(iVar2 + 0x13e)] << 6 |
                *(uint *)(iVar2 + 0x142);
        *(undefined *)(iVar6 * *(int *)(param_1 + 0x2d00a) + iVar7 + *(int *)(param_1 + 0x2d006)) =
             (&DAT_00a44c34)[uVar8 * 2];
        *(undefined *)
         (iVar6 * *(int *)(param_1 + 0x2d00a) + iVar7 + 1 + *(int *)(param_1 + 0x2d006)) =
             (&DAT_00a44c35)[uVar8 * 2];
        pbVar1 = &DAT_00aa4324 + DAT_00aa7338;
        DAT_00aa7338 = DAT_00aa7338 + 1;
        iVar6 = *(int *)(DAT_00aa4320 + (uint)*pbVar1 * 4);
        bVar10 = (&DAT_00aa6324)[DAT_00aa7334];
        DAT_00aa7334 = DAT_00aa7334 + 1;
        PTR_DAT_00847864[param_2 + iVar11 + 1] = bVar10;
        iVar6 = DAT_00ab27b4 + iVar6 * 0x4b2;
        (&DAT_00a9dcbd)[param_2 + iVar11] =
             (*(byte *)(iVar6 + 0x142) & 0x20) + *(char *)(iVar6 + 0x13e);
        uVar8 = (uint)(byte)(&DAT_00aa41cb)[(uint)bVar10 - *(int *)(iVar6 + 0x13e)] << 6 |
                *(uint *)(iVar6 + 0x142);
        *(undefined *)
         (param_3 * *(int *)(param_1 + 0x2d00a) + param_2 * 2 + 2 + *(int *)(param_1 + 0x2d006)) =
             (&DAT_00a44c34)[uVar8 * 2];
        *(undefined *)
         (param_3 * *(int *)(param_1 + 0x2d00a) + iVar7 + 3 + *(int *)(param_1 + 0x2d006)) =
             (&DAT_00a44c35)[uVar8 * 2];
        pbVar1 = &DAT_00aa4324 + DAT_00aa7338;
        DAT_00aa7338 = DAT_00aa7338 + 1;
        iVar6 = *(int *)(DAT_00aa4320 + (uint)*pbVar1 * 4);
        bVar10 = (&DAT_00aa6324)[DAT_00aa7334];
        DAT_00aa7334 = DAT_00aa7334 + 1;
        PTR_DAT_00847864[param_2 + iVar11] = bVar10;
        iVar6 = DAT_00ab27b4 + iVar6 * 0x4b2;
        (&DAT_00a9dcbc)[param_2 + iVar11] =
             (*(byte *)(iVar6 + 0x142) & 0x20) + *(char *)(iVar6 + 0x13e);
        uVar8 = (uint)(byte)(&DAT_00aa41cb)[(uint)bVar10 - *(int *)(iVar6 + 0x13e)] << 6 |
                *(uint *)(iVar6 + 0x142);
        *(undefined *)(param_3 * *(int *)(param_1 + 0x2d00a) + iVar7 + *(int *)(param_1 + 0x2d006))
             = (&DAT_00a44c34)[uVar8 * 2];
        *(undefined *)
         (param_3 * *(int *)(param_1 + 0x2d00a) + iVar7 + 1 + *(int *)(param_1 + 0x2d006)) =
             (&DAT_00a44c35)[uVar8 * 2];
        return;
      }
      goto LAB_004dc46b;
    }
    local_1c = local_1c >> 1;
    FUN_004dc010(local_1c + param_2,local_1c + param_3,param_4 + local_1c,local_1c + param_5,local_8
                );
    FUN_004dc010(param_2,local_1c + param_3,param_4,local_1c + param_5,local_8);
    FUN_004dc010(local_1c + param_2,param_3,param_4 + local_1c,param_5,local_8);
    param_6 = param_6 + -1;
  } while( true );
}


