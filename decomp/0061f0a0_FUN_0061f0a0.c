// FUN_0061f0a0 @ 61f0a0 size=119

undefined4 __thiscall FUN_0061f0a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00428ee0(param_1 + 0x2e);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + -0x14;
  }
  iVar2 = FUN_00428ee0(param_1 + 0x34);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -8;
  }
  if ((iVar1 != 0) && (*(int **)(param_1 + 0x3c) != (int *)0x0)) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x48))(param_2,param_3);
    return uVar3;
  }
  if ((iVar2 != 0) && (*(int **)(param_1 + 0x40) != (int *)0x0)) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))(param_2,param_3);
    return uVar3;
  }
  return 0;
}


