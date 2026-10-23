// FUN_00409950 @ 409950 size=1034

void __thiscall
FUN_00409950(int param_1,int param_2,int *param_3,uint param_4,undefined4 param_5,uint param_6)

{
  ushort *puVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  iVar6 = *(int *)(param_1 + 0x34);
  iVar8 = 0;
  iVar9 = 0;
  sVar3 = *(short *)(iVar6 + 10);
  local_18 = 0;
  piVar5 = *(int **)(iVar6 + 0x12 + *(short *)(iVar6 + 4) * 4);
  uVar7 = 0;
  local_2c = 0;
  local_10 = *piVar5;
  pbVar10 = (byte *)piVar5[1];
  if (0 < local_10) {
    do {
      bVar2 = *pbVar10;
      pbVar11 = pbVar10 + 1;
      local_14 = bVar2 & 0x3f;
      if ((bVar2 & 0x80) == 0) {
        if ((bVar2 & 0x40) == 0) {
          uVar7 = uVar7 + local_14 & param_4;
          iVar9 = iVar9 + local_14;
          local_2c = uVar7;
        }
        else if ((bVar2 & 0x3f) != 0) {
          do {
            if (((((uVar7 == 0) && (local_18 == 0)) && (*param_3 <= iVar9)) &&
                ((iVar9 < param_3[2] && (param_3[1] <= iVar8)))) && (iVar8 < param_3[3])) {
              puVar1 = (ushort *)
                       (param_2 +
                       ((iVar9 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar8) * 2);
              uVar4 = *puVar1;
              local_20 = (uint)(uVar4 & 0x83ff);
              *puVar1 = (ushort)((&DAT_0088ceec)[((uVar4 & 0x83ff) >> 5 & 0x1f) * 0x20] & 0x1f) << 5
                        | (ushort)((&DAT_0088ceec)[(local_20 & 0x1f) * 0x20] & 0x1f) |
                          (ushort)((&DAT_0088ceec)[(uVar4 >> 10 & 0x1f) * 0x20] & 0x1f) << 10 |
                          uVar4 & 0x8000;
              uVar7 = local_2c;
            }
            iVar9 = iVar9 + 1;
            uVar7 = uVar7 + 1 & param_4;
            local_14 = local_14 - 1;
            local_2c = uVar7;
          } while (local_14 != 0);
        }
      }
      else if ((bVar2 & 0x40) == 0) {
        local_8 = (uint)(*pbVar11 >> 3);
        pbVar11 = pbVar10 + 2;
        if ((bVar2 & 0x3f) != 0) {
          do {
            if (((uVar7 == 0) && (local_18 == 0)) &&
               ((*param_3 <= iVar9 &&
                (((iVar9 < param_3[2] && (param_3[1] <= iVar8)) && (iVar8 < param_3[3])))))) {
              iVar6 = (iVar9 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar8;
              uVar4 = *(ushort *)(param_2 + iVar6 * 2);
              local_24 = (uint)(uVar4 & 0x83ff);
              *(ushort *)(param_2 + iVar6 * 2) =
                   (ushort)((&DAT_0088ceec)[local_8 + ((uVar4 & 0x83ff) >> 5 & 0x1f) * 0x20] & 0x1f)
                   << 5 | (ushort)((&DAT_0088ceec)[local_8 + (local_24 & 0x1f) * 0x20] & 0x1f) |
                          (ushort)((&DAT_0088ceec)[local_8 + (uVar4 >> 10 & 0x1f) * 0x20] & 0x1f) <<
                          10 | uVar4 & 0x8000;
              uVar7 = local_2c;
            }
            iVar9 = iVar9 + 1;
            uVar7 = uVar7 + 1 & param_4;
            local_14 = local_14 - 1;
            local_2c = uVar7;
          } while (local_14 != 0);
        }
      }
      else if ((bVar2 & 0x3f) != 0) {
        do {
          if ((((uVar7 == 0) && (local_18 == 0)) &&
              ((*param_3 <= iVar9 && ((iVar9 < param_3[2] && (param_3[1] <= iVar8)))))) &&
             (iVar8 < param_3[3])) {
            local_c = (uint)(*pbVar11 >> 3);
            iVar6 = (iVar9 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar8;
            uVar4 = *(ushort *)(param_2 + iVar6 * 2);
            local_28 = (uint)(uVar4 & 0x83ff);
            *(ushort *)(param_2 + iVar6 * 2) =
                 (ushort)((&DAT_0088ceec)[local_c + ((uVar4 & 0x83ff) >> 5 & 0x1f) * 0x20] & 0x1f)
                 << 5 | (ushort)((&DAT_0088ceec)[local_c + (local_28 & 0x1f) * 0x20] & 0x1f) |
                        (ushort)((&DAT_0088ceec)[local_c + (uVar4 >> 10 & 0x1f) * 0x20] & 0x1f) <<
                        10 | uVar4 & 0x8000;
            uVar7 = local_2c;
          }
          pbVar11 = pbVar11 + 1;
          iVar9 = iVar9 + 1;
          uVar7 = uVar7 + 1 & param_4;
          local_14 = local_14 - 1;
          local_2c = uVar7;
        } while (local_14 != 0);
      }
      if (sVar3 <= iVar9) {
        iVar9 = iVar9 - sVar3;
        local_18 = local_18 + 1 & param_4;
        if (local_18 == 0) {
          iVar8 = iVar8 + (param_6 & 0xffff);
        }
      }
      local_10 = local_10 + -1;
      pbVar10 = pbVar11;
    } while (local_10 != 0);
  }
  return;
}


