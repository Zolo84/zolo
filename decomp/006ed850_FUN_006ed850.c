// FUN_006ed850 @ 6ed850 size=228

void __thiscall FUN_006ed850(int param_1,byte *param_2)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  byte *pbVar11;
  int iVar12;
  char *pcVar13;
  uint local_4;
  
  pbVar4 = param_2;
  FUN_007a77fa(*(undefined4 *)(param_1 + 0x56));
  uVar2 = FUN_007a8d6d(param_2);
  *(undefined4 *)(param_1 + 0x56) = uVar2;
  FUN_00796cd8(*(undefined4 *)(param_1 + 0x5e));
  uVar6 = 0xffffffff;
  pbVar11 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar5 = *pbVar11;
    pbVar11 = pbVar11 + 1;
  } while (bVar5 != 0);
  pvVar3 = operator_new(~uVar6 + 10);
  *(void **)(param_1 + 0x5e) = pvVar3;
  bVar5 = *param_2;
  iVar9 = 0;
  param_2 = (byte *)0x0;
  if (bVar5 != 0) {
    iVar12 = (int)&DAT_00d4141c - (int)pbVar4;
    do {
      pbVar4[iVar12] = bVar5;
      local_4 = (uint)*pbVar4;
      iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + local_4 * 4);
      if (iVar7 == 0) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x4c) + 4);
      }
      else {
        iVar7 = (int)*(short *)(iVar7 + 6);
      }
      param_2 = (byte *)((int)param_2 + iVar7);
      if (0x81 < (int)param_2) {
        (&DAT_00d4141c)[iVar9] = 0x2e;
        (&DAT_00d4141d)[iVar9] = 0x2e;
        (&DAT_00d4141e)[iVar9] = 0x2e;
        iVar9 = iVar9 + 3;
        break;
      }
      bVar5 = pbVar4[1];
      iVar9 = iVar9 + 1;
      pbVar4 = pbVar4 + 1;
    } while (bVar5 != 0);
  }
  uVar6 = 0xffffffff;
  (&DAT_00d4141c)[iVar9] = 0;
  pcVar10 = &DAT_00d4141c;
  do {
    pcVar13 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar13 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar13;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar13 + -uVar6;
  pcVar13 = *(char **)(param_1 + 0x5e);
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar13 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar13 = pcVar13 + 1;
  }
  return;
}


