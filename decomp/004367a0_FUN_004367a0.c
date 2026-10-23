// FUN_004367a0 @ 4367a0 size=545

void __thiscall FUN_004367a0(int param_1,char *param_2,undefined2 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char local_900 [256];
  char local_800 [2048];
  
  *(undefined2 *)(param_1 + 0x5a) = param_3;
  local_800[0] = '\0';
  iVar3 = 0;
  do {
    cVar2 = *param_2;
    param_2 = param_2 + 1;
    switch(cVar2) {
    case '\0':
      iVar6 = *(int *)(param_1 + 0x2e);
      local_900[iVar3] = '\0';
      iVar3 = FUN_004129c4(local_900);
      iVar4 = FUN_004129c4(local_800);
      if (iVar6 <= iVar3 + iVar4) {
        FUN_00436660(local_800);
      }
      uVar5 = 0xffffffff;
      pcVar8 = local_900;
      do {
        pcVar10 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar3 = -1;
      pcVar8 = local_800;
      do {
        pcVar9 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar8 = pcVar10 + -uVar5;
      pcVar10 = pcVar9 + -1;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      if (local_800[0] != '\0') {
LAB_00436867:
        FUN_00436660(local_800);
      }
      iVar3 = 0;
      break;
    default:
      local_900[iVar3] = cVar2;
      iVar3 = iVar3 + 1;
      break;
    case '\n':
    case '\r':
      iVar6 = *(int *)(param_1 + 0x2e);
      local_900[iVar3] = '\0';
      iVar3 = FUN_004129c4(local_900);
      iVar4 = FUN_004129c4(local_800);
      if (iVar3 + iVar4 < iVar6) {
        uVar5 = 0xffffffff;
        pcVar8 = local_900;
        do {
          pcVar10 = pcVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar10 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar10;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar3 = -1;
        pcVar8 = local_800;
        do {
          pcVar9 = pcVar8;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar9 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar1 != '\0');
        pcVar8 = pcVar10 + -uVar5;
        pcVar10 = pcVar9 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar10 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
        }
        goto LAB_00436867;
      }
      FUN_00436660(local_800);
      uVar5 = 0xffffffff;
      iVar3 = 0;
      pcVar8 = local_900;
      do {
        pcVar10 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar6 = -1;
      pcVar8 = local_800;
      do {
        pcVar9 = pcVar8;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar8 = pcVar10 + -uVar5;
      pcVar10 = pcVar9 + -1;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      break;
    case ' ':
      iVar6 = *(int *)(param_1 + 0x2e);
      local_900[iVar3] = ' ';
      local_900[iVar3 + 1] = '\0';
      iVar3 = FUN_004129c4(local_900);
      iVar4 = FUN_004129c4(local_800);
      if (iVar6 <= iVar3 + iVar4) {
        FUN_00436660(local_800);
      }
      uVar5 = 0xffffffff;
      iVar3 = 0;
      pcVar8 = local_900;
      do {
        pcVar10 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar6 = -1;
      pcVar8 = local_800;
      do {
        pcVar9 = pcVar8;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar8 = pcVar10 + -uVar5;
      pcVar10 = pcVar9 + -1;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    if (cVar2 == '\0') {
      if (*(int *)(param_1 + 0xc) <= *(int *)(param_1 + 0x6e)) {
        *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)(param_1 + 0x26) = 0;
      }
      return;
    }
  } while( true );
}


