// FUN_00638730 @ 638730 size=132

void __thiscall FUN_00638730(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d1c3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(param_1 + 0x17a) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 0x17a))(1);
  }
  pvVar1 = operator_new(0xa4);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005f3f20(DAT_00d0ca90);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17a) = uVar2;
  FUN_005f52a0(param_2);
  ExceptionList = pvStack_c;
  return;
}


