// FUN_0045c6f0 @ 45c6f0 size=135

void FUN_0045c6f0(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbe6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00449290(&stack0x00000008);
    uVar2 = FUN_0045fec0(param_1);
    FUN_004639d0(0x129,uVar2,param_1);
  }
  local_4 = 0xffffffff;
  FUN_00565ca0();
  ExceptionList = local_c;
  return;
}


