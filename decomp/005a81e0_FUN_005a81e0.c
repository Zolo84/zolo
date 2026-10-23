// FUN_005a81e0 @ 5a81e0 size=244

undefined4 * __fastcall FUN_005a81e0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cb258;
  local_c = ExceptionList;
  uVar3 = 0x21c;
  ExceptionList = &local_c;
  uVar1 = FUN_0042b6c9(s_EYRCOM_NUKED_HISTORY_00858cd8);
  FUN_00590310(uVar1,uVar3);
  *param_1 = &PTR_FUN_007ebfd8;
  param_1[2] = &PTR_LAB_007ebfd4;
  local_4 = 0;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  uVar4 = 0;
  uVar2 = 0x78;
  uVar3 = 0;
  param_1[0x4c] = uVar1;
  uVar1 = FUN_0042b6c9(s_EYR_NUKER_00858ccc);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x78;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYR_NUKED_00858cc0);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x78;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_T_PROVINCE_0085849c);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x78;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_NUKE_DATE_00858cb0);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  param_1[0x45] = 0x25;
  ExceptionList = local_c;
  return param_1;
}


