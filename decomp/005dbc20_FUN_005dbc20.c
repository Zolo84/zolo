// FUN_005dbc20 @ 5dbc20 size=233

undefined4 * __thiscall
FUN_005dbc20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
            char param_5,undefined4 param_6)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cdc0e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005dcb20(param_2,param_6);
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  param_1[0x20] = param_3;
  *(undefined2 *)(param_1 + 0x21) = param_4;
  local_4 = 0;
  *param_1 = &PTR_FUN_007ed040;
  param_1[2] = &PTR_LAB_007ed03c;
  *(char *)((int)param_1 + 0x86) = param_5;
  if (param_5 == '\0') {
    pvVar1 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_00433570(s_gfx_interface_button_area_btn_mi_00859ab8,0,0xffffffff);
      goto LAB_005dbcef;
    }
  }
  else {
    pvVar1 = operator_new(0xaa);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_00433570(s_gfx_interface_button_area_btn_pl_00859ae0,0,0xffffffff);
      goto LAB_005dbcef;
    }
  }
  uVar2 = 0;
LAB_005dbcef:
  param_1[0x22] = uVar2;
  ExceptionList = local_c;
  return param_1;
}


