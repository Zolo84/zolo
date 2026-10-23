// FUN_00658330 @ 658330 size=186

undefined4 * FUN_00658330(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char local_40 [64];
  
  iVar4 = param_1 / 1000;
  DAT_00d0ca94._0_1_ = 0;
  if (iVar4 < 100) {
    FUN_007a630a(local_40,&DAT_008390a0,param_1);
  }
  else {
    if (499 < (param_1 % 1000) % 1000) {
      iVar4 = iVar4 + 1;
    }
    uVar2 = FUN_0042b6c9(s_CHAR_THOUSAND_00866cb4);
    FUN_007a630a(local_40,&DAT_00866cac,iVar4,uVar2);
  }
  uVar3 = 0xffffffff;
  pcVar6 = local_40;
  do {
    pcVar8 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar6 = (char *)&DAT_00d0ca94;
  do {
    pcVar7 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar6 = pcVar8 + -uVar3;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return &DAT_00d0ca94;
}


