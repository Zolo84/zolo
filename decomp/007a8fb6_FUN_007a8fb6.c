// FUN_007a8fb6 @ 7a8fb6 size=40

uint FUN_007a8fb6(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_0087cfdc) {
    uVar1 = FUN_007a81f0(param_1,4);
    return uVar1;
  }
  return (byte)PTR_DAT_0087cdd0[param_1 * 2] & 4;
}


