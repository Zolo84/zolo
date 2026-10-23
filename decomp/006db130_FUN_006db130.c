// FUN_006db130 @ 6db130 size=1463

undefined4 * __thiscall FUN_006db130(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  undefined4 in_stack_00000010;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_007d98b1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00441ab0();
  local_4 = (undefined4 *)0x0;
  pvVar3 = operator_new(0xaa);
  local_4._0_1_ = 1;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_btn_eventpage_righ_0086d3a0,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x16] = uVar4;
  pvVar3 = operator_new(0xaa);
  local_4._0_1_ = 2;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_btn_eventpage_left_0086d378,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x17] = uVar4;
  pvVar3 = operator_new(0x1aa);
  local_4._0_1_ = 3;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar16 = 0;
    uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar5 = FUN_0042b6c9(s_EVENTWINDOW_CLOSE_0086d364);
    uVar4 = FUN_0043acc0(uVar5,uVar4,uVar16);
  }
  local_4._0_1_ = 0;
  param_1[0x18] = uVar4;
  param_1[0x19] = 0;
  pcVar6 = operator_new(0xaa);
  local_4._0_1_ = 4;
  if (pcVar6 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00433570(s_gfx_interface_btn_scroll_bmp_0086d344,0,0xffffffff);
  }
  param_1[0x1a] = uVar4;
  local_4._0_1_ = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  *(undefined4 *)((int)param_1 + 0x76) = in_stack_00000010;
  pvVar3 = operator_new(0x7e);
  local_4._0_1_ = 5;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_bgbox_event_bmp_0086d324);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x86) = uVar4;
  pvVar3 = operator_new(0x7e);
  local_4._0_1_ = 6;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_scroll_open_bmp_0086d304);
  }
  local_4._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = uVar4;
  pvVar3 = operator_new(0x7e);
  local_4._0_1_ = 7;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_box_pagenumber_bmp_0086d2e0);
  }
  local_4 = (undefined4 *)((uint)local_4._1_3_ << 8);
  *(undefined4 *)((int)param_1 + 0x8e) = uVar4;
  *param_1 = &PTR_FUN_007f7c54;
  param_1[2] = &PTR_LAB_007f7c50;
  uVar4 = FUN_00415bd0();
  uVar5 = FUN_00415be0();
  FUN_00441c10(0,uVar4,uVar5,8,0xff,0);
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  pvVar3 = operator_new(0x25e);
  local_4._0_1_ = 8;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar17 = 1;
    uVar16 = 0x10;
    uVar4 = FUN_00415be0(0x10,1);
    uVar5 = FUN_00415bd0(uVar4);
    uVar4 = FUN_004010a0(uVar5,uVar4,uVar16,uVar17);
  }
  local_4 = (undefined4 *)((uint)local_4._1_3_ << 8);
  param_1[4] = uVar4;
  uVar4 = FUN_00415be0();
  uVar5 = FUN_00415bd0();
  *(undefined4 *)((int)param_1 + 0x4e) = uVar5;
  *(undefined4 *)((int)param_1 + 0x52) = uVar4;
  (**(code **)(**(int **)((int)param_1 + 0x8a) + 0x18))(0,0);
  FUN_00415d30(param_1[4]);
  (**(code **)(**(int **)((int)param_1 + 0x86) + 0x18))(0,0);
  FUN_00415d30(param_1[4]);
  (**(code **)(**(int **)((int)param_1 + 0x86) + 0x10))(0);
  uVar15 = 0;
  uVar5 = FUN_00584270(0xd0,0xe8,0xf8);
  uVar4 = param_1[4];
  uVar17 = 0x18;
  uVar16 = 0xb4;
  pcVar7 = pcVar6;
  FUN_004136a0(s_eurostilecond24bold_bmp_00848100);
  FUN_00413509(pcVar7,uVar16,uVar17,uVar4,uVar5,uVar15);
  uVar10 = 0xffffffff;
  pcVar7 = pcVar6;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar7 = operator_new(~uVar10);
  uVar10 = 0xffffffff;
  *(char **)((int)param_1 + 0x7a) = pcVar7;
  pcVar12 = pcVar6;
  do {
    pcVar13 = pcVar12;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  pcVar12 = pcVar13 + -uVar10;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar7 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar7 = pcVar7 + 1;
  }
  local_4 = operator_new(0x72);
  if (local_4 == (void *)0x0) {
    local_4 = (undefined4 *)0x0;
  }
  else {
    local_4 = (undefined4 *)FUN_00434930(200,0x3c,0,0);
  }
  puVar2 = local_4;
  FUN_004361a0(pvStack_c);
  iVar8 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  iVar14 = 0;
  for (piVar9 = (int *)puVar2[1]; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[2]) {
    FUN_00413509(*piVar9 + 0x34,0xb4,*(int *)(iVar8 + 0x10) * iVar14 + 0x44,param_1[4],0xffff,0);
    iVar14 = iVar14 + 1;
  }
  if (local_4 != (undefined4 *)0x0) {
    (**(code **)*local_4)(1);
  }
  local_4 = operator_new(0x72);
  if (local_4 == (void *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)FUN_00434930(0xa1,0xbd,0,0);
  }
  *(int **)((int)param_1 + 0x92) = piVar9;
  (**(code **)(*piVar9 + 0x34))(0x50,0x44);
  FUN_004361a0(pcVar6);
  iVar14 = (**(code **)(**(int **)((int)param_1 + 0x92) + 4))();
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *(int *)((int)param_1 + 0x72) = (iVar14 + -1) / 10;
  if (0 < *(int *)((int)param_1 + 0x76)) {
    pvStack_c = operator_new(0x1aa);
    if (pvStack_c == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar16 = 0;
      uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
      uVar5 = FUN_0042b6c9(s_EVENTWINDOW_GOTO_0086d2cc);
      uVar4 = FUN_0043acc0(uVar5,uVar4,uVar16);
    }
    param_1[0x19] = uVar4;
    FUN_00415d30(param_1[4]);
    iVar14 = *(int *)param_1[0x19];
    iVar8 = FUN_00415bd0(0x126);
    (**(code **)(iVar14 + 0x18))(0xaa - iVar8);
  }
  FUN_00415d30(param_1[4]);
  FUN_00415d30(param_1[4]);
  FUN_00415d30(param_1[4]);
  FUN_00415d30(param_1[4]);
  *(undefined4 *)(param_1[0x18] + 0x88) = 0xd;
  FUN_00415d30(param_1[4]);
  (**(code **)(*(int *)param_1[0x16] + 0x18))(0xcc,0xe5);
  pvVar3 = (void *)0x8e;
  (**(code **)(*(int *)param_1[0x17] + 0x18))(0x8e,0xe5);
  if (param_1[0x19] == 0) {
    iVar14 = *(int *)param_1[0x18];
    iVar8 = FUN_00415bd0(0x126);
    (**(code **)(iVar14 + 0x18))(0xb4 - iVar8 / 2);
  }
  else {
    (**(code **)(*(int *)param_1[0x18] + 0x18))(0xbe,0x126);
  }
  (**(code **)(**(int **)((int)param_1 + 0x8e) + 0x18))(0xac,0xe5);
  (**(code **)(*(int *)param_1[0x1a] + 0x18))(0x2a,0x7b);
  FUN_006d4270(param_1);
  ExceptionList = pvVar3;
  return param_1;
}


