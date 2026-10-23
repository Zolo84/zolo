// FUN_006d8770 @ 6d8770 size=74

undefined4 __fastcall FUN_006d8770(int param_1)

{
  int iVar1;
  
  FUN_004d8670(**(undefined4 **)(*(int *)(param_1 + 0x2220e) + 8));
  FUN_0064c090(4);
  iVar1 = *(int *)(param_1 + 0x2220e);
  if (iVar1 != 0) {
    FUN_006d65d0();
    FUN_00796cd8(iVar1);
  }
  *(undefined4 *)(param_1 + 0x2220e) = 0;
  return 1;
}


