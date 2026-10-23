// FUN_00638d50 @ 638d50 size=116

void __fastcall FUN_00638d50(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d1cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_007ef930;
  param_1[2] = &PTR_LAB_007ef92c;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_FUN_007ef928;
  iVar1 = param_1[0x2f];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00592d00();
    FUN_00796cd8(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_0061e410();
  ExceptionList = local_c;
  return;
}


