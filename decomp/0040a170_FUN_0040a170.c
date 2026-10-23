// FUN_0040a170 @ 40a170 size=1041

void __thiscall
FUN_0040a170(int param_1,int param_2,int *param_3,uint param_4,undefined4 param_5,uint param_6)

{
  ushort *puVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
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
  
  iVar7 = *(int *)(param_1 + 0x34);
  iVar8 = 0;
  uVar10 = 0;
  iVar9 = 0;
  sVar3 = *(short *)(iVar7 + 10);
  local_28 = 0;
  local_18 = 0;
  piVar5 = *(int **)(iVar7 + 0x12 + *(short *)(iVar7 + 4) * 4);
  local_10 = *piVar5;
  local_2c = (byte *)piVar5[1];
  if (0 < local_10) {
    do {
      bVar2 = *local_2c;
      pbVar6 = local_2c + 1;
      local_14 = bVar2 & 0x3f;
      if ((bVar2 & 0x80) == 0) {
        local_2c = pbVar6;
        if ((bVar2 & 0x3f) != 0) {
          do {
            if (((((uVar10 == 0) && (local_18 == 0)) && (*param_3 <= iVar9)) &&
                ((iVar9 < param_3[2] && (param_3[1] <= iVar8)))) && (iVar8 < param_3[3])) {
              puVar1 = (ushort *)
                       (param_2 +
                       ((iVar9 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar8) * 2);
              uVar4 = *puVar1;
              local_1c = (uint)(uVar4 & 0x83ff);
              *puVar1 = (ushort)((&DAT_0088d2ec)[((uVar4 & 0x83ff) >> 5 & 0x1f) * 0x20] & 0x1f) << 5
                        | (ushort)((&DAT_0088d2ec)[(local_1c & 0x1f) * 0x20] & 0x1f) |
                          (ushort)((&DAT_0088d2ec)[(uVar4 >> 10 & 0x1f) * 0x20] & 0x1f) << 10 |
                          uVar4 & 0x8000;
              uVar10 = local_28;
            }
            iVar9 = iVar9 + 1;
            uVar10 = uVar10 + 1 & param_4;
            local_14 = local_14 - 1;
            local_28 = uVar10;
          } while (local_14 != 0);
        }
      }
      else if ((bVar2 & 0x40) == 0) {
        local_2c = local_2c + 2;
        if (*pbVar6 == 0xff) {
          iVar9 = iVar9 + local_14;
          uVar10 = uVar10 + local_14 & param_4;
          local_28 = uVar10;
        }
        else {
          local_8 = (uint)(*pbVar6 >> 3);
          if ((bVar2 & 0x3f) != 0) {
            do {
              if (((uVar10 == 0) && (local_18 == 0)) &&
                 ((*param_3 <= iVar9 &&
                  (((iVar9 < param_3[2] && (param_3[1] <= iVar8)) && (iVar8 < param_3[3])))))) {
                iVar7 = (iVar9 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar8;
                uVar4 = *(ushort *)(param_2 + iVar7 * 2);
                local_20 = (uint)(uVar4 & 0x83ff);
                *(ushort *)(param_2 + iVar7 * 2) =
                     (ushort)((&DAT_0088d2ec)[local_8 + ((uVar4 & 0x83ff) >> 5 & 0x1f) * 0x20] &
                             0x1f) << 5 |
                     (ushort)((&DAT_0088d2ec)[local_8 + (local_20 & 0x1f) * 0x20] & 0x1f) |
                     (ushort)((&DAT_0088d2ec)[local_8 + (uVar4 >> 10 & 0x1f) * 0x20] & 0x1f) << 10 |
                     uVar4 & 0x8000;
                uVar10 = local_28;
              }
              iVar9 = iVar9 + 1;
              uVar10 = uVar10 + 1 & param_4;
              local_14 = local_14 - 1;
              local_28 = uVar10;
            } while (local_14 != 0);
          }
        }
      }
      else {
        local_2c = pbVar6;
        if ((bVar2 & 0x3f) != 0) {
          do {
            if ((((uVar10 == 0) && (local_18 == 0)) &&
                ((*param_3 <= iVar9 && ((iVar9 < param_3[2] && (param_3[1] <= iVar8)))))) &&
               ((iVar8 < param_3[3] && (*local_2c != 0xff)))) {
              local_c = (uint)(*local_2c >> 3);
              iVar7 = (iVar9 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar8;
              uVar4 = *(ushort *)(param_2 + iVar7 * 2);
              local_24 = (uint)(uVar4 & 0x83ff);
              *(ushort *)(param_2 + iVar7 * 2) =
                   (ushort)((&DAT_0088d2ec)[local_c + ((uVar4 & 0x83ff) >> 5 & 0x1f) * 0x20] & 0x1f)
                   << 5 | (ushort)((&DAT_0088d2ec)[local_c + (local_24 & 0x1f) * 0x20] & 0x1f) |
                          (ushort)((&DAT_0088d2ec)[local_c + (uVar4 >> 10 & 0x1f) * 0x20] & 0x1f) <<
                          10 | uVar4 & 0x8000;
              uVar10 = local_28;
            }
            local_2c = local_2c + 1;
            iVar9 = iVar9 + 1;
            uVar10 = uVar10 + 1 & param_4;
            local_14 = local_14 - 1;
            local_28 = uVar10;
          } while (local_14 != 0);
        }
      }
      if (iVar9 == sVar3) {
        iVar9 = iVar9 - sVar3;
        local_18 = local_18 + 1 & param_4;
        if (local_18 == 0) {
          iVar8 = iVar8 + (param_6 & 0xffff);
        }
      }
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}


