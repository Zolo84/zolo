// FUN_0065d3a0 @ 65d3a0 size=919

undefined4 * __thiscall FUN_0065d3a0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint in_stack_ffffffc8;
  uint local_1c;
  void *pvStack_18;
  int local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d35ae;
  pvStack_c = ExceptionList;
  local_1c = local_1c & 0xff000000;
  ExceptionList = &pvStack_c;
  FUN_0065cdb0(local_1c,in_stack_ffffffc8 & 0xffff0000);
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  local_4 = 0;
  param_1[0x14] = param_2;
  *param_1 = &PTR_FUN_007f0b00;
  param_1[2] = &PTR_LAB_007f0afc;
  FUN_00425ba0(s_info_arrow_0086702c);
  piVar1 = (int *)FUN_006436d0(param_2);
  (**(code **)(*piVar1 + 0x28))(local_14);
  param_1[0xd] = pvStack_18;
  param_1[0xe] = local_14[0];
  FUN_006436d0(param_2);
  iVar2 = FUN_00415bd0();
  param_1[0xd] = param_1[0xd] + iVar2 / 2;
  FUN_006436d0(param_2);
  iVar2 = FUN_00415be0();
  param_1[0xe] = param_1[0xe] + iVar2 / 2;
  FUN_006436d0(param_2);
  iVar2 = FUN_00415be0();
  local_14[0] = local_14[0] - iVar2;
  if (local_14[0] < 0) {
    FUN_006436d0(param_2);
    iVar2 = FUN_00415be0();
    local_14[0] = local_14[0] + iVar2 * 2;
  }
  FUN_006436d0(param_2);
  iVar2 = FUN_00415bd0();
  pvStack_18 = (void *)((int)pvStack_18 + iVar2);
  iVar2 = FUN_005841a0();
  if (iVar2 + -1 < (int)pvStack_18) {
    FUN_006436d0(param_2);
    iVar2 = FUN_00415bd0();
    pvStack_18 = (void *)((int)pvStack_18 + iVar2 * -2);
  }
  param_1[0xf] = pvStack_18;
  param_1[0x10] = local_14[0];
  if (param_2 == 0) {
    param_1[0xc] = 0;
  }
  else {
    iVar2 = param_2;
    FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar2 = FUN_004129c4(iVar2);
    pvStack_18 = (void *)((int)pvStack_18 + 0x20);
    local_14[0] = local_14[0] + -0x40;
    pvVar3 = operator_new(0x58);
    puStack_8._0_1_ = 1;
    if (pvVar3 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      iVar2 = FUN_00441b30(&pvStack_18,iVar2 + 0x20,*(undefined4 *)(iVar4 + 0x10),0x10);
    }
    param_1[0xc] = iVar2;
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 8);
    iVar5 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar7 = 0;
    uVar6 = 0xffff;
    iVar4 = *(int *)(param_1[0xc] + 0x10);
    iVar5 = iVar2 / 2 - *(int *)(iVar5 + 0x10) / 2;
    iVar2 = *(int *)(iVar4 + 4) / 2;
    FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    FUN_004132d0(param_2,iVar2,iVar5,iVar4,uVar6,uVar7);
    FUN_006d4290(param_1[0xc]);
  }
  pvVar3 = operator_new(0x7e);
  puStack_8._0_1_ = 2;
  if (pvVar3 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00414ed0(0x40,0x40,8);
  }
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  param_1[10] = uVar6;
  FUN_00415a20(0x20,0x20);
  (**(code **)(*(int *)param_1[10] + 0x18))(param_1[0xf],param_1[0x10]);
  FUN_00415f20(DAT_0088eb18);
  iVar2 = param_1[0xd];
  iVar4 = param_1[0xf];
  iVar5 = iVar2 - iVar4;
  puStack_8 = (undefined1 *)
              SQRT((float)((param_1[0xe] - param_1[0x10]) * (param_1[0xe] - param_1[0x10]) +
                          iVar5 * iVar5));
  FUN_007a5d50();
  if (iVar2 < iVar4) {
    iVar2 = __ftol();
    param_1[8] = 0xb4 - iVar2;
  }
  else {
    uVar6 = __ftol();
    param_1[8] = uVar6;
  }
  iVar2 = param_1[8] + 0x5a;
  param_1[8] = iVar2;
  FUN_00429c00(&stack0xffffffd8,&stack0xffffffd4,0,0xffffffe0,
               CONCAT22((short)((uint)iVar2 >> 0x10),(short)iVar2 + 0xb4),0,0);
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  ExceptionList = pvStack_18;
  return param_1;
}


