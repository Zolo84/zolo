// FUN_0058c210 @ 58c210 size=908

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0058c210(int param_1,int param_2,float param_3,float param_4)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  
  DAT_00bd6bf4._0_1_ = 0;
  DAT_00bd8bf4 = 0;
  FUN_0058bcc0(param_2,param_3,param_4,1);
  if (_DAT_007e3374 <= *(float *)(param_1 + 0x3a790)) {
    param_4 = (float)*(int *)(param_1 + 0x3a79c) - (float)*(int *)(param_1 + 0x3a7a4);
    fVar2 = (*(float *)(param_1 + 0x3a78c) * _DAT_007e4088) / *(float *)(param_1 + 0x3a790);
    if (param_4 < fVar2) {
      param_4 = fVar2;
    }
  }
  else {
    param_4 = 0.0;
  }
  if (_DAT_007e3374 <= *(float *)(param_1 + 0x3a798)) {
    param_3 = (float)*(int *)(param_1 + 0x3a7a4) - (float)*(int *)(param_1 + 0x3a79c);
    fVar2 = (*(float *)(param_1 + 0x3a794) * _DAT_007e4088) / *(float *)(param_1 + 0x3a798);
    if (param_3 < fVar2) {
      param_3 = fVar2;
    }
  }
  else {
    param_3 = 0.0;
  }
  param_2 = ((*(int *)(param_1 + 0x3a7b0) - *(int *)(param_1 + 0x3a7ac)) * 0x14 -
            (int)ROUND(param_3)) + (int)ROUND(param_4);
  if (100 < param_2) {
    param_2 = 100;
  }
  iVar5 = (int)ROUND(param_4);
  iVar7 = (int)ROUND(*(float *)(param_1 + 0x3a790));
  iVar11 = (int)ROUND(*(float *)(param_1 + 0x3a78c));
  uVar3 = FUN_0042b6c9(&DAT_00857f64);
  FUN_007a630a(&DAT_00bd6bf4,uVar3,iVar11,iVar7,iVar5);
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_00839650;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar8 = (char *)&DAT_00bd6bf4;
  do {
    pcVar9 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  iVar5 = (int)ROUND(param_3);
  iVar7 = (int)ROUND(*(float *)(param_1 + 0x3a798));
  iVar11 = (int)ROUND(*(float *)(param_1 + 0x3a794));
  uVar3 = FUN_0042b6c9(&DAT_00857f5c);
  FUN_007a630a(&DAT_00bd8bf4,uVar3,iVar11,iVar7,iVar5);
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_00bd8bf4;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar8 = (char *)&DAT_00bd6bf4;
  do {
    pcVar9 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_00839650;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar8 = (char *)&DAT_00bd6bf4;
  do {
    pcVar9 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x3a7b0);
  iVar7 = iVar5 * 0x14;
  uVar3 = FUN_0042b6c9(&DAT_00857f54);
  FUN_007a630a(&DAT_00bd8bf4,uVar3,iVar5,iVar7);
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_00bd8bf4;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar8 = (char *)&DAT_00bd6bf4;
  do {
    pcVar9 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_00839650;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar8 = (char *)&DAT_00bd6bf4;
  do {
    pcVar9 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  iVar5 = *(int *)(param_1 + 0x3a7ac);
  iVar7 = iVar5 * 0x14;
  uVar3 = FUN_0042b6c9(&DAT_00857f4c);
  FUN_007a630a(&DAT_00bd8bf4,uVar3,iVar5,iVar7);
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_00bd8bf4;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar8 = (char *)&DAT_00bd6bf4;
  do {
    pcVar9 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_00839650;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar8 = (char *)&DAT_00bd6bf4;
  do {
    pcVar9 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar3 = FUN_0042b6c9(s_WS_SUM_00857f44);
  FUN_007a630a(&DAT_00bd8bf4,uVar3,param_2);
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_00bd8bf4;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar8 = (char *)&DAT_00bd6bf4;
  do {
    pcVar9 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  return &DAT_00bd6bf4;
}


