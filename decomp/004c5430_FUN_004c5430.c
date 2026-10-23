// FUN_004c5430 @ 4c5430 size=27

void FUN_004c5430(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x18);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined4 *)((int)pvVar1 + 0x14) = param_2;
  return;
}


