// FUN_004290f0 @ 4290f0 size=154

undefined4 __fastcall FUN_004290f0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9fe6;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xc) == 0) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x14);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_0053e770(*(undefined4 *)(param_1 + 0x10));
      ExceptionList = local_c;
      return uVar2;
    }
  }
  else {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x14);
    local_4 = 1;
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_0053e740(*(undefined4 *)(param_1 + 0xc));
      ExceptionList = local_c;
      return uVar2;
    }
  }
  ExceptionList = local_c;
  return 0;
}


