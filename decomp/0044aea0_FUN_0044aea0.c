// FUN_0044aea0 @ 44aea0 size=700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044aea0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  float *pfVar10;
  float local_8;
  
  puVar5 = (undefined1 *)(param_1 + 0x3354);
  pfVar10 = (float *)(param_1 + 0xea2e);
  do {
    puVar5[0xb582] = 0;
    *pfVar10 = 0.0;
    *puVar5 = 0;
    pfVar10 = pfVar10 + 1;
    puVar5 = puVar5 + 1;
  } while ((int)(puVar5 + (-0x3354 - param_1)) < 0x158);
  piVar4 = *(int **)(param_1 + 0xe8b6);
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    iVar9 = *(int *)(DAT_00ab27b4 + *piVar4 * 0x4b2 + 0x3d4);
    piVar4 = piVar2;
    if ((iVar9 != param_1) && (iVar9 != 0)) {
      *(undefined1 *)(*(int *)(iVar9 + 6) + 0x3354 + param_1) = 1;
    }
  }
  piVar4 = *(int **)(param_1 + 0xe8c8);
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    iVar9 = *(int *)(DAT_00ab27b4 + *piVar4 * 0x4b2 + 0x3d4);
    piVar4 = piVar2;
    if ((iVar9 != param_1) && (iVar9 != 0)) {
      *(undefined1 *)(*(int *)(iVar9 + 6) + 0x3354 + param_1) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x117e4) = 0;
  *(undefined4 *)(param_1 + 0x117e8) = 0;
  *(undefined4 *)(param_1 + 0x117ec) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  local_8 = 0.0;
  piVar4 = *(int **)(param_1 + 0xe892);
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    iVar9 = DAT_00ab27b4 + *piVar4 * 0x4b2;
    if ((*(char *)(DAT_00ab27b4 + 0x470 + *piVar4 * 0x4b2) != '\0') &&
       (iVar6 = FUN_004e9370(*(undefined4 *)(iVar9 + 0x3dc)), *(int *)(iVar6 + 0x254) == 8)) {
      *(float *)(param_1 + 0x230) = *(float *)(param_1 + 0x230) + _DAT_007e3374;
    }
    if (*(int *)(iVar9 + 0x46a) != 0) {
      iVar6 = *(int *)(iVar9 + 0x482);
      iVar7 = FUN_004a0750();
      if (*(int *)(iVar7 + 0x3d8) == param_1) {
        uVar8 = *(undefined4 *)(param_1 + 0x117de);
      }
      else {
        uVar8 = *(undefined4 *)(param_1 + 0x117f0);
      }
      iVar7 = FUN_004e9370(uVar8);
      if ((iVar6 == *(int *)(iVar7 + 0x482)) ||
         (iVar6 = *(int *)(iVar9 + 0x284), iVar7 = FUN_004a0750(), iVar6 == *(int *)(iVar7 + 0x284))
         ) {
        *(int *)(param_1 + 0x117e4) = *(int *)(param_1 + 0x117e4) + 1;
      }
    }
    iVar6 = FUN_004ece90();
    if (iVar6 != 0) {
      *(int *)(param_1 + 0x117e8) = *(int *)(param_1 + 0x117e8) + 1;
    }
    iVar6 = FUN_004ece80();
    if (iVar6 != 0) {
      *(int *)(param_1 + 0x117ec) = *(int *)(param_1 + 0x117ec) + 1;
    }
    iVar6 = 0;
    piVar4 = piVar2;
    if (0 < *(int *)(iVar9 + 0x290)) {
      iVar7 = 0;
      do {
        if (*(int *)(iVar7 + 4 + *(int *)(iVar9 + 0x298)) != 4) {
          iVar1 = DAT_00ab27b4 + *(int *)(iVar7 + *(int *)(iVar9 + 0x298)) * 0x4b2;
          iVar3 = *(int *)(iVar1 + 0x3d4);
          if ((iVar3 != param_1) && (iVar3 != 0)) {
            *(undefined1 *)(*(int *)(iVar3 + 6) + 0xe8d6 + param_1) = 1;
            iVar1 = *(int *)(*(int *)(iVar1 + 0x3d4) + 6);
            *(float *)(param_1 + 0xea2e + iVar1 * 4) =
                 *(float *)(param_1 + 0xea2e + iVar1 * 4) + _DAT_007e3374;
            local_8 = local_8 + _DAT_007e3374;
          }
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0xc;
      } while (iVar6 < *(int *)(iVar9 + 0x290));
    }
  }
  iVar9 = (**(code **)(*(int *)(param_1 + 0xe88e) + 4))();
  if (iVar9 != 0) {
    iVar9 = (**(code **)(*(int *)(param_1 + 0xe88e) + 4))();
    *(float *)(param_1 + 0x230) = *(float *)(param_1 + 0x230) / (float)iVar9;
  }
  if (_DAT_007e3380 < local_8) {
    iVar9 = 0x158;
    pfVar10 = (float *)(param_1 + 0xea2e);
    do {
      iVar9 = iVar9 + -1;
      *pfVar10 = *pfVar10 / local_8;
      pfVar10 = pfVar10 + 1;
    } while (iVar9 != 0);
  }
  return;
}


