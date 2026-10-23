// FUN_006432c0 @ 6432c0 size=19

void __thiscall FUN_006432c0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + param_2 * 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x50))();
  }
  return;
}


