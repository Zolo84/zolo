// FUN_005c6380 @ 5c6380 size=131

undefined4 * __thiscall FUN_005c6380(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cca13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f00();
  local_4 = 0;
  *param_1 = &PTR_FUN_007ec834;
  param_1[2] = &PTR_LAB_007ec830;
  *(undefined4 *)((int)param_1 + 0x2e) = param_2;
  pvVar1 = operator_new(0xaa);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_plate_prov_bmp_00859d10,0,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + 0x32) = uVar2;
  ExceptionList = local_c;
  return param_1;
}


