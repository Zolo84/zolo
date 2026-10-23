// FUN_006d0d70 @ 6d0d70 size=210

void FUN_006d0d70(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (*(char *)(param_1 + 0x80) != '\0') {
    FUN_007a863f(&DAT_00d12b48,param_2,&stack0x0000000c);
    if (*(int *)(param_1 + 0x6ca) < 200) {
      *(int *)(param_1 + 0x6ca) = *(int *)(param_1 + 0x6ca) + 1;
    }
    else {
      FUN_00796cd8(*(undefined4 *)(param_1 + 0x6be));
      if (*(int *)(param_1 + 0x6ba) == 0) {
        *(int *)(param_1 + 0x6ce) = *(int *)(param_1 + 0x6ce) + -1;
      }
    }
    iVar4 = *(int *)(param_1 + 0x6ca);
    if (0 < iVar4) {
      puVar2 = (undefined4 *)(param_1 + 0x82 + iVar4 * 8);
      do {
        *puVar2 = puVar2[-2];
        puVar2[1] = puVar2[-1];
        puVar2 = puVar2 + -2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_00d12b48;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = operator_new(~uVar5);
    uVar5 = 0xffffffff;
    *(char **)(param_1 + 0x86) = pcVar3;
    pcVar7 = &DAT_00d12b48;
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
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *(undefined4 *)(param_1 + 0x82) = 1;
  }
  return;
}


