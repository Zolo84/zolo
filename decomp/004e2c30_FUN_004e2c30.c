// FUN_004e2c30 @ 4e2c30 size=64

int * __thiscall FUN_004e2c30(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x2e) + 4);
  param_2[1] = ((param_4 * 5 + -0xce4) * 0x900) / *(int *)(*(int *)(param_1 + 0x2e) + 8);
  *param_2 = ((param_3 * 0xd + -0x68) * 0x900) / iVar1;
  return param_2;
}


