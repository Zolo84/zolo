// FUN_007a442a @ 7a442a size=311

byte FUN_007a442a(char *param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  byte bVar8;
  char local_24 [32];
  
  pcVar2 = param_1;
  pcVar7 = local_24;
  cVar3 = FUN_0079bd57(param_2);
  if (cVar3 == '\0') {
    if (pcVar2[4] == '\0') {
      Peek();
    }
    if (pcVar2[5] == '+') {
      local_24[0] = '+';
    }
    else {
      if (pcVar2[4] == '\0') {
        Peek();
      }
      if (pcVar2[5] != '-') goto LAB_007a4480;
      local_24[0] = '-';
    }
    pcVar7 = local_24 + 1;
    FUN_0079b543();
  }
LAB_007a4480:
  bVar1 = false;
  cVar3 = FUN_0079bd57(param_2);
  if (cVar3 == '\0') {
    do {
      if (pcVar2[4] == '\0') {
        Peek();
      }
      if (pcVar2[5] != '0') break;
      bVar1 = true;
      FUN_0079b543();
      cVar3 = FUN_0079bd57(param_2);
    } while (cVar3 == '\0');
    if (bVar1) {
      *pcVar7 = '0';
      pcVar7 = pcVar7 + 1;
    }
  }
  while (cVar3 = FUN_0079bd57(param_2), cVar3 == '\0') {
    if (pcVar2[4] == '\0') {
      Peek();
    }
    cVar3 = pcVar2[5];
    *pcVar7 = cVar3;
    if ((cVar3 < '0') || ('9' < cVar3)) break;
    if (pcVar7 < local_24 + 0x1f) {
      pcVar7 = pcVar7 + 1;
    }
    bVar1 = true;
    FUN_0079b543();
  }
  if (!bVar1) {
    pcVar7 = local_24;
  }
  *pcVar7 = '\0';
  puVar4 = (undefined4 *)FUN_007aadca();
  *puVar4 = 0;
  iVar5 = FUN_007aab24(local_24,&param_1,10);
  cVar3 = FUN_0079bd57(param_2);
  bVar8 = cVar3 != '\0';
  if ((((param_1 == local_24) || (piVar6 = (int *)FUN_007aadca(), *piVar6 != 0)) ||
      (iVar5 < param_3)) || (param_4 < iVar5)) {
    bVar8 = bVar8 | 2;
  }
  else {
    *param_5 = iVar5;
  }
  return bVar8;
}


