// FUN_006446b0 @ 6446b0 size=629

undefined4 * __thiscall
FUN_006446b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined2 local_18;
  undefined1 local_14 [4];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d256f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0043eb30(param_2,param_5);
  *(undefined4 *)((int)param_1 + 0x8e) = param_3;
  *(undefined4 *)((int)param_1 + 0x92) = 0;
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x9a) = 0;
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  *(undefined1 *)((int)param_1 + 0xa2) = 1;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0xa6) = 0;
  *(undefined1 *)((int)param_1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((int)param_1 + 0xb2) = 0x16;
  *param_1 = &PTR_FUN_007f0190;
  param_1[2] = &PTR_LAB_007f018c;
  *(undefined4 *)((int)param_1 + 0xaa) = 0;
  *(undefined1 *)((int)param_1 + 0xb6) = 1;
  local_4 = 0;
  local_18 = 0;
  local_1a = 0;
  local_1b = 7;
  local_1c = 0;
  puVar1 = (undefined4 *)FUN_0042df90(local_14,&local_1c);
  param_1[0x29] = *puVar1;
  *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(puVar1 + 1);
  FUN_00657c10(param_1);
  pvVar2 = operator_new(0x1aa);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    uVar7 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar4 = FUN_0042b6c9(s_INVACCEPT_0086612c);
    iVar5 = FUN_0043acc0(uVar4,uVar3,uVar7);
  }
  *(int *)((int)param_1 + 0x9a) = iVar5;
  local_4._0_1_ = 0;
  *(undefined4 *)(iVar5 + 0x88) = 0xd;
  pvVar2 = operator_new(0x1aa);
  local_4._0_1_ = 2;
  if (pvVar2 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    uVar7 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar4 = FUN_0042b6c9(s_INVDECLINE_00866120);
    iVar5 = FUN_0043acc0(uVar4,uVar3,uVar7);
  }
  *(int *)((int)param_1 + 0x9e) = iVar5;
  local_4._0_1_ = 0;
  *(undefined4 *)(iVar5 + 0x88) = 0xe;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 3;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00415020();
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0xae) = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_00414c80(s_gfx_interface_dipstrip_bmp_00866104);
  }
  *(int **)((int)param_1 + 0x96) = piVar6;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar6 + 0x34))(10);
  if (*(char *)(*(int *)(*(int *)((int)param_1 + 0x96) + 0x62) + 0x253) == '\0') {
    FUN_0040b1f0(10);
  }
  pvVar2 = operator_new(0x7e);
  puStack_8._0_1_ = 5;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_diplopup_bmp_008660e8);
  }
  *(undefined4 *)((int)param_1 + 0x92) = uVar3;
  param_1[0x19] = param_5;
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  FUN_006d4290(param_1);
  ExceptionList = pvStack_10;
  return param_1;
}


