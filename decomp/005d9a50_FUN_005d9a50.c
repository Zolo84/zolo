// FUN_005d9a50 @ 5d9a50 size=585

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_005d9a50(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  float10 fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  cVar6 = FUN_004355a0(param_2,param_3);
  if (cVar6 != '\0') {
    puVar7 = (undefined *)(**(code **)(**(int **)(param_1 + 0xbc) + 0x40))(param_2,param_3);
    return puVar7;
  }
  cVar6 = (**(code **)(**(int **)(param_1 + 0xc4) + 0x20))(param_2,param_3);
  if (cVar6 == '\0') {
    return (undefined *)0x0;
  }
  fVar11 = (float10)FUN_004a4610();
  fVar1 = (float)fVar11;
  fVar11 = (float10)FUN_004a4690();
  fVar2 = (float)fVar11;
  cVar6 = FUN_004a4720();
  if (cVar6 != '\0') {
    dVar14 = (double)fVar2;
    dVar13 = (double)fVar1;
    dVar12 = (double)(DAT_008772b0 * _DAT_007e4088);
    uVar9 = DAT_008772b4;
    uVar8 = FUN_0042b6c9(s_UIW_OFFENSIVE_DELAYED_NEW_0085b8cc);
    FUN_007a630a(&DAT_00cd4a50,uVar8,dVar12,uVar9,dVar13,dVar14);
    return &DAT_00cd4a50;
  }
  bVar5 = false;
  piVar10 = *(int **)(*(int *)(DAT_00d0ca90 + 0x21e5a) + 4);
  if (piVar10 != (int *)0x0) {
    do {
      piVar3 = (int *)piVar10[2];
      piVar10 = (int *)*piVar10;
      cVar6 = (**(code **)(*piVar10 + 0x28))();
      if (((cVar6 == '\0') || (cVar6 = FUN_00524000(), cVar6 == '\0')) ||
         (*(char *)((int)piVar10 + 0x17b) != '\0')) {
        uVar9 = FUN_0042b6c9();
        FUN_007a630a(&DAT_00cd4a50,uVar9);
        return &DAT_00cd4a50;
      }
      iVar4 = *(int *)((int)piVar10 + 0x26);
      do {
        if (iVar4 == 0) goto LAB_005d9bb4;
        iVar4 = *(int *)(iVar4 + 8);
        cVar6 = FUN_004fd350();
      } while (cVar6 == '\0');
      uVar9 = FUN_0042b6c9();
      FUN_007a630a(&DAT_00cd4a50,uVar9);
      bVar5 = true;
LAB_005d9bb4:
      piVar10 = piVar3;
    } while (piVar3 != (int *)0x0);
    if (bVar5) goto LAB_005d9c50;
  }
  if (*(float *)(DAT_00d0ca90 + 0x39c4) < fVar1) {
    dVar14 = (double)(fVar1 - *(float *)(DAT_00d0ca90 + 0x39c4));
    uVar9 = FUN_0042b6c9();
    FUN_007a630a(&DAT_00cd4a50,uVar9,dVar14);
  }
  if (*(float *)(DAT_00d0ca90 + 0x39b4) < fVar2) {
    dVar14 = (double)(fVar2 - *(float *)(DAT_00d0ca90 + 0x39b4));
    uVar9 = FUN_0042b6c9();
    FUN_007a630a(&DAT_00cd4a50,uVar9,dVar14);
  }
LAB_005d9c50:
  return &DAT_00cd4a50;
}


