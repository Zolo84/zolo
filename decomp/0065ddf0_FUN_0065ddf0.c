// FUN_0065ddf0 @ 65ddf0 size=503

undefined4 * __thiscall
FUN_0065ddf0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5,
            void *param_6,undefined2 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d365e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0065cdb0(param_6,param_7);
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  local_4 = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_007f0b00;
  param_1[2] = &PTR_LAB_007f0afc;
  FUN_00425ba0(s_info_arrow_0086702c);
  local_14 = 0;
  local_10 = 0;
  uVar3 = param_3;
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  iVar1 = FUN_004129c4(uVar3);
  param_6 = operator_new(0x58);
  local_4._0_1_ = 1;
  if (param_6 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar3 = FUN_00441b30(&local_14,iVar1 + 0x20,*(undefined4 *)(iVar2 + 0x10),0x10);
  }
  param_1[0xc] = uVar3;
  local_4._0_1_ = 0;
  FUN_006d4290(uVar3);
  iVar1 = *(int *)(*(int *)(param_1[0xc] + 0x10) + 8);
  iVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  uVar7 = 0;
  uVar3 = 0xffff;
  iVar2 = *(int *)(param_1[0xc] + 0x10);
  iVar4 = iVar1 / 2 - *(int *)(iVar4 + 0x10) / 2;
  iVar1 = *(int *)(iVar2 + 4) / 2;
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  FUN_004132d0(param_3,iVar1,iVar4,iVar2,uVar3,uVar7);
  pvVar5 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar5 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414ed0(0x40,0x40,8);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[10] = uVar3;
  param_1[9] = param_2;
  FUN_00415a20(0x20,0x20);
  if (param_5 == '\0') {
    puVar6 = (undefined4 *)FUN_004d7870(&param_6,param_2);
    uVar3 = *puVar6;
  }
  else {
    uVar3 = *(undefined4 *)(DAT_00ab27b4 + 0x3fa + param_2 * 0x4b2);
    puVar6 = (undefined4 *)(DAT_00ab27b4 + 0x3fa + param_2 * 0x4b2);
  }
  param_1[0xf] = uVar3;
  param_1[0x10] = puVar6[1];
  FUN_00415f20(DAT_0088eb18);
  param_1[0x15] = 0;
  param_1[0x13] = param_4;
  ExceptionList = local_c;
  return param_1;
}


