// FUN_006a6e40 @ 6a6e40 size=207

undefined4 * __thiscall FUN_006a6e40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d5974;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006a2880(param_2);
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x24] = &PTR_FUN_007e7a0c;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x29] = &PTR_FUN_007e7b70;
  local_4 = 2;
  *param_1 = &PTR_FUN_007f6490;
  puVar1 = operator_new(0x12);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = &PTR_FUN_007f6448;
  }
  param_1[0x2e] = puVar1;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 1;
  ExceptionList = local_c;
  return param_1;
}


