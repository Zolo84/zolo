// FUN_0051a280 @ 51a280 size=112

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0051a280(int param_1)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  float fStack_8;
  
  iVar4 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
  if (iVar4 != 0) {
    fStack_8 = 0.0;
    piVar3 = *(int **)(param_1 + 0x26);
    while (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[2];
      fVar2 = *(float *)(*piVar3 + 0xf4);
      fVar5 = (float10)FUN_004fd510();
      fStack_8 = (float)((float10)fVar2 / fVar5 + (float10)fStack_8);
      piVar3 = piVar1;
    }
    iVar4 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
    return (float10)fStack_8 / (float10)iVar4;
  }
  return (float10)_DAT_007e3380;
}


