// FUN_0050a080 @ 50a080 size=194

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050a080(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x3e);
  iVar1 = *(int *)(param_1 + 0x32);
  fVar2 = (float)((iVar3 - iVar1) * (iVar3 - iVar1)) * _DAT_007e6868 + _DAT_007e3374;
  if (iVar3 <= iVar1) {
    fVar2 = fVar2 * _DAT_007e6808;
  }
  switch(*(undefined4 *)(param_1 + 0x22)) {
  case 0:
    fVar2 = fVar2 * _DAT_007e34e0;
    break;
  case 1:
    fVar2 = fVar2 * _DAT_007e6f18;
    break;
  case 2:
    fVar2 = fVar2 * _DAT_007e5438;
  }
  fVar2 = fVar2 * param_2 + *(float *)(param_1 + 0x36);
  *(float *)(param_1 + 0x36) = fVar2;
  if (((float)*(int *)(&DAT_0084a0f0 + iVar1 * 4) < fVar2) && (iVar1 < iVar3)) {
    iVar3 = iVar1 + 1;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (10 < iVar3) {
      iVar3 = 10;
    }
    if (iVar1 != 0) {
      FUN_004b2de0(param_1,iVar3);
    }
    *(int *)(param_1 + 0x32) = iVar3;
    if (*(float *)(param_1 + 0x36) < (float)(int)(&DAT_0084a0ec)[iVar3]) {
      *(float *)(param_1 + 0x36) = (float)(int)(&DAT_0084a0ec)[iVar3];
      return;
    }
  }
  return;
}


