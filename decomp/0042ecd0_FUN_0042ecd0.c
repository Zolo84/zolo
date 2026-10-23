// FUN_0042ecd0 @ 42ecd0 size=735

undefined4 __fastcall FUN_0042ecd0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba27a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 0x11d) = 1;
  FUN_00428600(&DAT_0088f28c,0);
  FUN_007595a0();
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x111) = 0;
  pvVar1 = operator_new(0x7e);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00415020();
  }
  *(undefined4 *)(param_1 + 0x112) = uVar2;
  local_4 = 0xffffffff;
  FUN_00584170(s_palette_act_0083b438);
  FUN_00444300();
  FUN_00444300();
  if (DAT_00bdc100 != (undefined4 *)0x0) {
    (**(code **)*DAT_00bdc100)(1);
  }
  pvVar1 = operator_new(0x12);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    DAT_00bdc100 = (undefined4 *)0x0;
  }
  else {
    DAT_00bdc100 = (undefined4 *)FUN_005aebb0();
  }
  local_4 = 0xffffffff;
  pvVar1 = operator_new(0x1d52c);
  local_4 = 2;
  if (pvVar1 == (void *)0x0) {
    DAT_00d615b2 = 0;
  }
  else {
    DAT_00d615b2 = FUN_006ffc40();
  }
  local_4 = 0xffffffff;
  puVar3 = operator_new(0x52a);
  local_4 = 3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00430620(0);
    local_4 = CONCAT31(local_4._1_3_,4);
    *puVar3 = &PTR_FUN_007e3fb0;
    *(undefined ***)((int)puVar3 + 0x12) = &PTR_FUN_007e3fa8;
    puVar3[2] = &PTR_LAB_007e3f94;
    FUN_00428d30();
    FUN_00584840();
    *(undefined1 *)((int)puVar3 + 0x16) = 0;
  }
  local_4 = 0xffffffff;
  DAT_00d615c2 = puVar3;
  puVar3 = operator_new(0x52a);
  local_4 = 5;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00430620(0);
    local_4 = CONCAT31(local_4._1_3_,6);
    *puVar3 = &PTR_FUN_007e3f74;
    *(undefined ***)((int)puVar3 + 0x12) = &PTR_FUN_007e3f6c;
    puVar3[2] = &PTR_LAB_007e3f58;
    FUN_00428d30();
    FUN_00584a60();
    *(undefined1 *)((int)puVar3 + 0x16) = 0;
  }
  local_4 = 0xffffffff;
  DAT_00d615ca = puVar3;
  puVar3 = operator_new(0x52a);
  local_4 = 7;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00430620(0);
    local_4 = CONCAT31(local_4._1_3_,8);
    *puVar3 = &PTR_FUN_007e3f38;
    *(undefined ***)((int)puVar3 + 0x12) = &PTR_FUN_007e3f30;
    puVar3[2] = &PTR_LAB_007e3f1c;
    FUN_00428d30();
    FUN_00584950();
    *(undefined1 *)((int)puVar3 + 0x16) = 0;
  }
  local_4 = 0xffffffff;
  DAT_00d615c6 = puVar3;
  FUN_004e0600();
  FUN_0042e9b0(param_1 + 0x10);
  iVar4 = (**(code **)(DAT_00d77b3a + 4))();
  if ((iVar4 == 0) && (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0')) {
    FUN_0076ed00();
  }
  iVar4 = (**(code **)(DAT_00d77b4c + 4))();
  if ((iVar4 == 0) && (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0')) {
    FUN_0076c940();
  }
  iVar4 = (**(code **)(DAT_00d77b5e + 4))();
  if ((iVar4 == 0) && (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0')) {
    FUN_0076f220();
  }
  FUN_00577d20();
  FUN_0076e1d0();
  FUN_00780ee0();
  FUN_005886c0();
  DAT_0089374c = 1;
  ExceptionList = pvStack_c;
  return 1;
}


