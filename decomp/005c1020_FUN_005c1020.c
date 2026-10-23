// FUN_005c1020 @ 5c1020 size=263

void __fastcall FUN_005c1020(int *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cc771;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0xaa);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(s_gfx_interface_plate_task_bmp_008599f0,0,0xffffffff);
  }
  *(undefined4 *)((int)param_1 + 0x2e) = uVar2;
  uVar2 = 1;
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x34))(1);
  pvVar3 = operator_new(0x7e);
  puStack_8 = (undefined1 *)0x1;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_color_bmp_00859a10);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  *(undefined4 *)((int)param_1 + 0x32) = uVar4;
  FUN_00415d40(uVar2,pvVar3);
  pvVar3 = operator_new(0x7e);
  puStack_8 = (undefined1 *)0x2;
  if (pvVar3 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_color_bmp_00859a10);
  }
  *(undefined4 *)((int)param_1 + 0x36) = uVar2;
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00415d30(*(undefined4 *)(*(int *)((int)param_1 + 0x32) + 0x62));
  *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x32) + 0x62) + 0x252) = 1;
  *(undefined1 *)(*(int *)(*(int *)((int)param_1 + 0x36) + 0x62) + 0x252) = 0;
  ExceptionList = pvVar1;
  return;
}


