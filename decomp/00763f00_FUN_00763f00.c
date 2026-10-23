// FUN_00763f00 @ 763f00 size=39

void __thiscall FUN_00763f00(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x6a) + 4))();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x26) = param_2;
  }
  FUN_0076ba30(param_2);
  return;
}


