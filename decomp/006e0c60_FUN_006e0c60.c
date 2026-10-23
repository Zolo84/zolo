// FUN_006e0c60 @ 6e0c60 size=176

undefined4 __fastcall FUN_006e0c60(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar10 = 0;
  iVar2 = *(int *)(param_1 + 0x12);
  iVar3 = *(int *)(param_1 + 0xe);
  uVar11 = *(undefined4 *)(param_1 + 0x16);
  uVar5 = FUN_00584270(0xff,0,0);
  FUN_004135a6(*(undefined4 *)(param_1 + 0x3e),iVar3 + 0x8c,iVar2,uVar11,uVar5,uVar10);
  uVar6 = 0xffffffff;
  uVar11 = 0;
  pcVar8 = *(char **)(param_1 + 0x3a);
  do {
    pcVar9 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar9 + -uVar6;
  pcVar9 = (char *)&DAT_00d36114;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x16);
  iVar4 = *(int *)(*(int *)(param_1 + 0x2e) + 0x10);
  uVar10 = FUN_00584270(0xd0,0xe8,0xf8);
  FUN_00413483(&DAT_00d36114,iVar3 + 0x38,iVar4 + iVar2,uVar5,uVar10,uVar11);
  return 0;
}


