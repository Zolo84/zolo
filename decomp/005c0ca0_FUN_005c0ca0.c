// FUN_005c0ca0 @ 5c0ca0 size=142

undefined4 * __thiscall FUN_005c0ca0(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cc6c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00433f00();
  local_4 = 0;
  *param_1 = &PTR_FUN_007ec614;
  param_1[2] = &PTR_LAB_007ec610;
  param_1[0xd] = param_2;
  *(undefined1 *)((int)param_1 + 0x32) = param_3;
  pvVar1 = operator_new(0xaa);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_plate_task_bmp_008599f0,0,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + 0x2e) = uVar2;
  *(undefined1 *)(param_1 + 0xb) = 1;
  ExceptionList = local_c;
  return param_1;
}


