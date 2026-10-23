// FUN_006ee230 @ 6ee230 size=474

undefined4 * __thiscall FUN_006ee230(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007da4e7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  *param_1 = &PTR_FUN_007f80d4;
  param_1[2] = &PTR_LAB_007f80d0;
  local_4 = 1;
  if (DAT_00d4181c == 0) {
    pvVar1 = operator_new(0x7e);
    local_4._0_1_ = 2;
    if (pvVar1 == (void *)0x0) {
      DAT_00d4181c = 0;
    }
    else {
      DAT_00d4181c = FUN_00414c80(s_gfx_interface_frontend_btn_front_0086f400);
    }
    local_4._0_1_ = 1;
    FUN_00415420();
    *(undefined4 *)(*(int *)(DAT_00d4181c + 0x62) + 0x238) = 5;
    pvVar1 = operator_new(0x7e);
    local_4._0_1_ = 3;
    if (pvVar1 == (void *)0x0) {
      DAT_00d41820 = 0;
    }
    else {
      DAT_00d41820 = FUN_00414c80(s_gfx_interface_frontend_btn_front_0086f3cc);
    }
    local_4._0_1_ = 1;
    FUN_00415420();
    *(undefined4 *)(*(int *)(DAT_00d41820 + 0x62) + 0x238) = 5;
    pvVar1 = operator_new(0x7e);
    local_4._0_1_ = 4;
    if (pvVar1 == (void *)0x0) {
      DAT_00d41824 = 0;
    }
    else {
      DAT_00d41824 = FUN_00414c80(s_gfx_interface_frontend_box_doubl_0086f398);
    }
    local_4._0_1_ = 1;
    FUN_00415420();
    *(undefined4 *)(*(int *)(DAT_00d41824 + 0x62) + 0x238) = 5;
    pvVar1 = operator_new(0x7e);
    local_4._0_1_ = 5;
    if (pvVar1 == (void *)0x0) {
      DAT_00d41828 = 0;
    }
    else {
      DAT_00d41828 = FUN_00414c80(s_gfx_interface_frontend_box_tripl_0086f364);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00415420();
    *(undefined4 *)(*(int *)(DAT_00d41828 + 0x62) + 0x238) = 5;
  }
  param_1[3] = 0;
  if (param_2 != 0) {
    pvVar1 = operator_new(0x25e);
    local_4 = CONCAT31(local_4._1_3_,6);
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00401060(param_2,1,0);
    }
    param_1[3] = uVar2;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)((int)param_1 + 0x12) = 5;
  ExceptionList = local_c;
  return param_1;
}


