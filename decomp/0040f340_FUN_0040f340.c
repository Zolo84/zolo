// FUN_0040f340 @ 40f340 size=289

undefined4 FUN_0040f340(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  short local_188 [8];
  int local_178 [8];
  undefined4 local_158;
  char local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b98bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00426f50(param_1);
  local_4 = 0;
  if (local_10 == '\0') {
    FUN_004271a0(local_188,0xe);
    if ((local_10 == '\0') && (local_188[0] == 0x4d42)) {
      FUN_004271a0(local_178,0x28);
      if (local_10 == '\0') {
        if (local_178[0] != 0x28) {
          FUN_00427420(local_178[0] + -0x28);
        }
        local_158 = 0x100;
        FUN_004271a0(param_2,0x400);
        uVar1 = local_158;
        local_4 = 0xffffffff;
        FUN_00426f80();
        ExceptionList = local_c;
        return uVar1;
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00426f80();
  ExceptionList = local_c;
  return 0;
}


