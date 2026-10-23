// FUN_0045e280 @ 45e280 size=312

void FUN_0045e280(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined2 param_5)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc13b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0088f28e == CONCAT22(param_5,param_4._2_2_)) &&
     (ExceptionList = &local_c, DAT_0088f28c == (short)param_4)) {
    ExceptionList = &local_c;
    FUN_00428eb0();
  }
  if (param_3 == 0) {
    FUN_00428eb0();
  }
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_00449290();
    FUN_00449290();
    FUN_00447250();
    uVar2 = FUN_0045fec0();
    FUN_00446d10(uVar2);
    FUN_00463ec0(0x13c,&DAT_0088f238);
  }
  local_4 = 0xffffffff;
  FUN_00565bf0();
  ExceptionList = local_c;
  return;
}


