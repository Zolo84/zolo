// FUN_006fdf40 @ 6fdf40 size=221

undefined4 * __thiscall
FUN_006fdf40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined2 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007db4f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[8] = param_4;
  param_1[9] = param_5;
  param_1[10] = param_6;
  *param_1 = &PTR_FUN_007f84cc;
  param_1[2] = &PTR_LAB_007f84c8;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = DAT_00bd1bac;
  *(undefined1 *)(param_1 + 0xe) = 1;
  local_4 = 1;
  uVar1 = FUN_00584270(0x41,0x41,0x41);
  *(undefined2 *)(param_1 + 0xf) = uVar1;
  uVar1 = FUN_00584270(0xac,0xac,0xac);
  *(undefined2 *)((int)param_1 + 0x3e) = uVar1;
  param_1[0xd] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 1;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  ExceptionList = local_c;
  return param_1;
}


