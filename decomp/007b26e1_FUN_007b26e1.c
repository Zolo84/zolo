// FUN_007b26e1 @ 7b26e1 size=40

void FUN_007b26e1(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_007aadca();
    *puVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    puVar1 = (undefined4 *)FUN_007aadca();
    *puVar1 = 0x22;
    return;
  }
  return;
}


