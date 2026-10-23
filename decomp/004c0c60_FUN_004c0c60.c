// FUN_004c0c60 @ 4c0c60 size=122

undefined4 * __fastcall FUN_004c0c60(int *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bedbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0xe);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x10))();
    *(undefined1 *)(puVar2 + 3) = uVar1;
    puVar2[1] = 6;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_007e76a0;
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


