// FUN_00565c30 @ 565c30 size=32

undefined4 FUN_00565c30(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x1c))();
  if (param_1 != (int *)0x0) {
    (**(code **)*param_1)(1);
  }
  return uVar1;
}


