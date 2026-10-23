// FUN_00795bb0 @ 795bb0 size=137

void __thiscall FUN_00795bb0(int param_1,code *param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    piVar1 = *(int **)(param_1 + 4);
    if (*(int *)((int)piVar1 + 6) != 0) {
      FUN_00796590(*(undefined4 *)((int)piVar1 + 6),param_2);
    }
    if (*piVar1 != 0) {
      (*param_2)(*piVar1);
    }
    if (*(int *)((int)piVar1 + 0xe) != 0) {
      FUN_00796590(*(undefined4 *)((int)piVar1 + 0xe),param_2);
    }
    if (*(int *)((int)piVar1 + 10) != 0) {
      FUN_00796590(*(undefined4 *)((int)piVar1 + 10),param_2);
    }
  }
  return;
}


