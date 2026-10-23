// FUN_0040f6f0 @ 40f6f0 size=559

undefined1 FUN_0040f6f0(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *in_stack_00001218;
  char in_stack_0000121c;
  
  FUN_007a69e0();
  uVar2 = 0xffffffff;
  pcVar5 = in_stack_00001218;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = &stack0x0000000c;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar5 = &DAT_0082ef90;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  pcVar5 = &stack0x0000000c;
  do {
    pcVar6 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = pcVar6 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar5 = in_stack_00001218;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = in_stack_00001218 + 1;
    cVar1 = *in_stack_00001218;
    in_stack_00001218 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar5 + -uVar2;
  pcVar7 = &stack0x00000110;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar2 = 0xffffffff;
  pcVar5 = &DAT_0082ef88;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  pcVar5 = &stack0x00000110;
  do {
    pcVar6 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = pcVar6 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  if (in_stack_0000121c == '\x01') {
    cVar1 = FUN_0040fb90();
    if (cVar1 == '\x01') {
      return 1;
    }
    FUN_007a69a7();
  }
  if (&stack0x00000000 != (undefined1 *)0xfffffff4) {
    iVar4 = FUN_007a6615();
    if (iVar4 != 0) {
      if (&stack0x00000000 == (undefined1 *)0xfffffef0) {
        FUN_007b9568();
        iVar4 = (*DAT_0088eb68)();
      }
      else {
        iVar4 = (*DAT_0088eb84)();
      }
      if (iVar4 != 0) {
        iVar4 = FUN_007a67c4();
        while (0 < iVar4) {
          (*DAT_0088eb8c)();
          iVar4 = FUN_007a67c4();
        }
        (*DAT_0088eb44)();
        FUN_007a6429();
        return 1;
      }
      FUN_007a6966();
      FUN_007a6429();
      return 0;
    }
    FUN_007a6966();
    FUN_007a68db();
  }
  return 0;
}


