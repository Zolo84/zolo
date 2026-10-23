// FUN_0079e36e @ 79e36e size=62

void __thiscall FUN_0079e36e(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = FUN_007a1933(&param_3,&stack0x00000010,0,*(undefined4 *)(param_1 + 8));
  if (iVar1 < 0) {
    *in_stack_0000001c = *in_stack_0000001c | 2;
  }
  else {
    *(int *)(in_stack_00000020 + 0x18) = iVar1 >> 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}


