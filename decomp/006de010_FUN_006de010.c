// FUN_006de010 @ 6de010 size=425

void __fastcall FUN_006de010(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_100 [256];
  
  pcVar7 = s_END_GOOD_0086d474;
  if (*(int *)(param_1 + 0x6c) != *(int *)(param_1 + 0x70)) {
    pcVar7 = s_END_BAD_0086d46c;
  }
  if (((((&DAT_0089cad8)[*(int *)(param_1 + 0x6c)] != 0) &&
       ((&DAT_0089cad8)[*(int *)(param_1 + 0x70)] != 0)) &&
      (iVar6 = *(int *)((&DAT_0089cad8)[*(int *)(param_1 + 0x6c)] + 0x3350), iVar6 != 0)) &&
     (iVar6 == *(int *)((&DAT_0089cad8)[*(int *)(param_1 + 0x70)] + 0x3350))) {
    pcVar7 = s_END_GOOD_0086d474;
  }
  FUN_007a630a(local_100,s__s_HEADER_0086d454,pcVar7);
  pcVar2 = (char *)FUN_0042b6c9(local_100);
  FUN_007a630a(local_100,&DAT_0086d44c,pcVar7);
  pcVar3 = (char *)FUN_0042b6c9(local_100);
  FUN_007a630a(local_100,&DAT_0086d444,pcVar7);
  pcVar7 = (char *)FUN_0042b6c9(local_100);
  uVar4 = 0xffffffff;
  do {
    pcVar9 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar9 + -uVar4;
  pcVar9 = (char *)&DAT_00d2503c;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar2 = &DAT_0086d430;
  do {
    pcVar9 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar2 = (char *)&DAT_00d2503c;
  do {
    pcVar8 = pcVar2;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar8 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar8;
  } while (cVar1 != '\0');
  pcVar2 = pcVar9 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar2 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar3 = (char *)&DAT_00d2503c;
  do {
    pcVar9 = pcVar3;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar3 = pcVar2 + -uVar4;
  pcVar2 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar2 = pcVar2 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar3 = &DAT_0086d430;
  do {
    pcVar2 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar3 = (char *)&DAT_00d2503c;
  do {
    pcVar9 = pcVar3;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar3 = pcVar2 + -uVar4;
  pcVar2 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar2 = pcVar2 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar3 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar3 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar3;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar7 = (char *)&DAT_00d2503c;
  do {
    pcVar2 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar2 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar2;
  } while (cVar1 != '\0');
  pcVar7 = pcVar3 + -uVar4;
  pcVar3 = pcVar2 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar3 = pcVar3 + 1;
  }
  FUN_006ec610(&DAT_00d2503c);
  FUN_006ddf10(&DAT_00d2503c);
  return;
}


