// FUN_00746fb0 @ 746fb0 size=462

void __thiscall FUN_00746fb0(int param_1,char *param_2,char *param_3,uint param_4,char *param_5)

{
  size_t _Size;
  uint *puVar1;
  char cVar2;
  uint uVar3;
  size_t *psVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  size_t *psVar9;
  int iVar10;
  char *pcVar11;
  
  uVar6 = param_4;
  uVar3 = 0;
  iVar8 = 0;
  do {
    bVar5 = (byte)uVar3;
    uVar3 = uVar3 + 8;
    *(char *)((int)&param_4 + iVar8) =
         (char)((0xff000000U >> (bVar5 & 0x1f) & uVar6) >> (0x18 - bVar5 & 0x1f));
    iVar8 = iVar8 + 1;
  } while (uVar3 < 0x20);
  uVar6 = 0xffffffff;
  pcVar11 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar3 = 0xffffffff;
  pcVar11 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar7 = 0xffffffff;
  pcVar11 = param_5;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  _Size = ~uVar6 + ~uVar3 + ~uVar7 + 0x28;
  psVar4 = _malloc(_Size);
  *psVar4 = _Size;
  if (param_1 == -0xe) {
    psVar9 = &DAT_00d4c210;
  }
  else {
    psVar9 = (size_t *)(param_1 + 0x12);
  }
  psVar4[1] = *psVar9;
  psVar4[2] = psVar9[1];
  uVar6 = 0xffffffff;
  psVar4[3] = *(size_t *)(param_1 + 0x12);
  psVar4[4] = *(size_t *)(param_1 + 0x16);
  psVar4[5] = 0;
  pcVar11 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_00745a60(~uVar6);
  uVar6 = ~uVar6;
  while (uVar6 != 0) {
    *(char *)((int)psVar4 + uVar6 + 0x1b) = param_2[uVar6 - 1];
    uVar6 = uVar6 - 1;
  }
  iVar10 = 0;
  iVar8 = 0;
  uVar6 = 0;
  do {
    cVar2 = (char)uVar6;
    uVar6 = uVar6 + 8;
    iVar10 = iVar10 + ((uint)*(byte *)((int)psVar4 + iVar8 + 0x18) << (0x18U - cVar2 & 0x1f));
    iVar8 = iVar8 + 1;
  } while (uVar6 < 0x20);
  uVar6 = 0xffffffff;
  pcVar11 = param_3;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_00745a60(~uVar6);
  uVar6 = ~uVar6;
  while (uVar6 != 0) {
    *(char *)((int)psVar4 + uVar6 + 3 + iVar10 + 0x1c) = param_3[uVar6 - 1];
    uVar6 = uVar6 - 1;
  }
  iVar8 = FUN_00745a30();
  puVar1 = (uint *)((int)psVar4 + iVar8 + 4 + iVar10 + 0x1c);
  uVar6 = 0xffffffff;
  *puVar1 = param_4;
  uVar3 = 0;
  pcVar11 = param_5;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  iVar8 = 0;
  do {
    bVar5 = (byte)uVar3;
    uVar3 = uVar3 + 8;
    *(char *)(iVar8 + 4 + (int)puVar1) =
         (char)((0xff000000U >> (bVar5 & 0x1f) & uVar6) >> (0x18 - bVar5 & 0x1f));
    iVar8 = iVar8 + 1;
  } while (uVar3 < 0x20);
  while (uVar6 != 0) {
    *(char *)(uVar6 + 7 + (int)puVar1) = param_5[uVar6 - 1];
    uVar6 = uVar6 - 1;
  }
  uVar6 = 0;
  do {
    uVar6 = uVar6 + 8;
  } while (uVar6 < 0x20);
  FUN_007579c0(psVar4);
  FUN_007a77fa(psVar4);
  return;
}


