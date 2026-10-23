// FUN_006eee10 @ 6eee10 size=342

int __thiscall FUN_006eee10(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  
  iVar2 = FUN_006ee6e0(param_2);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x26) + 4))(param_2);
    if (iVar2 != 0) {
      if (*(char *)(*(int *)(param_1 + 0x26) + 0x3b) != '\0') {
        *(undefined1 *)(*(int *)(param_1 + 0x26) + 0x3b) = 0;
        uVar3 = 0xffffffff;
        pcVar5 = *(char **)(*(int *)(param_1 + 0x26) + 0x18);
        do {
          pcVar7 = pcVar5;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar7 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar7;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        pcVar5 = pcVar7 + -uVar3;
        pcVar7 = (char *)(param_1 + 0x2e);
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar7 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      return iVar2;
    }
    iVar2 = 0;
    piVar6 = (int *)(param_1 + 0x16);
    do {
      (**(code **)(*(int *)*piVar6 + 4))(param_2);
      if (*(char *)(*piVar6 + 0x96) != '\0') {
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x6e) = 0;
          *(undefined4 *)(param_1 + 0x2a) = 4;
          uVar3 = 0xffffffff;
          pcVar5 = *(char **)(*(int *)(param_1 + 0x26) + 0x18);
          goto code_r0x006eef3f;
        }
        if (iVar2 == 1) {
          *(undefined4 *)(param_1 + 0x2a) = 5;
          *(undefined4 *)(param_1 + 0x6e) = 1;
          uVar3 = 0xffffffff;
          pcVar5 = *(char **)(*(int *)(param_1 + 0x26) + 0x18);
          goto code_r0x006eeeff;
        }
        if (iVar2 == 2) {
          *(undefined1 *)(param_1 + 0x10) = 0;
          uVar3 = 0xffffffff;
          pcVar5 = *(char **)(*(int *)(param_1 + 0x26) + 0x18);
          goto code_r0x006eeec2;
        }
      }
      iVar2 = iVar2 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar2 < 3);
    iVar2 = 0;
  }
  return iVar2;
  while( true ) {
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
    if (cVar1 == '\0') break;
code_r0x006eef3f:
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
  }
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = (char *)(param_1 + 0x2e);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return 1;
  while( true ) {
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
    if (cVar1 == '\0') break;
code_r0x006eeeff:
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
  }
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = (char *)(param_1 + 0x2e);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return 1;
  while( true ) {
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
    if (cVar1 == '\0') break;
code_r0x006eeec2:
    pcVar7 = pcVar5;
    if (uVar3 == 0) break;
  }
  uVar3 = ~uVar3;
  pcVar5 = pcVar7 + -uVar3;
  pcVar7 = (char *)(param_1 + 0x2e);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return 1;
}


