// FUN_0064ea00 @ 64ea00 size=181

undefined4 * FUN_0064ea00(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char acStack_100 [256];
  
  DAT_00d0ba90._0_1_ = 0;
  if (param_1 == 0) {
    param_1 = DAT_00d0ca90;
  }
  if (param_1 == param_2) {
    return &DAT_00d0ba90;
  }
  if (*(char *)(*(int *)(param_1 + 0x12da) + (*(int *)(param_2 + 6) + 1) * 0x2c) != '\0') {
    uVar2 = (**(code **)(*(int *)(param_2 + 0xe) + 0xc))();
    uVar2 = (**(code **)(*(int *)(param_1 + 0xe) + 0xc))(uVar2);
    uVar3 = FUN_0042b6c9(s_ALR_WAR_00866774);
    FUN_007a630a(acStack_100,uVar3,uVar2);
    uVar4 = 0xffffffff;
    pcVar7 = acStack_100;
    do {
      pcVar9 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar7 = (char *)&DAT_00d0ba90;
    do {
      pcVar8 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar4;
    pcVar9 = pcVar8 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  return &DAT_00d0ba90;
}


