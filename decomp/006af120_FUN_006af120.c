// FUN_006af120 @ 6af120 size=80

void __thiscall FUN_006af120(int param_1,code *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    if (*(int *)((int)piVar1 + 6) != 0) {
      FUN_006af650(*(int *)((int)piVar1 + 6),param_2);
    }
    if (*piVar1 != 0) {
      (*param_2)(*piVar1);
    }
    if (*(int *)((int)piVar1 + 0xe) != 0) {
      FUN_006af650(*(int *)((int)piVar1 + 0xe),param_2);
    }
    if (*(int *)((int)piVar1 + 10) != 0) {
      FUN_006af650(*(int *)((int)piVar1 + 10),param_2);
    }
  }
  return;
}


