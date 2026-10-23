// FUN_004e0600 @ 4e0600 size=1310

undefined4 FUN_004e0600(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined3 uVar5;
  undefined4 uVar4;
  undefined3 extraout_var;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  FUN_004c7c48();
  FUN_00426250(&DAT_00dc4a5c);
  FUN_004266f0();
  FUN_00426330(1);
  iVar9 = 0;
  if (0 < DAT_00877690) {
    piVar6 = &DAT_00ab27b8;
    do {
      FUN_004e3c30();
      FUN_004ea860(iVar9);
      iVar10 = DAT_00877690;
      *piVar6 = iVar9;
      iVar9 = iVar9 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar9 < iVar10);
  }
  FUN_004c7d2b();
  FUN_004cc25e();
  FUN_007a78e3(&DAT_00ab27b8,DAT_00877690,4,&LAB_004e0b20);
  *(undefined1 *)(DAT_00ab27b4 + 0x3b0) = 0;
  FUN_004e8a40(0);
  FUN_004e8a40(0x18);
  FUN_004e8a40(0x19);
  FUN_004e8a40(0x18);
  FUN_004e8a40(0x19);
  FUN_004e8a10(0);
  FUN_004e8a10(1);
  FUN_004e8a10(1);
  FUN_004e8a10(0);
  FUN_004e8a10(0);
  (**(code **)(*(int *)(DAT_00ab27b4 + 0xc + DAT_00877690 * 0x4b2) + 8))(4,DAT_00877690);
  (**(code **)(*(int *)(DAT_00ab27b4 + 0x4be + DAT_00877690 * 0x4b2) + 8))(4,DAT_00877690 + 1);
  (**(code **)(*(int *)(DAT_00ab27b4 + 0x970 + DAT_00877690 * 0x4b2) + 8))(4,DAT_00877690 + 2);
  (**(code **)(*(int *)(DAT_00ab27b4 + 0xe22 + DAT_00877690 * 0x4b2) + 8))(4,DAT_00877690 + 3);
  FUN_004e0b60(&DAT_00dc3b04);
  FUN_004e3dc0();
  FUN_004ed730();
  iVar9 = 0;
  if (0 < *(int *)(DAT_00ab27b4 + 0x290)) {
    iVar10 = 0;
    do {
      iVar11 = *(int *)(*(int *)(DAT_00ab27b4 + 0x298) + iVar10);
      uVar3 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar11 * 0x4b2) + 0xc))(iVar11);
      FUN_00429a00(s_ERROR___Province__s__id__d__is_c_00847bc4,uVar3);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0xc;
    } while (iVar9 < *(int *)(DAT_00ab27b4 + 0x290));
  }
  uVar5 = (undefined3)((uint)DAT_00ab27b4 >> 8);
  if (DAT_00dc4b5f != '\0') {
    FUN_00429a00(s_________ADJACENT_PROVINCES_REPOR_00847b94);
    iVar9 = 0;
    if (0 < DAT_00877690) {
      iVar10 = 0;
      do {
        iVar11 = iVar9;
        uVar3 = (**(code **)(*(int *)(DAT_00ab27b4 + iVar10) + 0xc))
                          (*(undefined4 *)(DAT_00ab27b4 + 0x290 + iVar10));
        FUN_00429a00(s___d___s_____d__00847b80,iVar9,uVar3);
        iVar7 = 0;
        if (0 < *(int *)(iVar10 + 0x290 + DAT_00ab27b4)) {
          iVar8 = 0;
          iVar9 = iVar11;
          do {
            iVar11 = *(int *)(iVar10 + 0x298 + DAT_00ab27b4);
            uVar3 = (**(code **)(*(int *)(DAT_00ab27b4 + *(int *)(iVar11 + iVar8) * 0x4b2) + 0xc))()
            ;
            FUN_00429a00(s___d__s_00847b74,*(undefined4 *)(iVar11 + iVar8),uVar3);
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + 0xc;
          } while (iVar7 < *(int *)(iVar10 + 0x290 + DAT_00ab27b4));
        }
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 0x4b2;
      } while (iVar9 < DAT_00877690);
    }
    FUN_00429a00(s_________ADJACENT_PROVINCES_REPOR_00847b40);
    FUN_00429a00(s_________LIST_PROVINCES_BY_CONTIN_00847b10);
    iVar9 = 0;
    piVar6 = &DAT_008ea228;
    do {
      uVar3 = (**(code **)(*piVar6 + 4))();
      uVar3 = FUN_004c7c2e(iVar9,iVar9,uVar3);
      FUN_00429a00(s___s___d_____d__00847afc,uVar3);
      piVar2 = (int *)piVar6[1];
      while (piVar2 != (int *)0x0) {
        piVar1 = (int *)piVar2[2];
        uVar3 = *(undefined4 *)(*piVar2 + 0x12);
        uVar4 = (**(code **)(*(int *)*piVar2 + 0xc))();
        FUN_00429a00(s___d__s_00847b74,uVar3,uVar4);
        piVar2 = piVar1;
      }
      piVar6 = (int *)((int)piVar6 + 0x12);
      iVar9 = iVar9 + 1;
    } while ((int)piVar6 < 0x8ea2a6);
    FUN_00429a00(s_________LIST_PROVINCES_BY_CONTIN_00847ac8);
    FUN_00429a00(s_________LIST_PROVINCES_BY_REGION_00847a98);
    iVar9 = 0;
    piVar6 = &DAT_008e9778;
    do {
      uVar3 = (**(code **)(*piVar6 + 4))();
      uVar3 = FUN_004c7c14(iVar9,iVar9,uVar3);
      FUN_00429a00(s___s___d_____d__00847afc,uVar3);
      piVar2 = (int *)piVar6[1];
      while (piVar2 != (int *)0x0) {
        piVar1 = (int *)piVar2[2];
        uVar3 = *(undefined4 *)(*piVar2 + 0x12);
        uVar4 = (**(code **)(*(int *)*piVar2 + 0xc))();
        FUN_00429a00(s___d__s_00847b74,uVar3,uVar4);
        piVar2 = piVar1;
      }
      piVar6 = (int *)((int)piVar6 + 0x12);
      iVar9 = iVar9 + 1;
    } while ((int)piVar6 < 0x8ea228);
    FUN_00429a00(s_________LIST_PROVINCES_BY_REGION_00847a64);
    FUN_00429a00(s_________LIST_PROVINCES_BY_AREAS___00847a38);
    iVar9 = 0;
    piVar6 = &DAT_008ea368;
    do {
      uVar3 = (**(code **)(*piVar6 + 4))();
      uVar3 = FUN_004c7bfa(iVar9,iVar9,uVar3);
      FUN_00429a00(s___s___d_____d__00847afc,uVar3);
      piVar2 = (int *)piVar6[1];
      while (piVar2 != (int *)0x0) {
        piVar1 = (int *)piVar2[2];
        uVar3 = *(undefined4 *)(*piVar2 + 0x12);
        uVar4 = (**(code **)(*(int *)*piVar2 + 0xc))();
        FUN_00429a00(s___d__s_00847b74,uVar3,uVar4);
        piVar2 = piVar1;
      }
      piVar6 = (int *)((int)piVar6 + 0x12);
      iVar9 = iVar9 + 1;
    } while ((int)piVar6 < 0x8ece04);
    FUN_00429a00(s_________LIST_PROVINCES_BY_AREAS_E_00847a08);
    uVar5 = extraout_var;
  }
  return CONCAT31(uVar5,1);
}


