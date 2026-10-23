// FUN_004ce820 @ 4ce820 size=112

int * __thiscall FUN_004ce820(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  *(int *)param_3[1] = *param_3;
  *(int *)(*param_3 + 4) = param_3[1];
  FUN_00796cd8(param_3);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  *param_2 = iVar1;
  return param_2;
}


