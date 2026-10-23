// FUN_00565bf0 @ 565bf0 size=55

undefined4 FUN_00565bf0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  *(undefined1 *)((int)param_1 + 9) = 0;
  cVar1 = FUN_0042e980();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    *(undefined1 *)((int)param_1 + 9) = 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x1c))();
  if (param_1 != (int *)0x0) {
    (**(code **)*param_1)(1);
  }
  return uVar2;
}


