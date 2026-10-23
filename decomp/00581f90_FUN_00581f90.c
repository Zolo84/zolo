// FUN_00581f90 @ 581f90 size=90

void __fastcall FUN_00581f90(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c8e28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007eae68;
  local_4 = 0;
  if (*(char *)((int)param_1 + 10) == '\0') {
    uVar1 = param_1[1];
  }
  else {
    uVar1 = param_1[1];
  }
  FUN_00796cd8(uVar1);
  *param_1 = &PTR_LAB_007e3ebc;
  ExceptionList = local_c;
  return;
}


