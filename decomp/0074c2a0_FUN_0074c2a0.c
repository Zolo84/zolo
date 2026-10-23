// FUN_0074c2a0 @ 74c2a0 size=58

int * __thiscall FUN_0074c2a0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *param_2 = iVar1;
  FUN_00798acc();
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  FUN_00798b68();
  return param_2;
}


