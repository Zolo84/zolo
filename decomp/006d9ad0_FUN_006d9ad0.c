// FUN_006d9ad0 @ 6d9ad0 size=26

undefined4 __thiscall FUN_006d9ad0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = (undefined4 *)puVar1[2];
  }
  return *puVar1;
}


