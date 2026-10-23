// FUN_00419cb0 @ 419cb0 size=2072

void FUN_00419cb0(int *param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  int local_b58;
  int local_b4c;
  int local_b48;
  int *local_b44;
  int *local_b40;
  int local_b38;
  int *local_b34;
  int local_b30;
  uint local_b28;
  int local_b20 [99];
  int local_994 [257];
  int local_590;
  int local_58c [99];
  int local_400 [256];
  
  if (3 < param_5) {
    FUN_007a6628(&DAT_0087cb88,s_bucket_sorting_____00839220);
  }
  iVar5 = 0;
  piVar11 = local_994;
  for (iVar9 = 0x101; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  if (0 < param_4) {
    do {
      pbVar1 = (byte *)(iVar5 + param_2);
      iVar5 = iVar5 + 1;
      local_994[*pbVar1] = local_994[*pbVar1] + 1;
    } while (iVar5 < param_4);
  }
  piVar11 = local_994;
  piVar15 = local_994;
  piVar8 = local_400;
  for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar8 = *piVar15;
    piVar15 = piVar15 + 1;
    piVar8 = piVar8 + 1;
  }
  iVar5 = 0x100;
  do {
    piVar11 = piVar11 + 1;
    *piVar11 = *piVar11 + piVar11[-1];
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 0;
  if (0 < param_4) {
    do {
      iVar9 = local_994[*(byte *)(iVar5 + param_2)];
      local_994[*(byte *)(iVar5 + param_2)] = iVar9 + -1;
      param_1[iVar9 + -1] = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_4);
  }
  iVar5 = ((int)(param_4 + (param_4 >> 0x1f & 0x1fU)) >> 5) + 2;
  puVar17 = param_3;
  if (0 < iVar5) {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar17 = 0;
      puVar17 = puVar17 + 1;
    }
  }
  piVar11 = local_994;
  local_b4c = 0x100;
  do {
    iVar5 = *piVar11;
    iVar9 = iVar5 >> 5;
    piVar11 = piVar11 + 1;
    param_3[iVar9] = param_3[iVar9] | 1 << ((byte)iVar5 & 0x1f);
    local_b4c = local_b4c + -1;
  } while (local_b4c != 0);
  local_b4c = 0x20;
  iVar5 = param_4;
  do {
    param_3[iVar5 >> 5] = param_3[iVar5 >> 5] | 1 << ((byte)iVar5 & 0x1f);
    iVar9 = iVar5 + 1;
    iVar12 = iVar9 >> 5;
    iVar5 = iVar5 + 2;
    param_3[iVar12] = param_3[iVar12] & ~(1 << ((byte)iVar9 & 0x1f));
    local_b4c = local_b4c + -1;
  } while (local_b4c != 0);
  local_b4c = 1;
  do {
    if (3 < param_5) {
      FUN_007a6628(&DAT_0087cb88,s_depth__6d_has_00839208,local_b4c);
    }
    iVar5 = 0;
    iVar9 = 0;
    local_b44 = param_1;
    if (0 < param_4) {
      do {
        if ((param_3[iVar9 >> 5] & 1 << ((byte)iVar9 & 0x1f)) != 0) {
          iVar5 = iVar9;
        }
        iVar12 = *local_b44 - local_b4c;
        if (iVar12 < 0) {
          iVar12 = iVar12 + param_4;
        }
        iVar9 = iVar9 + 1;
        *(int *)(param_2 + iVar12 * 4) = iVar5;
        local_b44 = local_b44 + 1;
      } while (iVar9 < param_4);
    }
    local_b44 = (int *)0x0;
    local_b30 = -1;
    while( true ) {
      uVar6 = local_b30 + 1;
      uVar10 = uVar6 & 0x1f;
      uVar4 = param_3[(int)uVar6 >> 5] & 1 << (sbyte)uVar10;
      while ((uVar4 != 0 && (uVar10 != 0))) {
        uVar6 = uVar6 + 1;
        uVar10 = uVar6 & 0x1f;
        uVar4 = param_3[(int)uVar6 >> 5] & 1 << (sbyte)uVar10;
      }
      uVar4 = param_3[(int)uVar6 >> 5];
      if ((uVar4 & 1 << ((byte)uVar6 & 0x1f)) != 0) {
        while (uVar4 == 0xffffffff) {
          uVar6 = uVar6 + 0x20;
          uVar4 = param_3[(int)uVar6 >> 5];
        }
        uVar4 = param_3[(int)uVar6 >> 5] & 1 << ((byte)uVar6 & 0x1f);
        while (uVar4 != 0) {
          uVar6 = uVar6 + 1;
          uVar4 = param_3[(int)uVar6 >> 5] & 1 << ((byte)uVar6 & 0x1f);
        }
      }
      iVar5 = uVar6 - 1;
      if (param_4 <= iVar5) break;
      uVar10 = uVar6 & 0x1f;
      uVar4 = param_3[(int)uVar6 >> 5] & 1 << (sbyte)uVar10;
      while ((uVar4 == 0 && (uVar10 != 0))) {
        uVar6 = uVar6 + 1;
        uVar10 = uVar6 & 0x1f;
        uVar4 = param_3[(int)uVar6 >> 5] & 1 << (sbyte)uVar10;
      }
      uVar4 = param_3[(int)uVar6 >> 5];
      if ((uVar4 & 1 << ((byte)uVar6 & 0x1f)) == 0) {
        while (uVar4 == 0) {
          uVar6 = uVar6 + 0x20;
          uVar4 = param_3[(int)uVar6 >> 5];
        }
        uVar4 = param_3[(int)uVar6 >> 5] & 1 << ((byte)uVar6 & 0x1f);
        while (uVar4 == 0) {
          uVar6 = uVar6 + 1;
          uVar4 = param_3[(int)uVar6 >> 5] & 1 << ((byte)uVar6 & 0x1f);
        }
      }
      local_b30 = uVar6 - 1;
      if (param_4 <= local_b30) break;
      if (iVar5 < local_b30) {
        local_590 = iVar5;
        local_b34 = local_b20;
        local_b44 = (int *)((int)local_b44 + 1 + (local_b30 - iVar5));
        local_b40 = local_58c;
        local_b28 = 0;
        local_b48 = 1;
        do {
          if (99 < local_b48) {
            FUN_0041b650(0x3ec);
          }
          iVar13 = local_b48 + -1;
          piVar11 = local_b40 + -1;
          iVar9 = *piVar11;
          piVar15 = local_b34 + -1;
          iVar12 = *piVar15;
          if (iVar12 - iVar9 < 10) {
            if (iVar9 != iVar12) {
              if ((3 < iVar12 - iVar9) && (iVar16 = iVar12 + -4, iVar9 <= iVar16)) {
                piVar8 = param_1 + iVar16;
                do {
                  iVar14 = *piVar8;
                  uVar6 = *(uint *)(param_2 + iVar14 * 4);
                  piVar7 = piVar8;
                  iVar18 = iVar16;
                  while (iVar18 + 4 <= iVar12) {
                    iVar2 = piVar7[4];
                    if (uVar6 <= *(uint *)(param_2 + iVar2 * 4)) break;
                    *piVar7 = iVar2;
                    piVar7 = piVar7 + 4;
                    iVar18 = iVar18 + 4;
                  }
                  iVar16 = iVar16 + -1;
                  param_1[iVar18] = iVar14;
                  piVar8 = piVar8 + -1;
                } while (iVar9 <= iVar16);
              }
              iVar16 = iVar12 + -1;
              if (iVar9 <= iVar16) {
                piVar8 = param_1 + iVar16;
                do {
                  iVar14 = *piVar8;
                  uVar6 = *(uint *)(param_2 + iVar14 * 4);
                  piVar7 = piVar8;
                  iVar18 = iVar16;
                  while (iVar18 + 1 <= iVar12) {
                    iVar2 = piVar7[1];
                    if (uVar6 <= *(uint *)(param_2 + iVar2 * 4)) break;
                    *piVar7 = iVar2;
                    piVar7 = piVar7 + 1;
                    iVar18 = iVar18 + 1;
                  }
                  iVar16 = iVar16 + -1;
                  param_1[iVar18] = iVar14;
                  piVar8 = piVar8 + -1;
                } while (iVar9 <= iVar16);
              }
            }
          }
          else {
            local_b28 = local_b28 * 0x1dc5 + 1 & 0x7fff;
            if (local_b28 % 3 == 0) {
              iVar16 = param_1[iVar9];
            }
            else {
              iVar16 = iVar12;
              if (local_b28 % 3 == 1) {
                iVar16 = iVar12 + iVar9 >> 1;
              }
              iVar16 = param_1[iVar16];
            }
            iVar16 = *(int *)(param_2 + iVar16 * 4);
            iVar14 = iVar12;
            iVar18 = iVar9;
            local_b58 = iVar9;
            local_b38 = iVar12;
            while( true ) {
              piVar8 = param_1 + iVar18;
              piVar7 = param_1 + local_b58;
              while( true ) {
                while( true ) {
                  if (iVar14 < iVar18) goto LAB_0041a294;
                  iVar2 = *piVar8;
                  iVar3 = *(int *)(param_2 + iVar2 * 4);
                  if (iVar3 != iVar16) break;
                  *piVar8 = *piVar7;
                  *piVar7 = iVar2;
                  local_b58 = local_b58 + 1;
                  piVar7 = piVar7 + 1;
                  iVar18 = iVar18 + 1;
                  piVar8 = piVar8 + 1;
                }
                if (0 < iVar3 - iVar16) break;
                iVar18 = iVar18 + 1;
                piVar8 = piVar8 + 1;
              }
              piVar8 = param_1 + local_b38;
              piVar7 = param_1 + iVar14;
              while( true ) {
                while( true ) {
                  if (iVar14 < iVar18) goto LAB_0041a294;
                  iVar2 = *piVar7;
                  iVar3 = *(int *)(param_2 + iVar2 * 4);
                  if (iVar3 != iVar16) break;
                  *piVar7 = *piVar8;
                  *piVar8 = iVar2;
                  local_b38 = local_b38 + -1;
                  piVar8 = piVar8 + -1;
                  iVar14 = iVar14 + -1;
                  piVar7 = piVar7 + -1;
                }
                if (iVar3 - iVar16 < 0) break;
                iVar14 = iVar14 + -1;
                piVar7 = piVar7 + -1;
              }
              if (iVar14 < iVar18) break;
              iVar2 = param_1[iVar18];
              param_1[iVar18] = param_1[iVar14];
              param_1[iVar14] = iVar2;
              iVar18 = iVar18 + 1;
              iVar14 = iVar14 + -1;
            }
LAB_0041a294:
            if (local_b58 <= local_b38) {
              iVar13 = iVar18 - local_b58;
              local_b58 = local_b58 - iVar9;
              if (iVar13 <= local_b58) {
                local_b58 = iVar13;
              }
              if (0 < local_b58) {
                piVar8 = param_1 + iVar9;
                piVar7 = param_1 + (iVar18 - local_b58);
                do {
                  iVar16 = *piVar8;
                  *piVar8 = *piVar7;
                  *piVar7 = iVar16;
                  piVar8 = piVar8 + 1;
                  piVar7 = piVar7 + 1;
                  local_b58 = local_b58 + -1;
                } while (local_b58 != 0);
              }
              local_b58 = local_b38 - iVar14;
              if (iVar12 - local_b38 < local_b38 - iVar14) {
                local_b58 = iVar12 - local_b38;
              }
              if (0 < local_b58) {
                piVar7 = param_1 + iVar18;
                piVar8 = param_1 + (iVar12 - local_b58) + 1;
                do {
                  iVar16 = *piVar7;
                  *piVar7 = *piVar8;
                  *piVar8 = iVar16;
                  piVar7 = piVar7 + 1;
                  piVar8 = piVar8 + 1;
                  local_b58 = local_b58 + -1;
                } while (local_b58 != 0);
              }
              iVar13 = iVar13 + -1 + iVar9;
              iVar16 = (iVar14 - local_b38) + 1 + iVar12;
              if (iVar12 - iVar16 < iVar13 - iVar9) {
                *piVar15 = iVar13;
                *local_b40 = iVar16;
                *local_b34 = iVar12;
              }
              else {
                *piVar11 = iVar16;
                *local_b40 = iVar9;
                *local_b34 = iVar13;
              }
              local_b48 = local_b48 + 1;
              iVar13 = local_b48;
              piVar11 = local_b40 + 1;
              piVar15 = local_b34 + 1;
            }
          }
          local_b34 = piVar15;
          local_b40 = piVar11;
          local_b48 = iVar13;
        } while (0 < local_b48);
        iVar9 = -1;
        if (iVar5 <= local_b30) {
          piVar11 = param_1 + iVar5;
          do {
            iVar12 = *(int *)(param_2 + *piVar11 * 4);
            if (iVar9 != iVar12) {
              param_3[iVar5 >> 5] = param_3[iVar5 >> 5] | 1 << ((byte)iVar5 & 0x1f);
              iVar9 = iVar12;
            }
            iVar5 = iVar5 + 1;
            piVar11 = piVar11 + 1;
          } while (iVar5 <= local_b30);
        }
      }
    }
    if (3 < param_5) {
      FUN_007a6628(&DAT_0087cb88,s__6d_unresolved_strings_008391f0,local_b44);
    }
    local_b4c = local_b4c * 2;
    if ((param_4 < local_b4c) || (local_b44 == (int *)0x0)) {
      if (3 < param_5) {
        FUN_007a6628(&DAT_0087cb88,s_reconstructing_block_____008391cc);
      }
      iVar5 = 0;
      if (0 < param_4) {
        do {
          piVar11 = local_400 + iVar5;
          iVar9 = local_400[iVar5];
          while (iVar9 == 0) {
            piVar15 = piVar11 + 1;
            piVar11 = piVar11 + 1;
            iVar5 = iVar5 + 1;
            iVar9 = *piVar15;
          }
          iVar9 = *param_1;
          param_1 = param_1 + 1;
          param_4 = param_4 + -1;
          local_400[iVar5] = local_400[iVar5] + -1;
          *(char *)(param_2 + iVar9) = (char)iVar5;
        } while (param_4 != 0);
        if (0xff < iVar5) {
          FUN_0041b650(0x3ed);
        }
      }
      return;
    }
  } while( true );
}


