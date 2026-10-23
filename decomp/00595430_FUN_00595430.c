// FUN_00595430 @ 595430 size=334

undefined4 * __fastcall FUN_00595430(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ca318;
  local_c = ExceptionList;
  uVar3 = 0x208;
  ExceptionList = &local_c;
  uVar1 = FUN_0042b6c9(s_EYRRESOURCE_008584e0);
  FUN_00590310(uVar1,uVar3);
  *param_1 = &PTR_FUN_007eb59c;
  param_1[2] = &PTR_LAB_007eb598;
  local_4 = 0;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  uVar4 = 0;
  uVar2 = 0xb4;
  uVar3 = 0;
  param_1[0x4c] = uVar1;
  uVar1 = FUN_0042b6c9(s_EYR_R_CATEGORY_008584d0);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x3c;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_T_OIL_00858450);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x3c;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_T_ENERGY_00858480);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x3c;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_T_METAL_00858474);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x3c;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_T_RARE_MATERIALS_0085845c);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x3c;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_C_MONEY_008584c4);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x3c;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_C_SUP_008584b8);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  param_1[0x45] = 3;
  ExceptionList = local_c;
  return param_1;
}


