// FUN_00435640 @ 435640 size=49

void __thiscall FUN_00435640(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x36) = param_3;
  *(undefined4 *)(param_1 + 0x32) = param_2;
  iVar2 = FUN_00415bd0();
  FUN_00435410(iVar2 + iVar1 + *(int *)(param_1 + 0x32));
  return;
}


