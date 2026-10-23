// FUN_0075a7c0 @ 75a7c0 size=137

undefined4 * __thiscall FUN_0075a7c0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e0108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428b00();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e4068;
  param_1[2] = &PTR_LAB_007fa42c;
  param_1[8] = param_2;
  *param_1 = &PTR_FUN_007fa41c;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007fa414;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  puVar2 = param_1 + 9;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}


