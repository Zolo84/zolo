// FUN_0040f920 @ 40f920 size=481

undefined4 FUN_0040f920(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *in_stack_00001108;
  
  FUN_007a69e0();
  uVar5 = 0xffffffff;
  pcVar8 = in_stack_00001108;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcVar2 = operator_new(~uVar5 + 4);
  uVar5 = 0xffffffff;
  pcVar8 = in_stack_00001108;
  do {
    pcVar10 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar10 + -uVar5;
  pcVar10 = pcVar2;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_0082ef88;
  do {
    pcVar10 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar8 = pcVar2;
  do {
    pcVar9 = pcVar8;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar8 = in_stack_00001108;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = in_stack_00001108 + 1;
    cVar1 = *in_stack_00001108;
    in_stack_00001108 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar8 + -uVar5;
  pcVar10 = (char *)register0x00000010;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_0082ef90;
  do {
    pcVar10 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar8 = (char *)register0x00000010;
  do {
    pcVar9 = pcVar8;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar5;
  pcVar10 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  if (&stack0x00000000 == (undefined1 *)0x0) {
    FUN_00796cd8();
    return 0;
  }
  iVar7 = FUN_007a6615(&stack0x00000000);
  if (iVar7 == 0) {
    FUN_007a6966(s_can_t_open___s__0082ef74);
    FUN_007a68db(s_reason__0082ef6c);
    FUN_00796cd8(pcVar2);
    return 0;
  }
  iVar3 = (*DAT_0088eb84)(pcVar2);
  if (iVar3 != 0) {
    iVar4 = (*DAT_0088eb88)(iVar3,&stack0x000000fc,0x1000);
    while (0 < iVar4) {
      FUN_007a6a0f(&stack0x000000f0,1,iVar4,iVar7);
      iVar4 = (*DAT_0088eb88)(iVar3,&stack0x000000f0,0x1000);
    }
    (*DAT_0088eb44)(iVar3);
    FUN_007a6429(iVar7);
    FUN_007a69a7(pcVar2);
    FUN_00796cd8(pcVar2);
    return 1;
  }
  FUN_007a6966(s_can_t_bz2openstream_0082ef54);
  FUN_007a6429(iVar7);
  FUN_00796cd8(pcVar2);
  return 0;
}


