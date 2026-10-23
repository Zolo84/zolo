// FUN_004cc857 @ 4cc857 size=164

void __fastcall FUN_004cc857(undefined4 *param_1)

{
  int iVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007bf2f3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_007e7d78;
  local_8 = 0;
  FUN_004cca0a();
  local_8 = 0xffffffff;
  *param_1 = &PTR_LAB_007e4bc4;
  local_14 = param_1[1];
  while (local_14 != 0) {
    iVar1 = *(int *)(local_14 + 8);
    FUN_00796cd8(local_14);
    local_14 = iVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ExceptionList = local_10;
  return;
}


