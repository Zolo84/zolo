// FUN_005fce40 @ 5fce40 size=1958

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005fce40(int param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  char cVar9;
  int *piVar10;
  undefined2 *puVar11;
  int iVar12;
  char *pcVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  char *pcVar22;
  undefined2 uStack_114;
  undefined4 uStack_112;
  char acStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cf61a;
  pvStack_c = ExceptionList;
  iVar12 = (&DAT_0089cad8)[*(int *)(param_1 + 0xa4)];
  ExceptionList = &pvStack_c;
  FUN_00433930();
  FUN_00433930();
  FUN_00433930();
  FUN_00433930();
  iVar15 = *(int *)(param_1 + 0x98);
  piVar10 = *(int **)(iVar15 + 4);
  while (piVar10 != (int *)0x0) {
    piVar17 = (int *)piVar10[2];
    if ((undefined4 *)*piVar10 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar10)(1);
    }
    FUN_00796cd8(piVar10);
    piVar10 = piVar17;
  }
  *(undefined4 *)(iVar15 + 4) = 0;
  *(undefined4 *)(iVar15 + 8) = 0;
  *(undefined4 *)(iVar15 + 0xc) = 0;
  switch(*(undefined4 *)(param_1 + 0x7e)) {
  case 0:
    FUN_00433950();
    if (_DAT_00d7cb2c == _DAT_007e3374) {
      cVar9 = FUN_0044b300(*(undefined4 *)((&DAT_0089cad8)[*(int *)(param_1 + 0xa0)] + 6));
      if (((cVar9 == '\0') &&
          (iVar15 = (&DAT_0089cad8)[*(int *)(param_1 + 0xa0)],
          *(int *)(*(int *)(iVar12 + 0x12da) + 0x3b30) != *(int *)(iVar15 + 6))) &&
         (*(int *)(*(int *)(iVar15 + 0x12da) + 0x3b30) != *(int *)(iVar12 + 6))) {
        puVar18 = *(undefined4 **)(iVar15 + 0xe892);
      }
      else {
        puVar18 = *(undefined4 **)((&DAT_0089cad8)[*(int *)(param_1 + 0xa0)] + 0xe8a4);
      }
    }
    else {
      puVar18 = *(undefined4 **)((&DAT_0089cad8)[*(int *)(param_1 + 0xa0)] + 0xe892);
    }
    if (puVar18 != (undefined4 *)0x0) {
LAB_005fcfa0:
      puVar1 = (undefined4 *)puVar18[2];
      piVar10 = (int *)FUN_004e9370(*puVar18);
      iVar15 = (&DAT_0089cad8)[*(int *)(param_1 + 0xa0)];
      if ((((*(int *)(iVar15 + 0x117de) != *(int *)((int)piVar10 + 0x12)) &&
           (iVar15 == piVar10[0xf6])) && (cVar9 = FUN_004e8ab0(iVar15), cVar9 == '\0')) &&
         (((piVar10[0xf5] == (&DAT_0089cad8)[*(int *)(param_1 + 0xa0)] ||
           (cVar9 = FUN_004e8ab0(iVar12), cVar9 != '\0')) || (piVar10[0xf5] == iVar12)))) {
        piVar17 = *(int **)(*(int *)(param_1 + 0x9c) + 4);
        do {
          if (piVar17 == (int *)0x0) {
            puVar18 = operator_new(0x148);
            uStack_4 = 0;
            if (puVar18 == (undefined4 *)0x0) {
              puVar18 = (undefined4 *)0x0;
              goto LAB_005fd10a;
            }
            uVar14 = *(undefined4 *)((int)piVar10 + 0x12);
            uVar6 = *(undefined4 *)(param_1 + 0x98);
            uVar7 = *(undefined4 *)(param_1 + 0x9c);
            pcVar13 = (char *)(**(code **)(*piVar10 + 0xc))();
            FUN_00433f00();
            uVar19 = 0xffffffff;
            *puVar18 = &PTR_FUN_007ee304;
            puVar18[2] = &PTR_LAB_007ee300;
            goto code_r0x005fd0b2;
          }
          piVar3 = piVar17 + 2;
          iVar15 = *piVar17;
          piVar17 = (int *)*piVar3;
        } while ((*(int *)(iVar15 + 0x13e) != 0) ||
                (*(int *)(iVar15 + 0x136) != *(int *)((int)piVar10 + 0x12)));
      }
      goto LAB_005fd129;
    }
    break;
  case 1:
    FUN_00433950();
    if ((*(char *)(*(int *)(param_1 + 0xae) + 0x86) == '\0') &&
       (puVar11 = *(undefined2 **)((&DAT_0089cad8)[*(int *)(param_1 + 0xa0)] + 0x360c),
       *(undefined2 **)((&DAT_0089cad8)[*(int *)(param_1 + 0xa0)] + 0x360c) != (undefined2 *)0x0)) {
LAB_005fd17a:
      puVar2 = *(undefined2 **)(puVar11 + 5);
      uStack_114 = *puVar11;
      uStack_112 = *(undefined4 *)(puVar11 + 1);
      iVar12 = FUN_00428460(&uStack_114);
      if ((iVar12 != 0) &&
         ((piVar10 = (int *)(iVar12 + -8), piVar10 != (int *)0x0 &&
          (cVar9 = FUN_0049edb0(piVar10), cVar9 != '\0')))) {
        piVar17 = *(int **)(*(int *)(param_1 + 0x9c) + 4);
        do {
          if (piVar17 == (int *)0x0) {
            puVar18 = operator_new(0x148);
            uStack_4 = 1;
            if (puVar18 == (undefined4 *)0x0) {
              puVar18 = (undefined4 *)0x0;
              goto LAB_005fd2b5;
            }
            uVar14 = *(undefined4 *)(param_1 + 0x98);
            uVar6 = *(undefined4 *)(param_1 + 0x9c);
            uVar7 = *(undefined4 *)(iVar12 + 6);
            pcVar13 = (char *)(**(code **)(*piVar10 + 0xc))();
            FUN_00433f00();
            uVar19 = 0xffffffff;
            *puVar18 = &PTR_FUN_007ee304;
            puVar18[2] = &PTR_LAB_007ee300;
            goto code_r0x005fd256;
          }
          piVar3 = piVar17 + 2;
          iVar15 = *piVar17;
          piVar17 = (int *)*piVar3;
        } while ((*(int *)(iVar15 + 0x13e) != 1) ||
                (*(int *)(iVar15 + 0x136) != *(int *)(iVar12 + 6)));
      }
      goto LAB_005fd2d4;
    }
    break;
  case 2:
    FUN_00433950();
    break;
  case 3:
    FUN_00433950();
    if (*(char *)(*(int *)(param_1 + 0xb2) + 0x86) == '\0') {
      iVar12 = (&DAT_0089cad8)[*(int *)(param_1 + 0xa0)];
      piVar10 = *(int **)(iVar12 + 0x4508);
      if ((_DAT_007e3380 < _DAT_00d7cb20) ||
         (((*(int *)(iVar12 + 0x3350) != 0 || (*(int *)(iVar12 + 6) == *(int *)(DAT_00d0ca90 + 6)))
          && (*(int *)(iVar12 + 0x3350) == *(int *)(DAT_00d0ca90 + 0x3350))))) {
joined_r0x005fd35e:
        if (piVar10 != (int *)0x0) {
          piVar17 = (int *)piVar10[2];
          iVar12 = *piVar10;
          uVar14 = FUN_0051b230();
          cVar9 = FUN_0044cc40(uVar14);
          piVar10 = piVar17;
          if (((cVar9 != '\0') &&
              ((iVar15 = FUN_00522770(), iVar15 == 0 ||
               (iVar15 = (&DAT_0089cad8)[*(int *)(param_1 + 0xa0)], iVar16 = FUN_00522770(),
               iVar16 == iVar15)))) &&
             (piVar17 = *(int **)(iVar12 + 0x26), *(int **)(iVar12 + 0x26) != (int *)0x0)) {
LAB_005fd3d1:
            piVar3 = (int *)piVar17[2];
            piVar17 = (int *)*piVar17;
            piVar8 = *(int **)(*(int *)(param_1 + 0x9c) + 4);
            do {
              if (piVar8 == (int *)0x0) {
                iVar12 = piVar17[0x22];
                if (iVar12 == 0) {
                  iVar12 = piVar17[0x4e];
                  iVar15 = piVar17[0x4c];
                  uVar14 = (**(code **)(*piVar17 + 0xc))();
                  uVar14 = FUN_004ff320(iVar15,iVar12 + 1,uVar14);
                  FUN_007a630a(acStack_10c,s___s__d___s_0085e148,uVar14);
                }
                else {
                  iVar15 = piVar17[0x4c];
                  iVar16 = piVar17[0x27];
                  iVar5 = piVar17[0x4e];
                  uVar14 = (**(code **)(*piVar17 + 0xc))();
                  uVar14 = FUN_004ff3a0(iVar12,iVar16 + 1,uVar14);
                  uVar14 = FUN_004ff320(iVar15,iVar5 + 1,uVar14);
                  FUN_007a630a(acStack_10c,s___s__d__s__d___s_0085e154,uVar14);
                }
                uVar14 = *(undefined4 *)((int)piVar17 + 0xe);
                uVar19 = piVar17[3];
                puVar18 = operator_new(0x148);
                uStack_4 = 2;
                if (puVar18 == (undefined4 *)0x0) {
                  puVar18 = (undefined4 *)0x0;
                  goto LAB_005fd582;
                }
                uVar6 = *(undefined4 *)(param_1 + 0x9c);
                uVar7 = *(undefined4 *)(param_1 + 0x98);
                FUN_00433f00();
                uVar20 = 0xffffffff;
                *puVar18 = &PTR_FUN_007ee304;
                puVar18[2] = &PTR_LAB_007ee300;
                pcVar13 = acStack_10c;
                goto code_r0x005fd526;
              }
              piVar4 = (int *)piVar8[2];
              iVar12 = *piVar8;
              piVar8 = piVar4;
            } while (((*(int *)(iVar12 + 0x13e) != 3) ||
                     (*(int *)(iVar12 + 0x136) != *(int *)((int)piVar17 + 0xe))) ||
                    (*(uint *)(iVar12 + 0x13a) != (uint)*(ushort *)(piVar17 + 3)));
            goto LAB_005fd59d;
          }
          goto joined_r0x005fd35e;
        }
      }
    }
  }
switchD_005fcee4_default:
  FUN_004353e0();
  ExceptionList = pvStack_c;
  return;
  while( true ) {
    uVar20 = uVar20 - 1;
    pcVar22 = pcVar13 + 1;
    cVar9 = *pcVar13;
    pcVar13 = pcVar22;
    if (cVar9 == '\0') break;
code_r0x005fd526:
    pcVar22 = pcVar13;
    if (uVar20 == 0) break;
  }
  uVar20 = ~uVar20;
  pcVar13 = pcVar22 + -uVar20;
  pcVar22 = (char *)((int)puVar18 + 0x36);
  for (uVar21 = uVar20 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
    *(undefined4 *)pcVar22 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar22 = pcVar22 + 4;
  }
  for (uVar20 = uVar20 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
    *pcVar22 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar22 = pcVar22 + 1;
  }
  *(undefined4 *)((int)puVar18 + 0x13e) = 3;
  *(undefined4 *)((int)puVar18 + 0x136) = uVar14;
  *(undefined4 *)((int)puVar18 + 0x32) = uVar6;
  *(undefined4 *)((int)puVar18 + 0x2e) = uVar7;
  *(undefined1 *)((int)puVar18 + 0x142) = 1;
  *(undefined1 *)((int)puVar18 + 0x143) = 0;
  puVar18[0x51] = param_1;
  *(uint *)((int)puVar18 + 0x13a) = uVar19 & 0xffff;
LAB_005fd582:
  uStack_4 = 0xffffffff;
  FUN_005fdb30(puVar18,*(undefined4 *)(param_1 + 0x98));
LAB_005fd59d:
  piVar17 = piVar3;
  if (piVar3 == (int *)0x0) goto joined_r0x005fd35e;
  goto LAB_005fd3d1;
  while( true ) {
    uVar19 = uVar19 - 1;
    pcVar22 = pcVar13 + 1;
    cVar9 = *pcVar13;
    pcVar13 = pcVar22;
    if (cVar9 == '\0') break;
code_r0x005fd256:
    pcVar22 = pcVar13;
    if (uVar19 == 0) break;
  }
  uVar19 = ~uVar19;
  pcVar13 = pcVar22 + -uVar19;
  pcVar22 = (char *)((int)puVar18 + 0x36);
  for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
    *(undefined4 *)pcVar22 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar22 = pcVar22 + 4;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *pcVar22 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar22 = pcVar22 + 1;
  }
  *(undefined4 *)((int)puVar18 + 0x13e) = 1;
  *(undefined4 *)((int)puVar18 + 0x136) = uVar7;
  *(undefined4 *)((int)puVar18 + 0x32) = uVar6;
  *(undefined4 *)((int)puVar18 + 0x2e) = uVar14;
  *(undefined1 *)((int)puVar18 + 0x142) = 1;
  *(undefined1 *)((int)puVar18 + 0x143) = 0;
  puVar18[0x51] = param_1;
  *(undefined4 *)((int)puVar18 + 0x13a) = 0;
LAB_005fd2b5:
  uStack_4 = 0xffffffff;
  FUN_005fdb30(puVar18,*(undefined4 *)(param_1 + 0x98));
LAB_005fd2d4:
  puVar11 = puVar2;
  if (puVar2 == (undefined2 *)0x0) goto switchD_005fcee4_default;
  goto LAB_005fd17a;
  while( true ) {
    uVar19 = uVar19 - 1;
    pcVar22 = pcVar13 + 1;
    cVar9 = *pcVar13;
    pcVar13 = pcVar22;
    if (cVar9 == '\0') break;
code_r0x005fd0b2:
    pcVar22 = pcVar13;
    if (uVar19 == 0) break;
  }
  uVar19 = ~uVar19;
  pcVar13 = pcVar22 + -uVar19;
  pcVar22 = (char *)((int)puVar18 + 0x36);
  for (uVar20 = uVar19 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
    *(undefined4 *)pcVar22 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar22 = pcVar22 + 4;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *pcVar22 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar22 = pcVar22 + 1;
  }
  *(undefined4 *)((int)puVar18 + 0x13e) = 0;
  *(undefined4 *)((int)puVar18 + 0x136) = uVar14;
  *(undefined4 *)((int)puVar18 + 0x32) = uVar7;
  *(undefined4 *)((int)puVar18 + 0x2e) = uVar6;
  *(undefined1 *)((int)puVar18 + 0x142) = 1;
  *(undefined1 *)((int)puVar18 + 0x143) = 0;
  puVar18[0x51] = param_1;
  *(undefined4 *)((int)puVar18 + 0x13a) = 0;
LAB_005fd10a:
  uStack_4 = 0xffffffff;
  FUN_005fdb30(puVar18,*(undefined4 *)(param_1 + 0x98));
LAB_005fd129:
  puVar18 = puVar1;
  if (puVar1 == (undefined4 *)0x0) goto switchD_005fcee4_default;
  goto LAB_005fcfa0;
}


