// FUN_0059b0f0 @ 59b0f0 size=646

undefined4 * __fastcall FUN_0059b0f0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ca868;
  local_c = ExceptionList;
  uVar3 = 0x21c;
  ExceptionList = &local_c;
  uVar1 = FUN_0042b6c9(s_EYRARMIES_ST_00858890);
  FUN_00590310(uVar1,uVar3);
  *param_1 = &PTR_FUN_007eb908;
  param_1[2] = &PTR_LAB_007eb904;
  local_4 = 0;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  uVar4 = 0;
  uVar2 = 200;
  uVar3 = 0;
  param_1[0x4c] = uVar1;
  uVar1 = FUN_0042b6c9(s_EYRANAME_008586a8);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x32;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYRTYPE_008586a0);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x96;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYRMODEL_00858884);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x41;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYRBRIGADESHORT_00858874);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x3c;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYRSOFT_0085886c);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x28;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYRHA_00858864);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x28;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYRSA_0085885c);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x28;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYRAA_00858854);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  if (DAT_00dc1749 == '\0') {
    pcVar5 = s_EYRDEF_00858838;
  }
  else {
    pcVar5 = s_UIW_2_DEFENCE_SHORT_00858840;
  }
  uVar1 = FUN_0042b6c9(pcVar5);
  FUN_00590070(uVar1,1,0x28,0);
  if (DAT_00dc1749 == '\0') {
    pcVar5 = s_EYRTOU_00858818;
  }
  else {
    pcVar5 = s_UIW_2_TOUGHNESS_SHORT_00858820;
  }
  uVar1 = FUN_0042b6c9(pcVar5);
  FUN_00590070(uVar1,1,0x28,0);
  if (DAT_00dc1749 == '\0') {
    pcVar5 = s_EYRAIRD_008587f8;
  }
  else {
    pcVar5 = s_UIW_2_AIRDEFENCE_SHORT_00858800;
  }
  uVar1 = FUN_0042b6c9(pcVar5);
  FUN_00590070(uVar1,1,0x28,0);
  uVar4 = 0;
  uVar2 = 0x28;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYRSUPP_008587f0);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x28;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYRSPEED_008587e4);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x28;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYRSUPPLY_008587d8);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x28;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYRFUEL_008587d0);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x28;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYREXPS_008587c8);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  param_1[0x45] = 0xb;
  ExceptionList = local_c;
  return param_1;
}


