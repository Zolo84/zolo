// FUN_00509f10 @ 509f10 size=55

uint __thiscall FUN_00509f10(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x26);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_2 + 0x28))();
    return uVar2;
  }
  if (iVar1 != 1) {
    if (iVar1 - 2U != 0) {
      return iVar1 - 2U & 0xffffff00;
    }
    uVar2 = (**(code **)(*param_2 + 0x30))();
    return uVar2;
  }
  uVar2 = (**(code **)(*param_2 + 0x2c))();
  return uVar2;
}


