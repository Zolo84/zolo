// FUN_00598630 @ 598630 size=247

undefined4 * __fastcall FUN_00598630(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ca618;
  local_c = ExceptionList;
  uVar3 = 0x208;
  ExceptionList = &local_c;
  uVar1 = FUN_0042b6c9(s_EYR_VPCOUNTRY_00858684);
  FUN_00590310(uVar1,uVar3);
  *param_1 = &PTR_FUN_007eb6bc;
  param_1[2] = &PTR_LAB_007eb6b8;
  local_4 = 0;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  uVar4 = 0;
  uVar2 = 200;
  uVar3 = 0;
  param_1[0x4c] = uVar1;
  uVar1 = FUN_0042b6c9(s_EYR_WHO_00858630);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_VP_HELD_00858678);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_VP_OFF_0085866c);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_VP_TOTAL_0085865c);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  param_1[0x45] = 0;
  ExceptionList = local_c;
  return param_1;
}


