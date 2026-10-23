// FUN_004ef960 @ 4ef960 size=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ef960(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = _DAT_007e3380;
  for (piVar1 = *(int **)(param_1 + 0x26); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    fVar3 = fVar3 + *(float *)(*piVar1 + 0x2ec);
  }
  uVar2 = FUN_00527b40(fVar3);
  __ftol(fVar3,uVar2);
  return;
}


