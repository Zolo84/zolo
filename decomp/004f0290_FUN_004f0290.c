// FUN_004f0290 @ 4f0290 size=108

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004f0290(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  fVar5 = (float10)_DAT_007e82b8;
  piVar4 = *(int **)(param_1 + 0x26);
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    iVar3 = *piVar4;
    if (*(float *)(iVar3 + 0x2f0) <= *(float *)(iVar3 + 0x2f4)) {
      fVar1 = *(float *)(iVar3 + 0x2f0);
    }
    else {
      fVar1 = *(float *)(iVar3 + 0x2f4);
    }
    piVar4 = piVar2;
    if ((float10)fVar1 < fVar5) {
      if (*(float *)(iVar3 + 0x2f0) <= *(float *)(iVar3 + 0x2f4)) {
        fVar5 = (float10)*(float *)(iVar3 + 0x2f0);
      }
      else {
        fVar5 = (float10)*(float *)(iVar3 + 0x2f4);
      }
    }
  }
  return fVar5 * (float10)_DAT_007e543c;
}


