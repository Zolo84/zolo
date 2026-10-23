// FUN_0058f0b0 @ 58f0b0 size=152

char * __thiscall FUN_0058f0b0(char *param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  *(undefined ***)param_1 = &PTR_LAB_007eb264;
  pcVar5 = &DAT_0083bf04;
  do {
    pcVar4 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = param_1;
  for (uVar3 = uVar2 >> 2; pcVar5 = pcVar5 + 4, uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined ***)param_1 = &PTR_LAB_007eb23c;
  uVar2 = 0xffffffff;
  pcVar5 = &DAT_0088ebf8;
  do {
    pcVar4 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar4 + -uVar2;
  pcVar4 = param_1 + 8;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  }
  param_1[0x104] = '\0';
  param_1[0x105] = '\0';
  param_1[0x106] = '\0';
  param_1[0x107] = '\0';
  param_1[0x108] = '\0';
  param_1[0x109] = '\0';
  *(undefined4 *)(param_1 + 0x104) = param_2;
  *(undefined2 *)(param_1 + 0x108) = param_3;
  *(undefined ***)param_1 = &PTR_LAB_007eb28c;
  return param_1;
}


