// FUN_0042e9b0 @ 42e9b0 size=617

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0042e9b0(int param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  undefined1 uStack_e3a;
  undefined1 uStack_e39;
  undefined2 uStack_e38;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ba1f4;
  pvStack_c = ExceptionList;
  uStack_e3a = (undefined1)DAT_0088f28e;
  uStack_e39 = (undefined1)((uint)DAT_0088f28e >> 8);
  uStack_e38 = (undefined2)((uint)DAT_0088f28e >> 0x10);
  _DAT_00d61394 = CONCAT13(uStack_e39,CONCAT12(uStack_e3a,DAT_0088f28c));
  DAT_00d61396._2_2_ = uStack_e38;
  DAT_00d610dc = 0;
  DAT_00d610dd = 0;
  DAT_00d610de = 0;
  DAT_00d610df = 0;
  DAT_00d610e0 = 0;
  DAT_00d610e1 = 0;
  DAT_00d610e2 = 0;
  DAT_00d610e3 = 0;
  DAT_00d610e4 = 0;
  DAT_00d610e5 = 0;
  DAT_00d610e6 = 0;
  DAT_0087b630 = 1;
  DAT_0087b631 = 1;
  DAT_0087b634 = 1;
  DAT_0087b632 = 1;
  ExceptionList = &pvStack_c;
  FUN_004e1970();
  if (DAT_00d37ed0 != (undefined4 *)0x0) {
    (**(code **)*DAT_00d37ed0)(1);
  }
  pvVar1 = operator_new(0x34);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_00d37ed0 = (undefined4 *)0x0;
  }
  else {
    DAT_00d37ed0 = (undefined4 *)FUN_006e93e0();
  }
  uStack_4 = 0xffffffff;
  FUN_0076bc80();
  FUN_007610d0();
  FUN_00761210();
  FUN_004d0250();
  FUN_004f57c0();
  FUN_005869b0();
  FUN_00586cd0();
  FUN_00789fd0();
  DAT_0088ee04 = operator_new(0x12);
  if (DAT_0088ee04 == (undefined4 *)0x0) {
    DAT_0088ee04 = (undefined4 *)0x0;
  }
  else {
    DAT_0088ee04[1] = 0;
    DAT_0088ee04[2] = 0;
    DAT_0088ee04[3] = 0;
    *(undefined1 *)(DAT_0088ee04 + 4) = 0;
    *DAT_0088ee04 = &PTR_FUN_007e3b30;
  }
  FUN_00534930(param_2,&DAT_008390e0);
  uStack_4 = 1;
  FUN_00535c60();
  if (*(char *)(param_1 + 0x11c) != '\0') {
    FUN_00534930(s_temp_eug_0083b42c,&DAT_008390e0);
    uStack_4._0_1_ = 2;
    FUN_00535c60();
    *(undefined1 *)(param_1 + 0x11c) = 0;
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    FUN_005349a0();
  }
  FUN_0042fde0();
  _DAT_00cdb350 = (uint)pvVar1 & 0xff000000;
  DAT_00cdb354 = 0;
  iVar2 = (**(code **)(DAT_00d77b3a + 4))();
  if ((iVar2 < 1) && (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0')) {
    FUN_0076ed00();
  }
  iVar2 = (**(code **)(DAT_00d77b4c + 4))();
  if ((iVar2 < 1) && (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0')) {
    FUN_0076c940();
  }
  uStack_4 = 0xffffffff;
  FUN_005349a0();
  ExceptionList = pvStack_c;
  return 1;
}


