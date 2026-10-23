// FUN_004af740 @ 4af740 size=266

int FUN_004af740(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  char *pcVar6;
  bool bVar7;
  
  if (param_1 < 0) {
    if (param_1 == -3) {
      iVar3 = FUN_0042b6c9(s_TC_FRIENDLY_0083eb3c);
      return iVar3;
    }
    if (param_1 == -2) {
      iVar3 = FUN_0042b6c9(s_TC_HOSTILE_0083eb48);
      return iVar3;
    }
    if (param_1 == -1) {
      iVar3 = FUN_0042b6c9(s_TC_US_0083eb54);
      return iVar3;
    }
  }
  iVar3 = (&DAT_0089cad8)[param_1];
  if ((iVar3 == 0) || (iVar1 = iVar3 + 0x41a, *(char *)(iVar3 + 0x41a) == '\0')) {
    iVar3 = 0;
    piVar5 = &DAT_008ca210;
    do {
      if (*piVar5 == param_1) {
        iVar3 = FUN_0042b6c9(&DAT_008ca110 + iVar3 * 0x47);
        return iVar3;
      }
      piVar5 = piVar5 + 0x47;
      iVar3 = iVar3 + 1;
    } while ((int)piVar5 < 0x8e1fb0);
    iVar3 = FUN_0042b6c9(&DAT_0083e638);
    return iVar3;
  }
  pbVar4 = (byte *)FUN_0042b6c9(iVar1);
  pcVar6 = s_UNKNOWN_STRING_WANTED_0083c758;
  do {
    bVar2 = *pcVar6;
    bVar7 = bVar2 < *pbVar4;
    if (bVar2 != *pbVar4) {
LAB_004af7e5:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_004af7ea;
    }
    if (bVar2 == 0) break;
    bVar2 = pcVar6[1];
    bVar7 = bVar2 < pbVar4[1];
    if (bVar2 != pbVar4[1]) goto LAB_004af7e5;
    pcVar6 = pcVar6 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar2 != 0);
  iVar3 = 0;
LAB_004af7ea:
  if (iVar3 != 0) {
    iVar3 = FUN_0042b6c9(iVar1);
    return iVar3;
  }
  return iVar1;
}


