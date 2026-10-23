// FUN_0065d000 @ 65d000 size=159

undefined4 * __thiscall
FUN_0065d000(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined2 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d3518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0065cdb0(param_4,param_5);
  local_4 = 0;
  *param_1 = &PTR_FUN_007f0acc;
  param_1[2] = &PTR_LAB_007f0ac8;
  FUN_00425ba0(s_info_dot_00867010);
  param_1[9] = *(undefined4 *)(*(int *)(DAT_00d13360 + 0x60) + 0xc);
  FUN_00648c30(4);
  FUN_00648bf0(param_2,0);
  ExceptionList = local_c;
  return param_1;
}


