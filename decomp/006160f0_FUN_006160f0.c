// FUN_006160f0 @ 6160f0 size=139

undefined4 * __thiscall FUN_006160f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d0848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433660();
  local_4 = 0;
  *param_1 = &PTR_FUN_007ef334;
  param_1[2] = &PTR_LAB_007ef330;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ef32c;
  *(undefined4 *)((int)param_1 + 0xaa) = param_2;
  uVar1 = FUN_0044b160(param_2);
  FUN_004159f0(uVar1);
  uVar1 = FUN_00413d60(s_shield_palette_bmp_0083bf2c);
  FUN_00415f20(uVar1);
  FUN_00415b90(4);
  ExceptionList = local_c;
  return param_1;
}


