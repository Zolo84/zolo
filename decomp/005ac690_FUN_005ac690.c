// FUN_005ac690 @ 5ac690 size=783

undefined4 * __fastcall FUN_005ac690(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cb6b8;
  local_c = ExceptionList;
  uVar6 = 0x21c;
  ExceptionList = &local_c;
  uVar1 = FUN_0042b6c9(s_EYR_LAND_BRIG_008590fc);
  FUN_00590310(uVar1,uVar6);
  *param_1 = &PTR_FUN_007ec3f8;
  param_1[2] = &PTR_LAB_007ec3f4;
  local_4 = 0;
  uVar1 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  param_1[0x4c] = uVar1;
  uVar1 = 0;
  if (DAT_00877688 < DAT_008776b8) {
    uVar5 = 0x32;
    uVar4 = 0;
    uVar6 = FUN_0042b6c9(s_EYRTYPE_008586a0);
    FUN_00590070(uVar6,uVar4,uVar5,uVar1);
    uVar5 = 0;
    uVar4 = 0x50;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_ACTION_008590cc);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_CLEAR_0083c620);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_BLIZZARD_0083c610);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_SNOW_0083c604);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_FROZEN_0083c5f8);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_RAIN_0083c5ec);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_STORM_0083c5e0);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_MUDDY_0083c5c8);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_NIGHT_0083c5d4);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_PLAIN_0083c5bc);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_DESERT_0083c5b0);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_MOUNTAIN_0083c5a0);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_HILLS_0083c594);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_FOREST_0083c588);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_JUNGLE_0083c57c);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_MARSH_0083c570);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
    uVar5 = 0;
    uVar4 = 0x32;
    uVar6 = 0;
    uVar1 = FUN_0042b6c9(s_EYR_URBAN_0083c564);
    FUN_00590070(uVar1,uVar6,uVar4,uVar5);
  }
  else {
    uVar5 = 100;
    uVar4 = 0;
    uVar6 = FUN_0042b6c9(s_EYRTYPE_008586a0);
    FUN_00590070(uVar6,uVar4,uVar5,uVar1);
    iVar3 = 0;
    if (0 < DAT_008776b8) {
      puVar2 = &DAT_00dc048a;
      do {
        uVar5 = 0;
        uVar4 = 0x32;
        uVar6 = 0;
        uVar1 = FUN_004ff3a0(*puVar2,0,0x32,0);
        FUN_00590070(uVar1,uVar6,uVar4,uVar5);
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < DAT_008776b8);
      param_1[0x45] = 8;
      ExceptionList = local_c;
      return param_1;
    }
  }
  param_1[0x45] = 8;
  ExceptionList = local_c;
  return param_1;
}


