// FUN_0065f100 @ 65f100 size=126

void __fastcall FUN_0065f100(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d37f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007f0b90;
  param_1[2] = &PTR_LAB_007f0b8c;
  if (param_1[8] != 0) {
    FUN_00796cd8(param_1[8]);
  }
  *param_1 = &PTR_FUN_007f0ab4;
  param_1[2] = &PTR_LAB_007f0ab0;
  local_4 = 0;
  FUN_005837f0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = local_c;
  return;
}


