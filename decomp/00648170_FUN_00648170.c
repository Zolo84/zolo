// FUN_00648170 @ 648170 size=255

undefined4 * __thiscall
FUN_00648170(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d26d8;
  local_c = ExceptionList;
  uVar3 = 200;
  ExceptionList = &local_c;
  uVar2 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  FUN_00434260(uVar2,param_3,uVar3,param_2);
  param_1[0x94] = param_5;
  *param_1 = &PTR_FUN_007f03d0;
  param_1[2] = &PTR_LAB_007f03cc;
  local_4 = 0;
  uVar1 = FUN_00584270(0xff);
  *(undefined2 *)(param_1 + 3) = uVar1;
  uVar1 = FUN_00584270(0xd0);
  *(undefined2 *)((int)param_1 + 0x24a) = uVar1;
  FUN_004136a0();
  uVar2 = FUN_004129c4();
  param_1[0x93] = uVar2;
  *(undefined1 *)(param_1 + 0x92) = param_4;
  ExceptionList = local_c;
  return param_1;
}


