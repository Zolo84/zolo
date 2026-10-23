// FUN_00503410 @ 503410 size=260

undefined4 * FUN_00503410(int param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  char *pcVar12;
  char local_100 [256];
  
  pcVar3 = (char *)FUN_0042b6c9(s_ATTACHTOTHIS_00849548);
  iVar8 = DAT_008776b0;
  uVar6 = 0xffffffff;
  do {
    pcVar12 = pcVar3;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar9 = 1;
  pcVar3 = pcVar12 + -uVar6;
  pcVar12 = (char *)&DAT_00ad36cc;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar12 = pcVar12 + 1;
  }
  bVar2 = false;
  if (1 < iVar8) {
    piVar10 = &DAT_00dbf99e;
    do {
      if ((&DAT_00d77ba0)[param_1 * 0x8c + iVar9] != '\0') {
        if (iVar9 < iVar8) {
          uVar4 = *(undefined4 *)(*piVar10 + 8);
        }
        else {
          uVar4 = 0;
        }
        FUN_007a630a(local_100,s____s_00849540,uVar4);
        uVar6 = 0xffffffff;
        pcVar3 = local_100;
        do {
          pcVar12 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar8 = -1;
        pcVar3 = (char *)&DAT_00ad36cc;
        do {
          pcVar11 = pcVar3;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar11 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar11;
        } while (cVar1 != '\0');
        pcVar3 = pcVar12 + -uVar6;
        pcVar12 = pcVar11 + -1;
        for (uVar7 = uVar6 >> 2; iVar8 = DAT_008776b0, uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar12 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar12 = pcVar12 + 1;
        }
        bVar2 = true;
      }
      iVar9 = iVar9 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar9 < iVar8);
    if (bVar2) {
      return &DAT_00ad36cc;
    }
  }
  puVar5 = (undefined4 *)FUN_0042b6c9(s_NOPOSSBRIGADE_00849530);
  return puVar5;
}


