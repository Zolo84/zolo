// FUN_00425710 @ 425710 size=122

undefined4 * __fastcall FUN_00425710(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9efb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x10);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (**(code **)(*param_1 + 8))();
    puVar1[3] = uVar2;
    puVar1[1] = 4;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_007e3978;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


