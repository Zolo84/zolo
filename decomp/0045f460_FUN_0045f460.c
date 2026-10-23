// FUN_0045f460 @ 45f460 size=162

void FUN_0045f460(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined2 param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_2c [8];
  undefined2 local_24;
  undefined2 local_22;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc31b;
  local_c = ExceptionList;
  local_24 = 0xf483;
  local_22 = 0x45;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    local_24 = param_3._0_2_;
    param_3 = auStack_2c;
    FUN_00428eb0(auStack_2c);
    puVar3 = (undefined1 *)&param_1;
    uVar2 = FUN_0045fec0(puVar3);
    FUN_00464310(0x186,&DAT_0088f238,uVar2,puVar3);
  }
  local_4 = 0xffffffff;
  local_24 = 0xf4ec;
  local_22 = 0x45;
  FUN_00565bf0();
  ExceptionList = local_c;
  return;
}


