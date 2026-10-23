// FUN_005fd9a0 @ 5fd9a0 size=232

undefined4 * __thiscall
FUN_005fd9a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cf64e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005f83d0(param_2,param_3,param_4);
  local_4 = 0;
  FUN_00442b90();
  *param_1 = &PTR_FUN_007ee3d4;
  param_1[2] = &PTR_LAB_007ee3d0;
  pvVar1 = operator_new(0xea);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005fbb50(*(undefined4 *)(DAT_00d0ca90 + 6),param_3,1);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = uVar2;
  pvVar1 = operator_new(0xea);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005fbb50(param_3,*(undefined4 *)(DAT_00d0ca90 + 6),0);
  }
  *(undefined4 *)((int)param_1 + 0x8e) = uVar2;
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  ExceptionList = local_c;
  return param_1;
}


