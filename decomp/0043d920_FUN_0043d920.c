// FUN_0043d920 @ 43d920 size=287

undefined4 * __thiscall
FUN_0043d920(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bad0e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00441b30(param_4,param_2,param_3,8);
  local_4 = 0;
  *param_1 = &PTR_FUN_007e4594;
  param_1[2] = &PTR_LAB_007e4590;
  puVar1 = operator_new(0x1aa);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar5 = 0x40;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(&DAT_00839384);
    FUN_0043acc0(uVar3,uVar2,uVar5);
    *puVar1 = &PTR_FUN_007e452c;
    puVar1[2] = &PTR_LAB_007e4528;
    *(undefined ***)((int)puVar1 + 0x7e) = &PTR_LAB_007e4524;
    puVar1[0x22] = 0xd;
  }
  local_4._0_1_ = 0;
  param_1[0x18] = puVar1;
  FUN_00415d30(param_1[4]);
  pvVar4 = operator_new(0x28);
  local_4._0_1_ = 2;
  if (pvVar4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0065f000(0x29a,0);
  }
  param_1[0x19] = uVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006d4280(param_1);
  FUN_00442820();
  ExceptionList = local_c;
  return param_1;
}


