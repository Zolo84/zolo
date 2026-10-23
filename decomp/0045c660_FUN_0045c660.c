// FUN_0045c660 @ 45c660 size=137

void FUN_0045c660(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbe4b;
  local_c = ExceptionList;
  uStack_20 = 0x45c681;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    param_4 = auStack_24;
    FUN_00449290(&param_2);
    uVar2 = FUN_0045fec0(param_1);
    FUN_004639d0(0x127,uVar2,param_1);
  }
  local_4 = 0xffffffff;
  uStack_20 = 0x45c6d3;
  FUN_00565bc0();
  ExceptionList = local_c;
  return;
}


