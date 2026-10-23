// FUN_00732370 @ 732370 size=233

void __thiscall
FUN_00732370(int param_1,undefined4 param_2,char *param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  
  uVar3 = FUN_0042b6c9(s_TC_OR_00872a1c);
  FUN_007a630a(&DAT_00d4baec,uVar3);
  DAT_00d4bbec = 0;
  iVar7 = param_5;
  if (0 < param_5) {
    do {
      uVar4 = 0xffffffff;
      pcVar8 = &DAT_0083d364;
      do {
        pcVar11 = pcVar8;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar11 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar8 = &DAT_00d4bbec;
      do {
        pcVar10 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar10 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (cVar1 != '\0');
      pcVar8 = pcVar11 + -uVar4;
      pcVar11 = pcVar10 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar11 = pcVar11 + 4;
      }
      iVar7 = iVar7 + -1;
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar11 = pcVar11 + 1;
      }
    } while (iVar7 != 0);
  }
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_00d4bbec;
  do {
    pcVar11 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar7 = -1;
  pcVar8 = param_3;
  do {
    pcVar10 = pcVar8;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  pcVar8 = pcVar11 + -uVar4;
  pcVar11 = pcVar10 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_00d4baec;
  do {
    pcVar11 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar7 = -1;
  pcVar8 = param_3;
  do {
    pcVar10 = pcVar8;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  pcVar8 = pcVar11 + -uVar4;
  pcVar11 = pcVar10 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar11 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar11 = pcVar11 + 1;
  }
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(param_1 + 4);
    do {
      puVar2 = (undefined4 *)puVar9[2];
      (**(code **)(*(int *)*puVar9 + 0x34))(param_2,param_3,param_4,param_5 + 1);
      puVar9 = puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return;
}


