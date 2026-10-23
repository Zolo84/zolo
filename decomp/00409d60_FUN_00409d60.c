// FUN_00409d60 @ 409d60 size=1029

void __thiscall
FUN_00409d60(int param_1,int param_2,int *param_3,uint param_4,undefined4 param_5,uint param_6)

{
  ushort *puVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int *piVar5;
  ushort uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  iVar8 = *(int *)(param_1 + 0x34);
  iVar10 = 0;
  uVar12 = 0;
  iVar11 = 0;
  sVar3 = *(short *)(iVar8 + 10);
  local_28 = 0;
  local_18 = 0;
  piVar5 = *(int **)(iVar8 + 0x12 + *(short *)(iVar8 + 4) * 4);
  local_10 = *piVar5;
  local_2c = (byte *)piVar5[1];
  if (0 < local_10) {
    do {
      bVar2 = *local_2c;
      pbVar7 = local_2c + 1;
      local_14 = bVar2 & 0x3f;
      if ((bVar2 & 0x80) == 0) {
        local_2c = pbVar7;
        if ((bVar2 & 0x3f) != 0) {
          do {
            if (((((uVar12 == 0) && (local_18 == 0)) && (*param_3 <= iVar11)) &&
                ((iVar11 < param_3[2] && (param_3[1] <= iVar10)))) && (iVar10 < param_3[3])) {
              puVar1 = (ushort *)
                       (param_2 +
                       ((iVar11 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar10) * 2);
              uVar4 = *puVar1;
              uVar6 = uVar4 & 0x7ff;
              local_1c = (uint)uVar6;
              *puVar1 = (ushort)((&DAT_0088d2ec)[uVar6 >> 6] & 0x1f) << 6 |
                        (ushort)((&DAT_0088d2ec)[local_1c & 0x1f] & 0x1f) |
                        (ushort)((&DAT_0088d2ec)[uVar4 >> 0xb] & 0x1f) << 0xb;
              uVar12 = local_28;
            }
            iVar11 = iVar11 + 1;
            uVar12 = uVar12 + 1 & param_4;
            local_14 = local_14 - 1;
            local_28 = uVar12;
          } while (local_14 != 0);
        }
      }
      else if ((bVar2 & 0x40) == 0) {
        local_2c = local_2c + 2;
        if (*pbVar7 == 0xff) {
          iVar11 = iVar11 + local_14;
          uVar12 = uVar12 + local_14 & param_4;
          local_28 = uVar12;
        }
        else {
          local_8 = (uint)(*pbVar7 >> 3);
          if ((bVar2 & 0x3f) != 0) {
            do {
              if (((uVar12 == 0) && (local_18 == 0)) &&
                 ((*param_3 <= iVar11 &&
                  (((iVar11 < param_3[2] && (param_3[1] <= iVar10)) && (iVar10 < param_3[3])))))) {
                iVar8 = (iVar11 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar10;
                uVar4 = *(ushort *)(param_2 + iVar8 * 2);
                iVar9 = local_8 * 0x20;
                uVar6 = uVar4 & 0x7ff;
                local_20 = (uint)uVar6;
                *(ushort *)(param_2 + iVar8 * 2) =
                     (ushort)((&DAT_0088d2ec)[iVar9 + (uint)(uVar6 >> 6)] & 0x1f) << 6 |
                     (ushort)((&DAT_0088d2ec)[iVar9 + (local_20 & 0x1f)] & 0x1f) |
                     (ushort)((&DAT_0088d2ec)[iVar9 + (uint)(uVar4 >> 0xb)] & 0x1f) << 0xb;
                uVar12 = local_28;
              }
              iVar11 = iVar11 + 1;
              uVar12 = uVar12 + 1 & param_4;
              local_14 = local_14 - 1;
              local_28 = uVar12;
            } while (local_14 != 0);
          }
        }
      }
      else {
        local_2c = pbVar7;
        if ((bVar2 & 0x3f) != 0) {
          do {
            if ((((uVar12 == 0) && (local_18 == 0)) &&
                ((*param_3 <= iVar11 && ((iVar11 < param_3[2] && (param_3[1] <= iVar10)))))) &&
               ((iVar10 < param_3[3] && (*local_2c != 0xff)))) {
              local_c = (uint)(*local_2c >> 3);
              iVar8 = (iVar11 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar10;
              uVar4 = *(ushort *)(param_2 + iVar8 * 2);
              iVar9 = local_c * 0x20;
              uVar6 = uVar4 & 0x7ff;
              local_24 = (uint)uVar6;
              *(ushort *)(param_2 + iVar8 * 2) =
                   (ushort)((&DAT_0088d2ec)[iVar9 + (uint)(uVar6 >> 6)] & 0x1f) << 6 |
                   (ushort)((&DAT_0088d2ec)[iVar9 + (local_24 & 0x1f)] & 0x1f) |
                   (ushort)((&DAT_0088d2ec)[iVar9 + (uint)(uVar4 >> 0xb)] & 0x1f) << 0xb;
              uVar12 = local_28;
            }
            local_2c = local_2c + 1;
            iVar11 = iVar11 + 1;
            uVar12 = uVar12 + 1 & param_4;
            local_14 = local_14 - 1;
            local_28 = uVar12;
          } while (local_14 != 0);
        }
      }
      if (iVar11 == sVar3) {
        iVar11 = iVar11 - sVar3;
        local_18 = local_18 + 1 & param_4;
        if (local_18 == 0) {
          iVar10 = iVar10 + (param_6 & 0xffff);
        }
      }
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}


