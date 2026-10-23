// FUN_006cb1e0 @ 6cb1e0 size=869

undefined4 * __fastcall FUN_006cb1e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d8c86;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  param_1[3] = &PTR_LAB_007e4130;
  local_4 = 1;
  *param_1 = &PTR_FUN_007f726c;
  param_1[2] = &PTR_LAB_007f7268;
  param_1[3] = &PTR_LAB_007f7264;
  pvVar3 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_settings_setupscreen_bg_bmp_0086b624);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[4] = uVar4;
  iVar5 = FUN_00415be0();
  iVar6 = FUN_005841b0();
  DAT_00d12a34 = (iVar6 - iVar5) / 2;
  iVar5 = FUN_00415bd0();
  iVar6 = FUN_005841a0();
  DAT_00d12a30 = (iVar6 - iVar5) / 2;
  (**(code **)(*(int *)param_1[4] + 0x18))(DAT_00d12a30,DAT_00d12a34);
  puVar1 = param_1 + 5;
  iVar5 = 5;
  puVar8 = puVar1;
  do {
    pvVar3 = operator_new(0xaa);
    pvStack_c._0_1_ = 3;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00433570(s_GFX_interface_frontend_btn_front_0086b5f8,0,0xffffffff);
    }
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
    *puVar8 = uVar4;
    FUN_00415d40();
    puVar8 = puVar8 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_OPTBTN_SAVE_0086b5ec,*puVar1,uVar4);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_OPTBTN_OPTIONS_0086b5dc,param_1[6],uVar4);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_OPTBTN_HINTS_0086b5cc,param_1[7],uVar4);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_OPTBTN_QUIT_0086b5c0,param_1[8],uVar4);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_OPTBTN_BACK_0086b5b4,param_1[9],uVar4);
  iVar5 = *(int *)*puVar1;
  iVar6 = FUN_00415bd0(DAT_00d12a34 + 0x6e);
  iVar7 = FUN_00415bd0();
  (**(code **)(iVar5 + 0x18))((iVar7 / 2 - iVar6 / 2) + DAT_00d12a30);
  iVar5 = *(int *)param_1[6];
  iVar6 = FUN_00415bd0(DAT_00d12a34 + 0x9c);
  iVar7 = FUN_00415bd0();
  pvVar3 = (void *)((iVar7 / 2 - iVar6 / 2) + DAT_00d12a30);
  (**(code **)(iVar5 + 0x18))();
  iVar5 = *(int *)param_1[7];
  iVar6 = FUN_00415bd0(DAT_00d12a34 + 0xcb);
  iVar7 = FUN_00415bd0();
  (**(code **)(iVar5 + 0x18))((iVar6 / 2 - iVar7 / 2) + DAT_00d12a30);
  iVar5 = *(int *)param_1[8];
  iVar6 = FUN_00415bd0(DAT_00d12a34 + 0xfa);
  iVar7 = FUN_00415bd0();
  (**(code **)(iVar5 + 0x18))((iVar7 / 2 - iVar6 / 2) + DAT_00d12a30);
  iVar5 = *(int *)param_1[9];
  iVar6 = FUN_00415bd0(DAT_00d12a34 + 0x15f);
  iVar7 = FUN_00415bd0();
  (**(code **)(iVar5 + 0x18))((iVar7 / 2 - iVar6 / 2) + DAT_00d12a30);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0x2b) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_0040fd60(param_1,8999,0);
  FUN_006d43b0(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 3));
  cVar2 = FUN_0042e910();
  if (cVar2 == '\0') {
    *(undefined1 *)(DAT_00893530 + 0x1e) = 0;
  }
  ExceptionList = pvVar3;
  return param_1;
}


