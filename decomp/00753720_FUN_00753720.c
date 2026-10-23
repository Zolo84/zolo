// FUN_00753720 @ 753720 size=37

undefined4 __thiscall
FUN_00753720(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar1 + 1;
  FUN_00753750(param_2,param_3,param_4,iVar1);
  return param_2;
}


