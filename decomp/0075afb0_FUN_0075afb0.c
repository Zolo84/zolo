// FUN_0075afb0 @ 75afb0 size=164

undefined4 * __fastcall FUN_0075afb0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e0148;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428b00();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e4068;
  param_1[2] = &PTR_LAB_007fa458;
  *param_1 = &PTR_FUN_007fa448;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007fa440;
  *(undefined1 *)((int)param_1 + 0x87) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x1a);
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x34] = 1;
  param_1[0x35] = 0xbb9;
  *(undefined1 *)(param_1 + 0x37) = 0;
  ExceptionList = local_c;
  return param_1;
}


