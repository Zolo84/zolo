// FUN_00427f80 @ 427f80 size=102

undefined4 * __fastcall FUN_00427f80(undefined2 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9f7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x1a);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0053e740(0x523);
    *(undefined2 *)(puVar1 + 5) = *param_1;
    *(undefined4 *)((int)puVar1 + 0x16) = *(undefined4 *)(param_1 + 1);
    *puVar1 = &PTR_FUN_007e3ba4;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


