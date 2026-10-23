// FUN_005b6e80 @ 5b6e80 size=211

void FUN_005b6e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cc01b;
  local_c = ExceptionList;
  if ((CONCAT22(param_4,param_3._2_2_) != DAT_0088f28e) || ((short)param_3 != DAT_0088f28c)) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0xc);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      FUN_00447250();
      FUN_00449290();
      uVar2 = FUN_00447250();
      FUN_00449290(uVar2);
      FUN_00494b80();
      uVar2 = FUN_0045fec0();
      FUN_005b7cf0(0x58,uVar2);
    }
    local_4 = 0xffffffff;
    FUN_00565bc0();
  }
  ExceptionList = local_c;
  return;
}


