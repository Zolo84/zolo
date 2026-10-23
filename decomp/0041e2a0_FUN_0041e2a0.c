// FUN_0041e2a0 @ 41e2a0 size=1280

void FUN_0041e2a0(int param_1,char param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int local_114;
  int *local_110;
  char local_100 [256];
  
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    uVar8 = ~*(uint *)(param_1 + 0x260);
    uVar5 = (*(uint *)(param_1 + 0x264) >> 0x1f | *(uint *)(param_1 + 0x264) * 2) ^ uVar8;
    *(uint *)(param_1 + 0x260) = uVar8;
    *(uint *)(param_1 + 0x264) = uVar5;
    if (1 < *(int *)(param_1 + 0x26c)) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    if (1 < *(int *)(param_1 + 0x268)) {
      FUN_007a6628(&DAT_0087cb88,s_block__d__crc___0x_8x__combined_C_008395c8,
                   *(int *)(param_1 + 0x26c),uVar8,uVar5,*(int *)(param_1 + 0x44));
    }
    FUN_00419b50(param_1);
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x26c) == 1) {
    *(undefined4 *)(param_1 + 0x25c) = 0;
    *(undefined4 *)(param_1 + 600) = 0;
    FUN_0041e7a0(param_1,8,0x42);
    FUN_0041e7a0(param_1,8,0x5a);
    FUN_0041e7a0(param_1,8,0x68);
    FUN_0041e7a0(param_1,8,*(char *)(param_1 + 0x270) + '0');
  }
  if (0 < *(int *)(param_1 + 0x44)) {
    FUN_0041e7a0(param_1,8,0x31);
    FUN_0041e7a0(param_1,8,0x41);
    FUN_0041e7a0(param_1,8,0x59);
    FUN_0041e7a0(param_1,8,0x26);
    FUN_0041e7a0(param_1,8,0x53);
    FUN_0041e7a0(param_1,8,0x59);
    uVar5 = *(uint *)(param_1 + 0x260);
    FUN_0041e7a0(param_1,8,uVar5 >> 0x18);
    FUN_0041e7a0(param_1,8,uVar5 >> 0x10 & 0xff);
    FUN_0041e7a0(param_1,8,uVar5 >> 8 & 0xff);
    FUN_0041e7a0(param_1,8,uVar5 & 0xff);
    iVar9 = *(int *)(param_1 + 0x25c);
    while (7 < iVar9) {
      *(char *)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x2c)) =
           (char)((uint)*(undefined4 *)(param_1 + 600) >> 0x18);
      iVar9 = *(int *)(param_1 + 0x25c) + -8;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      *(int *)(param_1 + 600) = *(int *)(param_1 + 600) << 8;
      *(int *)(param_1 + 0x25c) = iVar9;
    }
    iVar3 = *(int *)(param_1 + 0x25c);
    iVar9 = iVar3 + 1;
    iVar10 = *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x25c) = iVar9;
    *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 0 << (0x1fU - (char)iVar3 & 0x1f);
    while (7 < iVar9) {
      *(char *)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x2c)) =
           (char)((uint)*(undefined4 *)(param_1 + 600) >> 0x18);
      iVar9 = *(int *)(param_1 + 0x25c) + -8;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      *(int *)(param_1 + 600) = *(int *)(param_1 + 600) << 8;
      *(int *)(param_1 + 0x25c) = iVar9;
    }
    iVar9 = *(int *)(param_1 + 0x25c);
    iVar3 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x25c) = iVar9 + 0x18;
    iVar4 = *(int *)(param_1 + 0x24);
    *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | iVar10 << (8U - (char)iVar9 & 0x1f);
    local_110 = *(int **)(param_1 + 0x20);
    FUN_0041e830(param_1);
    iVar9 = *(int *)(param_1 + 0x54) + 1;
    if (-1 < iVar9) {
      puVar14 = (undefined4 *)(param_1 + 0x278);
      for (iVar10 = *(int *)(param_1 + 0x54) + 2; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
    }
    iVar10 = *(int *)(param_1 + 0x54);
    iVar15 = 0;
    iVar12 = 0;
    iVar6 = 0;
    local_114 = 0;
    if (0 < iVar10) {
      do {
        local_100[iVar6] = (char)iVar6;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar10);
    }
    iVar10 = *(int *)(param_1 + 0x44);
    if (0 < iVar10) {
      do {
        cVar2 = local_100[1];
        iVar6 = *local_110 + -1;
        if (iVar6 < 0) {
          iVar6 = iVar6 + iVar10;
        }
        cVar1 = *(char *)(*(byte *)(iVar6 + iVar4) + 0x158 + param_1);
        if (local_100[0] == cVar1) {
          iVar12 = iVar12 + 1;
          local_114 = iVar12;
        }
        else {
          if (0 < iVar12) {
            uVar5 = iVar12 - 1;
            puVar11 = (undefined2 *)(iVar3 + iVar15 * 2);
            while( true ) {
              if ((uVar5 & 1) == 0) {
                *puVar11 = 0;
                *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 1;
              }
              else {
                *puVar11 = 1;
                *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0x27c) + 1;
              }
              iVar15 = iVar15 + 1;
              puVar11 = puVar11 + 1;
              if ((int)uVar5 < 2) break;
              uVar5 = (int)(uVar5 - 2) / 2;
            }
            local_114 = 0;
            iVar12 = 0;
          }
          local_100[1] = local_100[0];
          pcVar7 = local_100 + 1;
          local_100[0] = cVar2;
          while (cVar1 != local_100[0]) {
            pcVar7 = pcVar7 + 1;
            cVar2 = *pcVar7;
            *pcVar7 = local_100[0];
            iVar12 = local_114;
            local_100[0] = cVar2;
          }
          iVar10 = (int)pcVar7 - (int)local_100;
          iVar15 = iVar15 + 1;
          *(short *)(iVar3 + -2 + iVar15 * 2) = (short)iVar10 + 1;
          *(int *)(param_1 + 0x27c + iVar10 * 4) = *(int *)(param_1 + 0x27c + iVar10 * 4) + 1;
        }
        iVar10 = *(int *)(param_1 + 0x44);
        iVar13 = iVar13 + 1;
        local_110 = local_110 + 1;
      } while (iVar13 < iVar10);
      if (0 < iVar12) {
        uVar5 = iVar12 - 1;
        puVar11 = (undefined2 *)(iVar3 + iVar15 * 2);
        while( true ) {
          if ((uVar5 & 1) == 0) {
            *puVar11 = 0;
            *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 1;
          }
          else {
            *puVar11 = 1;
            *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0x27c) + 1;
          }
          iVar15 = iVar15 + 1;
          puVar11 = puVar11 + 1;
          if ((int)uVar5 < 2) break;
          uVar5 = (int)(uVar5 - 2) / 2;
        }
      }
    }
    *(short *)(iVar3 + iVar15 * 2) = (short)iVar9;
    *(int *)(param_1 + 0x278 + iVar9 * 4) = *(int *)(param_1 + 0x278 + iVar9 * 4) + 1;
    *(int *)(param_1 + 0x274) = iVar15 + 1;
    FUN_0041e860(param_1);
  }
  if (param_2 != '\0') {
    FUN_0041e7a0(param_1,8,0x17);
    FUN_0041e7a0(param_1,8,0x72);
    FUN_0041e7a0(param_1,8,0x45);
    FUN_0041e7a0(param_1,8,0x38);
    FUN_0041e7a0(param_1,8,0x50);
    FUN_0041e7a0(param_1,8,0x90);
    uVar5 = *(uint *)(param_1 + 0x264);
    FUN_0041e7a0(param_1,8,uVar5 >> 0x18);
    FUN_0041e7a0(param_1,8,uVar5 >> 0x10 & 0xff);
    FUN_0041e7a0(param_1,8,uVar5 >> 8 & 0xff);
    FUN_0041e7a0(param_1,8,uVar5 & 0xff);
    if (1 < *(int *)(param_1 + 0x268)) {
      FUN_007a6628(&DAT_0087cb88,s_final_combined_CRC___0x_x_008395a4,
                   *(undefined4 *)(param_1 + 0x264));
    }
    iVar13 = *(int *)(param_1 + 0x25c);
    while (0 < iVar13) {
      *(char *)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x2c)) =
           (char)((uint)*(undefined4 *)(param_1 + 600) >> 0x18);
      iVar13 = *(int *)(param_1 + 0x25c) + -8;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      *(int *)(param_1 + 600) = *(int *)(param_1 + 600) << 8;
      *(int *)(param_1 + 0x25c) = iVar13;
    }
  }
  return;
}


