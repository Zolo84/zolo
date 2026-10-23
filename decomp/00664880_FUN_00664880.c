// FUN_00664880 @ 664880 size=362

undefined4 __thiscall FUN_00664880(int param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iStack_10;
  
  iVar7 = (**(code **)(*(int *)(param_1 + 0xde) + 4))();
  if (iVar7 == 0) {
    return 1;
  }
  iVar7 = (**(code **)(*(int *)(param_1 + 0xde) + 4))();
  if (iVar7 < 2) {
    return **(undefined4 **)(param_1 + 0xe2);
  }
  iStack_10 = 999999;
  puVar4 = *(undefined4 **)(param_1 + 0xe2);
  uVar5 = **(undefined4 **)(param_1 + 0xe2);
  do {
    while( true ) {
      if (puVar4 == (undefined4 *)0x0) {
        return uVar5;
      }
      puVar1 = (undefined4 *)puVar4[2];
      uVar2 = *puVar4;
      puVar4 = puVar1;
      if (param_3 != '\0') break;
LAB_006649ac:
      FUN_0044a9c0(uVar2,*(undefined4 *)(param_2 + 0xc));
      iVar7 = __ftol();
      if (iVar7 < iStack_10) {
        uVar5 = uVar2;
        iStack_10 = iVar7;
      }
    }
    iVar7 = FUN_004e9370(uVar2);
    iVar7 = FUN_004e9370(*(undefined4 *)(iVar7 + 0x3dc));
    if (iVar7 == 0) goto LAB_006649ac;
    iVar7 = FUN_004e9370(uVar2);
    iVar7 = FUN_004e9370(*(undefined4 *)(iVar7 + 0x3dc));
    uVar3 = *(undefined4 *)(iVar7 + 0x12);
    piVar11 = (int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x1aa);
    cVar6 = (**(code **)(*piVar11 + 0x24))(uVar3);
    if (cVar6 != '\0') goto LAB_006649ac;
    iVar7 = FUN_004e9370(uVar3);
    iVar9 = 0;
    if (0 < *(int *)(iVar7 + 0x290)) {
      iVar10 = 0;
      do {
        iVar8 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar7 + 0x298) + iVar10));
        cVar6 = (**(code **)(*piVar11 + 0x24))(*(undefined4 *)(iVar8 + 0x12));
        if (cVar6 != '\0') goto LAB_006649ac;
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar9 < *(int *)(iVar7 + 0x290));
    }
  } while( true );
}


