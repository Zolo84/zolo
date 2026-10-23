// FUN_0059a120 @ 59a120 size=392

undefined4 * __fastcall FUN_0059a120(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ca798;
  local_c = ExceptionList;
  uVar3 = 0x21c;
  ExceptionList = &local_c;
  uVar1 = FUN_0042b6c9(s_EYR_NAVALBATTLES_00858788);
  FUN_00590310(uVar1,uVar3);
  *param_1 = &PTR_FUN_007eb834;
  param_1[2] = &PTR_LAB_007eb830;
  local_4 = 0;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  uVar4 = 0;
  uVar2 = 0x3c;
  uVar3 = 0;
  param_1[0x4c] = uVar1;
  uVar1 = FUN_0042b6c9(s_EYR_RESULT_00858730);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x78;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYRCOUNTRY_008586b4);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0xa0;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYR_PROVINCE_00858714);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x50;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_OURSIZE_00858708);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x50;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_THEIRSIZE_008586f8);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x78;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYR_STARTDATE_008586e8);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x78;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYR_ENDDATE_008586dc);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x50;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_OURLOSSES_00858778);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x50;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_THEIRLOSSES_00858768);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  param_1[0x45] = 0x27;
  ExceptionList = local_c;
  return param_1;
}


