// FUN_00582e00 @ 582e00 size=238

void FUN_00582e00(void)

{
  undefined4 *puVar1;
  _SYSTEMTIME _Stack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c8ea9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_00bd1524 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)*DAT_00bd1524)(1);
  }
  puVar1 = operator_new(0x7e);
  uStack_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00580c80();
    uStack_4._0_1_ = 1;
    FUN_007a8800(puVar1 + 8,0x12,5,FUN_005835f0,FUN_00583610);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    *puVar1 = &PTR_FUN_007eaf14;
    *(undefined4 *)((int)puVar1 + 0x7a) = 0;
    puVar1[7] = 0;
    FUN_00583250(0,s_lobby_txt_008576f4);
    FUN_00583250(1,s_war_txt_008576ec);
    FUN_00583250(2,s_peace_txt_008576e0);
    GetSystemTime(&_Stack_1c);
    FUN_005830c0();
    DAT_00bd1524 = puVar1;
    ExceptionList = pvStack_c;
    return;
  }
  DAT_00bd1524 = (undefined4 *)0x0;
  ExceptionList = pvStack_c;
  return;
}


