// FUN_00638e80 @ 638e80 size=459

undefined4 * __thiscall FUN_00638e80(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_40c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d1d07;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00441ab0();
  *param_1 = &PTR_FUN_007ef9ac;
  param_1[2] = &PTR_LAB_007ef9a8;
  param_1[0x16] = param_2;
  local_4 = 0;
  uVar1 = (**(code **)(*param_2 + 0xc))();
  uVar2 = FUN_0042b6c9(s_ABONDON_DOCTRINE_Q2_008612a8);
  FUN_007a630a(auStack_40c,uVar2,uVar1);
  puVar5 = auStack_40c;
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  iVar3 = FUN_004129c4(puVar5);
  FUN_00441c10(0,iVar3 + 0x40,0x40,0x10,0xff,0);
  uVar1 = param_1[4];
  uVar7 = 0;
  uVar6 = 0xffff;
  uVar2 = 0x10;
  iVar3 = (int)param_1[6] / 2;
  puVar5 = auStack_40c;
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  FUN_00413509(puVar5,iVar3,uVar2,uVar1,uVar6,uVar7);
  pvVar4 = operator_new(0x1aa);
  local_4._0_1_ = 1;
  if (pvVar4 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar6 = 0;
    uVar1 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar2 = FUN_0042b6c9(s_ABONDON_OK_0086129c);
    uVar1 = FUN_0043acc0(uVar2,uVar1,uVar6);
  }
  local_4._0_1_ = 0;
  param_1[0x17] = uVar1;
  FUN_00415d30(param_1[4]);
  pvVar4 = operator_new(0x1aa);
  local_4._0_1_ = 2;
  if (pvVar4 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar6 = 0;
    uVar1 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar2 = FUN_0042b6c9(s_ABONDON_CANCEL_0086128c);
    uVar1 = FUN_0043acc0(uVar2,uVar1,uVar6);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x18] = uVar1;
  FUN_00415d30(param_1[4]);
  FUN_006d4280(param_1);
  FUN_00442820();
  ExceptionList = pvStack_c;
  return param_1;
}


