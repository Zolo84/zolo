// FUN_007a321d @ 7a321d size=62

void __thiscall FUN_007a321d(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = FUN_0079baf9(&param_3,&stack0x00000010,0,*(undefined4 *)(param_1 + 0xc));
  if (iVar1 < 0) {
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  else {
    *(int *)(in_stack_00000020 + 0x10) = iVar1 >> 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}


