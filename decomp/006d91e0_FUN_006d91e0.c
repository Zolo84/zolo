// FUN_006d91e0 @ 6d91e0 size=55

undefined4 __fastcall FUN_006d91e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2220e);
  if (DAT_008477ac == *(int *)(iVar1 + 0x18)) {
    if (iVar1 != 0) {
      FUN_006d65d0();
      FUN_00796cd8(iVar1);
    }
    *(undefined4 *)(param_1 + 0x2220e) = 0;
  }
  return 1;
}


