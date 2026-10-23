// FUN_005a7060 @ 5a7060 size=227

undefined4 * __fastcall FUN_005a7060(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cb0f8;
  local_c = ExceptionList;
  uVar5 = 0x21c;
  ExceptionList = &local_c;
  uVar1 = FUN_0042b6c9(s_EYRCOMNAVIES_00858c58);
  FUN_00590310(uVar1,uVar5);
  *param_1 = &PTR_FUN_007ebe58;
  param_1[2] = &PTR_LAB_007ebe54;
  local_4 = 0;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  uVar6 = 0;
  uVar4 = 0x78;
  uVar5 = 0;
  param_1[0x4c] = uVar1;
  uVar1 = FUN_0042b6c9(s_EYRCOUNTRY_008586b4);
  FUN_00590070(uVar1,uVar5,uVar4,uVar6);
  if (0 < DAT_00dbdec6) {
    puVar3 = &DAT_00dbda62;
    iVar2 = DAT_00dbdec6;
    do {
      FUN_00590070(*puVar3,1,0x28,0);
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar6 = 0;
  uVar4 = 0;
  uVar5 = 1;
  uVar1 = FUN_0042b6c9(s_EYRTOTAL_00858314);
  FUN_00590070(uVar1,uVar5,uVar4,uVar6);
  param_1[0x45] = 0x1a;
  ExceptionList = local_c;
  return param_1;
}


