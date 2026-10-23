// FUN_006dc3f0 @ 6dc3f0 size=1178

void __fastcall FUN_006dc3f0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  bool bVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int local_330;
  int local_32c;
  int iStack_328;
  int iStack_324;
  undefined4 *puStack_320;
  undefined1 local_31c [8];
  undefined1 local_314 [8];
  undefined1 local_30c [256];
  undefined1 local_20c [256];
  undefined1 local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d997e;
  pvStack_c = ExceptionList;
  local_32c = 100;
  ExceptionList = &pvStack_c;
  if (*(char *)(DAT_00d685a6 + 0x57c) != '\0') {
    bVar15 = false;
    ExceptionList = &pvStack_c;
    *(undefined1 *)(*(int *)(param_1 + 0x84) + 0x5c) = 0;
    piVar2 = *(int **)(DAT_00d615b2 + 8);
    if (piVar2 != (int *)0x0) {
      do {
        iVar10 = *piVar2;
        piVar2 = (int *)piVar2[2];
        iVar12 = (&DAT_0089cad8)[*(int *)(iVar10 + 0x1256)];
        cVar1 = FUN_00712730();
        if ((cVar1 != '\0') && (iVar12 != 0)) {
          DAT_00d1b5d0._0_1_ = 0;
          uVar3 = FUN_004af740(*(undefined4 *)(iVar10 + 0x1256));
          FUN_007a630a(local_30c,&DAT_0086d404,iVar10 + 0x1028,uVar3);
          FUN_00436a00(local_30c,0,1,&DAT_0088f28c);
          if (0 < *(short *)(iVar10 + 0x123e)) {
            FUN_00791b3b(local_20c,(char *)(iVar10 + 0x123a));
            pcVar4 = (char *)FUN_00712010(local_31c);
            if ((((pcVar4[1] == *(char *)(iVar10 + 0x123b)) &&
                 (pcVar4[2] == *(char *)(iVar10 + 0x123c))) &&
                (*(short *)(pcVar4 + 4) == *(short *)(iVar10 + 0x123e))) &&
               (*pcVar4 == *(char *)(iVar10 + 0x123a))) {
              puVar17 = local_20c;
              uVar3 = FUN_0042b6c9(s_AT_DATE_0086d3ec);
              FUN_007a630a(local_30c,uVar3,puVar17);
            }
            else {
              uVar3 = FUN_00712010(local_314);
              FUN_00791b3b(local_10c,uVar3);
              puVar17 = local_10c;
              puVar16 = local_20c;
              uVar3 = FUN_0042b6c9(s_BETWEEN_DATE_0086d3f4);
              FUN_007a630a(local_30c,uVar3,puVar16,puVar17);
            }
            FUN_00436a00(local_30c,0,1,&DAT_0088f28c);
          }
          DAT_00d13364 = '\0';
          (**(code **)(*(int *)(iVar10 + 0x125a) + 0x34))(iVar12,&DAT_00d13364,0,0);
          uVar9 = 0xffffffff;
          pcVar4 = &DAT_00d13364;
          do {
            pcVar14 = pcVar4;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar14 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar14;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          iVar10 = -1;
          pcVar4 = (char *)&DAT_00d1b5d0;
          do {
            pcVar13 = pcVar4;
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            pcVar13 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar13;
          } while (cVar1 != '\0');
          pcVar4 = pcVar14 + -uVar9;
          pcVar14 = pcVar13 + -1;
          for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar14 = pcVar14 + 4;
          }
          bVar15 = DAT_00d13364 == '\0';
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar14 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar14 = pcVar14 + 1;
          }
          if (bVar15) {
            pcVar4 = (char *)FUN_0042b6c9(s_NO_TRIGGERS_IN_GAME_0086d3d8);
            uVar9 = 0xffffffff;
            do {
              pcVar14 = pcVar4;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar14 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar14;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            iVar10 = -1;
            pcVar4 = (char *)&DAT_00d1b5d0;
            do {
              pcVar13 = pcVar4;
              if (iVar10 == 0) break;
              iVar10 = iVar10 + -1;
              pcVar13 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar13;
            } while (cVar1 != '\0');
            pcVar4 = pcVar14 + -uVar9;
            pcVar14 = pcVar13 + -1;
            for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
              pcVar4 = pcVar4 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar14 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              pcVar14 = pcVar14 + 1;
            }
          }
          FUN_004361a0(&DAT_00d1b5d0);
          puVar5 = operator_new(0x36);
          uStack_4 = 0;
          puVar8 = (undefined4 *)0x0;
          puStack_320 = puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            FUN_00433f00();
            *(undefined4 *)((int)puVar5 + 0x2e) = 2;
            *(undefined4 *)((int)puVar5 + 0x32) = 0x118;
            *puVar5 = &PTR_FUN_007f0a14;
            puVar5[2] = &PTR_LAB_007f0a10;
            *(undefined2 *)(puVar5 + 3) = 0xffff;
            puVar8 = puVar5;
          }
          iVar10 = *(int *)(param_1 + 0x84);
          uStack_4 = 0xffffffff;
          iVar12 = *(int *)(iVar10 + 8);
          puVar5 = operator_new(0xe);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = puVar8;
            puVar5[1] = iVar12;
            puVar5[2] = 0;
            *(undefined1 *)(puVar5 + 3) = 0;
          }
          iVar6 = *(int *)(iVar10 + 0xc);
          *(undefined4 **)(iVar10 + 8) = puVar5;
          *(int *)(iVar10 + 0xc) = iVar6 + 1;
          if (iVar6 == 0) {
            *(undefined4 **)(iVar10 + 4) = puVar5;
          }
          else {
            *(undefined4 **)(iVar12 + 8) = puVar5;
          }
          bVar15 = true;
        }
      } while (piVar2 != (int *)0x0);
      local_330 = 0;
      if (bVar15) goto LAB_006dc70d;
    }
    uVar3 = FUN_0042b6c9(s_NO_END_POSSIBLE_0086d3c8);
    FUN_004361a0(uVar3);
  }
LAB_006dc70d:
  piVar2 = (int *)(param_1 + 0x74);
  iVar10 = 6;
  do {
    iVar12 = *(int *)(*(int *)(*piVar2 + 0x56) + 0x10);
    iVar6 = (**(code **)(*(int *)*piVar2 + 4))();
    iVar6 = iVar6 * iVar12;
    iVar12 = *(int *)(*piVar2 + 0x2a);
    if (iVar6 - iVar12 != 0 && iVar12 <= iVar6) {
      iVar6 = iVar12;
    }
    piVar2 = piVar2 + 1;
    iVar10 = iVar10 + -1;
    local_32c = local_32c + 5 + iVar6;
  } while (iVar10 != 0);
  iStack_328 = (*(int *)(DAT_00bd1bac + 4) + -0x100) / 2 + -0xa0;
  iStack_324 = *(int *)(DAT_00bd1bac + 8) / 2 - local_32c / 2;
  FUN_00441c10(&iStack_328,0x140,local_32c,0x10,0xff,0);
  iVar10 = 8;
  *(int *)(param_1 + 0x68) = local_32c + -0x2e;
  piVar2 = (int *)(param_1 + 0x6c);
  do {
    FUN_00434f70(*(undefined4 *)(param_1 + 0x10));
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  FUN_006dc890(*(undefined4 *)(param_1 + 0x60));
  iVar10 = 0x11;
  iVar12 = 0;
  do {
    if (iVar12 < 5) {
      (**(code **)(*(int *)*piVar2 + 0x34))(0x50,iVar10);
    }
    else {
      (**(code **)(*(int *)*piVar2 + 0x34))(0x10,iVar10);
    }
    if (iVar12 != 6) {
      (**(code **)(*(int *)(*piVar2 + 0x12) + 0x10))(0);
    }
    iVar6 = (**(code **)(*(int *)*piVar2 + 4))();
    iVar12 = iVar12 + 1;
    piVar2 = piVar2 + 1;
    iVar10 = iVar10 + 5 + iVar6 * local_330;
  } while (iVar12 < 8);
  iVar10 = *(int *)(param_1 + 0x10);
  pvVar7 = operator_new((*(int *)(iVar10 + 0x18) / *(int *)(iVar10 + 0xc)) * *(int *)(iVar10 + 8) *
                        2);
  piVar2 = *(int **)(param_1 + 0x10);
  *(void **)(param_1 + 100) = pvVar7;
  iVar10 = piVar2[6];
  iVar12 = piVar2[2];
  puVar8 = (undefined4 *)(**(code **)(*piVar2 + 8))();
  puVar5 = *(undefined4 **)(param_1 + 100);
  for (uVar9 = (uint)(iVar12 * iVar10) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar5 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar9 = iVar12 * iVar10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
  FUN_006d4270(param_1);
  ExceptionList = pvStack_c;
  return;
}


