// FUN_006d92d0 @ 6d92d0 size=100

undefined4 __fastcall FUN_006d92d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x2220e) + 0x18);
  FUN_004d8cf0(*(undefined4 *)(DAT_00ab27b4 + 0x3f2 + iVar1 * 0x4b2),
               *(undefined4 *)(DAT_00ab27b4 + 0x3f6 + iVar1 * 0x4b2));
  FUN_004d87c0();
  iVar1 = *(int *)(param_1 + 0x2220e);
  if (iVar1 != 0) {
    FUN_006d65d0();
    FUN_00796cd8(iVar1);
  }
  *(undefined4 *)(param_1 + 0x2220e) = 0;
  return 1;
}


