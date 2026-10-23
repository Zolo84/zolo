// FUN_005a0e10 @ 5a0e10 size=308

undefined4 * __fastcall FUN_005a0e10(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cad98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_0042b6c9(s_EYRNAVYLEADERS_008589c0);
  FUN_00590310(uVar1,0x21c);
  *param_1 = &PTR_FUN_007ebae8;
  param_1[2] = &PTR_LAB_007ebae4;
  local_4 = 0;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  uVar4 = 0;
  uVar3 = 0x78;
  uVar2 = 0;
  param_1[0x4c] = uVar1;
  uVar1 = FUN_0042b6c9(s_EYRLNAME_008589a4);
  FUN_00590070(uVar1,uVar2,uVar3,uVar4);
  uVar4 = 0;
  uVar3 = 0x78;
  uVar2 = 0;
  uVar1 = FUN_0042b6c9(s_EYRLRANK_00858998);
  FUN_00590070(uVar1,uVar2,uVar3,uVar4);
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 1;
  uVar1 = FUN_0042b6c9(s_EYRLSKILL_0085898c);
  FUN_00590070(uVar1,uVar2,uVar3,uVar4);
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 1;
  uVar1 = FUN_0042b6c9(s_EYRLEXP_00858984);
  FUN_00590070(uVar1,uVar2,uVar3,uVar4);
  uVar4 = 0;
  uVar3 = 0xb4;
  uVar2 = 0;
  uVar1 = FUN_0042b6c9(s_EYRLCOMMISION_00858974);
  FUN_00590070(uVar1,uVar2,uVar3,uVar4);
  uVar4 = 0;
  uVar3 = 300;
  uVar2 = 0;
  uVar1 = FUN_0042b6c9(s_EYRLTRAITS_00858968);
  FUN_00590070(uVar1,uVar2,uVar3,uVar4);
  param_1[0x45] = 0xf;
  ExceptionList = local_c;
  return param_1;
}


