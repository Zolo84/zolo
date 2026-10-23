// FUN_005f52a0 @ 5f52a0 size=127

void __thiscall FUN_005f52a0(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ceeab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(DAT_00d0ca90 + 0x21ea2) = param_2;
  if (*(undefined4 **)(param_1 + 0x86) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x86))(1);
  }
  pvVar1 = operator_new(0xe8);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005f6210(DAT_00d0ca90);
  }
  *(undefined4 *)(param_1 + 0x86) = uVar2;
  ExceptionList = pvStack_c;
  return;
}


