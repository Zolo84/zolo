// FUN_005a3bc0 @ 5a3bc0 size=369

undefined4 * __fastcall FUN_005a3bc0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cafb8;
  local_c = ExceptionList;
  uVar3 = 0x21c;
  ExceptionList = &local_c;
  uVar1 = FUN_0042b6c9(s_EYRAIR_00858a80);
  FUN_00590310(uVar1,uVar3);
  *param_1 = &PTR_FUN_007ebc68;
  param_1[2] = &PTR_LAB_007ebc64;
  local_4 = 0;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  uVar4 = 0;
  uVar2 = 0xb4;
  uVar3 = 0;
  param_1[0x4c] = uVar1;
  uVar1 = FUN_0042b6c9(s_EYRANAME_008586a8);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 100;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYRTYPE_008586a0);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x78;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYRUNIT_00858a1c);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x8c;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYRAPROV_00858a10);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x28;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYRASTR2_00858a04);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x28;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYRAORG2_008589f8);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x50;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYRUPGRADE_008589ec);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x8c;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYRMISSION_008589e0);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  param_1[0x45] = 0x13;
  ExceptionList = local_c;
  return param_1;
}


