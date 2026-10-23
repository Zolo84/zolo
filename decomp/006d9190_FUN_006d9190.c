// FUN_006d9190 @ 6d9190 size=74

undefined4 __fastcall FUN_006d9190(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2220e);
  if (param_1 == *(int *)(DAT_00ab27b4 + 0x3d8 + *(int *)(iVar1 + 0x18) * 0x4b2)) {
    if (iVar1 != 0) {
      FUN_006d65d0();
      FUN_00796cd8(iVar1);
    }
    *(undefined4 *)(param_1 + 0x2220e) = 0;
  }
  return 1;
}


