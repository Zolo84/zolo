// FUN_00607250 @ 607250 size=63

void __thiscall FUN_00607250(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x86) != 0) {
    iVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x86) + 0x12) + 4))(param_2);
    iVar1 = *(int *)(*(int *)(param_1 + 0x86) + 0x22);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x7e) = *(undefined4 *)(iVar1 + 0x32);
    }
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_00415a60(param_2);
  return;
}


