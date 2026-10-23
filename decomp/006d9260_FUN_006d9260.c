// FUN_006d9260 @ 6d9260 size=52

undefined1 __fastcall FUN_006d9260(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2220e);
  *(undefined1 *)(param_1 + 0x21de2) = 1;
  if (iVar1 != 0) {
    FUN_006d65d0();
    FUN_00796cd8(iVar1);
  }
  *(undefined4 *)(param_1 + 0x2220e) = 0;
  return 1;
}


