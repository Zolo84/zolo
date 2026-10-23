// FUN_007b16b9 @ 7b16b9 size=55

uint FUN_007b16b9(uint param_1)

{
  uint uVar1;
  
  if (DAT_0087cfdc < 2) {
    uVar1 = (byte)PTR_DAT_0087cdd0[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_007a81f0(param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}


