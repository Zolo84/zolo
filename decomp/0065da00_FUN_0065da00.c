// FUN_0065da00 @ 65da00 size=768

undefined4 * __thiscall FUN_0065da00(undefined4 *param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint in_stack_ffffffd4;
  undefined4 *local_18;
  uint local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d360e;
  pvStack_c = ExceptionList;
  local_14[0] = local_14[0] & 0xff000000;
  ExceptionList = &pvStack_c;
  local_18 = param_1;
  FUN_0065cdb0(local_14[0],in_stack_ffffffd4 & 0xffff0000);
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_007f0b00;
  param_1[2] = &PTR_LAB_007f0afc;
  param_1[0x15] = param_2;
  local_4 = 0;
  (**(code **)(*param_2 + 0x28))(local_14);
  param_1[0xd] = local_18;
  param_1[0xe] = local_14[0];
  iVar1 = FUN_00415bd0();
  param_1[0xd] = param_1[0xd] + iVar1 / 2;
  iVar1 = FUN_00415be0();
  param_1[0xe] = param_1[0xe] + iVar1 / 2;
  iVar1 = FUN_00415be0();
  local_14[0] = local_14[0] - iVar1;
  if ((int)local_14[0] < 0) {
    iVar1 = FUN_00415be0();
    local_14[0] = local_14[0] + iVar1 * 2;
  }
  iVar1 = FUN_00415bd0();
  local_18 = (undefined4 *)((int)local_18 + iVar1);
  iVar1 = FUN_005841a0();
  if (iVar1 + -1 < (int)local_18) {
    iVar1 = FUN_00415bd0();
    local_18 = (undefined4 *)((int)local_18 + iVar1 * -2);
  }
  param_1[0xf] = local_18;
  param_1[0x10] = local_14[0];
  FUN_00425ba0(s_info_arrow_0086702c);
  if (param_2 == (int *)0x0) {
    param_1[0xc] = 0;
  }
  else {
    piVar6 = param_2;
    FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar1 = FUN_004129c4(piVar6);
    local_18 = local_18 + 8;
    local_14[0] = local_14[0] - 0x40;
    pvVar2 = operator_new(0x58);
    puStack_8._0_1_ = 1;
    if (pvVar2 == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      iVar1 = FUN_00441b30(&local_18,iVar1 + 0x20,*(undefined4 *)(iVar3 + 0x10),0x10);
    }
    param_1[0xc] = iVar1;
    iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 8);
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    iVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar7 = 0;
    uVar5 = 0xffff;
    iVar3 = *(int *)(param_1[0xc] + 0x10);
    iVar4 = iVar1 / 2 - *(int *)(iVar4 + 0x10) / 2;
    iVar1 = *(int *)(iVar3 + 4) / 2;
    FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    FUN_004132d0(param_2,iVar1,iVar4,iVar3,uVar5,uVar7);
    FUN_006d4290(param_1[0xc]);
  }
  pvVar2 = operator_new(0x7e);
  puStack_8._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00414ed0(0x40,0x40,8);
  }
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  param_1[10] = uVar5;
  FUN_00415a20(0x20,0x20);
  (**(code **)(*(int *)param_1[10] + 0x18))(param_1[0xf],param_1[0x10]);
  FUN_00415f20(DAT_0088eb18);
  iVar1 = param_1[0xd];
  iVar3 = param_1[0xf];
  iVar4 = iVar1 - iVar3;
  puStack_8 = (undefined1 *)
              SQRT((float)((param_1[0xe] - param_1[0x10]) * (param_1[0xe] - param_1[0x10]) +
                          iVar4 * iVar4));
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
  ExceptionList = local_18;
  return param_1;
}


