// FUN_0043e900 @ 43e900 size=268

void FUN_0043e900(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar2 = 0;
  DAT_00894098 = 0;
  iVar5 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if (*param_1 == ';') {
      (&DAT_00894098)[iVar2] = 0;
      if ((iVar5 == 3) || (iVar5 == 5)) {
        FUN_00429c80(&DAT_00894098,&DAT_00898098);
        uVar3 = 0xffffffff;
        pcVar6 = &DAT_00898098;
        do {
          pcVar7 = pcVar6;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar6 = pcVar7 + -uVar3;
        pcVar7 = &DAT_00894098;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      FUN_004361a0(&DAT_00894098);
      iVar2 = 0;
      iVar5 = iVar5 + 1;
      if (iVar5 == 7) {
        return;
      }
    }
    else {
      (&DAT_00894098)[iVar2] = *param_1;
      iVar2 = iVar2 + 1;
    }
    pcVar6 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar6;
  }
  (&DAT_00894098)[iVar2] = 0;
  if ((iVar5 == 3) || (iVar5 == 5)) {
    FUN_00429c80(&DAT_00894098,&DAT_00898098);
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_00898098;
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar7 + -uVar3;
    pcVar7 = &DAT_00894098;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
  }
  FUN_004361a0(&DAT_00894098);
  return;
}


