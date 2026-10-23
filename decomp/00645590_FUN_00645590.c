// FUN_00645590 @ 645590 size=534

undefined4 * __thiscall FUN_00645590(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 **ppuVar8;
  undefined4 *local_818 [257];
  undefined1 auStack_414 [1020];
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d25eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_818[0] = param_1;
  FUN_006446b0(0x3b,param_2,0xf0,8);
  *param_1 = &PTR_FUN_007f0210;
  param_1[0x2e] = param_3;
  param_1[2] = &PTR_LAB_007f020c;
  local_4 = 0;
  (**(code **)(*DAT_00bd0e18 + 0x20))(0x17);
  iVar2 = (&DAT_0089cad8)[param_1[0x2e]];
  *(undefined4 *)((int)param_1 + 0xb2) = 0x3b;
  pcVar3 = (char *)FUN_0042b6c9(s_ANSWERDEMAND1_008661bc);
  uVar5 = 0xffffffff;
  do {
    pcVar7 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = pcVar7 + -uVar5;
  ppuVar8 = local_818;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *ppuVar8 = *(undefined4 **)pcVar3;
    pcVar3 = pcVar3 + 4;
    ppuVar8 = ppuVar8 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)ppuVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    ppuVar8 = (undefined4 **)((int)ppuVar8 + 1);
  }
  FUN_006ec610(local_818);
  uVar4 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))();
  FUN_007a630a(auStack_414,local_818,uVar4);
  FUN_004361a0(auStack_414);
  uVar4 = FUN_0042b6c9(s_ANSWERDEMAND2_008661ac);
  FUN_004361a0(uVar4);
  uVar4 = FUN_0042b6c9(s_ANSWERDEMAND3_0086619c);
  FUN_004361a0(uVar4);
  uVar4 = FUN_0049f380(*(undefined4 *)(*(int *)((int)param_1 + 0x8e) + 6));
  FUN_004361a0(uVar4);
  if ((&DAT_0089cad8)[param_3] != 0) {
    uVar4 = FUN_0042b6c9(s_POPDIPLO_00866140);
    FUN_004361a0(uVar4);
    uVar4 = (**(code **)(*(int *)((&DAT_0089cad8)[param_3] + 0xe) + 0xc))();
    FUN_004361a0(uVar4);
  }
  FUN_00644950();
  FUN_0043e780(param_3);
  iVar2 = **(int **)((int)param_1 + 0xae);
  uVar4 = FUN_0044b1c0(param_3);
  (**(code **)(iVar2 + 0x2c))(uVar4);
  (**(code **)(**(int **)((int)param_1 + 0xae) + 0x34))(0x19);
  iVar2 = *(int *)((int)param_1 + 0xae);
  *(undefined4 *)(iVar2 + 0x22) = 0;
  *(undefined4 *)(iVar2 + 0x26) = 10;
  *(undefined1 *)(iVar2 + 0x67) = 0;
  uVar4 = FUN_00413d60(s_flag_palette_bmp_0083c738);
  FUN_00415f20(uVar4);
  *(undefined4 *)(*(int *)((int)param_1 + 0x9a) + 0x88) = 0xffffffff;
  ExceptionList = pvStack_18;
  return param_1;
}


