// FUN_007b176f @ 7b176f size=27

undefined4 FUN_007b176f(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00dc524c != (code *)0x0) {
    iVar1 = (*DAT_00dc524c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


