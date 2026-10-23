// FUN_004e2be0 @ 4e2be0 size=80

void __thiscall FUN_004e2be0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x2e) + 4);
  param_2[1] = (*(int *)(*(int *)(param_1 + 0x2e) + 8) * param_4) / 0x2d00 + 0x294;
  *param_2 = (iVar1 * param_3) / 0x7500 + 8;
  return;
}


