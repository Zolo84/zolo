// FUN_006a9290 @ 6a9290 size=270

void __thiscall FUN_006a9290(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  
  cVar3 = (**(code **)(*param_1 + 0x498))();
  if ((cVar3 != '\0') && (*(char *)(param_1[0x4f21] + 0xe) != '\0')) {
    iVar2 = *(int *)(param_2 + 4);
    iVar1 = iVar2 + 0x12;
    iVar4 = FUN_00428ee0(iVar1);
    if ((iVar4 != 0) && (iVar4 != 8)) {
      iVar4 = FUN_004689a0(*(undefined4 *)(iVar2 + 0x18));
      iVar5 = _rand();
      if (iVar5 % 100 < iVar4) {
        uVar6 = (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(iVar2 + 0x18)] + 0xe) + 0xc))();
        uVar7 = (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))(uVar6);
        pcVar8 = s__s_accepts_alliance_with__s_008694fc;
        FUN_00458570(s__s_accepts_alliance_with__s_008694fc,uVar7);
        uVar6 = *(undefined4 *)(iVar2 + 0x18);
        FUN_00449290(iVar1);
        FUN_00460bf0(pcVar8,uVar7,uVar6);
        FUN_0047e2f0(param_2);
        return;
      }
    }
    uVar6 = (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(iVar2 + 0x18)] + 0xe) + 0xc))();
    uVar7 = (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))(uVar6);
    pcVar8 = s__s_declines_alliance_with__s_008694dc;
    FUN_00458570(s__s_declines_alliance_with__s_008694dc,uVar7);
    uVar6 = *(undefined4 *)(iVar2 + 0x18);
    FUN_00449290(iVar1);
    FUN_00460d10(pcVar8,uVar7,uVar6);
  }
  FUN_0047e2f0(param_2);
  return;
}


