// FUN_005973c0 @ 5973c0 size=389

undefined4 * __fastcall FUN_005973c0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ca528;
  local_c = ExceptionList;
  uVar3 = 0x208;
  ExceptionList = &local_c;
  uVar1 = FUN_0042b6c9(s_EYRCONVOY_00858618);
  FUN_00590310(uVar1,uVar3);
  *param_1 = &PTR_FUN_007eb5fc;
  param_1[2] = &PTR_LAB_007eb5f8;
  local_4 = 0;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  uVar4 = 0;
  uVar2 = 100;
  uVar3 = 0;
  param_1[0x4c] = uVar1;
  uVar1 = FUN_0042b6c9(s_EYR_C_FROM_0085860c);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 100;
  uVar3 = 0;
  uVar1 = FUN_0042b6c9(s_EYR_C_TO_00858600);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_C_TRA_008585f4);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_C_ESC_008585e8);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x3c;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_C_ENERGY_008585d8);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x3c;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_C_METAL_008585cc);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x3c;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_C_RARE_MATERIALS_008585b4);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0x3c;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_C_OIL_008585a8);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 1;
  uVar1 = FUN_0042b6c9(s_EYR_C_SUP_008584b8);
  FUN_00590070(uVar1,uVar3,uVar2,uVar4);
  param_1[0x45] = 4;
  ExceptionList = local_c;
  return param_1;
}


