// FUN_006d9040 @ 6d9040 size=68

undefined4 __fastcall FUN_006d9040(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(*DAT_00d12b40 + 0x36a) = *(undefined4 *)(*(int *)(param_1 + 0x2220e) + 0x18);
  iVar1 = *(int *)(param_1 + 0x2220e);
  if (iVar1 != 0) {
    FUN_006d65d0();
    FUN_00796cd8(iVar1);
  }
  *(undefined4 *)(param_1 + 0x2220e) = 0;
  return 1;
}


