// FUN_0044aba0 @ 44aba0 size=204

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0044aba0(int param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  float local_c;
  float local_8;
  
  local_c = 0.0;
  fVar2 = *(float *)(param_1 + 0x390a);
  iVar1 = *(int *)(param_1 + 0x3924);
  piVar5 = *(int **)(param_1 + 0x3b7e);
  while (piVar5 != (int *)0x0) {
    piVar3 = (int *)piVar5[2];
    iVar4 = *piVar5;
    cVar6 = FUN_004f2390();
    piVar5 = piVar3;
    if ((cVar6 == '\0') && (*(char *)(iVar4 + 0x3c) == '\0')) {
      local_c = *(float *)(iVar4 + 0x28) + local_c;
    }
  }
  local_8 = fVar2 * (float)iVar1 - local_c;
  if (local_8 < _DAT_007e3380) {
    local_8 = 0.0;
  }
  fVar2 = *(float *)(param_1 + 0x3912) * (float)*(int *)(param_1 + 0x3924);
  if (*(float *)(param_1 + 0x39f4) < fVar2) {
    local_8 = (fVar2 - *(float *)(param_1 + 0x39f4)) + local_8;
  }
  fVar2 = (float)*(int *)(param_1 + 0x3924) * *(float *)(param_1 + 0x3916);
  if (*(float *)(param_1 + 0x3a00) < fVar2) {
    local_8 = (fVar2 - *(float *)(param_1 + 0x3a00)) + local_8;
  }
  return (int)ROUND(local_8);
}


