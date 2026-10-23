// FUN_006f5120 @ 6f5120 size=492

undefined4 * __thiscall FUN_006f5120(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dabe3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006ee230(param_2);
  *param_1 = &PTR_FUN_007f8234;
  param_1[2] = &PTR_LAB_007f8230;
  local_4 = 0;
  puVar6 = (undefined4 *)((int)param_1 + 0x16);
  param_2 = 5;
  iVar1 = *(int *)(DAT_00bd1bac + 4);
  iVar7 = (*(int *)(DAT_00bd1bac + 8) + -0x300 >> 1) + 400;
  do {
    pvVar3 = operator_new(0xaa);
    local_4._0_1_ = 1;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00433570(s_GFX_interface_frontend_btn_front_0086b5f8,0,0xffffffff);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    *puVar6 = uVar4;
    FUN_00415d40();
    iVar2 = *(int *)*puVar6;
    iVar5 = FUN_00415bd0(iVar7);
    (**(code **)(iVar2 + 0x18))(((iVar1 + -0x400 >> 1) + 0x200) - iVar5 / 2);
    iVar7 = iVar7 + 0x28;
    puVar6 = puVar6 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEMAINBTN_TUTORIAL_0086f8e8,*(undefined4 *)((int)param_1 + 0x16),uVar4);
  *(undefined4 *)(*(int *)((int)param_1 + 0x1a) + 0x88) = 0x74;
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEMAINBTN_SINGLE_0086f8d4,*(undefined4 *)((int)param_1 + 0x1a),uVar4);
  *(undefined4 *)(*(int *)((int)param_1 + 0x1a) + 0x88) = 0x73;
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEMAINBTN_MULTIPLAYER_0086f8bc,*(undefined4 *)((int)param_1 + 0x1e),uVar4);
  *(undefined4 *)(*(int *)((int)param_1 + 0x1e) + 0x88) = 0x6d;
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEMAINBTN_CREDITS_0086f8a8,*(undefined4 *)((int)param_1 + 0x22),uVar4);
  *(undefined4 *)(*(int *)((int)param_1 + 0x22) + 0x88) = 99;
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEMAINBTN_EXIT_0086f898,*(undefined4 *)((int)param_1 + 0x26),uVar4);
  *(undefined4 *)(*(int *)((int)param_1 + 0x26) + 0x88) = 0xe;
  FUN_005823b0();
  ExceptionList = pvStack_c;
  return param_1;
}


