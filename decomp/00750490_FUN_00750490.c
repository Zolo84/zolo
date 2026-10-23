// FUN_00750490 @ 750490 size=174

void __thiscall FUN_00750490(int param_1,byte *param_2)

{
  char cVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  int local_4;
  
  bVar3 = *param_2;
  iVar9 = 0;
  local_4 = 0;
  if (bVar3 != 0) {
    iVar7 = (int)&DAT_00dc54e0 - (int)param_2;
    pbVar2 = param_2;
    do {
      pbVar2[iVar7] = bVar3;
      param_2 = (byte *)(uint)*pbVar2;
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x32) + 8) + (int)param_2 * 4);
      if (iVar4 == 0) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x32) + 4);
      }
      else {
        iVar4 = (int)*(short *)(iVar4 + 6);
      }
      local_4 = local_4 + iVar4;
      if (0x95 < local_4) {
        (&DAT_00dc54e0)[iVar9] = 0x2e;
        (&DAT_00dc54e1)[iVar9] = 0x2e;
        (&DAT_00dc54e2)[iVar9] = 0x2e;
        iVar9 = iVar9 + 3;
        break;
      }
      bVar3 = pbVar2[1];
      iVar9 = iVar9 + 1;
      pbVar2 = pbVar2 + 1;
    } while (bVar3 != 0);
  }
  (&DAT_00dc54e0)[iVar9] = 0;
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_00dc54e0;
  do {
    pcVar10 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar10 + -uVar5;
  pcVar10 = *(char **)(param_1 + 0x3c);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  return;
}


