// FUN_005fb7a0 @ 5fb7a0 size=141

undefined4 * __thiscall
FUN_005fb7a0(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
            undefined1 param_9,undefined4 param_10)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  FUN_00433f00();
  uVar2 = 0xffffffff;
  *param_1 = &PTR_FUN_007ee304;
  param_1[2] = &PTR_LAB_007ee300;
  do {
    pcVar4 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)((int)param_1 + 0x36);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x13e) = param_4;
  *(undefined4 *)((int)param_1 + 0x136) = param_3;
  *(undefined4 *)((int)param_1 + 0x32) = param_6;
  *(undefined4 *)((int)param_1 + 0x2e) = param_5;
  *(undefined1 *)((int)param_1 + 0x142) = param_8;
  *(undefined1 *)((int)param_1 + 0x143) = param_9;
  param_1[0x51] = param_7;
  *(undefined4 *)((int)param_1 + 0x13a) = param_10;
  return param_1;
}


