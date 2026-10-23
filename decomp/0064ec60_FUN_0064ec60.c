// FUN_0064ec60 @ 64ec60 size=78

int __fastcall FUN_0064ec60(int param_1)

{
  int iVar1;
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x21eb0) + 4))();
  if (0 < iVar1) {
    uStack_8 = **(undefined2 **)(param_1 + 0x21eb4);
    uStack_6 = *(undefined4 *)(*(undefined2 **)(param_1 + 0x21eb4) + 1);
    iVar1 = FUN_00428ee0(&uStack_8);
    if (iVar1 != 0) {
      return iVar1 + -8;
    }
  }
  return 0;
}


