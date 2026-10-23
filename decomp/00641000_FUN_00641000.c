// FUN_00641000 @ 641000 size=350

undefined4 * __thiscall FUN_00641000(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined2 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d220e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433570(s_gfx_interface_button_tech_normal_00861bb0,0,0xffffffff);
  puVar1 = (undefined4 *)((int)param_1 + 0xaa);
  local_4 = 0;
  *(undefined2 *)puVar1 = 0;
  param_1[0x2b] = 0;
  *param_1 = &PTR_FUN_007efdf0;
  param_1[2] = &PTR_LAB_007efdec;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007efde8;
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uStack_10 = (undefined2)((uint)*(undefined4 *)(param_2 + 0xe) >> 0x10);
  *(undefined1 *)((int)param_1 + 0xa2) = 0;
  *puVar1 = uVar3;
  *(undefined2 *)((int)param_1 + 0xae) = uStack_10;
  param_1[0x2c] = param_3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_techoutline_bmp_00861b90);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x2d] = uVar3;
  FUN_00428460(puVar1);
  uVar3 = FUN_0075a2b0(DAT_00d0ca90);
  switch(uVar3) {
  case 0:
    pcVar4 = s_gfx_interface_button_tech_normal_00861bb0;
    break;
  case 1:
    pcVar4 = s_gfx_interface_button_tech_done_b_00861b6c;
    break;
  case 2:
    pcVar4 = s_gfx_interface_button_tech_disabl_00861b44;
    break;
  default:
    goto switchD_006410df_caseD_3;
  case 5:
    pcVar4 = s_gfx_interface_button_tech_bad_bm_00861b20;
    break;
  case 6:
    pcVar4 = s_gfx_interface_button_tech_active_00861af8;
  }
  FUN_004159f0(pcVar4);
  FUN_00415b90(4);
switchD_006410df_caseD_3:
  pvVar2 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pvVar2 == (void *)0x0) {
    param_1[0x2e] = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_icon_blueprints_bm_00861ad4);
    param_1[0x2e] = uVar3;
  }
  ExceptionList = local_c;
  return param_1;
}


