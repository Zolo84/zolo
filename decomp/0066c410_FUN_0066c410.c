// FUN_0066c410 @ 66c410 size=125

void __fastcall FUN_0066c410(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d3ffb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x52);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0066a980(*(undefined4 *)(param_1 + 10));
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27154) = uVar2;
  FUN_0066abb0(*(undefined4 *)(param_1 + 10));
  FUN_006a9cd0();
  FUN_006ae0d0(1,0);
  ExceptionList = local_c;
  return;
}


