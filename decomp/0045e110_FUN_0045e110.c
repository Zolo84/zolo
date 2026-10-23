// FUN_0045e110 @ 45e110 size=170

void FUN_0045e110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 *param_7)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 auStack_4c [8];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc0fb;
  local_c = ExceptionList;
  uStack_20 = 0x45e131;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uStack_20 = param_6;
    uStack_24 = param_5;
    uStack_28 = 3;
    uStack_2c = param_4;
    uStack_30 = 0xffffffff;
    uStack_34 = 0xffffffff;
    puStack_38 = &DAT_0088ebf8;
    uStack_3c = 0;
    uStack_40 = 0;
    uStack_44 = param_3;
    param_7 = auStack_4c;
    FUN_00446d10(&param_1);
    uVar2 = FUN_0045fec0();
    FUN_00463af0(0x13b,&DAT_0088f238,uVar2);
  }
  local_4 = 0xffffffff;
  uStack_20 = 0x45e1a4;
  FUN_00565bf0();
  ExceptionList = local_c;
  return;
}


