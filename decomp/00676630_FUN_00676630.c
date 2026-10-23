// FUN_00676630 @ 676630 size=27

void FUN_00676630(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x2c);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined4 *)((int)pvVar1 + 0x28) = param_2;
  return;
}


