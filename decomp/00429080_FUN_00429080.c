// FUN_00429080 @ 429080 size=33

undefined4 __thiscall FUN_00429080(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 0x2c))();
  *(undefined4 *)(param_1 + 0x14) = *puVar1;
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(puVar1 + 1);
  return 1;
}


