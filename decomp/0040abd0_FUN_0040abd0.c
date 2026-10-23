// FUN_0040abd0 @ 40abd0 size=1567

void __thiscall
FUN_0040abd0(int param_1,int param_2,int *param_3,uint param_4,int param_5,uint param_6)

{
  ushort *puVar1;
  byte bVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  uint local_28;
  byte *local_24;
  int local_20;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar13 = 0;
  iVar10 = *(int *)(param_1 + 0x34);
  local_20 = 0;
  local_c = 0x3def;
  sVar3 = *(short *)(iVar10 + 10);
  piVar4 = *(int **)(iVar10 + 0x12 + *(short *)(iVar10 + 4) * 4);
  iVar10 = 0;
  local_8 = *piVar4;
  local_24 = (byte *)piVar4[1];
  local_28 = 0;
  local_18 = 0;
  local_14 = 0;
  if (DAT_00857744 == 0) {
    local_c = 0x7bef;
  }
  if (0 < local_8) {
    do {
      bVar2 = *local_24;
      pbVar12 = local_24 + 1;
      local_10 = bVar2 & 0x3f;
      if ((bVar2 & 0x80) == 0) {
        if ((bVar2 & 0x40) == 0) {
          local_28 = local_28 + local_10 & param_4;
          iVar13 = iVar13 + local_10;
          local_24 = pbVar12;
          local_20 = iVar13;
        }
        else {
          local_24 = pbVar12;
          if ((bVar2 & 0x3f) != 0) {
            do {
              if (((((local_28 == 0) && (local_18 == 0)) && (*param_3 <= iVar13)) &&
                  ((iVar13 < param_3[2] && (param_3[1] <= iVar10)))) && (iVar10 < param_3[3])) {
                iVar10 = (iVar13 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar10;
                uVar8 = *(ushort *)(param_2 + iVar10 * 2);
                uVar6 = (uint)uVar8;
                uVar7 = uVar8 >> 1 & local_c;
                iVar13 = *(int *)(param_1 + 0x30);
                if (((byte)uVar8 & 0x1f) < ((byte)uVar7 & 0x1f)) {
                  uVar11 = (uint)(byte)(&DAT_0088d6ec)
                                       [iVar13 + ((uVar7 & 0x1f) - (uVar6 & 0x1f)) * 0x20];
                }
                else {
                  uVar11 = -(uint)(byte)(&DAT_0088d6ec)
                                        [iVar13 + ((uVar6 & 0x1f) - (uVar7 & 0x1f)) * 0x20];
                }
                uVar6 = uVar6 + uVar11;
                if ((uVar6 & 0x3e0) < (uVar7 & 0x3e0)) {
                  uVar11 = (uint)(byte)(&DAT_0088d6ec)[iVar13 + ((uVar7 & 0x3e0) - (uVar6 & 0x3e0))]
                  ;
                }
                else {
                  uVar11 = (uint)(byte)(&DAT_0088d6ec)[iVar13 + ((uVar6 & 0x3e0) - (uVar7 & 0x3e0))]
                           * 0x7ff;
                }
                uVar6 = uVar6 + uVar11 * 0x20;
                if ((uVar6 & 0x7c00) < (uVar7 & 0x7c00)) {
                  uVar8 = (ushort)(byte)(&DAT_0088d6ec)
                                        [iVar13 + ((int)((uVar7 & 0x7c00) - (uVar6 & 0x7c00)) >> 5)]
                  ;
                }
                else {
                  uVar8 = (ushort)(byte)(&DAT_0088d6ec)
                                        [iVar13 + ((int)((uVar6 & 0x7c00) - (uVar7 & 0x7c00)) >> 5)]
                          * 0x3f;
                }
                *(ushort *)(param_2 + iVar10 * 2) = (short)uVar6 + uVar8 * 0x400;
                iVar10 = local_14;
                iVar13 = local_20;
              }
              iVar13 = iVar13 + 1;
              local_28 = local_28 + 1 & param_4;
              local_10 = local_10 - 1;
              local_20 = iVar13;
            } while (local_10 != 0);
          }
        }
      }
      else if ((bVar2 & 0x40) == 0) {
        local_24 = local_24 + 2;
        uVar8 = *(ushort *)(param_5 + (uint)*pbVar12 * 4);
        uVar6 = (uint)uVar8;
        if ((bVar2 & 0x3f) != 0) {
          do {
            if (((local_28 == 0) && (local_18 == 0)) &&
               ((*param_3 <= iVar13 &&
                (((iVar13 < param_3[2] && (param_3[1] <= iVar10)) && (iVar10 < param_3[3])))))) {
              iVar5 = *(int *)(param_1 + 0x30);
              puVar1 = (ushort *)
                       (param_2 +
                       ((iVar13 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar10) * 2);
              uVar9 = *puVar1;
              uVar7 = (uint)uVar9;
              if (((byte)uVar9 & 0x1f) < ((byte)uVar8 & 0x1f)) {
                uVar11 = (uint)(byte)(&DAT_0088d6ec)
                                     [((uVar6 & 0x1f) - (uVar7 & 0x1f)) * 0x20 + iVar5];
              }
              else {
                uVar11 = -(uint)(byte)(&DAT_0088d6ec)
                                      [iVar5 + ((uVar7 & 0x1f) - (uVar6 & 0x1f)) * 0x20];
              }
              uVar7 = uVar7 + uVar11;
              if ((uVar7 & 0x3e0) < (uVar6 & 0x3e0)) {
                uVar11 = (uint)(byte)(&DAT_0088d6ec)[((uVar6 & 0x3e0) - (uVar7 & 0x3e0)) + iVar5];
              }
              else {
                uVar11 = (uint)(byte)(&DAT_0088d6ec)[iVar5 + ((uVar7 & 0x3e0) - (uVar6 & 0x3e0))] *
                         0x7ff;
              }
              uVar7 = uVar7 + uVar11 * 0x20;
              if ((uVar7 & 0x7c00) < (uVar6 & 0x7c00)) {
                uVar9 = (ushort)(byte)(&DAT_0088d6ec)
                                      [iVar5 + ((int)((uVar6 & 0x7c00) - (uVar7 & 0x7c00)) >> 5)];
              }
              else {
                uVar9 = (ushort)(byte)(&DAT_0088d6ec)
                                      [iVar5 + ((int)((uVar7 & 0x7c00) - (uVar6 & 0x7c00)) >> 5)] *
                        0x3f;
              }
              *puVar1 = (short)uVar7 + uVar9 * 0x400;
              iVar10 = local_14;
            }
            iVar13 = iVar13 + 1;
            local_28 = local_28 + 1 & param_4;
            local_10 = local_10 - 1;
            local_20 = iVar13;
          } while (local_10 != 0);
        }
      }
      else {
        local_24 = pbVar12;
        if ((bVar2 & 0x3f) != 0) {
          do {
            if ((((local_28 == 0) && (local_18 == 0)) &&
                ((*param_3 <= iVar13 && ((iVar13 < param_3[2] && (param_3[1] <= iVar10)))))) &&
               (iVar10 < param_3[3])) {
              puVar1 = (ushort *)
                       (param_2 +
                       ((iVar13 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar10) * 2);
              uVar8 = *puVar1;
              uVar6 = (uint)uVar8;
              uVar9 = *(ushort *)(param_5 + (uint)*local_24 * 4);
              uVar7 = (uint)uVar9;
              iVar10 = *(int *)(param_1 + 0x30);
              if (((byte)uVar8 & 0x1f) < ((byte)uVar9 & 0x1f)) {
                uVar11 = (uint)(byte)(&DAT_0088d6ec)
                                     [iVar10 + ((uVar7 & 0x1f) - (uVar6 & 0x1f)) * 0x20];
              }
              else {
                uVar11 = -(uint)(byte)(&DAT_0088d6ec)
                                      [iVar10 + ((uVar6 & 0x1f) - (uVar7 & 0x1f)) * 0x20];
              }
              uVar6 = uVar6 + uVar11;
              if ((uVar6 & 0x3e0) < (uVar7 & 0x3e0)) {
                uVar11 = (uint)(byte)(&DAT_0088d6ec)[iVar10 + ((uVar7 & 0x3e0) - (uVar6 & 0x3e0))];
              }
              else {
                uVar11 = (uint)(byte)(&DAT_0088d6ec)[iVar10 + ((uVar6 & 0x3e0) - (uVar7 & 0x3e0))] *
                         0x7ff;
              }
              uVar6 = uVar6 + uVar11 * 0x20;
              if ((uVar6 & 0x7c00) < (uVar7 & 0x7c00)) {
                uVar8 = (ushort)(byte)(&DAT_0088d6ec)
                                      [iVar10 + ((int)((uVar7 & 0x7c00) - (uVar6 & 0x7c00)) >> 5)];
              }
              else {
                uVar8 = (ushort)(byte)(&DAT_0088d6ec)
                                      [iVar10 + ((int)((uVar6 & 0x7c00) - (uVar7 & 0x7c00)) >> 5)] *
                        0x3f;
              }
              *puVar1 = (short)uVar6 + uVar8 * 0x400;
              iVar10 = local_14;
              iVar13 = local_20;
            }
            local_24 = local_24 + 1;
            iVar13 = iVar13 + 1;
            local_28 = local_28 + 1 & param_4;
            local_10 = local_10 - 1;
            local_20 = iVar13;
          } while (local_10 != 0);
        }
      }
      if (sVar3 <= iVar13) {
        iVar13 = iVar13 - sVar3;
        local_18 = local_18 + 1 & param_4;
        local_20 = iVar13;
        if (local_18 == 0) {
          iVar10 = iVar10 + (param_6 & 0xffff);
          local_14 = iVar10;
        }
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}


