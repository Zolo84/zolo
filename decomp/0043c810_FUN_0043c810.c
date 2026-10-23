// FUN_0043c810 @ 43c810 size=450

void __thiscall
FUN_0043c810(int param_1,char *param_2,undefined4 param_3,undefined1 param_4,undefined4 *param_5,
            char *param_6)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  
  if (param_6 == (char *)0x0) {
    param_6 = param_2;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x2e);
  do {
    puVar8 = puVar4;
    if (puVar8[4] == 0) {
      uVar6 = 0xffffffff;
      pcVar5 = param_2;
      goto code_r0x0043c84a;
    }
    puVar4 = (undefined4 *)*puVar8;
  } while ((undefined4 *)*puVar8 != (undefined4 *)0x0);
  puVar4 = operator_new(0x18);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(undefined2 *)(puVar4 + 2) = 0;
    *(undefined4 *)((int)puVar4 + 10) = 0;
  }
  *puVar8 = puVar4;
  uVar6 = 0xffffffff;
  *puVar4 = 0;
  pcVar5 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = operator_new(~uVar6);
  puVar4[1] = param_3;
  puVar4[4] = pcVar5;
  puVar4[2] = *param_5;
  uVar2 = *(undefined2 *)(param_5 + 1);
  *(undefined1 *)((int)puVar4 + 0xe) = 0;
  *(undefined2 *)(puVar4 + 3) = uVar2;
  *(undefined1 *)((int)puVar4 + 0xf) = param_4;
  uVar6 = 0xffffffff;
  do {
    pcVar10 = param_2;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar10 + -uVar6;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar5 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar5 = param_6;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = operator_new(~uVar6);
  uVar6 = 0xffffffff;
  puVar4[5] = pcVar5;
  do {
    pcVar10 = param_6;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = param_6 + 1;
    cVar1 = *param_6;
    param_6 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar10 + -uVar6;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar5 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar5 = pcVar5 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x3e);
  iVar9 = *(int *)(param_1 + 0x46) + 1;
  *(int *)(param_1 + 0x46) = iVar9;
  if (iVar9 == iVar3 + 1) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (iVar3 < iVar9) {
    *(int *)(param_1 + 0x42) = iVar9 - iVar3;
  }
  *(undefined1 *)(param_1 + 0x7e) = 0;
  return;
  while( true ) {
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    if (cVar1 == '\0') break;
code_r0x0043c84a:
    if (uVar6 == 0) break;
  }
  pcVar5 = operator_new(~uVar6);
  uVar6 = 0xffffffff;
  puVar8[4] = pcVar5;
  do {
    pcVar10 = param_2;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar10 + -uVar6;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar5 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar5 = param_6;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = operator_new(~uVar6);
  uVar6 = 0xffffffff;
  puVar8[5] = pcVar5;
  do {
    pcVar10 = param_6;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = param_6 + 1;
    cVar1 = *param_6;
    param_6 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar10 + -uVar6;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar5 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar5 = pcVar5 + 1;
  }
  puVar8[1] = param_3;
  puVar8[2] = *param_5;
  uVar2 = *(undefined2 *)(param_5 + 1);
  *(undefined1 *)((int)puVar8 + 0xe) = 0;
  *(undefined2 *)(puVar8 + 3) = uVar2;
  *(undefined1 *)((int)puVar8 + 0xf) = param_4;
  *(int *)(param_1 + 0x46) = *(int *)(param_1 + 0x46) + 1;
  return;
}


