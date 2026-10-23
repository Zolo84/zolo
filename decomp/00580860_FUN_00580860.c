// FUN_00580860 @ 580860 size=75

int __thiscall FUN_00580860(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _rand();
  iVar2 = iVar1 / 3;
  iVar1 = iVar1 % 3;
  if (iVar1 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x20))(param_2);
  }
  else {
    if (iVar1 == 1) {
      iVar1 = (**(code **)(*param_1 + 0x20))(param_3);
      return iVar1;
    }
    if (iVar1 == 2) {
      iVar1 = (**(code **)(*param_1 + 0x20))(param_4);
      return iVar1;
    }
  }
  return iVar2;
}


