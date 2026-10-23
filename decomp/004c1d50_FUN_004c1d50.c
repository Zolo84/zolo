// FUN_004c1d50 @ 4c1d50 size=156

undefined4 FUN_004c1d50(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_007a8730(&DAT_0083f6fc,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_007a8730(&DAT_0083f6f8,param_1);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = FUN_007a8730(&DAT_0083f6f4,param_1);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_007a8730(&DAT_0083f6f0,param_1);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = FUN_007a8730(&DAT_0083f6ec,param_1);
  if (iVar1 == 0) {
    return 4;
  }
  FUN_007a8730(&DAT_0083f6e8,param_1);
  return 0xffffffff;
}


