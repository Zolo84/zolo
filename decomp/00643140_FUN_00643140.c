// FUN_00643140 @ 643140 size=93

int __thiscall FUN_00643140(int param_1,int *param_2)

{
  int iVar1;
  
  FUN_0043c010(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 == 0x11) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 4))(param_2);
  }
  else {
    iVar1 = FUN_0043e0c0(param_2);
  }
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 4))(param_2);
  }
  FUN_0043c010(0,0);
  return iVar1;
}


