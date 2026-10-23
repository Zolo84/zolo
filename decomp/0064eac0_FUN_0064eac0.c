// FUN_0064eac0 @ 64eac0 size=107

void __thiscall FUN_0064eac0(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d2c5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(param_1 + 0x13da8) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 0x13da8))(1);
  }
  pvVar1 = operator_new(0x76);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005c05d0(param_2);
  }
  *(undefined4 *)(param_1 + 0x13da8) = uVar2;
  ExceptionList = pvStack_c;
  return;
}


