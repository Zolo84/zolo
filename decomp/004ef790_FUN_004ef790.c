// FUN_004ef790 @ 4ef790 size=81

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __fastcall FUN_004ef790(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  float10 fVar5;
  
  piVar4 = *(int **)(param_1 + 0x26);
  do {
    if (piVar4 == (int *)0x0) {
      return 1;
    }
    piVar1 = (int *)piVar4[2];
    iVar2 = *piVar4;
    piVar4 = piVar1;
  } while ((*(float *)(iVar2 + 0x2ec) <= _DAT_007e3380) ||
          (fVar3 = *(float *)(iVar2 + 0xf4), fVar5 = (float10)FUN_004fd510(),
          fVar5 - (float10)fVar3 <= (float10)_DAT_007e46cc));
  return 0;
}


