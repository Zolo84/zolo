// FUN_006649f0 @ 6649f0 size=318

void __thiscall FUN_006649f0(int param_1,undefined4 param_2,char param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float10 fVar12;
  float local_14;
  
  iVar7 = FUN_0044e1d0();
  local_14 = 1e+09;
  uVar4 = *(undefined4 *)(iVar7 + 0x52);
  puVar5 = *(undefined4 **)(*(int *)(param_1 + 10) + 0xe8a4);
  do {
    while( true ) {
      if (puVar5 == (undefined4 *)0x0) {
        FUN_004e9370(uVar4);
        return;
      }
      puVar1 = (undefined4 *)puVar5[2];
      uVar2 = *puVar5;
      puVar5 = puVar1;
      if (param_3 != '\0') break;
LAB_00664ae6:
      fVar12 = (float10)FUN_0044a9c0(uVar2,param_2);
      if (fVar12 < (float10)local_14) {
        local_14 = (float)fVar12;
        uVar4 = uVar2;
      }
    }
    iVar7 = FUN_004e9370(uVar2);
    iVar7 = FUN_004e9370(*(undefined4 *)(iVar7 + 0x3dc));
    if (iVar7 == 0) goto LAB_00664ae6;
    iVar7 = FUN_004e9370(uVar2);
    iVar7 = FUN_004e9370(*(undefined4 *)(iVar7 + 0x3dc));
    uVar3 = *(undefined4 *)(iVar7 + 0x12);
    piVar11 = (int *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0x1aa);
    cVar6 = (**(code **)(*piVar11 + 0x24))(uVar3);
    if (cVar6 != '\0') goto LAB_00664ae6;
    iVar7 = FUN_004e9370(uVar3);
    iVar9 = 0;
    if (0 < *(int *)(iVar7 + 0x290)) {
      iVar10 = 0;
      do {
        iVar8 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar7 + 0x298) + iVar10));
        cVar6 = (**(code **)(*piVar11 + 0x24))(*(undefined4 *)(iVar8 + 0x12));
        if (cVar6 != '\0') goto LAB_00664ae6;
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar9 < *(int *)(iVar7 + 0x290));
    }
  } while( true );
}


