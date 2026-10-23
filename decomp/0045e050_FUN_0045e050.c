// FUN_0045e050 @ 45e050 size=185

void FUN_0045e050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 void *param_5,undefined4 param_6,undefined4 param_7,undefined1 *param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_4c [8];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc0db;
  local_c = ExceptionList;
  iVar2 = (int)param_5;
  if ((int)param_5 < 1) {
    iVar2 = 1;
  }
  uStack_20 = 0x45e07f;
  ExceptionList = &local_c;
  param_5 = operator_new(0xc);
  local_4 = 0;
  if (param_5 != (void *)0x0) {
    uStack_20 = param_7;
    uStack_24 = param_6;
    uStack_28 = 2;
    uStack_30 = 0xffffffff;
    uStack_34 = 0xffffffff;
    puStack_38 = &DAT_0088ebf8;
    uStack_3c = param_4;
    uStack_40 = 0;
    uStack_44 = param_3;
    param_8 = auStack_4c;
    iStack_2c = iVar2;
    FUN_00446d10(&param_1);
    uVar1 = FUN_0045fec0();
    FUN_00463af0(0x13b,&DAT_0088f238,uVar1);
  }
  local_4 = 0xffffffff;
  uStack_20 = 0x45e0f2;
  FUN_00565bf0();
  ExceptionList = local_c;
  return;
}


