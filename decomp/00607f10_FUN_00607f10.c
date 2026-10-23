// FUN_00607f10 @ 607f10 size=204

undefined4 FUN_00607f10(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar2 = FUN_004129c4(param_1);
  iVar3 = FUN_004129c4(param_2);
  if (0x145 < iVar2 + iVar3) {
    uVar5 = 0xffffffff;
    pcVar7 = param_2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    pcVar4 = operator_new(~uVar5);
    uVar5 = 0xffffffff;
    pcVar7 = param_2;
    do {
      pcVar8 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar8 + -uVar5;
    pcVar8 = pcVar4;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    *param_2 = '\0';
    FUN_00427b00(pcVar4);
    uVar5 = 0xffffffff;
    do {
      pcVar7 = param_1;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar2 = -1;
    do {
      pcVar4 = param_2;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar4 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar4;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -uVar5;
    pcVar4 = pcVar4 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar4 = pcVar4 + 1;
    }
    return 1;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar7 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar2 = -1;
  do {
    pcVar4 = param_2;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + -uVar5;
  pcVar4 = pcVar4 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar4 = pcVar4 + 1;
  }
  return 0;
}


