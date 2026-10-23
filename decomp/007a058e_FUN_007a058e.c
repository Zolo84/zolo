// FUN_007a058e @ 7a058e size=343

byte FUN_007a058e(char *param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  short sVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  byte bVar9;
  char local_24 [32];
  
  pcVar2 = param_1;
  pcVar8 = local_24;
  cVar3 = FUN_007a1c0a(param_2);
  if (cVar3 == '\0') {
    if (pcVar2[4] == '\0') {
      Peek();
    }
    sVar4 = FUN_0079c11f(0x2b);
    if (*(short *)(pcVar2 + 6) == sVar4) {
      local_24[0] = '+';
    }
    else {
      if (pcVar2[4] == '\0') {
        Peek();
      }
      sVar4 = FUN_0079c11f(0x2d);
      if (*(short *)(pcVar2 + 6) != sVar4) goto LAB_007a05f4;
      local_24[0] = '-';
    }
    pcVar8 = local_24 + 1;
    FUN_007a06e5();
  }
LAB_007a05f4:
  bVar1 = false;
  cVar3 = FUN_007a1c0a(param_2);
  if (cVar3 == '\0') {
    do {
      if (pcVar2[4] == '\0') {
        Peek();
      }
      sVar4 = FUN_0079c11f(0x30);
      if (*(short *)(pcVar2 + 6) != sVar4) break;
      bVar1 = true;
      FUN_007a06e5();
      cVar3 = FUN_007a1c0a(param_2);
    } while (cVar3 == '\0');
    if (bVar1) {
      *pcVar8 = '0';
      pcVar8 = pcVar8 + 1;
    }
  }
  while (cVar3 = FUN_007a1c0a(param_2), cVar3 == '\0') {
    if (pcVar2[4] == '\0') {
      Peek();
    }
    cVar3 = FUN_007a5796(*(undefined2 *)(pcVar2 + 6));
    *pcVar8 = cVar3;
    if ((cVar3 < '0') || ('9' < cVar3)) break;
    if (pcVar8 < local_24 + 0x1f) {
      pcVar8 = pcVar8 + 1;
    }
    bVar1 = true;
    FUN_007a06e5();
  }
  if (!bVar1) {
    pcVar8 = local_24;
  }
  *pcVar8 = '\0';
  puVar5 = (undefined4 *)FUN_007aadca();
  *puVar5 = 0;
  iVar6 = FUN_007aab24(local_24,&param_1,10);
  cVar3 = FUN_007a1c0a(param_2);
  bVar9 = cVar3 != '\0';
  if ((((param_1 == local_24) || (piVar7 = (int *)FUN_007aadca(), *piVar7 != 0)) ||
      (iVar6 < param_3)) || (param_4 < iVar6)) {
    bVar9 = bVar9 | 2;
  }
  else {
    *param_5 = iVar6;
  }
  return bVar9;
}


