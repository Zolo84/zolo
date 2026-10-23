// FUN_005a8a70 @ 5a8a70 size=202

undefined4 * __fastcall FUN_005a8a70(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cb328;
  local_c = ExceptionList;
  uVar4 = 0x21c;
  ExceptionList = &local_c;
  uVar1 = FUN_0042b6c9(s_EYRCOM_EQUIPMENT_AIR_00858d08);
  FUN_00590310(uVar1,uVar4);
  *param_1 = &PTR_FUN_007ec098;
  param_1[2] = &PTR_LAB_007ec094;
  local_4 = 0;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  param_1[0x4c] = uVar1;
  uVar5 = 0;
  uVar3 = 0;
  uVar1 = DAT_008587c4;
  uVar4 = FUN_0042b6c9(s_EYRCOUNTRY_008586b4);
  FUN_00590070(uVar4,uVar3,uVar1,uVar5);
  iVar2 = 0xf;
  do {
    uVar5 = 0;
    uVar3 = 1;
    uVar1 = DAT_008587c0;
    uVar4 = FUN_00505d30(iVar2,1,DAT_008587c0,0);
    FUN_00590070(uVar4,uVar3,uVar1,uVar5);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x19);
  param_1[0x45] = 0x1c;
  ExceptionList = local_c;
  return param_1;
}


