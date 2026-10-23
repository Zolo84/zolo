// FUN_0065d760 @ 65d760 size=659

undefined4 * __thiscall
FUN_0065d760(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_stack_ffffffd4;
  undefined4 uVar6;
  void *local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d35de;
  pvStack_c = ExceptionList;
  local_14 = (void *)((uint)local_14 & 0xff000000);
  ExceptionList = &pvStack_c;
  FUN_0065cdb0(local_14,in_stack_ffffffd4 & 0xffff0000);
  param_1[0x11] = param_2;
  local_4 = 0;
  param_1[0x12] = param_3;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_007f0b00;
  param_1[2] = &PTR_LAB_007f0afc;
  FUN_00425ba0(s_info_arrow_0086702c);
  local_10 = param_1[0x12] + -0x20;
  if (local_10 < 0) {
    local_10 = param_1[0x12] + 0x20;
  }
  local_14 = (void *)(param_1[0x11] + 0x20);
  iVar1 = FUN_005841a0();
  if (iVar1 + -1 < (int)local_14) {
    local_14 = (void *)((int)local_14 + -0x40);
  }
  param_1[0xf] = local_14;
  param_1[0x10] = local_10;
  if (param_4 == 0) {
    param_1[0xc] = 0;
  }
  else {
    iVar1 = param_4;
    FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar1 = FUN_004129c4(iVar1);
    local_14 = (void *)((int)local_14 + 0x20);
    local_10 = local_10 + -0x40;
    pvVar2 = operator_new(0x58);
    local_4._0_1_ = 1;
    if (pvVar2 == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      iVar1 = FUN_00441b30(&local_14,iVar1 + 0x20,*(undefined4 *)(iVar3 + 0x10),0x10);
    }
    param_1[0xc] = iVar1;
    local_4 = (uint)local_4._1_3_ << 8;
    iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
    iVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar6 = 0;
    uVar5 = 0xffff;
    iVar3 = *(int *)(param_1[0xc] + 0x10);
    iVar1 = iVar1 / 2 - *(int *)(iVar4 + 0x10) / 2;
    iVar4 = *(int *)(iVar3 + 4) / 2;
    FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    FUN_004132d0(param_4,iVar4,iVar1,iVar3,uVar5,uVar6);
    FUN_006d4290(param_1[0xc]);
  }
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00414ed0(0x40,0x40,8);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[10] = uVar5;
  FUN_00415a20(0x20,0x20);
  (**(code **)(*(int *)param_1[10] + 0x18))(param_1[0xf],param_1[0x10]);
  FUN_00415f20(DAT_0088eb18);
  iVar1 = param_1[0xd];
  iVar3 = param_1[0xf];
  FUN_007a5d50();
  if (iVar1 < iVar3) {
    iVar1 = __ftol();
    param_1[8] = 0xb4 - iVar1;
  }
  else {
    uVar5 = __ftol();
    param_1[8] = uVar5;
  }
  param_1[0x13] = 0;
  param_1[8] = param_1[8] + 0x5a;
  param_1[0x15] = 0;
  ExceptionList = local_14;
  return param_1;
}


