// FUN_00661d90 @ 661d90 size=576

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_00661d90(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  float10 fVar10;
  undefined4 uVar11;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int *local_8;
  
  cVar6 = FUN_006a8720();
  if (cVar6 != '\0') {
    return 0;
  }
  if ((param_2 != (int *)0x0) &&
     (iVar1 = param_2[0x19], iVar7 = (**(code **)(*param_2 + 0x24))(), iVar1 < iVar7)) {
    return 0;
  }
  local_8 = (int *)param_2[0x20];
  piVar8 = (int *)param_2[0x21];
  fVar10 = (float10)FUN_004bebe0();
  uVar11 = *(undefined4 *)(param_1 + 10);
  fStack_10 = (float)-fVar10;
  (**(code **)(*(int *)param_2[0x20] + 0xc))(uVar11);
  cVar6 = FUN_00527dc0(uVar11);
  if (cVar6 != '\0') {
    local_8 = (int *)param_2[0x21];
    piVar8 = (int *)param_2[0x20];
    fStack_10 = -fStack_10;
  }
  iVar1 = param_2[0x2d];
  param_2._0_1_ = 0;
  fStack_18 = 0.0;
  fStack_1c = 0.0;
  fStack_14 = 0.0;
  fStack_20 = 0.0;
  bVar5 = false;
  bVar4 = false;
  iVar7 = (**(code **)(*piVar8 + 0xc))();
  piVar9 = *(int **)(iVar7 + 4);
  while (piVar9 != (int *)0x0) {
    piVar2 = (int *)piVar9[2];
    piVar3 = *(int **)(*piVar9 + 0x26);
    while (piVar9 = piVar2, piVar3 != (int *)0x0) {
      piVar9 = (int *)piVar3[2];
      iVar7 = *piVar3;
      cVar6 = FUN_005025b0(iVar1);
      if (cVar6 != '\0') {
        fStack_18 = *(float *)(iVar7 + 0x2e4) + fStack_18;
      }
      fStack_1c = *(float *)(iVar7 + 0x2e4) + fStack_1c;
      piVar3 = piVar9;
      if (*(int *)(iVar7 + 0x134) == 0x1a) {
        bVar4 = true;
      }
    }
  }
  iVar7 = (**(code **)(*local_8 + 0xc))();
  piVar9 = *(int **)(iVar7 + 4);
  if (*(int **)(iVar7 + 4) != (int *)0x0) {
    do {
      piVar2 = (int *)piVar9[2];
      piVar9 = *(int **)(*piVar9 + 0x26);
      while (piVar9 != (int *)0x0) {
        piVar3 = (int *)piVar9[2];
        iVar7 = *piVar9;
        cVar6 = FUN_005025b0(iVar1);
        if (cVar6 != '\0') {
          fStack_14 = *(float *)(iVar7 + 0x2e4) + fStack_14;
        }
        fStack_20 = *(float *)(iVar7 + 0x2e4) + fStack_20;
        piVar9 = piVar3;
        if (*(int *)(iVar7 + 0x134) == 0x1a) {
          bVar5 = true;
        }
      }
      piVar9 = piVar2;
    } while (piVar2 != (int *)0x0);
    if (_DAT_007e3380 < fStack_20) {
      if ((_DAT_007e3374 <= fStack_1c) &&
         (((_DAT_007e68c4 <= fStack_10 || (fStack_14 * _DAT_007f0bc4 < fStack_18)) &&
          (fStack_20 * _DAT_007e4094 <= fStack_1c)))) {
        if (!bVar5) {
          return 0;
        }
        if (bVar4) {
          return 0;
        }
        if (fStack_14 <= fStack_18) {
          return 0;
        }
      }
      param_2._0_1_ = 1;
      (**(code **)(*piVar8 + 0x48))(0,0);
    }
  }
  return param_2._0_1_;
}


