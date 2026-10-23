// FUN_006ab9d0 @ 6ab9d0 size=330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_006ab9d0(int param_1,float param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar1 = (int)param_2;
  fVar5 = (float10)FUN_004ecf60();
  param_2 = (float)((float10)_DAT_007e4074 - fVar5);
  cVar2 = FUN_004e8a90();
  if (cVar2 != '\0') {
    param_2 = param_2 + param_2;
  }
  iVar3 = *(int *)(param_1 + 10);
  if (*(int *)(iVar1 + 0x3d4) == iVar3) {
    param_2 = param_2 + param_2;
  }
  else if (*(int *)(iVar1 + 0x3d8) == iVar3) {
    param_2 = param_2 * _DAT_007e3650;
  }
  else {
    cVar2 = FUN_004ea620(iVar3);
    if (cVar2 != '\0') {
      param_2 = param_2 * _DAT_007e409c;
    }
  }
  cVar2 = FUN_004e8ab0(*(undefined4 *)(param_1 + 10));
  if (cVar2 != '\0') {
    param_2 = param_2 * _DAT_007e3848;
  }
  iVar3 = FUN_004e9f10(*(undefined4 *)(param_1 + 10),0);
  if (iVar3 < 5) {
    param_2 = param_2 * _DAT_007e6800;
  }
  iVar3 = FUN_004e9f10(*(undefined4 *)(param_1 + 10),0);
  if (iVar3 < 10) {
    param_2 = param_2 * _DAT_007e6808;
  }
  iVar3 = FUN_004e9f10(*(undefined4 *)(param_1 + 10),0);
  if (iVar3 < 0x14) {
    param_2 = param_2 * _DAT_007e34c0;
  }
  iVar3 = FUN_004e9f10(*(undefined4 *)(param_1 + 10),0);
  if (iVar3 < 0x1e) {
    param_2 = param_2 * _DAT_007f6db0;
  }
  iVar3 = *(int *)(iVar1 + 0x482);
  iVar4 = FUN_0044e1d0();
  fVar5 = (float10)param_2;
  if (iVar3 == iVar4) {
    fVar5 = fVar5 * (float10)_DAT_007e67fc;
  }
  if (*(int *)(iVar1 + 0x3d8) == *(int *)(param_1 + 10)) {
    fVar5 = fVar5 * (float10)_DAT_007e409c;
  }
  return fVar5 * (float10)_DAT_007e34c0;
}


