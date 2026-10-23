// FUN_006d37e0 @ 6d37e0 size=408

void __fastcall FUN_006d37e0(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d92d7;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x68);
  ExceptionList = &pvStack_c;
  if (iVar1 != 0) {
    ExceptionList = &pvStack_c;
    FUN_006d30f0();
    FUN_00796cd8(iVar1);
  }
  if (*(undefined4 **)(param_1 + 0x70) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x70))(1);
  }
  if (*(undefined4 **)(param_1 + 0x74) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x74))(1);
  }
  if (*(undefined4 **)(param_1 + 0x78) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x78))(1);
  }
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x6c))(1);
  }
  pvVar2 = operator_new(0x7e);
  uStack_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_topbar_plate_bmp_0086ccb4);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  pvVar2 = operator_new(0x7e);
  uStack_4 = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00415020();
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  pvVar2 = operator_new(0x7e);
  uStack_4 = 2;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00415020();
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  pvVar2 = operator_new(0x7e);
  uStack_4 = 3;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00415020();
  }
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  uStack_4 = 0xffffffff;
  FUN_006d3980(*(undefined4 *)(param_1 + 0x70),s_topbar_bmp_0086cca8);
  FUN_006d3980(*(undefined4 *)(param_1 + 0x74),s_sidebar_A_bmp_0086cc98);
  FUN_006d3980(*(undefined4 *)(param_1 + 0x78),s_fullscreen_bmp_0086cc88);
  pvVar2 = operator_new(0x12);
  uStack_4 = 4;
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_006d3010();
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    ExceptionList = pvStack_c;
    return;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  ExceptionList = pvStack_c;
  return;
}


