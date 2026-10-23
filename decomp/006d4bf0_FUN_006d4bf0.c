// FUN_006d4bf0 @ 6d4bf0 size=534

undefined4 * __fastcall FUN_006d4bf0(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d93cf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00648fb0();
  param_1[0x8871] = &PTR_LAB_007f7adc;
  param_1[0x8872] = 0;
  param_1[0x8873] = 0;
  param_1[0x8874] = 0;
  *(undefined1 *)(param_1 + 0x8875) = 0;
  *(undefined4 *)((int)param_1 + 0x221da) = 0;
  *(undefined4 *)((int)param_1 + 0x221de) = 0;
  *(undefined4 *)((int)param_1 + 0x221e2) = 0;
  *(undefined1 *)((int)param_1 + 0x221e6) = 0;
  *(undefined ***)((int)param_1 + 0x221d6) = &PTR_LAB_007f7aac;
  param_1[0x887b] = 0;
  param_1[0x887c] = 0;
  param_1[0x887d] = 0;
  *(undefined1 *)(param_1 + 0x887e) = 0;
  param_1[0x887a] = &PTR_LAB_007e378c;
  *(undefined4 *)((int)param_1 + 0x2221a) = 0;
  *(undefined4 *)((int)param_1 + 0x2221e) = 0;
  *(undefined4 *)((int)param_1 + 0x22222) = 0;
  *(undefined1 *)((int)param_1 + 0x22226) = 0;
  *(undefined ***)((int)param_1 + 0x22216) = &PTR_LAB_007f7a7c;
  param_1[0x888b] = 0;
  param_1[0x888c] = 0;
  param_1[0x888d] = 0;
  *(undefined1 *)(param_1 + 0x888e) = 0;
  param_1[0x888a] = &PTR_LAB_007f7a4c;
  local_4._0_1_ = 5;
  local_4._1_3_ = 0;
  *param_1 = &PTR_FUN_007f75a8;
  *(undefined ***)((int)param_1 + 10) = &PTR_FUN_007f75a0;
  *(undefined ***)((int)param_1 + 0xe) = &PTR_LAB_007f758c;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007f7588;
  param_1[0x4f21] = &PTR_FUN_007f7584;
  param_1[0x4f22] = &PTR_LAB_007f7580;
  param_1[0x8871] = &PTR_LAB_007f7550;
  *(undefined4 *)((int)param_1 + 0x2220a) = 0;
  *(undefined4 *)((int)param_1 + 0x2220e) = 0;
  *(undefined1 *)((int)param_1 + 0x22212) = 0;
  *(undefined1 *)(param_1 + 0x8885) = 1;
  *(undefined1 *)((int)param_1 + 0x22215) = 0;
  *(undefined4 *)((int)param_1 + 0x22202) = 0;
  *(undefined4 *)((int)param_1 + 0x221fa) = 0;
  *(undefined4 *)((int)param_1 + 0x221fe) = 0;
  *(undefined1 *)((int)param_1 + 0x22242) = 0;
  param_1[0x8891] = 0;
  param_1[0x8892] = 0;
  *(undefined1 *)(param_1 + 0x8893) = 0;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_tutorial_overlay_dark_bmp_0086cd7c);
  }
  local_4._0_1_ = 5;
  *(undefined4 *)((int)param_1 + 0x2223a) = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_tutorial_overlay_dark_bmp_0086cd7c);
  }
  local_4._0_1_ = 5;
  *(undefined4 *)((int)param_1 + 0x2223e) = uVar2;
  *(undefined1 *)((int)param_1 + 0x22252) = 0;
  pvVar1 = operator_new(0xaa);
  local_4 = CONCAT31(local_4._1_3_,8);
  if (pvVar1 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00433570(s_tutorial_enter_bmp_0086cd68,0,0xffffffff);
  }
  *(int *)((int)param_1 + 0x2224e) = iVar3;
  *(undefined4 *)(iVar3 + 0x88) = 0xd;
  ExceptionList = local_c;
  return param_1;
}


