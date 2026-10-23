// FUN_0045dea0 @ 45dea0 size=230

void FUN_0045dea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined1 *param_20)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 auStack_6c [8];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
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
  puStack_8 = &LAB_007bc09b;
  local_c = ExceptionList;
  uStack_20 = 0x45dec1;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uStack_20 = param_19;
    uStack_24 = param_18;
    uStack_28 = 0;
    uStack_2c = param_17;
    uStack_30 = param_16;
    uStack_34 = param_15;
    uStack_38 = param_14;
    uStack_3c = param_13;
    uStack_40 = param_12;
    uStack_44 = param_11;
    uStack_48 = param_10;
    uStack_4c = param_9;
    uStack_50 = param_8;
    uStack_54 = param_7;
    uStack_58 = param_6;
    uStack_5c = param_5;
    uStack_60 = param_4;
    uStack_64 = param_3;
    param_20 = auStack_6c;
    FUN_00446d10(&param_1);
    uVar2 = FUN_0045fec0();
    FUN_00463c90(0x13b,&DAT_0088f238,uVar2);
  }
  local_4 = 0xffffffff;
  uStack_20 = 0x45df70;
  FUN_00565bf0();
  ExceptionList = local_c;
  return;
}


