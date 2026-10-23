// FUN_00565bc0 @ 565bc0 size=40

undefined4 FUN_00565bc0(int *param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)((int)param_1 + 9) = 1;
  uVar1 = (**(code **)(*param_1 + 0x1c))();
  if (param_1 != (int *)0x0) {
    (**(code **)*param_1)(1);
  }
  return uVar1;
}


