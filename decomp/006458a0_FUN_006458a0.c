// FUN_006458a0 @ 6458a0 size=538

undefined4 * __thiscall
FUN_006458a0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 **ppuVar8;
  undefined4 *local_c14 [257];
  undefined1 auStack_810 [2048];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d260b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_c14[0] = param_1;
  FUN_006446b0(0x1a,param_2,0xf0,8);
  local_4 = 0;
  *(undefined2 *)(param_1 + 0x2e) = (undefined2)param_3;
  *(undefined4 *)((int)param_1 + 0xba) = param_3._2_4_;
  *(int *)((int)param_1 + 0xbe) = param_4;
  *param_1 = &PTR_FUN_007f0250;
  param_1[2] = &PTR_LAB_007f024c;
  (**(code **)(*DAT_00bd0e18 + 0x20))(0x17);
  *(undefined4 *)((int)param_1 + 0xb2) = 0x1a;
  iVar2 = FUN_00428ee0(param_1 + 0x2e);
  if ((iVar2 != 0) && (iVar2 != 8)) {
    pcVar3 = (char *)FUN_0042b6c9(s_ANSWERJOIN1_008661e0);
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
    ppuVar8 = local_c14;
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
    FUN_006ec610(local_c14);
    uVar4 = (**(code **)(*(int *)((&DAT_0089cad8)[param_4] + 0xe) + 0xc))();
    FUN_007a630a(auStack_810,local_c14,uVar4);
    FUN_004361a0(auStack_810);
    uVar4 = FUN_0042b6c9(s_ANSWERJOIN2_008661d4);
    FUN_004361a0(uVar4);
    iVar2 = *(int *)((int)param_1 + 0xbe);
    if ((&DAT_0089cad8)[iVar2] != 0) {
      uVar4 = FUN_0042b6c9(s_POPDIPLO_00866140);
      FUN_004361a0(uVar4);
      uVar4 = (**(code **)(*(int *)((&DAT_0089cad8)[iVar2] + 0xe) + 0xc))();
      FUN_004361a0(uVar4);
    }
    FUN_00644950();
    uVar4 = *(undefined4 *)((int)param_1 + 0xbe);
    FUN_0043e780(uVar4);
    iVar2 = **(int **)((int)param_1 + 0xae);
    uVar4 = FUN_0044b1c0(uVar4);
    (**(code **)(iVar2 + 0x2c))(uVar4);
    (**(code **)(**(int **)((int)param_1 + 0xae) + 0x34))(0x19);
    iVar2 = *(int *)((int)param_1 + 0xae);
    *(undefined4 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x26) = 10;
    *(undefined1 *)(iVar2 + 0x67) = 0;
    uVar4 = FUN_00413d60(s_flag_palette_bmp_0083c738);
    FUN_00415f20(uVar4);
    (**(code **)(**(int **)((int)param_1 + 0x96) + 0x38))(3);
  }
  ExceptionList = pvStack_10;
  return param_1;
}


