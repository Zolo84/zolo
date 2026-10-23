// FUN_004d2fd0 @ 4d2fd0 size=174

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __fastcall FUN_004d2fd0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x16) == '\0') {
    return 0;
  }
  iVar2 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
  iVar2 = *(int *)(iVar2 + 0x482);
  iVar3 = FUN_0044e1d0();
  if (iVar2 != iVar3) {
    FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
    iVar2 = FUN_004e9f40();
    if (iVar2 == 0) {
      iVar2 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
      iVar2 = *(int *)(iVar2 + 0x12);
    }
    iVar2 = FUN_004e9370(iVar2);
    fVar1 = *(float *)(iVar2 + 0x268) * _DAT_008775a0;
    if (DAT_0087759c <= fVar1) {
      fVar1 = DAT_0087759c;
    }
    if (_DAT_007e7ed0 < (*(float *)(iVar2 + 0x280) + *(float *)(param_1 + 0x24)) - fVar1) {
      return 0;
    }
  }
  return 1;
}


