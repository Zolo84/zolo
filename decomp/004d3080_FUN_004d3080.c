// FUN_004d3080 @ 4d3080 size=133

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004d3080(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x19) == '\0') {
    return 0;
  }
  FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
  iVar2 = FUN_004e9f40();
  if (iVar2 == 0) {
    iVar2 = FUN_004e9370(*(undefined4 *)(param_1 + 0x120));
    iVar2 = *(int *)(iVar2 + 0x12);
  }
  iVar2 = FUN_004e9370(iVar2);
  fVar1 = *(float *)(iVar2 + 0x26c) * _DAT_008775a0;
  if (DAT_0087759c <= fVar1) {
    fVar1 = DAT_0087759c;
  }
  if (_DAT_007e7ed0 < *(float *)(iVar2 + 0x270) - fVar1) {
    return 0;
  }
  return 1;
}


