// FUN_00642c60 @ 642c60 size=465

undefined4 * __thiscall FUN_00642c60(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int local_118;
  int local_114;
  undefined4 *local_110;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d2337;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_110 = param_1;
  iVar1 = FUN_005841b0();
  iVar2 = FUN_005841a0();
  local_118 = (iVar2 + -0x100) / 2 + 0x4c;
  local_114 = iVar1 / 2 + -0x98;
  FUN_0043d920(0x168,0x131,&local_118);
  local_4 = 0;
  *param_1 = &PTR_FUN_007eff14;
  param_1[2] = &PTR_LAB_007eff10;
  param_1[0x1c] = 0;
  FUN_007a630a(local_10c,s___777_s_00861ee8,param_2);
  pvVar3 = operator_new(0x7e);
  local_4._0_1_ = 1;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_iw_eventinfo_bmp_00861ec8);
  }
  local_4._0_1_ = 0;
  param_1[0x1a] = uVar4;
  FUN_00415d30(param_1[4]);
  iVar1 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  pvVar3 = operator_new(0xb2);
  local_4._0_1_ = 2;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0043b8f0(0x38,0x3c,0xd0,(int)(0xb1 / (longlong)*(int *)(iVar1 + 0x10)) + -2,
                         local_10c,uVar4,iVar1,s_gfx_interface_menu_scrollbar_bot_00861e78,
                         s_gfx_interface_menu_scrollbar_top_00861ea0,1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x1b] = uVar4;
  FUN_0043bee0(param_1[4]);
  iVar1 = param_1[0x1b];
  *(undefined1 *)(iVar1 + 0x26) = 1;
  *(undefined1 *)(iVar1 + 0xc) = 1;
  *(undefined4 *)(param_1[0x1b] + 0x16) = 0x18;
  FUN_0040fe60(param_1[0x1b]);
  FUN_0043c100(param_3,&DAT_0083bf0c,0);
  *(undefined1 *)(param_1[0x1b] + 0xc) = 1;
  ExceptionList = local_c;
  return param_1;
}


