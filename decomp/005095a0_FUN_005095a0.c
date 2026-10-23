// FUN_005095a0 @ 5095a0 size=154

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005095a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar3 = FUN_0051d610();
  if (iVar3 == iVar1) {
    fVar5 = (float10)0.0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    uVar4 = FUN_0051d610();
    fVar5 = (float10)FUN_0044a9c0(uVar2,uVar4);
  }
  fVar5 = fVar5 * (float10)_DAT_008775ec;
  if ((float10)_DAT_007e4088 < fVar5) {
    fVar5 = (float10)_DAT_007e4088;
  }
  fVar5 = ((float10)_DAT_007e4088 - fVar5) * (float10)_DAT_007e543c;
  if (*(int *)(param_1 + 0x248) != 0) {
    fVar5 = fVar5 * (float10)*(float *)(*(int *)(param_1 + 0x248) + 0xe858);
  }
  if ((float10)_DAT_007e3374 < fVar5) {
    return (float10)_DAT_007e3374;
  }
  if (fVar5 < (float10)_DAT_007e34e0) {
    fVar5 = (float10)_DAT_007e34e0;
  }
  return fVar5;
}


