// FUN_00617040 @ 617040 size=747

undefined4 * __thiscall FUN_00617040(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined2 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d0943;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00414c80(s_gfx_interface_bg_leader_bmp_0085e874);
  local_4 = 0;
  *param_1 = &PTR_FUN_007ef43c;
  param_1[2] = &PTR_LAB_007ef438;
  *(int *)((int)param_1 + 0x8a) = param_2;
  pvVar6 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar6 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00434930(0x124,0xa0,0,0);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x86) = uVar7;
  puVar8 = operator_new(0x1aa);
  local_4._0_1_ = 2;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    uVar11 = 0x40;
    uVar7 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar9 = FUN_0042b6c9(s_CANCEL_0083bafc);
    FUN_0043acc0(uVar9,uVar7,uVar11);
    *puVar8 = &PTR_FUN_007ec6b8;
    puVar8[2] = &PTR_LAB_007ec6b4;
    *(undefined ***)((int)puVar8 + 0x7e) = &PTR_LAB_007ec6b0;
    puVar8[0x22] = 0xe;
  }
  local_4._0_1_ = 0;
  *(undefined4 **)((int)param_1 + 0x82) = puVar8;
  *(undefined4 *)((int)param_1 + 0x7e) = 0;
  pvVar6 = operator_new(0x72);
  local_4._0_1_ = 3;
  if (pvVar6 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00434930(0xb4,0x2a,0,0);
  }
  *(undefined4 *)((int)param_1 + 0x8e) = uVar7;
  local_4 = (uint)local_4._1_3_ << 8;
  uVar5 = FUN_00584270(0xff,0xff,0xff);
  *(undefined2 *)(*(int *)((int)param_1 + 0x8e) + 0x5a) = uVar5;
  if (*(int *)((int)param_1 + 0x8a) != 0) {
    uVar7 = FUN_007637c0();
    FUN_004361a0(uVar7);
  }
  piVar2 = *(int **)(DAT_00d0ca90 + 0x2a0);
  while (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    piVar2 = (int *)piVar2[2];
    iVar10 = FUN_00428ee0(iVar3);
    if ((((iVar10 != 0) && (iVar1 = iVar10 + -8, iVar1 != 0)) &&
        ((*(int *)(iVar3 + 6) == param_3 ||
         ((*(int *)(iVar10 + 0xb2) != 0 && (*(int *)(*(int *)(iVar10 + 0xb2) + 4) == 10)))))) &&
       ((cVar4 = FUN_004a4a50(iVar1,param_3), cVar4 != '\0' && (param_2 != iVar1)))) {
      pvVar6 = operator_new(0x40);
      local_4._0_1_ = 4;
      if (pvVar6 == (void *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_00616c00(iVar1,param_3);
      }
      iVar3 = *(int *)((int)param_1 + 0x86);
      local_4 = (uint)local_4._1_3_ << 8;
      iVar10 = *(int *)(iVar3 + 8);
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = uVar7;
        puVar8[1] = iVar10;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
      }
      iVar1 = *(int *)(iVar3 + 0xc);
      *(undefined4 **)(iVar3 + 8) = puVar8;
      *(int *)(iVar3 + 0xc) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 **)(iVar3 + 4) = puVar8;
      }
      else {
        *(undefined4 **)(iVar10 + 8) = puVar8;
      }
    }
  }
  if (param_2 == 0) {
    FUN_007a630a(local_10c,s_gfx_interface_pics_unknown_bmp_0084a150);
  }
  else {
    FUN_007a630a(local_10c,s_gfx_interface_pics__s_bmp_0085d184,param_2 + 0x2a);
  }
  FUN_0061e550((int)param_1 + 0x7e,local_10c,0);
  ExceptionList = local_c;
  return param_1;
}


