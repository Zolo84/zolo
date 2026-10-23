// FUN_0058e890 @ 58e890 size=83

void __fastcall FUN_0058e890(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c9c09;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004338f0();
  if (param_1 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x1b0);
  }
  FUN_00796cd8(*puVar1);
  ExceptionList = local_c;
  return;
}


