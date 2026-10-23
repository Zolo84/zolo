// FUN_0043bb70 @ 43bb70 size=876

void __thiscall
FUN_0043bb70(int param_1,int param_2,int param_3,int param_4,int param_5,char *param_6,
            undefined4 param_7,int param_8,int param_9,int param_10,int param_11,char param_12)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bacbc;
  local_c = ExceptionList;
  uVar6 = 0xffffffff;
  pcVar4 = &DAT_0083bf14;
  do {
    pcVar8 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar4 = pcVar8 + -uVar6;
  pcVar8 = (char *)(param_1 + 0x96);
  ExceptionList = &local_c;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar8 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar4 = &DAT_0083bf0c;
  do {
    pcVar8 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar4 = pcVar8 + -uVar6;
  pcVar8 = (char *)(param_1 + 0x8c);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar8 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar4 = &DAT_0083baf4;
  do {
    pcVar8 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar4 = pcVar8 + -uVar6;
  pcVar8 = (char *)(param_1 + 0x91);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar8 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar4 = &DAT_0083bf04;
  do {
    pcVar8 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar4 = pcVar8 + -uVar6;
  pcVar8 = (char *)(param_1 + 0x9b);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar8 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(DAT_00893530 + 0x20);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(DAT_00893530 + 0x20);
  *(int *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x32) = param_7;
  *(int *)(param_1 + 0x36) = param_8;
  iVar3 = *(int *)(param_8 + 0x10);
  *(int *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0x7a) = iVar3;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(int *)(param_1 + 0x5a) = iVar3 + param_3;
  *(int *)(param_1 + 0x56) = param_2;
  *(int *)(param_1 + 0x5e) = param_2 + param_4;
  *(int *)(param_1 + 0x3e) = param_5;
  *(int *)(param_1 + 0x62) = iVar3 * param_5 + 10 + param_3;
  if (param_12 != '\0') {
    FUN_0040fd60(param_1,8999,0);
  }
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  if (param_10 != 0) {
    pvVar2 = operator_new(0xaa);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00433570(param_10,0,0xffffffff);
    }
    *(int *)(param_1 + 0x66) = iVar3;
    local_4 = 0xffffffff;
    *(undefined1 *)(*(int *)(iVar3 + 0x62) + 0x252) = 1;
  }
  if (param_9 != 0) {
    pvVar2 = operator_new(0xaa);
    local_4 = 1;
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00433570(param_9,0,0xffffffff);
    }
    *(int *)(param_1 + 0x6a) = iVar3;
    local_4 = 0xffffffff;
    *(undefined1 *)(*(int *)(iVar3 + 0x62) + 0x252) = 1;
  }
  if (param_11 == 0) {
    pvVar2 = operator_new(0xaa);
    local_4 = 3;
    if (pvVar2 != (void *)0x0) {
      iVar3 = FUN_00433570(s_gfx_interface_menu_scrollbar_bar_0083bedc,0,0xffffffff);
      goto LAB_0043bdae;
    }
  }
  else {
    pvVar2 = operator_new(0xaa);
    local_4 = 2;
    if (pvVar2 != (void *)0x0) {
      iVar3 = FUN_00433570(param_11,0,0xffffffff);
      goto LAB_0043bdae;
    }
  }
  iVar3 = 0;
LAB_0043bdae:
  *(int *)(param_1 + 0x6e) = iVar3;
  uVar6 = 0xffffffff;
  local_4 = 0xffffffff;
  *(undefined1 *)(*(int *)(iVar3 + 0x62) + 0x252) = 1;
  pcVar4 = param_6;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = operator_new(~uVar6 + 4);
  uVar6 = 0xffffffff;
  *(char **)(param_1 + 0x2a) = pcVar4;
  pcVar8 = &DAT_0083baf4;
  do {
    pcVar9 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar9 + -uVar6;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar6 = 0xffffffff;
  do {
    pcVar4 = param_6;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar4 = param_6 + 1;
    cVar1 = *param_6;
    param_6 = pcVar4;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar3 = -1;
  pcVar8 = *(char **)(param_1 + 0x2a);
  do {
    pcVar9 = pcVar8;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -uVar6;
  pcVar8 = pcVar9 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar8 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x26) = 1;
  *(undefined1 *)(param_1 + 0x27) = 1;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  puVar5 = operator_new(0x18);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *(undefined2 *)(puVar5 + 2) = 0;
    *(undefined4 *)((int)puVar5 + 10) = 0;
  }
  *(undefined4 **)(param_1 + 0x2e) = puVar5;
  *puVar5 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x2e) + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x20) = DAT_00bd1bac;
  if (*(int *)(param_1 + 0x66) != 0) {
    FUN_00415d30(*(undefined4 *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x6a) != 0) {
    FUN_00415d30(*(undefined4 *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x6e) != 0) {
    FUN_00415d30(*(undefined4 *)(param_1 + 0x20));
  }
  ExceptionList = local_c;
  return;
}


