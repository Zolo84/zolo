// FUN_00743d20 @ 743d20 size=77

void __fastcall FUN_00743d20(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_00796cd8(piVar3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    piVar3 = piVar2;
  }
  FUN_00796cd8(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


