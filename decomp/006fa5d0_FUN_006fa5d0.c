// FUN_006fa5d0 @ 6fa5d0 size=355

undefined4 * __thiscall FUN_006fa5d0(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007db196;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_007f8354;
  iVar5 = *(int *)(DAT_00bd1bac + 8) + -0x300 >> 1;
  iVar6 = *(int *)(DAT_00bd1bac + 4) + -0x400 >> 1;
  param_1[3] = param_2;
  param_1[4] = param_3;
  (**(code **)(*param_3 + 0x18))(iVar6 + 0x176,iVar5 + 0x131);
  pvVar7 = (void *)(iVar6 + 0x208);
  (**(code **)(*(int *)param_1[3] + 0x18))(pvVar7,iVar5 + 0x131);
  pvStack_c = operator_new(0x7e);
  if (pvStack_c == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00414c80(s_gfx_interface_frontend_box_optio_0086fe68);
  }
  param_1[2] = piVar2;
  (**(code **)(*piVar2 + 0x18))(iVar6 + 0xee,iVar5 + 0x92);
  pvVar3 = operator_new(0xaa);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_frontend_btn_front_0086fe40,0,0xffffffff);
  }
  param_1[5] = uVar4;
  FUN_00415d40();
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEOPT_OK_0086f88c,param_1[5],uVar4);
  iVar1 = *(int *)param_1[5];
  iVar5 = FUN_00415bd0(iVar5 + 0x132);
  (**(code **)(iVar1 + 0x18))((iVar6 - iVar5 / 2) + 0x1fe);
  param_1[1] = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  ExceptionList = pvVar7;
  return param_1;
}


