// FUN_00607450 @ 607450 size=525

undefined4 * __thiscall FUN_00607450(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cfdb4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00414c80(s_gfx_interface_bg_leader_bmp_0085e874);
  *param_1 = &PTR_FUN_007eef68;
  param_1[2] = &PTR_LAB_007eef64;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  local_4 = 0;
  *(undefined4 *)((int)param_1 + 0x92) = (&DAT_0089cad8)[param_2];
  pvVar4 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00434930(0x124,0xa0,0,0);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x86) = uVar5;
  puVar6 = operator_new(0x1aa);
  local_4._0_1_ = 2;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar9 = 0x40;
    uVar5 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar7 = FUN_0042b6c9(s_CANCEL_0083bafc);
    FUN_0043acc0(uVar7,uVar5,uVar9);
    *puVar6 = &PTR_FUN_007ec6b8;
    puVar6[2] = &PTR_LAB_007ec6b4;
    *(undefined ***)((int)puVar6 + 0x7e) = &PTR_LAB_007ec6b0;
    puVar6[0x22] = 0xe;
  }
  local_4._0_1_ = 0;
  *(undefined4 **)((int)param_1 + 0x82) = puVar6;
  *(undefined4 *)((int)param_1 + 0x7e) = 0;
  pvVar4 = operator_new(0x72);
  local_4._0_1_ = 3;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00434930(0xb4,0x2a,0,0);
  }
  *(undefined4 *)((int)param_1 + 0x8e) = uVar5;
  local_4 = (uint)local_4._1_3_ << 8;
  uVar3 = FUN_00584270(0xff,0xff,0xff);
  param_2 = 0;
  *(undefined2 *)(*(int *)((int)param_1 + 0x8e) + 0x5a) = uVar3;
  do {
    iVar8 = FUN_0044c640(param_2);
    if (iVar8 != 0) {
      pvVar4 = operator_new(0x40);
      local_4._0_1_ = 4;
      if (pvVar4 == (void *)0x0) {
        local_14 = 0;
      }
      else {
        local_14 = FUN_00616c00(iVar8,param_2);
      }
      iVar8 = *(int *)((int)param_1 + 0x86);
      local_4 = (uint)local_4._1_3_ << 8;
      iVar1 = *(int *)(iVar8 + 8);
      puVar6 = operator_new(0xe);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6[1] = iVar1;
        *puVar6 = local_14;
        puVar6[2] = 0;
        *(undefined1 *)(puVar6 + 3) = 0;
      }
      iVar2 = *(int *)(iVar8 + 0xc);
      *(undefined4 **)(iVar8 + 8) = puVar6;
      *(int *)(iVar8 + 0xc) = iVar2 + 1;
      if (iVar2 == 0) {
        *(undefined4 **)(iVar8 + 4) = puVar6;
      }
      else {
        *(undefined4 **)(iVar1 + 8) = puVar6;
      }
    }
    param_2 = param_2 + 1;
  } while (param_2 < 10);
  ExceptionList = local_c;
  return param_1;
}


