// FUN_0044ab50 @ 44ab50 size=76

float10 __fastcall FUN_0044ab50(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  float local_4;
  
  piVar4 = *(int **)(param_1 + 0x3b7e);
  local_4 = 0.0;
  if (piVar4 == (int *)0x0) {
    return (float10)0.0;
  }
  do {
    piVar1 = (int *)piVar4[2];
    iVar2 = *piVar4;
    cVar3 = FUN_004f2390();
    if ((cVar3 == '\0') && (*(char *)(iVar2 + 0x3c) == '\0')) {
      local_4 = *(float *)(iVar2 + 0x28) + local_4;
    }
    piVar4 = piVar1;
  } while (piVar1 != (int *)0x0);
  return (float10)local_4;
}


