// FUN_00597c80 @ 597c80 size=322

undefined4 * __fastcall FUN_00597c80(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ca5b8;
  local_c = ExceptionList;
  uVar3 = 0x208;
  ExceptionList = &local_c;
  uVar1 = FUN_0042b6c9(s_EYR_VPPROVS_00858650);
  FUN_00590310(uVar1,uVar3);
  *param_1 = &PTR_FUN_007eb65c;
  param_1[2] = &PTR_LAB_007eb658;
  local_4 = 0;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  uVar4 = 0;
  uVar2 = 0x50;
  uVar3 = 0;
  param_1[0x4c] = uVar1;
  uVar1 = FUN_0042b6c9(s_EYR_V_PROV_00858644);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_V_VALUE_00858638);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 200;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYR_WHO_00858630);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 1;
  uVar1 = FUN_005857c0(1,0,0);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 1;
  uVar1 = FUN_005857c0(1,0,0);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 1;
  uVar1 = FUN_005857c0(1,0,0);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_NEUTRAL_00858624);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  param_1[0x45] = 1;
  ExceptionList = local_c;
  return param_1;
}


