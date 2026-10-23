// FUN_0045d180 @ 45d180 size=160

void FUN_0045d180(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbf4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar3 = 0;
    uVar2 = FUN_00458280(0);
    FUN_00464820(0x89,&DAT_0088f2a4,0x13,1,param_1,uVar2,uVar3);
  }
  local_4 = 0xffffffff;
  FUN_00565bf0();
  ExceptionList = local_c;
  return;
}


