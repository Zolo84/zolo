// FUN_006d8d50 @ 6d8d50 size=58

undefined1 __fastcall FUN_006d8d50(int param_1)

{
  int iVar1;
  
  FUN_0064a850(1);
  iVar1 = *(int *)(param_1 + 0x2220e);
  if (iVar1 != 0) {
    FUN_006d65d0();
    FUN_00796cd8(iVar1);
  }
  *(undefined4 *)(param_1 + 0x2220e) = 0;
  return 1;
}


