// FUN_004c7fad @ 4c7fad size=88

undefined4 * __thiscall FUN_004c7fad(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *local_8;
  
  for (local_8 = *(undefined4 **)(param_1 + 4);
      (local_8 != (undefined4 *)0x0 && (*(int *)*local_8 != param_3));
      local_8 = (undefined4 *)local_8[2]) {
  }
  *param_2 = local_8;
  return param_2;
}


