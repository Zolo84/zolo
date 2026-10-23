// FUN_00675dd0 @ 675dd0 size=89

void FUN_00675dd0(uint param_1)

{
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007d49a0;
  pvStack_10 = ExceptionList;
  uVar1 = param_1 | 0x1f;
  if (0xfffffffd < (param_1 | 0x1f)) {
    uVar1 = param_1;
  }
  uVar1 = uVar1 + 2;
  local_8 = 0;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  ExceptionList = &pvStack_10;
  operator_new(uVar1);
  FUN_00675e50();
  return;
}


