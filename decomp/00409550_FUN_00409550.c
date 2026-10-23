// FUN_00409550 @ 409550 size=1023

void __thiscall
FUN_00409550(int param_1,int param_2,int *param_3,uint param_4,undefined4 param_5,uint param_6)

{
  ushort *puVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int *piVar5;
  ushort uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  iVar9 = *(int *)(param_1 + 0x34);
  iVar11 = 0;
  uVar13 = 0;
  iVar12 = 0;
  sVar3 = *(short *)(iVar9 + 10);
  local_2c = 0;
  local_18 = 0;
  piVar5 = *(int **)(iVar9 + 0x12 + *(short *)(iVar9 + 4) * 4);
  local_10 = *piVar5;
  pbVar7 = (byte *)piVar5[1];
  if (0 < local_10) {
    do {
      bVar2 = *pbVar7;
      pbVar8 = pbVar7 + 1;
      local_14 = bVar2 & 0x3f;
      if ((bVar2 & 0x80) == 0) {
        if ((bVar2 & 0x40) == 0) {
          uVar13 = uVar13 + local_14 & param_4;
          iVar12 = iVar12 + local_14;
          local_2c = uVar13;
        }
        else if ((bVar2 & 0x3f) != 0) {
          do {
            if (((((uVar13 == 0) && (local_18 == 0)) && (*param_3 <= iVar12)) &&
                ((iVar12 < param_3[2] && (param_3[1] <= iVar11)))) && (iVar11 < param_3[3])) {
              puVar1 = (ushort *)
                       (param_2 +
                       ((iVar12 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar11) * 2);
              uVar4 = *puVar1;
              uVar6 = uVar4 & 0x7ff;
              local_20 = (uint)uVar6;
              *puVar1 = (ushort)((&DAT_0088ceec)[uVar6 >> 6] & 0x1f) << 6 |
                        (ushort)((&DAT_0088ceec)[local_20 & 0x1f] & 0x1f) |
                        (ushort)((&DAT_0088ceec)[uVar4 >> 0xb] & 0x1f) << 0xb;
              uVar13 = local_2c;
            }
            iVar12 = iVar12 + 1;
            uVar13 = uVar13 + 1 & param_4;
            local_14 = local_14 - 1;
            local_2c = uVar13;
          } while (local_14 != 0);
        }
      }
      else if ((bVar2 & 0x40) == 0) {
        local_8 = (uint)(*pbVar8 >> 3);
        pbVar8 = pbVar7 + 2;
        if ((bVar2 & 0x3f) != 0) {
          do {
            if (((uVar13 == 0) && (local_18 == 0)) &&
               ((*param_3 <= iVar12 &&
                (((iVar12 < param_3[2] && (param_3[1] <= iVar11)) && (iVar11 < param_3[3])))))) {
              iVar9 = (iVar12 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar11;
              uVar4 = *(ushort *)(param_2 + iVar9 * 2);
              iVar10 = local_8 * 0x20;
              uVar6 = uVar4 & 0x7ff;
              local_24 = (uint)uVar6;
              *(ushort *)(param_2 + iVar9 * 2) =
                   (ushort)((&DAT_0088ceec)[iVar10 + (uint)(uVar6 >> 6)] & 0x1f) << 6 |
                   (ushort)((&DAT_0088ceec)[iVar10 + (local_24 & 0x1f)] & 0x1f) |
                   (ushort)((&DAT_0088ceec)[iVar10 + (uint)(uVar4 >> 0xb)] & 0x1f) << 0xb;
              uVar13 = local_2c;
            }
            iVar12 = iVar12 + 1;
            uVar13 = uVar13 + 1 & param_4;
            local_14 = local_14 - 1;
            local_2c = uVar13;
          } while (local_14 != 0);
        }
      }
      else if ((bVar2 & 0x3f) != 0) {
        do {
          if ((((uVar13 == 0) && (local_18 == 0)) &&
              ((*param_3 <= iVar12 && ((iVar12 < param_3[2] && (param_3[1] <= iVar11)))))) &&
             (iVar11 < param_3[3])) {
            local_c = (uint)(*pbVar8 >> 3);
            iVar9 = (iVar12 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar11;
            uVar4 = *(ushort *)(param_2 + iVar9 * 2);
            iVar10 = local_c * 0x20;
            uVar6 = uVar4 & 0x7ff;
            local_28 = (uint)uVar6;
            *(ushort *)(param_2 + iVar9 * 2) =
                 (ushort)((&DAT_0088ceec)[iVar10 + (uint)(uVar6 >> 6)] & 0x1f) << 6 |
                 (ushort)((&DAT_0088ceec)[iVar10 + (local_28 & 0x1f)] & 0x1f) |
                 (ushort)((&DAT_0088ceec)[iVar10 + (uint)(uVar4 >> 0xb)] & 0x1f) << 0xb;
            uVar13 = local_2c;
          }
          pbVar8 = pbVar8 + 1;
          iVar12 = iVar12 + 1;
          uVar13 = uVar13 + 1 & param_4;
          local_14 = local_14 - 1;
          local_2c = uVar13;
        } while (local_14 != 0);
      }
      if (iVar12 == sVar3) {
        iVar12 = iVar12 - sVar3;
        local_18 = local_18 + 1 & param_4;
        if (local_18 == 0) {
          iVar11 = iVar11 + (param_6 & 0xffff);
        }
      }
      local_10 = local_10 + -1;
      pbVar7 = pbVar8;
    } while (local_10 != 0);
  }
  return;
}


