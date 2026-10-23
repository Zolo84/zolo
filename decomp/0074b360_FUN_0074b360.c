// FUN_0074b360 @ 74b360 size=62

uint __fastcall FUN_0074b360(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = *(char **)(param_1 + 0x18);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)&DAT_007f0c98;
  }
  uVar3 = 0xffffffff;
  uVar2 = 0;
  pcVar6 = pcVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if ((4 < (int)(~uVar3 - 1)) && (iVar4 = ~uVar3 - 4, 0 < iVar4)) {
    do {
      if ((pcVar5[uVar2] == 'P') && (pcVar5[uVar2 + 1] == ':')) {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar4);
  }
  return uVar2 & 0xffffff00;
}


