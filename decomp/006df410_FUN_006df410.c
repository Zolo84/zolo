// FUN_006df410 @ 6df410 size=275

void FUN_006df410(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  
  puVar7 = (undefined4 *)&DAT_00d2d8a8;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar2 = 0;
  iVar5 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if (*param_1 == ';') {
      (&DAT_00d2d8a8)[iVar5] = 0;
      if ((iVar2 == 3) || (iVar2 == 5)) {
        FUN_00429c80(&DAT_00d2d8a8,&DAT_00d2daa8);
        uVar3 = 0xffffffff;
        pcVar6 = &DAT_00d2daa8;
        do {
          pcVar8 = pcVar6;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar8 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar8;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar6 = pcVar8 + -uVar3;
        pcVar8 = &DAT_00d2d8a8;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar8 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar8 = pcVar8 + 1;
        }
      }
      FUN_004361a0(&DAT_00d2d8a8);
      iVar5 = 0;
      iVar2 = iVar2 + 1;
      if (iVar2 == 8) {
        return;
      }
    }
    else {
      (&DAT_00d2d8a8)[iVar5] = *param_1;
      iVar5 = iVar5 + 1;
    }
    pcVar6 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar6;
  }
  (&DAT_00d2d8a8)[iVar5] = 0;
  if ((iVar2 == 3) || (iVar2 == 5)) {
    FUN_00429c80(&DAT_00d2d8a8,&DAT_00d2daa8);
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_00d2daa8;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = &DAT_00d2d8a8;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  FUN_004361a0(&DAT_00d2d8a8);
  return;
}


