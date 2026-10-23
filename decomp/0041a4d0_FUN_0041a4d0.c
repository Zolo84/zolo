// FUN_0041a4d0 @ 41a4d0 size=3773

void FUN_0041a4d0(void)

{
  byte bVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  int iVar21;
  int iVar22;
  undefined2 *puVar23;
  int iVar24;
  int *piVar25;
  int *piVar26;
  int iStack00000008;
  int iStack0000000c;
  int iStack00000010;
  int *piStack00000014;
  int iStack00000018;
  int *piStack0000001c;
  int iStack00000028;
  int iStack0000002c;
  int iStack00000038;
  int *piStack00000044;
  int *piStack00000048;
  int *piStack0000004c;
  uint uStack00000050;
  int iStack00000054;
  int iStack00000058;
  int iStack0000005c;
  int iStack00000070;
  int iStack00000078;
  int iStack00000084;
  int in_stack_0000123c;
  byte *in_stack_00001240;
  int in_stack_00001244;
  int *in_stack_00001248;
  int in_stack_0000124c;
  int in_stack_00001250;
  int *in_stack_00001254;
  
  FUN_007a69e0();
  if (3 < in_stack_00001250) {
    FUN_007a6628();
  }
  iVar18 = 0x10001;
  piVar8 = in_stack_00001248 + 0x10000;
  do {
    *piVar8 = 0;
    piVar8 = piVar8 + -1;
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  iVar18 = in_stack_0000124c + -1;
  uVar19 = (uint)*in_stack_00001240 << 8;
  iVar9 = iVar18;
  if (2 < iVar18) {
    iVar14 = iVar18;
    puVar23 = (undefined2 *)(in_stack_00001244 + -4 + iVar18 * 2);
    do {
      puVar23[2] = 0;
      iVar9 = iVar14 + -4;
      uVar19 = (int)uVar19 >> 8 | (uint)in_stack_00001240[iVar14] << 8;
      in_stack_00001248[uVar19] = in_stack_00001248[uVar19] + 1;
      puVar23[1] = 0;
      uVar19 = (int)uVar19 >> 8 | (uint)in_stack_00001240[iVar14 + -1] << 8;
      in_stack_00001248[uVar19] = in_stack_00001248[uVar19] + 1;
      *puVar23 = 0;
      uVar19 = (int)uVar19 >> 8 | (uint)in_stack_00001240[iVar14 + -2] << 8;
      in_stack_00001248[uVar19] = in_stack_00001248[uVar19] + 1;
      puVar23[-1] = 0;
      uVar19 = (int)uVar19 >> 8 | (uint)in_stack_00001240[iVar14 + -3] << 8;
      in_stack_00001248[uVar19] = in_stack_00001248[uVar19] + 1;
      iVar14 = iVar9;
      puVar23 = puVar23 + -4;
    } while (2 < iVar9);
  }
  if (-1 < iVar9) {
    puVar23 = (undefined2 *)(in_stack_00001244 + iVar9 * 2);
    do {
      *puVar23 = 0;
      puVar23 = puVar23 + -1;
      uVar19 = (int)uVar19 >> 8 | (uint)in_stack_00001240[iVar9] << 8;
      iVar9 = iVar9 + -1;
      in_stack_00001248[uVar19] = in_stack_00001248[uVar19] + 1;
    } while (-1 < iVar9);
  }
  iVar9 = 0;
  puVar23 = (undefined2 *)(in_stack_00001244 + in_stack_0000124c * 2);
  do {
    in_stack_00001240[iVar9 + in_stack_0000124c] = in_stack_00001240[iVar9];
    *puVar23 = 0;
    iVar9 = iVar9 + 1;
    puVar23 = puVar23 + 1;
  } while (iVar9 < 0x22);
  if (3 < in_stack_00001250) {
    FUN_007a6628();
  }
  iVar9 = 0x10000;
  piVar8 = in_stack_00001248;
  do {
    piVar26 = piVar8 + 1;
    *piVar26 = *piVar26 + *piVar8;
    iVar9 = iVar9 + -1;
    piVar8 = piVar26;
  } while (iVar9 != 0);
  uVar19 = (uint)*in_stack_00001240 << 8;
  for (; 2 < iVar18; iVar18 = iVar18 + -4) {
    bVar17 = in_stack_00001240[iVar18];
    uVar3 = CONCAT11(bVar17,(char)(uVar19 >> 8));
    iVar9 = in_stack_00001248[uVar3];
    in_stack_00001248[uVar3] = iVar9 + -1;
    *(int *)(in_stack_0000123c + (iVar9 + -1) * 4) = iVar18;
    bVar1 = in_stack_00001240[iVar18 + -1];
    uVar3 = CONCAT11(bVar1,bVar17);
    iVar9 = in_stack_00001248[uVar3];
    in_stack_00001248[uVar3] = iVar9 + -1;
    *(int *)(in_stack_0000123c + (iVar9 + -1) * 4) = iVar18 + -1;
    bVar17 = in_stack_00001240[iVar18 + -2];
    uVar3 = CONCAT11(bVar17,bVar1);
    iVar9 = in_stack_00001248[uVar3];
    in_stack_00001248[uVar3] = iVar9 + -1;
    *(int *)(in_stack_0000123c + (iVar9 + -1) * 4) = iVar18 + -2;
    uVar19 = (uint)CONCAT11(in_stack_00001240[iVar18 + -3],bVar17);
    iVar9 = in_stack_00001248[uVar19];
    in_stack_00001248[uVar19] = iVar9 + -1;
    *(int *)(in_stack_0000123c + (iVar9 + -1) * 4) = iVar18 + -3;
  }
  for (; -1 < iVar18; iVar18 = iVar18 + -1) {
    uVar19 = (uint)CONCAT11(in_stack_00001240[iVar18],(char)(uVar19 >> 8));
    iVar9 = in_stack_00001248[uVar19];
    in_stack_00001248[uVar19] = iVar9 + -1;
    *(int *)(in_stack_0000123c + (iVar9 + -1) * 4) = iVar18;
  }
  piStack0000001c = (int *)&stack0x00000188;
  iVar9 = 0;
  puVar20 = (undefined4 *)&stack0x00000088;
  for (iVar18 = 0x40; iVar18 != 0; iVar18 = iVar18 + -1) {
    *puVar20 = 0;
    puVar20 = puVar20 + 1;
  }
  do {
    *piStack0000001c = iVar9;
    iVar9 = iVar9 + 1;
    piStack0000001c = piStack0000001c + 1;
  } while (iVar9 < 0x100);
  iVar18 = 1;
  do {
    iVar18 = iVar18 * 3 + 1;
  } while (iVar18 < 0x101);
  do {
    iVar18 = iVar18 / 3;
    if (iVar18 < 0x100) {
      iVar9 = iVar18 * 4;
      iStack0000002c = iVar18;
      do {
        iVar14 = *(int *)(&stack0x00000188 + iVar9);
        iVar24 = in_stack_00001248[(iVar14 + 1) * 0x100];
        iVar10 = iVar9 + iVar18 * -4;
        iVar13 = in_stack_00001248[iVar14 * 0x100];
        uVar19 = in_stack_00001248[(*(int *)(&stack0x00000188 + iVar10) + 1) * 0x100] -
                 in_stack_00001248[*(int *)(&stack0x00000188 + iVar10) * 0x100];
        iVar10 = iVar9;
        iStack00000038 = iStack0000002c;
        while ((uint)(iVar24 - iVar13) < uVar19) {
          *(undefined4 *)(&stack0x00000188 + iVar10) =
               *(undefined4 *)(&stack0x00000188 + iVar10 + iVar18 * -4);
          iStack00000038 = iStack00000038 - iVar18;
          iVar10 = iVar10 + iVar18 * -4;
          if (iStack00000038 <= iVar18 + -1) break;
          iVar21 = iVar10 + iVar18 * -4;
          uVar19 = in_stack_00001248[(*(int *)(&stack0x00000188 + iVar21) + 1) * 0x100] -
                   in_stack_00001248[*(int *)(&stack0x00000188 + iVar21) * 0x100];
        }
        iVar9 = iVar9 + 4;
        *(int *)(&stack0x00000188 + iStack00000038 * 4) = iVar14;
        iStack0000002c = iStack0000002c + 1;
      } while (iVar9 < 0x3fd);
    }
  } while (iVar18 != 1);
  iStack0000002c = 0;
  do {
    iStack00000038 = 0;
    iVar18 = *(int *)(&stack0x00000188 + iStack0000002c * 4);
    do {
      if (iStack00000038 != iVar18) {
        iVar9 = iVar18 * 0x100 + iStack00000038;
        if (((in_stack_00001248[iVar9] & 0x200000U) == 0) &&
           ((int)(in_stack_00001248[iVar9] & 0xffdfffffU) <
            (int)((in_stack_00001248[iVar9 + 1] & 0xffdfffffU) - 1))) {
          if (3 < in_stack_00001250) {
            FUN_007a6628();
          }
          iStack00000028 = 1;
          piStack0000004c = (int *)&stack0x000008ac;
          piStack00000048 = (int *)&stack0x0000071c;
          piStack00000044 = (int *)&stack0x0000058c;
          do {
            if (99 < iStack00000028) {
              FUN_0041b650();
            }
            iVar14 = piStack00000048[-1];
            piVar26 = piStack00000044 + -1;
            iVar24 = *piVar26;
            piVar8 = piStack0000004c + -1;
            iVar13 = *piVar8;
            if ((iVar14 - iVar24 < 0x14) || (0xe < iVar13)) {
              iVar13 = (iVar14 - iVar24) + 1;
              if (1 < iVar13) {
                iStack00000018 = 0;
                if (DAT_00839134 < iVar13) {
                  puVar20 = &DAT_00839134;
                  do {
                    piVar11 = puVar20 + 1;
                    puVar20 = puVar20 + 1;
                    iStack00000018 = iStack00000018 + 1;
                  } while (*piVar11 < iVar13);
                }
                iStack00000018 = iStack00000018 + -1;
                if (-1 < iStack00000018) {
                  piVar11 = &DAT_00839134 + iStack00000018;
                  do {
                    iVar21 = *piVar11;
                    iVar13 = iVar21 + iVar24;
                    iVar10 = iVar13 * 4;
                    iStack00000008 = iVar13;
                    while (iStack00000008 <= iVar14) {
                      uVar2 = *(undefined4 *)(iVar10 + in_stack_0000123c);
                      cVar6 = FUN_0041b390();
                      iVar22 = iVar10;
                      iStack0000000c = iStack00000008;
                      while (cVar6 != '\0') {
                        *(undefined4 *)(iVar22 + in_stack_0000123c) =
                             *(undefined4 *)(iVar22 + iVar21 * -4 + in_stack_0000123c);
                        iVar22 = iVar22 + iVar21 * -4;
                        iStack0000000c = iStack0000000c - iVar21;
                        if (iStack0000000c <= iVar13 + -1) break;
                        cVar6 = FUN_0041b390();
                      }
                      iVar22 = iVar10 + 4;
                      *(undefined4 *)(in_stack_0000123c + iStack0000000c * 4) = uVar2;
                      iStack0000000c = iStack00000008 + 1;
                      if (iVar14 < iStack0000000c) break;
                      uVar2 = *(undefined4 *)(iVar22 + in_stack_0000123c);
                      cVar6 = FUN_0041b390();
                      if (cVar6 != '\0') {
                        do {
                          *(undefined4 *)(iVar22 + in_stack_0000123c) =
                               *(undefined4 *)(iVar22 + iVar21 * -4 + in_stack_0000123c);
                          iVar22 = iVar22 + iVar21 * -4;
                          iStack0000000c = iStack0000000c - iVar21;
                          if (iStack0000000c <= iVar13 + -1) break;
                          cVar6 = FUN_0041b390();
                        } while (cVar6 != '\0');
                      }
                      iVar22 = iVar10 + 8;
                      *(undefined4 *)(in_stack_0000123c + iStack0000000c * 4) = uVar2;
                      iStack0000000c = iStack00000008 + 2;
                      if (iVar14 < iStack0000000c) break;
                      uVar2 = *(undefined4 *)(iVar22 + in_stack_0000123c);
                      cVar6 = FUN_0041b390();
                      while (cVar6 != '\0') {
                        iStack0000000c = iStack0000000c - iVar21;
                        *(undefined4 *)(iVar22 + in_stack_0000123c) =
                             *(undefined4 *)(iVar22 + iVar21 * -4 + in_stack_0000123c);
                        iVar22 = iVar22 + iVar21 * -4;
                        if (iStack0000000c <= iVar13 + -1) break;
                        cVar6 = FUN_0041b390();
                      }
                      iStack00000008 = iStack00000008 + 3;
                      *(undefined4 *)(in_stack_0000123c + iStack0000000c * 4) = uVar2;
                      iVar10 = iVar10 + 0xc;
                      if (*in_stack_00001254 < 0) goto LAB_0041b065;
                    }
                    iStack00000018 = iStack00000018 + -1;
                    piVar11 = piVar11 + -1;
                  } while (-1 < iStack00000018);
                }
              }
LAB_0041b065:
              iStack00000028 = iStack00000028 + -1;
              piStack00000044 = piVar26;
              piStack00000048 = piStack00000048 + -1;
              piStack0000004c = piVar8;
              if (*in_stack_00001254 < 0) break;
            }
            else {
              bVar17 = in_stack_00001240
                       [*(int *)(in_stack_0000123c + (iVar14 + iVar24 >> 1) * 4) + iVar13];
              bVar1 = in_stack_00001240[*(int *)(in_stack_0000123c + iVar14 * 4) + iVar13];
              bVar5 = in_stack_00001240[iVar13 + *(int *)(in_stack_0000123c + iVar24 * 4)];
              bVar16 = bVar1;
              if (bVar1 < bVar5) {
                bVar16 = bVar5;
                bVar5 = bVar1;
              }
              uStack00000050 = (uint)bVar16;
              iStack00000010 = iVar24;
              iVar10 = iVar14;
              iStack00000008 = iVar14;
              iStack0000000c = iVar24;
              if ((bVar17 < bVar16) && (uStack00000050 = (uint)bVar17, bVar17 < bVar5)) {
                uStack00000050 = (uint)bVar5;
              }
              while( true ) {
                piVar11 = (int *)(in_stack_0000123c + iStack00000010 * 4);
                piVar25 = (int *)(in_stack_0000123c + iStack0000000c * 4);
                while( true ) {
                  while( true ) {
                    if (iVar10 < iStack00000010) goto LAB_0041aaf3;
                    iVar21 = *piVar11;
                    if (in_stack_00001240[iVar21 + iVar13] != uStack00000050) break;
                    *piVar11 = *piVar25;
                    *piVar25 = iVar21;
                    iStack0000000c = iStack0000000c + 1;
                    iStack00000010 = iStack00000010 + 1;
                    piVar11 = piVar11 + 1;
                    piVar25 = piVar25 + 1;
                  }
                  if (0 < (int)(in_stack_00001240[iVar21 + iVar13] - uStack00000050)) break;
                  iStack00000010 = iStack00000010 + 1;
                  piVar11 = piVar11 + 1;
                }
                piVar11 = (int *)(in_stack_0000123c + iVar10 * 4);
                piVar25 = (int *)(in_stack_0000123c + iStack00000008 * 4);
                while( true ) {
                  while( true ) {
                    if (iVar10 < iStack00000010) goto LAB_0041aaf3;
                    iVar21 = *piVar11;
                    if (in_stack_00001240[iVar21 + iVar13] != uStack00000050) break;
                    *piVar11 = *piVar25;
                    *piVar25 = iVar21;
                    iStack00000008 = iStack00000008 + -1;
                    iVar10 = iVar10 + -1;
                    piVar11 = piVar11 + -1;
                    piVar25 = piVar25 + -1;
                  }
                  if ((int)(in_stack_00001240[iVar21 + iVar13] - uStack00000050) < 0) break;
                  iVar10 = iVar10 + -1;
                  piVar11 = piVar11 + -1;
                }
                if (iVar10 < iStack00000010) break;
                uVar2 = *(undefined4 *)(in_stack_0000123c + iStack00000010 * 4);
                *(undefined4 *)(in_stack_0000123c + iStack00000010 * 4) =
                     *(undefined4 *)(in_stack_0000123c + iVar10 * 4);
                *(undefined4 *)(in_stack_0000123c + iVar10 * 4) = uVar2;
                iStack00000010 = iStack00000010 + 1;
                iVar10 = iVar10 + -1;
              }
LAB_0041aaf3:
              if (iStack00000008 < iStack0000000c) {
                *piVar8 = iVar13 + 1;
              }
              else {
                iVar22 = iStack00000010 - iStack0000000c;
                iVar21 = iStack0000000c - iVar24;
                if (iVar22 <= iStack0000000c - iVar24) {
                  iVar21 = iVar22;
                }
                if (0 < iVar21) {
                  puVar20 = (undefined4 *)(in_stack_0000123c + (iStack00000010 - iVar21) * 4);
                  puVar12 = (undefined4 *)(in_stack_0000123c + iVar24 * 4);
                  do {
                    uVar2 = *puVar12;
                    *puVar12 = *puVar20;
                    *puVar20 = uVar2;
                    puVar20 = puVar20 + 1;
                    iVar21 = iVar21 + -1;
                    puVar12 = puVar12 + 1;
                  } while (iVar21 != 0);
                }
                iVar21 = iStack00000008 - iVar10;
                if (iVar14 - iStack00000008 < iStack00000008 - iVar10) {
                  iVar21 = iVar14 - iStack00000008;
                }
                if (0 < iVar21) {
                  puVar20 = (undefined4 *)(in_stack_0000123c + iStack00000010 * 4);
                  puVar12 = (undefined4 *)(in_stack_0000123c + 4 + (iVar14 - iVar21) * 4);
                  do {
                    uVar2 = *puVar20;
                    *puVar20 = *puVar12;
                    *puVar12 = uVar2;
                    puVar20 = puVar20 + 1;
                    puVar12 = puVar12 + 1;
                    iVar21 = iVar21 + -1;
                  } while (iVar21 != 0);
                }
                iStack00000070 = iVar22 + -1 + iVar24;
                iVar10 = (iVar10 - iStack00000008) + 1 + iVar14;
                iStack00000084 = iStack00000070 + 1;
                iStack00000078 = iVar10 + -1;
                iVar21 = iVar10;
                iVar22 = iVar14;
                if (iStack00000070 - iVar24 < iVar14 - iVar10) {
                  iVar21 = iVar24;
                  iVar22 = iStack00000070;
                  iVar24 = iVar10;
                  iStack00000070 = iVar14;
                }
                iVar14 = iVar21;
                iVar10 = iVar22;
                iStack00000058 = iVar13;
                iStack0000005c = iVar13 + 1;
                if (iVar22 - iVar21 < iStack00000078 - iStack00000084) {
                  iVar14 = iStack00000084;
                  iVar10 = iStack00000078;
                  iStack00000058 = iVar13 + 1;
                  iStack0000005c = iVar13;
                  iStack00000078 = iVar22;
                  iStack00000084 = iVar21;
                }
                iVar21 = iVar14;
                iVar22 = iVar10;
                iStack00000054 = iVar13;
                if (iStack00000070 - iVar24 < iVar10 - iVar14) {
                  iStack00000054 = iStack00000058;
                  iVar21 = iVar24;
                  iVar22 = iStack00000070;
                  iStack00000070 = iVar10;
                  iVar24 = iVar14;
                  iStack00000058 = iVar13;
                }
                *piVar26 = iVar24;
                piStack00000048[-1] = iStack00000070;
                *piVar8 = iStack00000054;
                *piStack00000044 = iVar21;
                *piStack00000048 = iVar22;
                *piStack0000004c = iStack00000058;
                piStack00000044[1] = iStack00000084;
                piStack00000048[1] = iStack00000078;
                piStack0000004c[1] = iStack0000005c;
                iStack00000028 = iStack00000028 + 2;
                piStack00000044 = piStack00000044 + 2;
                piStack00000048 = piStack00000048 + 2;
                piStack0000004c = piStack0000004c + 2;
              }
            }
          } while (0 < iStack00000028);
          if (*in_stack_00001254 < 0) {
            return;
          }
        }
        in_stack_00001248[iVar9] = in_stack_00001248[iVar9] | 0x200000;
      }
      iStack00000038 = iStack00000038 + 1;
    } while (iStack00000038 < 0x100);
    if ((&stack0x00000088)[iVar18] != '\0') {
      FUN_0041b650();
    }
    iVar9 = 0;
    puVar15 = (uint *)(in_stack_00001248 + iVar18);
    do {
      iVar14 = iVar9 + 4;
      *(uint *)(&stack0x00000a38 + iVar9) = *puVar15 & 0xffdfffff;
      *(uint *)(&stack0x00000e38 + iVar9) = (puVar15[1] & 0xffdfffff) - 1;
      iVar9 = iVar14;
      puVar15 = puVar15 + 0x100;
    } while (iVar14 < 0x3fd);
    piVar8 = (int *)(&stack0x00000a38 + iVar18 * 4);
    uVar19 = in_stack_00001248[iVar18 * 0x100] & 0xffdfffff;
    if ((int)uVar19 < *piVar8) {
      piVar26 = (int *)(in_stack_0000123c + uVar19 * 4);
      do {
        iVar9 = *piVar26 + -1;
        if (iVar9 < 0) {
          iVar9 = iVar9 + in_stack_0000124c;
        }
        uVar4 = (uint)in_stack_00001240[iVar9];
        if ((&stack0x00000088)[uVar4] == '\0') {
          iVar14 = *(int *)(&stack0x00000a38 + uVar4 * 4);
          *(int *)(in_stack_0000123c + iVar14 * 4) = iVar9;
          *(int *)(&stack0x00000a38 + uVar4 * 4) = iVar14 + 1;
        }
        uVar19 = uVar19 + 1;
        piVar26 = piVar26 + 1;
      } while ((int)uVar19 < *piVar8);
    }
    piVar26 = (int *)(&stack0x00000e38 + iVar18 * 4);
    iVar9 = (in_stack_00001248[(iVar18 + 1) * 0x100] & 0xffdfffffU) - 1;
    if (*piVar26 < iVar9) {
      piStack00000014 = (int *)(in_stack_0000123c + iVar9 * 4);
      do {
        iVar14 = *piStack00000014 + -1;
        if (iVar14 < 0) {
          iVar14 = iVar14 + in_stack_0000124c;
        }
        uVar19 = (uint)in_stack_00001240[iVar14];
        if ((&stack0x00000088)[uVar19] == '\0') {
          iVar24 = *(int *)(&stack0x00000e38 + uVar19 * 4);
          *(int *)(in_stack_0000123c + iVar24 * 4) = iVar14;
          *(int *)(&stack0x00000e38 + uVar19 * 4) = iVar24 + -1;
        }
        iVar9 = iVar9 + -1;
        piStack00000014 = piStack00000014 + -1;
      } while (*piVar26 < iVar9);
    }
    if (*piVar8 + -1 != *piVar26) {
      FUN_0041b650();
    }
    iVar9 = 0x100;
    puVar15 = (uint *)(in_stack_00001248 + iVar18);
    do {
      iVar9 = iVar9 + -1;
      *puVar15 = *puVar15 | 0x200000;
      puVar15 = puVar15 + 0x100;
    } while (iVar9 != 0);
    (&stack0x00000088)[iVar18] = 1;
    if (iStack0000002c < 0xff) {
      bVar17 = 0;
      uVar19 = in_stack_00001248[iVar18 * 0x100] & 0xffdfffff;
      iVar9 = (in_stack_00001248[(iVar18 + 1) * 0x100] & 0xffdfffffU) - uVar19;
      iVar18 = iVar9;
      while (0xfffe < iVar18) {
        bVar17 = bVar17 + 1;
        iVar18 = iVar9 >> (bVar17 & 0x1f);
      }
      iVar9 = iVar9 + -1;
      if (-1 < iVar9) {
        piStack00000014 = (int *)(in_stack_0000123c + (uVar19 + iVar9) * 4);
        iVar18 = iVar9;
        do {
          iVar14 = *piStack00000014;
          uVar7 = (undefined2)(iVar18 >> (bVar17 & 0x1f));
          *(undefined2 *)(in_stack_00001244 + iVar14 * 2) = uVar7;
          if (iVar14 < 0x22) {
            *(undefined2 *)(in_stack_00001244 + (iVar14 + in_stack_0000124c) * 2) = uVar7;
          }
          iVar18 = iVar18 + -1;
          piStack00000014 = piStack00000014 + -1;
        } while (-1 < iVar18);
      }
      if (0xffff < iVar9 >> (bVar17 & 0x1f)) {
        FUN_0041b650();
      }
    }
    iStack0000002c = iStack0000002c + 1;
    if (0xff < iStack0000002c) {
      if (3 < in_stack_00001250) {
        FUN_007a6628();
      }
      return;
    }
  } while( true );
}


