// FUN_00746d10 @ 746d10 size=437

void __thiscall FUN_00746d10(int param_1,char *param_2)

{
  char cVar1;
  size_t *psVar2;
  size_t *psVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  
  psVar3 = (size_t *)(param_1 + 0x12);
  if (((*(int *)(param_1 + 0x16) != DAT_00d4c214) || (*psVar3 != DAT_00d4c210)) &&
     ((*(int *)(param_1 + 0x16) != DAT_00d4c214 || (*(size_t *)(param_1 + 0x12) != DAT_00d4c210))))
  {
    uVar5 = 0xffffffff;
    pcVar8 = param_2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    psVar2 = _malloc(~uVar5 + 0x1c);
    *psVar2 = ~uVar5 + 0x1c;
    if (param_1 == -0xe) {
      psVar3 = &DAT_00d4c210;
    }
    psVar2[1] = *psVar3;
    psVar2[2] = psVar3[1];
    psVar2[3] = *(size_t *)(param_1 + 0x12);
    psVar2[4] = *(size_t *)(param_1 + 0x16);
    uVar5 = 0xffffffff;
    psVar2[5] = 0xc;
    pcVar8 = param_2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    uVar7 = 0;
    iVar6 = 0;
    do {
      bVar4 = (byte)uVar7;
      uVar7 = uVar7 + 8;
      *(char *)(iVar6 + 0x18 + (int)psVar2) =
           (char)((0xff000000U >> (bVar4 & 0x1f) & uVar5) >> (0x18 - bVar4 & 0x1f));
      iVar6 = iVar6 + 1;
    } while (uVar7 < 0x20);
    while (uVar5 != 0) {
      *(char *)((int)psVar2 + uVar5 + 0x1b) = param_2[uVar5 - 1];
      uVar5 = uVar5 - 1;
    }
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 8;
    } while (uVar5 < 0x20);
    FUN_007579c0(psVar2);
    FUN_007a77fa(psVar2);
  }
  uVar5 = 0xffffffff;
  pcVar8 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar5 - 1;
  uVar5 = FUN_00675dc0();
  if (uVar5 < uVar7) {
    FUN_00798b7d();
  }
  iVar6 = *(int *)(param_1 + 0x232);
  if (((iVar6 == 0) || (cVar1 = *(char *)(iVar6 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar7 == 0) {
      FUN_00674910(1);
      return;
    }
    if ((*(uint *)(param_1 + 0x23a) < 0x20) && (uVar7 <= *(uint *)(param_1 + 0x23a)))
    goto LAB_00746ea0;
    FUN_00674910(1);
  }
  else if (uVar7 == 0) {
    *(char *)(iVar6 + -1) = cVar1 + -1;
    FUN_00674910(0);
    return;
  }
  FUN_00675dd0(uVar7);
LAB_00746ea0:
  pcVar8 = *(char **)(param_1 + 0x232);
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *param_2;
    param_2 = param_2 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(uint *)(param_1 + 0x236) = uVar7;
  *(undefined1 *)(*(int *)(param_1 + 0x232) + uVar7) = 0;
  return;
}


