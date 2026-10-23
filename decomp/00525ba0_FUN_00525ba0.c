// FUN_00525ba0 @ 525ba0 size=122

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00525ba0(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
  if (iVar3 < 1) {
    return (float10)_DAT_007e3380;
  }
  fVar2 = _DAT_007e3380;
  for (piVar1 = *(int **)(param_1 + 0x26); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    iVar3 = *piVar1;
    fVar2 = ((*(float *)(iVar3 + 0xf0) - *(float *)(iVar3 + 0xec)) * _DAT_007e4088) /
            *(float *)(iVar3 + 0xf0) + fVar2;
  }
  iVar3 = (**(code **)(*(int *)(param_1 + 0x22) + 4))();
  return (float10)fVar2 / (float10)iVar3;
}


