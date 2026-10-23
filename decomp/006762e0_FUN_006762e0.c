// FUN_006762e0 @ 6762e0 size=27

void FUN_006762e0(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  *(undefined4 *)((int)pvVar1 + 0x1c) = param_2;
  return;
}


