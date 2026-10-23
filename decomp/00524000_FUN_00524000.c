// FUN_00524000 @ 524000 size=595

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00524000(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_4;
  
  if (*(int *)(param_1[0x92] + 6) == 0x157) {
    return 1;
  }
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if ((cVar1 != '\0') &&
     ((iVar2 = (**(code **)(*param_1 + 0x10))(), *(int *)(iVar2 + 0x2ae) != 0 ||
      (iVar2 = (**(code **)(*param_1 + 0x10))(), *(int *)(iVar2 + 0x2b2) != 0)))) {
    return 1;
  }
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if ((cVar1 != '\0') && (iVar2 = (**(code **)(*param_1 + 0x18))(), *(int *)(iVar2 + 0x2a6) != 0)) {
    return 1;
  }
  iVar2 = param_1[3];
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 != '\0') {
    iVar2 = *(int *)((int)param_1 + 0x212);
  }
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if (cVar1 != '\0') {
    iVar2 = *(int *)((int)param_1 + 0x212);
  }
  iVar6 = 0;
  iVar2 = DAT_00ab27b4 + iVar2 * 0x4b2;
  if ((param_1[0x92] != 0) && (cVar1 = FUN_0049ee30(iVar2), cVar1 != '\0')) {
    return 1;
  }
  iVar3 = (&DAT_0089cad8)[*(int *)((int)param_1 + 0x146)];
  iVar4 = iVar3;
  if (iVar3 == 0) {
    iVar4 = param_1[0x92];
  }
  if (iVar4 != 0) {
    if (iVar3 == 0) {
      iVar3 = param_1[0x92];
    }
    if ((iVar3 != param_1[0x92]) && (cVar1 = FUN_0049ee30(iVar2), cVar1 != '\0')) {
      return 1;
    }
  }
  iVar3 = (**(code **)(param_1[0x47] + 4))();
  if ((iVar3 != 0) && (iStack_4 = 0, 0 < *(int *)(iVar2 + 0x290))) {
    do {
      iVar4 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar2 + 0x298) + iVar6));
      iVar3 = *(int *)(iVar4 + 0x3d8);
      if (iVar3 != 0) {
        if (iVar3 == param_1[0x92]) {
          iVar3 = *(int *)(iVar4 + 0x482);
          iVar5 = FUN_0044e1d0();
          if ((iVar3 == iVar5) && (_DAT_007e3380 < *(float *)(*(int *)(iVar4 + 0x3d4) + 0x39c4))) {
            return 1;
          }
          if ((*(int *)(iVar4 + 0x482) != 0) &&
             (iVar3 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar4 + 0x482) + 0x52)),
             _DAT_007e3380 < *(float *)(iVar3 + 0x270))) {
            return 1;
          }
        }
        else if ((((iVar3 != 0) &&
                  (cVar1 = FUN_00586230(*(undefined4 *)(param_1[0x92] + 6)), cVar1 != '\0')) &&
                 (iVar3 = *(int *)(iVar4 + 0x482), iVar5 = FUN_0044e1d0(), iVar3 == iVar5)) &&
                (_DAT_007e3380 < *(float *)(*(int *)(iVar4 + 0x3d8) + 0x39c4))) {
          return 1;
        }
      }
      iStack_4 = iStack_4 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iStack_4 < *(int *)(iVar2 + 0x290));
  }
  return 0;
}


