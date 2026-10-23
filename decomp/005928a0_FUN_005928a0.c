// FUN_005928a0 @ 5928a0 size=130

void __fastcall FUN_005928a0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c9eeb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  if (*(undefined4 **)(param_1 + 0x118) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x118))(1);
  }
  pvVar1 = operator_new(0x72);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00434930(0x3b0,0x21c,3,0);
  }
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  ExceptionList = pvStack_c;
  return;
}


