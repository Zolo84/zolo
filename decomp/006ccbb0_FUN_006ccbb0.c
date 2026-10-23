// FUN_006ccbb0 @ 6ccbb0 size=253

undefined4 * __thiscall
FUN_006ccbb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5,
            int *param_6,int *param_7,undefined4 param_8)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  void *unaff_EBX;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d8dd3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006ed240(param_2,param_3,&DAT_0083bf1c,param_8);
  local_4 = 0;
  *param_1 = &PTR_FUN_007f736c;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007f7320;
  *(undefined ***)((int)param_1 + 0x1a) = &PTR_LAB_007f731c;
  pvVar2 = operator_new(0xb8);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_004403f0(0,(float)param_5,(float)*param_4,0x3f800000,
                                 s_gfx_interface_button_area_btn_mi_00859ab8,
                                 s_gfx_interface_button_area_btn_pl_00859ae0,
                                 s_gfx_interface_button_area_btn_sl_00859a6c,
                                 s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  param_1[0x1b] = piVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  iVar1 = *piVar3;
  iVar4 = FUN_00415bd0(param_6[1] + 0x140);
  (**(code **)(iVar1 + 0x18))((*param_7 / 2 - iVar4 / 2) + *param_6);
  param_1[0x1c] = param_3;
  ExceptionList = unaff_EBX;
  return param_1;
}


