// FUN_00582f10 @ 582f10 size=170

undefined4 * __fastcall FUN_00582f10(undefined4 *param_1)

{
  _SYSTEMTIME local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8ede;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00580c80();
  local_4 = 0;
  FUN_007a8800(param_1 + 8,0x12,5,FUN_005835f0,FUN_00583610);
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_007eaf14;
  *(undefined4 *)((int)param_1 + 0x7a) = 0;
  param_1[7] = 0;
  FUN_00583250(0,s_lobby_txt_008576f4);
  FUN_00583250(1,s_war_txt_008576ec);
  FUN_00583250(2,s_peace_txt_008576e0);
  GetSystemTime(&local_1c);
  FUN_005830c0();
  ExceptionList = local_c;
  return param_1;
}


