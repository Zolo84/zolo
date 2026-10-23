// FUN_0043dce0 @ 43dce0 size=616

undefined4 * __thiscall
FUN_0043dce0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bad89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00441ab0();
  uVar9 = 300;
  *param_1 = &PTR_FUN_007e4594;
  param_1[2] = &PTR_LAB_007e4590;
  local_4 = 0;
  uVar5 = param_3;
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  iVar1 = FUN_00412d10(uVar5,uVar9);
  if (iVar1 + 1 == 0) {
    uVar5 = param_3;
    FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    iVar1 = FUN_004129c4(uVar5);
    FUN_00441c10(0,iVar1 + 0x40,0x40,0x10,0xff,0);
    uVar5 = param_1[4];
    uVar10 = 0;
    uVar7 = 0xffff;
    uVar9 = 0x10;
    iVar1 = (int)param_1[6] / 2;
    FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    FUN_00413509(param_3,iVar1,uVar9,uVar5,uVar7,uVar10);
  }
  else {
    iVar2 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    FUN_00441c10(0,0x16c,*(int *)(iVar2 + 0x10) * (iVar1 + 1) + 0x50,0x10,0xff,0);
    pvVar6 = operator_new(0xb2);
    local_4._0_1_ = 1;
    if (pvVar6 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      uVar8 = 0;
      uVar10 = 0;
      uVar7 = 0;
      uVar5 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      uVar9 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      piVar3 = (int *)FUN_0043b8f0(0x10,0,300,iVar1 + 2,param_2,uVar9,uVar5,uVar7,uVar10,uVar8);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0043c100(param_3,&DAT_0083baf4,0);
    *(undefined1 *)((int)piVar3 + 0xd) = 1;
    FUN_0043bee0(param_1[4]);
    (**(code **)(*piVar3 + 0x10))(0);
    if (piVar3 != (int *)0x0) {
      (**(code **)*piVar3)(1);
    }
  }
  puVar4 = operator_new(0x1aa);
  local_4._0_1_ = 2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar7 = 0x40;
    uVar5 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar9 = FUN_0042b6c9(&DAT_00839384);
    FUN_0043acc0(uVar9,uVar5,uVar7);
    *puVar4 = &PTR_FUN_007e452c;
    puVar4[2] = &PTR_LAB_007e4528;
    *(undefined ***)((int)puVar4 + 0x7e) = &PTR_LAB_007e4524;
    puVar4[0x22] = 0xd;
  }
  local_4._0_1_ = 0;
  param_1[0x18] = puVar4;
  FUN_00415d30(param_1[4]);
  pvVar6 = operator_new(0x28);
  local_4._0_1_ = 3;
  if (pvVar6 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0065f000(param_4,0);
  }
  param_1[0x19] = uVar5;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006d4280(param_1);
  FUN_00442820();
  ExceptionList = local_c;
  return param_1;
}


