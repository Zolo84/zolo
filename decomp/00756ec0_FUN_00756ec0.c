// FUN_00756ec0 @ 756ec0 size=481

void FUN_00756ec0(undefined4 param_1,int param_2,int param_3,size_t param_4,size_t param_5,
                 size_t param_6,char *param_7,char *param_8,char *param_9,undefined4 param_10)

{
  size_t _Size;
  char cVar1;
  size_t *psVar2;
  size_t *psVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  
  uVar5 = 0xffffffff;
  pcVar11 = param_7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar6 = 0xffffffff;
  pcVar11 = param_8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar7 = 0xffffffff;
  pcVar11 = param_9;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  _Size = ~uVar5 + ~uVar6 + ~uVar7 + 0x30;
  psVar2 = _malloc(_Size);
  *psVar2 = _Size;
  if (param_2 == 0) {
    psVar3 = &DAT_00d4c210;
  }
  else {
    psVar3 = (size_t *)(param_2 + 4);
  }
  psVar2[1] = *psVar3;
  psVar2[2] = psVar3[1];
  psVar2[3] = *(size_t *)(param_3 + 4);
  psVar2[4] = *(size_t *)(param_3 + 8);
  psVar2[5] = param_4;
  psVar2[6] = param_5;
  uVar5 = 0xffffffff;
  psVar2[7] = param_6;
  pcVar11 = param_7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  uVar6 = 0;
  iVar10 = 0;
  do {
    bVar4 = (byte)uVar6;
    uVar6 = uVar6 + 8;
    *(char *)((int)psVar2 + iVar10 + 0x20) =
         (char)((0xff000000U >> (bVar4 & 0x1f) & uVar5) >> (0x18 - bVar4 & 0x1f));
    iVar10 = iVar10 + 1;
  } while (uVar6 < 0x20);
  while (uVar5 != 0) {
    *(char *)((int)psVar2 + uVar5 + 0x23) = param_7[uVar5 - 1];
    uVar5 = uVar5 - 1;
  }
  iVar10 = 0;
  iVar8 = 0;
  uVar5 = 0;
  do {
    cVar1 = (char)uVar5;
    uVar5 = uVar5 + 8;
    iVar10 = iVar10 + ((uint)*(byte *)((int)psVar2 + iVar8 + 0x20) << (0x18U - cVar1 & 0x1f));
    iVar8 = iVar8 + 1;
  } while (uVar5 < 0x20);
  iVar10 = iVar10 + 0x24;
  uVar5 = 0xffffffff;
  pcVar11 = param_8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_00745a60(~uVar5);
  uVar5 = ~uVar5;
  while (uVar5 != 0) {
    *(char *)((int)psVar2 + uVar5 + 3 + iVar10) = param_8[uVar5 - 1];
    uVar5 = uVar5 - 1;
  }
  iVar9 = 0;
  iVar8 = 0;
  uVar5 = 0;
  do {
    cVar1 = (char)uVar5;
    uVar5 = uVar5 + 8;
    iVar9 = iVar9 + ((uint)*(byte *)((int)psVar2 + iVar8 + iVar10) << (0x18U - cVar1 & 0x1f));
    iVar8 = iVar8 + 1;
  } while (uVar5 < 0x20);
  uVar5 = 0xffffffff;
  uVar6 = 0;
  iVar10 = iVar9 + 4 + iVar10;
  pcVar11 = param_9;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar8 = 0;
  do {
    bVar4 = (byte)uVar6;
    uVar6 = uVar6 + 8;
    *(char *)((int)psVar2 + iVar8 + iVar10) =
         (char)((0xff000000U >> (bVar4 & 0x1f) & uVar5) >> (0x18 - bVar4 & 0x1f));
    iVar8 = iVar8 + 1;
  } while (uVar6 < 0x20);
  while (uVar5 != 0) {
    *(char *)((int)psVar2 + uVar5 + 3 + iVar10) = param_9[uVar5 - 1];
    uVar5 = uVar5 - 1;
  }
  iVar9 = 0;
  iVar8 = 0;
  uVar5 = 0;
  do {
    cVar1 = (char)uVar5;
    uVar5 = uVar5 + 8;
    iVar9 = iVar9 + ((uint)*(byte *)((int)psVar2 + iVar8 + iVar10) << (0x18U - cVar1 & 0x1f));
    iVar8 = iVar8 + 1;
  } while (uVar5 < 0x20);
  *(undefined4 *)((int)psVar2 + iVar9 + 4 + iVar10) = param_10;
  FUN_007579c0(psVar2);
  FUN_007a77fa(psVar2);
  return;
}


