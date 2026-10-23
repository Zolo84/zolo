// FUN_006454a0 @ 6454a0 size=77

void __fastcall FUN_006454a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00428ee0(param_1 + 0xb8);
  if ((iVar1 != 0) && (iVar1 != 8)) {
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x1a) + 4))();
    if (0 < iVar1) {
      FUN_00584c90();
      FUN_00449290(param_1 + 0xb8);
      FUN_00460d10();
    }
  }
  return;
}


