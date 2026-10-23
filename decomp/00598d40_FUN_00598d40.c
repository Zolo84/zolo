// FUN_00598d40 @ 598d40 size=308

undefined4 * __fastcall FUN_00598d40(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ca668;
  local_c = ExceptionList;
  uVar3 = 0x21c;
  ExceptionList = &local_c;
  uVar1 = FUN_0042b6c9(s_EYRSUNKPAGE_008586c0);
  FUN_00590310(uVar1,uVar3);
  *param_1 = &PTR_FUN_007eb71c;
  param_1[2] = &PTR_LAB_007eb718;
  local_4 = 0;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  uVar4 = 0;
  uVar2 = 0x78;
  uVar3 = 0;
  param_1[0x4c] = uVar1;
  uVar1 = FUN_0042b6c9(s_EYRCOUNTRY_008586b4);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0xd2;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYRANAME_008586a8);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 100;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYRTYPE_008586a0);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0xd2;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYRSUNKNAME_00858694);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 100;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYRTYPE_008586a0);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x78;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYRCOUNTRY_008586b4);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  param_1[0x45] = 0x24;
  ExceptionList = local_c;
  return param_1;
}


