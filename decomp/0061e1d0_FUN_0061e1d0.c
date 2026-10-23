// FUN_0061e1d0 @ 61e1d0 size=542

undefined4 * __thiscall FUN_0061e1d0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  void *unaff_EBX;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_007d0d95;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00414c80(s_gfx_interface_middle_bmp_0085ff28);
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ef58c;
  local_4 = (void *)0x0;
  *param_1 = &PTR_FUN_007ef514;
  param_1[2] = &PTR_LAB_007ef510;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_FUN_007ef50c;
  param_1[0x24] = param_2;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00414c80(s_gfx_interface_prickar_bmp_0085ff0c);
  }
  param_1[0x28] = piVar2;
  local_4 = (void *)((uint)local_4._1_3_ << 8);
  (**(code **)(*piVar2 + 0x34))(5);
  pvVar1 = operator_new(0x7e);
  puStack_8._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00414c80(s_gfx_interface_symbols_bmp_0085fef0);
  }
  param_1[0x27] = piVar2;
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  (**(code **)(*piVar2 + 0x34))(7);
  local_4 = operator_new(0x7e);
  pvStack_c._0_1_ = 3;
  if (local_4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_balk_bmp_0085fed8);
  }
  pvStack_c._0_1_ = 0;
  param_1[0x26] = uVar3;
  *(undefined1 *)((int)param_1 + 0x8e) = 0;
  local_4 = operator_new(0x7e);
  pvStack_c._0_1_ = 4;
  if (local_4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_sidebar_bg_bmp_0085feb8);
  }
  pvStack_c._0_1_ = 0;
  param_1[0x25] = uVar3;
  local_4 = operator_new(0xaa);
  pvStack_c._0_1_ = 5;
  if (local_4 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00433570(s_gfx_interface_forward_bmp_0085fe9c,0,0xffffffff);
  }
  *(int *)((int)param_1 + 0x82) = iVar4;
  pvStack_c._0_1_ = 0;
  *(undefined4 *)(iVar4 + 0x88) = 0x2e;
  local_4 = operator_new(0xaa);
  pvStack_c._0_1_ = 6;
  if (local_4 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00433570(s_gfx_interface_back_bmp_0085fe84,0,0xffffffff);
  }
  *(int *)((int)param_1 + 0x86) = iVar4;
  *(undefined4 *)(iVar4 + 0x88) = 0x2c;
  pvStack_c._0_1_ = 0;
  *(undefined1 *)(*(int *)((int)param_1 + 0x82) + 0x68) = 1;
  *(undefined1 *)(*(int *)((int)param_1 + 0x86) + 0x68) = 1;
  local_4 = operator_new(0x7e);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,7);
  if (local_4 != (void *)0x0) {
    uVar3 = FUN_00414c80(s_gfx_interface_bg_listheader_bmp_0085fe64);
    *(undefined4 *)((int)param_1 + 0x8a) = uVar3;
    ExceptionList = unaff_EBX;
    return param_1;
  }
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  ExceptionList = unaff_EBX;
  return param_1;
}


