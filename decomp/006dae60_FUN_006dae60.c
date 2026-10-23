// FUN_006dae60 @ 6dae60 size=113

void __thiscall FUN_006dae60(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d981b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 0x50))(1);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (param_2 != 0) {
    pvVar1 = operator_new(0x7e);
    uStack_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00414c80(param_2);
    }
    *(undefined4 *)(param_1 + 0x50) = uVar2;
  }
  ExceptionList = pvStack_c;
  return;
}


