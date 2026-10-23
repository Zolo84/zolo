// FUN_0063bba0 @ 63bba0 size=66

undefined4 __thiscall FUN_0063bba0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x8c) + 0x12) + 4))(param_2);
  iVar2 = FUN_00428ee0(param_1 + 0x7e);
  if ((iVar2 != 0) && (iVar2 != 8)) {
    return uVar1;
  }
  return 1;
}


