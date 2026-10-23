// FUN_00433660 @ 433660 size=219

int * __fastcall FUN_00433660(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00415020();
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e4130;
  *(undefined1 *)((int)param_1 + 0x87) = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x92) = 0;
  *param_1 = (int)&PTR_FUN_007e40cc;
  param_1[2] = (int)&PTR_LAB_007e40c8;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e40c4;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  (*(code *)PTR_FUN_007e4100)(4);
  if (*(char *)((int)param_1 + 0x86) != '\0') {
    (**(code **)(*param_1 + 0x54))();
  }
  *(undefined1 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  (**(code **)(*param_1 + 0x54))();
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  param_1[0x26] = -1;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  param_1[0x29] = 0x10;
  *(undefined1 *)((int)param_1 + 0xa2) = 1;
  ExceptionList = param_1;
  return param_1;
}


