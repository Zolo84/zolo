// FUN_00434260 @ 434260 size=163

undefined4 * __thiscall
FUN_00434260(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 param_6)

{
  undefined2 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba6f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f90(param_2,param_3,param_4,0,0,1);
  *(undefined4 *)((int)param_1 + 0x23e) = param_5;
  *(undefined2 *)((int)param_1 + 0x242) = (undefined2)param_6;
  param_1[0x91] = param_6._2_4_;
  *param_1 = &PTR_FUN_007e41d8;
  param_1[2] = &PTR_LAB_007e41d4;
  local_4 = 0;
  uVar1 = FUN_00584270(0xff,0xff,0xff);
  *(undefined2 *)((int)param_1 + 0x24a) = uVar1;
  ExceptionList = local_c;
  return param_1;
}


