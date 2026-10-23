// FUN_006a93a0 @ 6a93a0 size=294

void __thiscall FUN_006a93a0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  cVar1 = (**(code **)(*param_1 + 0x498))();
  if ((cVar1 != '\0') && (*(char *)(param_1[0x4f21] + 0xe) != '\0')) {
    iVar3 = *(int *)(param_2 + 4);
    iVar2 = FUN_00428ee0(iVar3 + 0x12);
    if ((iVar2 != 0) && (iVar2 != 8)) {
      iVar3 = FUN_00468f00(*(undefined4 *)(iVar3 + 0x18));
      iVar2 = _rand();
      if (iVar2 % 100 < iVar3) {
        uVar4 = (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(*(int *)(param_2 + 4) + 0x18)] + 0xe)
                            + 0xc))();
        uVar4 = (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))(uVar4);
        pcVar5 = s__s_allows__s_to_join_00869530;
        FUN_00458570(s__s_allows__s_to_join_00869530,uVar4);
        uVar4 = *(undefined4 *)(*(int *)(param_2 + 4) + 0x18);
        uVar6 = 0x6a9443;
        iVar3 = FUN_00498d60(uVar4);
        FUN_00449290(iVar3 + 0x12);
        FUN_00461040(pcVar5,uVar6,uVar4);
        FUN_0047e350(param_2);
        return;
      }
    }
    uVar4 = (**(code **)(*(int *)((&DAT_0089cad8)[*(int *)(*(int *)(param_2 + 4) + 0x18)] + 0xe) +
                        0xc))();
    uVar4 = (**(code **)(*(int *)((int)param_1 + 0xe) + 0xc))(uVar4);
    pcVar5 = s__s_disallows__s_to_join_00869518;
    FUN_00458570(s__s_disallows__s_to_join_00869518,uVar4);
    uVar4 = *(undefined4 *)(*(int *)(param_2 + 4) + 0x18);
    uVar6 = 0x6a94a3;
    iVar3 = FUN_00498d60(uVar4);
    FUN_00449290(iVar3 + 0x12);
    FUN_00461150(pcVar5,uVar6,uVar4);
  }
  FUN_0047e350(param_2);
  return;
}


