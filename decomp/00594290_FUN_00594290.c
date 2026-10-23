// FUN_00594290 @ 594290 size=22

undefined4 __thiscall FUN_00594290(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1a);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = (undefined4 *)puVar1[2];
  }
  return *puVar1;
}


