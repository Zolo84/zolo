// FUN_0051a210 @ 51a210 size=101

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0051a210(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
  if (iVar3 == 0) {
    return (float10)_DAT_007e3380;
  }
  fVar2 = _DAT_007e3380;
  for (piVar1 = *(int **)(param_1 + 0x26); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    fVar2 = fVar2 + *(float *)(*piVar1 + 0xf4);
  }
  iVar3 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
  return (float10)fVar2 / (float10)iVar3;
}


