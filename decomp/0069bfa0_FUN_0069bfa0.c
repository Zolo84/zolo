// FUN_0069bfa0 @ 69bfa0 size=194

undefined4 * FUN_0069bfa0(undefined4 param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d56ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xc0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_006a2880(param_1);
    puVar1[0x23] = 0;
    *(undefined4 *)((int)puVar1 + 0x92) = 0;
    *(undefined4 *)((int)puVar1 + 0x96) = 0;
    *(undefined4 *)((int)puVar1 + 0x9a) = 0;
    *(undefined4 *)((int)puVar1 + 0x9e) = 0;
    *(undefined4 *)((int)puVar1 + 0xa2) = 0x3f800000;
    *(undefined4 *)((int)puVar1 + 0xa6) = 0x3f800000;
    *(undefined4 *)((int)puVar1 + 0xae) = 0;
    *(undefined4 *)((int)puVar1 + 0xb2) = 0;
    *(undefined4 *)((int)puVar1 + 0xb6) = 0;
    *(undefined1 *)((int)puVar1 + 0xba) = 0;
    *(undefined ***)((int)puVar1 + 0xaa) = &PTR_FUN_007e7a0c;
    *puVar1 = &PTR_FUN_007f4a7c;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


