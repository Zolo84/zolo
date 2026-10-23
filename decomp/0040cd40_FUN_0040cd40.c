// FUN_0040cd40 @ 40cd40 size=230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040cd40(int param_1,float param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)fpatan((float10)param_3,(float10)param_2);
  fVar1 = (float)fVar2;
  if ((float10)_DAT_007e3474 <= fVar2) {
    if (fVar1 < _DAT_007e3470) {
      *(undefined4 *)(param_1 + 8) = 7;
      return;
    }
    if (fVar1 < _DAT_007e346c) {
      *(undefined4 *)(param_1 + 8) = 0;
      return;
    }
    if (fVar1 < _DAT_007e3468) {
      *(undefined4 *)(param_1 + 8) = 1;
      return;
    }
    if (fVar1 < _DAT_007e3464) {
      *(undefined4 *)(param_1 + 8) = 2;
      return;
    }
    if (fVar1 < _DAT_007e3460) {
      *(undefined4 *)(param_1 + 8) = 3;
      return;
    }
    if (fVar1 < _DAT_007e345c) {
      *(undefined4 *)(param_1 + 8) = 4;
      return;
    }
    if (fVar1 < _DAT_007e3458) {
      *(undefined4 *)(param_1 + 8) = 5;
      return;
    }
  }
  *(undefined4 *)(param_1 + 8) = 6;
  return;
}


