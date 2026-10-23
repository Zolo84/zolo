// FUN_00434f70 @ 434f70 size=62

void __thiscall FUN_00434f70(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x4e) = param_2;
  FUN_00415d30(param_2);
  FUN_00415d30(param_2);
  FUN_00415d30(param_2);
  for (piVar1 = *(int **)(param_1 + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    *(undefined4 *)(*piVar1 + 0x16) = param_2;
  }
  return;
}


