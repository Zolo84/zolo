// FUN_0045d0e0 @ 45d0e0 size=150

void FUN_0045d0e0(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbf2b;
  local_c = ExceptionList;
  uStack_24 = 0x45d103;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00428eb0(&uStack_24);
    uVar3 = 0;
    uVar2 = FUN_00458280(0);
    FUN_00464820(0x89,&DAT_0088f2a4,0x13,2,param_1,uVar2,uVar3);
  }
  local_4 = 0xffffffff;
  uStack_24 = 0x45d160;
  FUN_00565bf0();
  ExceptionList = local_c;
  return;
}


