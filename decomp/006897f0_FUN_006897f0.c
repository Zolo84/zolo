// FUN_006897f0 @ 6897f0 size=150

undefined4 * __fastcall FUN_006897f0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  
  DAT_00d1123c._0_1_ = 0;
  piVar3 = *(int **)(param_1 + 4);
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return &DAT_00d1123c;
  }
  do {
    piVar2 = (int *)piVar3[2];
    piVar3 = (int *)FUN_004e9370(*(undefined4 *)(*piVar3 + 4));
    pcVar4 = (char *)(**(code **)(*piVar3 + 0xc))();
    uVar5 = 0xffffffff;
    do {
      pcVar9 = pcVar4;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pcVar4 = (char *)&DAT_00d1123c;
    do {
      pcVar8 = pcVar4;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar8;
    } while (cVar1 != '\0');
    pcVar4 = pcVar9 + -uVar5;
    pcVar9 = pcVar8 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar9 = pcVar9 + 1;
    }
    if (piVar2 == (int *)0x0) {
      return &DAT_00d1123c;
    }
    uVar5 = 0xffffffff;
    pcVar4 = &DAT_0083d364;
    do {
      pcVar9 = pcVar4;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar6 = -1;
    pcVar4 = (char *)&DAT_00d1123c;
    do {
      pcVar8 = pcVar4;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar8 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar8;
    } while (cVar1 != '\0');
    pcVar4 = pcVar9 + -uVar5;
    pcVar9 = pcVar8 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; piVar3 = piVar2, uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar9 = pcVar9 + 1;
    }
  } while( true );
}


