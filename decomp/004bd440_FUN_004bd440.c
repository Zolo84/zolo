// FUN_004bd440 @ 4bd440 size=27

void __thiscall FUN_004bd440(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xa8))();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
  return;
}


