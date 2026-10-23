// FUN_00409330 @ 409330 size=534

void __thiscall
FUN_00409330(int param_1,int param_2,int *param_3,uint param_4,int param_5,uint param_6)

{
  ushort *puVar1;
  byte bVar2;
  short sVar3;
  undefined2 uVar4;
  int *piVar5;
  ushort uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  byte *local_1c;
  uint local_18;
  uint local_14;
  int local_c;
  
  iVar9 = 0;
  iVar7 = *(int *)(param_1 + 0x34);
  uVar10 = 0;
  local_18 = 0;
  sVar3 = *(short *)(iVar7 + 10);
  piVar5 = *(int **)(iVar7 + 0x12 + *(short *)(iVar7 + 4) * 4);
  uVar6 = 0x3def;
  local_c = *piVar5;
  local_1c = (byte *)piVar5[1];
  iVar7 = 0;
  if (DAT_00857744 == 0) {
    uVar6 = 0x7bef;
  }
  if (0 < local_c) {
    do {
      bVar2 = *local_1c;
      pbVar8 = local_1c + 1;
      local_14 = bVar2 & 0x3f;
      if ((bVar2 & 0x80) == 0) {
        if ((bVar2 & 0x40) == 0) {
          uVar10 = uVar10 + local_14 & param_4;
          iVar7 = iVar7 + local_14;
          local_1c = pbVar8;
        }
        else {
          local_1c = pbVar8;
          if ((bVar2 & 0x3f) != 0) {
            do {
              if (((((uVar10 == 0) && (local_18 == 0)) && (*param_3 <= iVar7)) &&
                  ((iVar7 < param_3[2] && (param_3[1] <= iVar9)))) && (iVar9 < param_3[3])) {
                puVar1 = (ushort *)
                         (param_2 +
                         ((iVar7 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar9) * 2);
                *puVar1 = *puVar1 >> 1 & uVar6;
              }
              iVar7 = iVar7 + 1;
              uVar10 = uVar10 + 1 & param_4;
              local_14 = local_14 - 1;
            } while (local_14 != 0);
          }
        }
      }
      else if ((bVar2 & 0x40) == 0) {
        uVar4 = *(undefined2 *)(param_5 + (uint)*pbVar8 * 4);
        local_1c = local_1c + 2;
        if ((bVar2 & 0x3f) != 0) {
          do {
            if (((uVar10 == 0) && (local_18 == 0)) &&
               ((*param_3 <= iVar7 &&
                (((iVar7 < param_3[2] && (param_3[1] <= iVar9)) && (iVar9 < param_3[3])))))) {
              *(undefined2 *)
               (param_2 + ((iVar7 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar9) * 2)
                   = uVar4;
            }
            iVar7 = iVar7 + 1;
            uVar10 = uVar10 + 1 & param_4;
            local_14 = local_14 - 1;
          } while (local_14 != 0);
        }
      }
      else {
        local_1c = pbVar8;
        if ((bVar2 & 0x3f) != 0) {
          do {
            if ((((uVar10 == 0) && (local_18 == 0)) &&
                ((*param_3 <= iVar7 && ((iVar7 < param_3[2] && (param_3[1] <= iVar9)))))) &&
               (iVar9 < param_3[3])) {
              *(undefined2 *)
               (param_2 + ((iVar7 >> ((byte)*(undefined4 *)(param_1 + 0x23e) & 0x1f)) + iVar9) * 2)
                   = *(undefined2 *)(param_5 + (uint)*local_1c * 4);
            }
            local_1c = local_1c + 1;
            iVar7 = iVar7 + 1;
            uVar10 = uVar10 + 1 & param_4;
            local_14 = local_14 - 1;
          } while (local_14 != 0);
        }
      }
      if (sVar3 <= iVar7) {
        iVar7 = iVar7 - sVar3;
        local_18 = local_18 + 1 & param_4;
        if (local_18 == 0) {
          iVar9 = iVar9 + (param_6 & 0xffff);
        }
      }
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


