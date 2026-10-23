// FUN_005f6210 @ 5f6210 size=1051

undefined4 * __fastcall FUN_005f6210(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cefe1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00414c80(s_gfx_interface_bg_convoysedit_bmp_0085db08);
  *(undefined2 *)((int)param_1 + 0x7e) = 0;
  param_1[0x20] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_007ed980;
  param_1[2] = &PTR_LAB_007ed97c;
  pvVar2 = operator_new(0x1aa);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar8 = 0;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar4 = FUN_0042b6c9(s_CONVOY_DELETE_0085daf8);
    uVar3 = FUN_0043acc0(uVar4,uVar3,uVar8);
  }
  param_1[0x38] = uVar3;
  piVar7 = param_1 + 0x21;
  iVar6 = 5;
  do {
    local_4._0_1_ = 0;
    pvVar2 = operator_new(0xaa);
    local_4._0_1_ = 2;
    if (pvVar2 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
    }
    *piVar7 = iVar5;
    *(undefined1 *)(iVar5 + 0xa2) = 0;
    iVar5 = *piVar7;
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + -1;
    local_4._0_1_ = 0;
    *(undefined1 *)(iVar5 + 0x68) = 1;
  } while (iVar6 != 0);
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 3;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_area_btn_pl_0085d8e8,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x32] = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_area_btn_mi_0085d8b8,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x33] = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 5;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_area_btn_pl_0085d8e8,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x34] = uVar3;
  pvVar2 = operator_new(0xaa);
  local_4._0_1_ = 6;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00433570(s_gfx_interface_button_area_btn_mi_0085d888,0,0xffffffff);
  }
  param_1[0x35] = uVar3;
  puVar1 = (undefined4 *)((int)param_1 + 0x7e);
  iVar6 = *(int *)(DAT_00d0ca90 + 0x21ea2);
  local_4._0_1_ = 0;
  *puVar1 = *(undefined4 *)(iVar6 + 0xc);
  *(undefined2 *)((int)param_1 + 0x82) = *(undefined2 *)(iVar6 + 0x10);
  pvVar2 = operator_new(0x54);
  local_4._0_1_ = 7;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    FUN_00428ee0(puVar1);
    iVar6 = FUN_004d5be0();
    uVar3 = FUN_005efbe0(*(undefined4 *)(iVar6 + 0x12),0);
  }
  local_4._0_1_ = 0;
  param_1[0x30] = uVar3;
  pvVar2 = operator_new(0x54);
  local_4._0_1_ = 8;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    FUN_00428ee0(puVar1);
    iVar6 = FUN_004d5bf0();
    uVar3 = FUN_005efbe0(*(undefined4 *)(iVar6 + 0x12),0);
  }
  local_4._0_1_ = 0;
  param_1[0x31] = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 9;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_escort_bmp_0085d86c);
  }
  local_4._0_1_ = 0;
  param_1[0x36] = uVar3;
  pvVar2 = operator_new(0x7e);
  local_4._0_1_ = 10;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_transport_bmp_0085d850);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x37] = uVar3;
  iVar6 = 5;
  do {
    FUN_00433930();
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = (int)param_1 + 0x7e;
  iVar5 = FUN_00428ee0(iVar6);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + -8;
  }
  if (*(char *)(iVar5 + 0x16) != '\0') {
    FUN_00433950();
  }
  iVar5 = FUN_00428ee0(iVar6);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + -8;
  }
  if (*(char *)(iVar5 + 0x17) != '\0') {
    FUN_00433950();
  }
  iVar5 = FUN_00428ee0(iVar6);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + -8;
  }
  if (*(char *)(iVar5 + 0x1a) != '\0') {
    FUN_00433950();
  }
  iVar5 = FUN_00428ee0(iVar6);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + -8;
  }
  if (*(char *)(iVar5 + 0x18) != '\0') {
    FUN_00433950();
  }
  iVar6 = FUN_00428ee0(iVar6);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + -8;
  }
  if (*(char *)(iVar6 + 0x19) != '\0') {
    FUN_00433950();
  }
  pvVar2 = operator_new(0x1aa);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  if (pvVar2 == (void *)0x0) {
    param_1[0x39] = 0;
  }
  else {
    uVar8 = 0x78;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar4 = FUN_0042b6c9(s_CLOSE_0085ac18);
    uVar3 = FUN_0043acc0(uVar4,uVar3,uVar8);
    param_1[0x39] = uVar3;
  }
  ExceptionList = pvStack_c;
  return param_1;
}


