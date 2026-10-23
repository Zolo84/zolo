// FUN_005b5d30 @ 5b5d30 size=310

void FUN_005b5d30(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int local_118;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cbf1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00426120(s_db_randomleaders_csv_008591a4);
  local_4 = 0;
  local_118 = FUN_00426720();
  if (0 < local_118) {
    do {
      FUN_004265c0(local_10c);
      iVar4 = FUN_004af6b0(local_10c);
      FUN_004265c0(local_10c);
      uVar7 = 0xffffffff;
      pcVar9 = local_10c;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      pcVar5 = operator_new(~uVar7);
      uVar7 = 0xffffffff;
      pcVar9 = local_10c;
      do {
        pcVar10 = pcVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar9 = pcVar10 + -uVar7;
      pcVar10 = pcVar5;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      iVar2 = *(int *)(&DAT_00bdc118 + iVar4 * 0x12);
      iVar4 = iVar4 * 0x12;
      puVar6 = operator_new(0xe);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = pcVar5;
        puVar6[1] = iVar2;
        puVar6[2] = 0;
        *(undefined1 *)(puVar6 + 3) = 0;
      }
      iVar3 = *(int *)(&DAT_00bdc11c + iVar4);
      *(undefined4 **)(&DAT_00bdc118 + iVar4) = puVar6;
      *(int *)(&DAT_00bdc11c + iVar4) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(&DAT_00bdc114 + iVar4) = puVar6;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar6;
      }
      local_118 = local_118 + -1;
    } while (local_118 != 0);
  }
  local_4 = 0xffffffff;
  FUN_004262d0();
  ExceptionList = local_c;
  return;
}


