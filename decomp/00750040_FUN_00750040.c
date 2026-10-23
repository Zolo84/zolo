// FUN_00750040 @ 750040 size=1028

void __fastcall FUN_00750040(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  void *pvVar13;
  undefined4 uVar14;
  BOOL BVar15;
  uint uVar16;
  uint uVar17;
  undefined4 unaff_EBX;
  int *piVar18;
  char *pcVar19;
  undefined4 *puVar20;
  char *pcVar21;
  int **ppiVar22;
  int **ppiVar23;
  undefined4 *puVar24;
  int *piStack_1a8;
  int *local_194 [32];
  char acStack_114 [256];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007dfb13;
  pvStack_c = ExceptionList;
  piVar1 = param_1 + 0x23;
  ExceptionList = &pvStack_c;
  local_194[0] = piVar1;
  (**(code **)param_1[0x23])();
  if (param_1[0x22] == 0) {
    (**(code **)(*piVar1 + 4))();
    ExceptionList = pvStack_c;
    return;
  }
  (*(code *)**(undefined4 **)((int)param_1 + 0xaa))();
  if ((undefined4 *)param_1[0x5c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5c])(1);
  }
  FUN_00752650();
  if ((undefined4 *)param_1[0x5d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5d])(1);
  }
  piVar9 = (int *)param_1[0x1d];
  if (*(char *)((int)piVar9 + 0xa2) != '\0') {
    FUN_00433930();
  }
  (**(code **)(*piVar9 + 0x60))();
  *(undefined1 *)((int)piVar9 + 0x86) = 1;
  piVar9 = operator_new(0x72);
  iVar10 = 0;
  uStack_4 = 0;
  if (piVar9 != (int *)0x0) {
    iVar10 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar10 = FUN_00434930(0xcc,*(int *)(iVar10 + 0x10) * 0x11 + 1,0,0);
  }
  param_1[0x5d] = iVar10;
  *(undefined2 *)(iVar10 + 0x5a) = 0xffff;
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x5d] + 0x34))
            ((*(int *)(DAT_00bd1bac + 4) + -0x400 >> 1) + 0x314,
             (*(int *)(DAT_00bd1bac + 8) + -0x300 >> 1) + 0x164);
  FUN_00750450();
  iVar3 = param_1[0x22];
  iVar4 = **(int **)(iVar3 + 0x1ca);
  uVar11 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  iVar10 = *(int *)(iVar3 + 0x1ca);
  piVar8 = (int *)((int)param_1 + 0xaa);
  piVar18 = param_1;
  while (iVar4 != iVar10) {
    pcVar19 = (char *)&DAT_007f0c98;
    if (*(char **)(iVar4 + 0x18) != (char *)0x0) {
      pcVar19 = *(char **)(iVar4 + 0x18);
    }
    uVar16 = 0xffffffff;
    do {
      pcVar21 = pcVar19;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar21 = pcVar19 + 1;
      cVar2 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar2 != '\0');
    uVar16 = ~uVar16;
    pcVar19 = pcVar21 + -uVar16;
    ppiVar22 = local_194;
    for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *ppiVar22 = *(int **)pcVar19;
      pcVar19 = pcVar19 + 4;
      ppiVar22 = ppiVar22 + 1;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(char *)ppiVar22 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      ppiVar22 = (int **)((int)ppiVar22 + 1);
    }
    puVar12 = operator_new(0x50);
    pvStack_c = (void *)0x1;
    if (puVar12 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      uVar14 = *(undefined4 *)(iVar4 + 0x88);
      FUN_00433f00();
      pvStack_c._0_1_ = 2;
      *(char *)(puVar12 + 0x10) = (char)((uint)unaff_EBX >> 0x18);
      FUN_00674910(0);
      *(undefined4 *)((int)puVar12 + 0x32) = uVar11;
      uVar16 = 0xffffffff;
      *(undefined4 *)((int)puVar12 + 0x2e) = uVar14;
      ppiVar22 = local_194;
      do {
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        cVar2 = *(char *)ppiVar22;
        ppiVar22 = (int **)((int)ppiVar22 + 1);
      } while (cVar2 != '\0');
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
      *puVar12 = &PTR_FUN_007fa264;
      puVar12[2] = &PTR_LAB_007fa260;
      pvVar13 = operator_new(~uVar16);
      puVar12[0xe] = pvVar13;
      pvVar13 = operator_new(~uVar16 + 10);
      puVar12[0xf] = pvVar13;
      uVar16 = 0xffffffff;
      ppiVar22 = local_194;
      do {
        ppiVar23 = ppiVar22;
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        ppiVar23 = (int **)((int)ppiVar22 + 1);
        cVar2 = *(char *)ppiVar22;
        ppiVar22 = ppiVar23;
      } while (cVar2 != '\0');
      uVar16 = ~uVar16;
      puVar20 = (undefined4 *)((int)ppiVar23 - uVar16);
      puVar24 = (undefined4 *)puVar12[0xe];
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar24 = *puVar20;
        puVar20 = puVar20 + 1;
        puVar24 = puVar24 + 1;
      }
      for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined1 *)puVar24 = *(undefined1 *)puVar20;
        puVar20 = (undefined4 *)((int)puVar20 + 1);
        puVar24 = (undefined4 *)((int)puVar24 + 1);
      }
      FUN_00750490(puVar12[0xe]);
      FUN_00429d50(puVar12[0xe],acStack_114);
      uVar16 = 0xffffffff;
      pcVar19 = acStack_114;
      do {
        if (uVar16 == 0) break;
        uVar16 = uVar16 - 1;
        cVar2 = *pcVar19;
        pcVar19 = pcVar19 + 1;
      } while (cVar2 != '\0');
      FUN_00674d80(acStack_114,~uVar16 - 1);
      *(undefined1 *)((int)puVar12 + 0x36) = 0;
      *(undefined1 *)(puVar12 + 0xb) = 1;
      piVar18 = piVar9;
    }
    iVar10 = piVar18[0x5c];
    pvStack_c = (void *)0xffffffff;
    iVar5 = *(int *)(iVar10 + 8);
    pvVar13 = operator_new(0xe);
    pvStack_c = (void *)0x4;
    if (pvVar13 == (void *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = FUN_005926a0(puVar12,iVar5,0);
    }
    iVar6 = *(int *)(iVar10 + 0xc);
    pvStack_c = (void *)0xffffffff;
    *(undefined4 *)(iVar10 + 8) = uVar14;
    *(int *)(iVar10 + 0xc) = iVar6 + 1;
    if (iVar6 == 0) {
      *(undefined4 *)(iVar10 + 4) = uVar14;
    }
    else {
      *(undefined4 *)(iVar5 + 8) = uVar14;
    }
    FUN_0074a5d0();
    piVar1 = param_1;
    piVar8 = piStack_1a8;
    iVar10 = *(int *)(iVar3 + 0x1ca);
  }
  if ((piVar18[0x59] != 0) && (*(int *)((int)piVar18 + 0x182) != -1)) {
    piVar9 = *(int **)(piVar18[0x5c] + 4);
    do {
      if (piVar9 == (int *)0x0) goto LAB_007503e9;
      piVar7 = (int *)piVar9[2];
      iVar10 = *piVar9;
      *(undefined1 *)(iVar10 + 0x36) = 0;
      piVar9 = piVar7;
    } while (*(int *)(iVar10 + 0x2e) != *(int *)((int)piVar18 + 0x182));
    (**(code **)(*(int *)piVar18[0x5c] + 0x38))(iVar10);
    *(undefined1 *)(iVar10 + 0x36) = 1;
  }
LAB_007503e9:
  BVar15 = ReleaseMutex(*(HANDLE *)(piVar18[0x22] + 0x1f6));
  if (BVar15 == 0) {
    FUN_0074bc80(s_Releasemutex__mutex__failed__008745ec,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x95);
  }
  (**(code **)(*piVar1 + 4))();
  (**(code **)(*piVar8 + 4))();
  ExceptionList = pvStack_14;
  return;
}


