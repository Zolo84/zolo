// FUN_006dec60 @ 6dec60 size=1511

void __fastcall FUN_006dec60(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  bool bVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined4 uStack_348;
  int local_344;
  int iStack_338;
  int iStack_334;
  undefined **local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined1 local_320;
  undefined1 local_31c [8];
  undefined1 local_314 [8];
  undefined1 local_30c [256];
  undefined1 local_20c [256];
  undefined1 local_10c [244];
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d9b57;
  pvStack_c = ExceptionList;
  local_344 = 0x74;
  ExceptionList = &pvStack_c;
  if (*(char *)(DAT_00d685a6 + 0x57c) != '\0') {
    uStack_348 = uStack_348 & 0xffffff;
    ExceptionList = &pvStack_c;
    *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x5c) = 0;
    piVar2 = *(int **)(DAT_00d615b2 + 8);
    if (piVar2 != (int *)0x0) {
      do {
        iVar11 = *piVar2;
        piVar2 = (int *)piVar2[2];
        iVar7 = (&DAT_0089cad8)[*(int *)(iVar11 + 0x1256)];
        cVar1 = FUN_00712730();
        if ((cVar1 != '\0') && (iVar7 != 0)) {
          DAT_00d2583c._0_1_ = 0;
          uVar3 = FUN_004af740(*(undefined4 *)(iVar11 + 0x1256));
          FUN_007a630a(local_30c,&DAT_0086d404,iVar11 + 0x1028,uVar3);
          FUN_00436a00(local_30c,0,1,&DAT_0088f28c);
          if (0 < *(short *)(iVar11 + 0x123e)) {
            FUN_00791b3b(local_20c,(char *)(iVar11 + 0x123a));
            pcVar4 = (char *)FUN_00712010(local_314);
            if ((((pcVar4[1] == *(char *)(iVar11 + 0x123b)) &&
                 (pcVar4[2] == *(char *)(iVar11 + 0x123c))) &&
                (*(short *)(pcVar4 + 4) == *(short *)(iVar11 + 0x123e))) &&
               (*pcVar4 == *(char *)(iVar11 + 0x123a))) {
              puVar17 = local_20c;
              uVar3 = FUN_0042b6c9(s_AT_DATE_0086d3ec);
              FUN_007a630a(local_30c,uVar3,puVar17);
            }
            else {
              uVar3 = FUN_00712010(local_31c);
              FUN_00791b3b(local_10c,uVar3);
              puVar17 = local_10c;
              puVar16 = local_20c;
              uVar3 = FUN_0042b6c9(s_BETWEEN_DATE_0086d3f4);
              FUN_007a630a(local_30c,uVar3,puVar16,puVar17);
            }
            FUN_00436a00(local_30c,0,1,&DAT_0088f28c);
          }
          DAT_00d2e0a8 = '\0';
          (**(code **)(*(int *)(iVar11 + 0x125a) + 0x34))(iVar7,&DAT_00d2e0a8,0,0);
          uVar10 = 0xffffffff;
          pcVar4 = &DAT_00d2e0a8;
          do {
            pcVar14 = pcVar4;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar14 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar14;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          iVar11 = -1;
          pcVar4 = (char *)&DAT_00d2583c;
          do {
            pcVar13 = pcVar4;
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            pcVar13 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar13;
          } while (cVar1 != '\0');
          pcVar4 = pcVar14 + -uVar10;
          pcVar14 = pcVar13 + -1;
          for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
            pcVar4 = pcVar4 + 4;
            pcVar14 = pcVar14 + 4;
          }
          bVar15 = DAT_00d2e0a8 == '\0';
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar14 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            pcVar14 = pcVar14 + 1;
          }
          if (bVar15) {
            pcVar4 = (char *)FUN_0042b6c9(s_NO_TRIGGERS_IN_GAME_0086d3d8);
            uVar10 = 0xffffffff;
            do {
              pcVar14 = pcVar4;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar14 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar14;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            iVar11 = -1;
            pcVar4 = (char *)&DAT_00d2583c;
            do {
              pcVar13 = pcVar4;
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              pcVar13 = pcVar4 + 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar13;
            } while (cVar1 != '\0');
            pcVar4 = pcVar14 + -uVar10;
            pcVar14 = pcVar13 + -1;
            for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
              pcVar4 = pcVar4 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar14 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              pcVar14 = pcVar14 + 1;
            }
          }
          FUN_004361a0(&DAT_00d2583c);
          puVar5 = operator_new(0x36);
          local_4 = 0;
          puVar9 = (undefined4 *)0x0;
          if (puVar5 != (undefined4 *)0x0) {
            FUN_00433f00();
            *(undefined4 *)((int)puVar5 + 0x2e) = 2;
            *(undefined4 *)((int)puVar5 + 0x32) = 0x118;
            *puVar5 = &PTR_FUN_007f0a14;
            puVar5[2] = &PTR_LAB_007f0a10;
            *(undefined2 *)(puVar5 + 3) = 0xffff;
            puVar9 = puVar5;
          }
          iVar11 = *(int *)(param_1 + 0x8c);
          local_4 = 0xffffffff;
          iVar7 = *(int *)(iVar11 + 8);
          puVar5 = operator_new(0xe);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = puVar9;
            puVar5[1] = iVar7;
            puVar5[2] = 0;
            *(undefined1 *)(puVar5 + 3) = 0;
          }
          iVar6 = *(int *)(iVar11 + 0xc);
          *(undefined4 **)(iVar11 + 8) = puVar5;
          *(int *)(iVar11 + 0xc) = iVar6 + 1;
          if (iVar6 == 0) {
            *(undefined4 **)(iVar11 + 4) = puVar5;
          }
          else {
            *(undefined4 **)(iVar7 + 8) = puVar5;
          }
          uStack_348 = CONCAT13(1,(undefined3)uStack_348);
        }
      } while (piVar2 != (int *)0x0);
      if (uStack_348._3_1_ != '\0') goto LAB_006def7d;
    }
    uVar3 = FUN_0042b6c9(s_NO_END_POSSIBLE_0086d3c8);
    FUN_004361a0(uVar3);
  }
LAB_006def7d:
  local_330 = &PTR_FUN_007e5258;
  local_32c = 0;
  local_328 = 0;
  local_324 = 0;
  local_320 = 0;
  local_4 = 1;
  piVar2 = (int *)(param_1 + 0x7c);
  iVar11 = 6;
  do {
    iVar7 = *(int *)(*(int *)(*piVar2 + 0x56) + 0x10);
    iVar6 = (**(code **)(*(int *)*piVar2 + 4))();
    iVar6 = iVar6 * iVar7;
    iVar7 = *(int *)(*piVar2 + 0x2a);
    if (iVar6 - iVar7 != 0 && iVar7 <= iVar6) {
      iVar6 = iVar7;
    }
    piVar2 = piVar2 + 1;
    iVar11 = iVar11 + -1;
    local_344 = local_344 + 5 + iVar6;
  } while (iVar11 != 0);
  uVar10 = 0;
  if (*(char *)(DAT_00d685a6 + 0x57c) == '\0') {
    iVar11 = (**(code **)(**(int **)(DAT_00d615c6 + 0x22) + 4))();
    if (iVar11 != 0) {
      iVar7 = FUN_00415be0();
      local_344 = local_344 + iVar7;
    }
    uVar10 = (uint)(iVar11 != 0);
    iVar11 = (**(code **)(**(int **)(DAT_00d615ca + 0x22) + 4))();
    if (iVar11 != 0) {
      iVar11 = FUN_00415be0();
      local_344 = local_344 + iVar11;
      uVar10 = uVar10 + 1;
    }
    iVar11 = (**(code **)(**(int **)(DAT_00d615c2 + 0x22) + 4))();
    if (iVar11 != 0) {
      iVar11 = FUN_00415be0();
      local_344 = local_344 + iVar11;
      uVar10 = uVar10 + 1;
    }
  }
  iStack_338 = (*(int *)(DAT_00bd1bac + 4) + -0x100) / 2 + -0xa0;
  iStack_334 = *(int *)(DAT_00bd1bac + 8) / 2 - local_344 / 2;
  FUN_00441c10(&iStack_338,0x140,local_344,0x10,0xff,0);
  pvVar8 = operator_new(0x72);
  local_4._0_1_ = 2;
  if (pvVar8 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00434930(0x140,0,0,0);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)(param_1 + 0x120) = uVar3;
  FUN_00434f70(*(undefined4 *)(param_1 + 0x10));
  (**(code **)(**(int **)(param_1 + 0x120) + 0x34))(0,local_344 + -0x2e);
  iVar11 = FUN_00415be0();
  iVar7 = 8;
  *(uint *)(param_1 + 0x124) = (local_344 - iVar11 * uVar10) + -0x36;
  piVar2 = (int *)(param_1 + 0x74);
  do {
    FUN_00434f70(*(undefined4 *)(param_1 + 0x10));
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  FUN_006df250(*(undefined4 *)(param_1 + 0x60));
  iVar11 = 0x11;
  iVar7 = 0;
  do {
    if (iVar7 < 5) {
      (**(code **)(*(int *)*piVar2 + 0x34))(0x50,iVar11);
    }
    else {
      (**(code **)(*(int *)*piVar2 + 0x34))(0x10,iVar11);
    }
    if (iVar7 != 6) {
      (**(code **)(*(int *)(*piVar2 + 0x12) + 0x10))(0);
    }
    iVar6 = (**(code **)(*(int *)*piVar2 + 4))();
    iVar7 = iVar7 + 1;
    piVar2 = piVar2 + 1;
    iVar11 = iVar11 + 5 + iVar6 * uStack_348;
  } while (iVar7 < 8);
  iVar11 = *(int *)(param_1 + 0x10);
  pvVar8 = operator_new((*(int *)(iVar11 + 0x18) / *(int *)(iVar11 + 0xc)) * *(int *)(iVar11 + 8) *
                        2);
  piVar2 = *(int **)(param_1 + 0x10);
  *(void **)(param_1 + 0x128) = pvVar8;
  iVar11 = piVar2[6];
  iVar7 = piVar2[2];
  puVar9 = (undefined4 *)(**(code **)(*piVar2 + 8))();
  puVar5 = *(undefined4 **)(param_1 + 0x128);
  for (uVar10 = (uint)(iVar7 * iVar11) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar5 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar10 = iVar7 * iVar11 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar9;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
  FUN_004353e0();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x120) + 0x12) + 0x10))(0);
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
  FUN_006d4270(param_1);
  ExceptionList = pvStack_18;
  return;
}


