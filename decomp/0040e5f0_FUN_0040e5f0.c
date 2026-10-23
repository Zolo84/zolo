// FUN_0040e5f0 @ 40e5f0 size=371

undefined4 __thiscall FUN_0040e5f0(undefined1 *param_1,char *param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  char cVar2;
  HWND pHVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char local_100 [256];
  
  pHVar3 = GetFocus();
  if (param_4 == '\0') {
    pcVar4 = (char *)FUN_00579760();
    uVar6 = 0xffffffff;
    do {
      pcVar9 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar4 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar9;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    pcVar4 = pcVar9 + -uVar6;
    pcVar9 = local_100;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar4 = param_2;
    do {
      pcVar9 = pcVar4;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar4 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar9;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar4 = local_100;
    do {
      pcVar8 = pcVar4;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar4 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar8;
    } while (cVar2 != '\0');
    pcVar4 = pcVar9 + -uVar6;
    pcVar9 = pcVar8 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar9 = pcVar9 + 1;
    }
    iVar5 = FUN_007a6615(local_100,&DAT_0082eeb4);
    if (iVar5 == 0) {
      FUN_007a64d3(0);
    }
  }
  uVar6 = 0xffffffff;
  pcVar4 = param_2;
  do {
    pcVar9 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar9;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar4 = pcVar9 + -uVar6;
  pcVar9 = local_100;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar5 = FUN_007a6615(param_2,&DAT_0082eeb4);
  if (iVar5 == 0) {
    FUN_007a6429(0);
  }
  else {
    FUN_007a6429(iVar5);
    *(undefined4 *)(param_1 + 0x32) = 0;
    uVar1 = *(undefined4 *)(DAT_00bd1bb4 + 0x16);
    param_1[0x42] = param_3;
    *(undefined4 *)(param_1 + 0x36) = uVar1;
    if (param_3 == '\0') {
      *(undefined4 *)(param_1 + 0x3a) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(DAT_00bd1bb0 + 0x2c);
    }
    cVar2 = FUN_0040e100(local_100);
    if (cVar2 != '\0') {
      FUN_0040e200(pHVar3);
      *param_1 = 1;
      if (param_3 == '\0') {
        return *(undefined4 *)(param_1 + 0x32);
      }
      FUN_0079580c();
      return 0;
    }
  }
  return 0;
}


