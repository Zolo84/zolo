// FUN_0042e2c0 @ 42e2c0 size=258

int FUN_0042e2c0(char *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int local_104;
  char local_100 [256];
  
  iVar7 = 0;
  local_104 = 0;
  if (DAT_00dc3a00 == '\0') {
    uVar5 = 0xffffffff;
    pcVar8 = param_1;
    do {
      pcVar9 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar9 + -uVar5;
    pcVar9 = local_100;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  else {
    FUN_007a630a(local_100,s__s__s_0083a350,&DAT_00dc3a00,param_1);
  }
  iVar3 = FUN_007a6615(local_100,&DAT_0082eeb4);
  if (iVar3 == 0) {
    uVar5 = 0xffffffff;
    do {
      pcVar8 = param_1;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    pcVar9 = local_100;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    iVar3 = FUN_007a6615(local_100,&DAT_0082eeb4);
    if (iVar3 == 0) {
      return 0;
    }
  }
  bVar2 = *(byte *)(iVar3 + 0xc);
  while ((bVar2 & 0x10) == 0) {
    iVar4 = FUN_007a67c4(&local_104,1,1,iVar3);
    if (iVar4 != 0) {
      iVar7 = iVar7 + local_104;
    }
    bVar2 = *(byte *)(iVar3 + 0xc);
  }
  FUN_007a6429(iVar3);
  return iVar7;
}


