// FUN_00643990 @ 643990 size=97

void __thiscall FUN_00643990(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = (char *)(param_1 + 0x1b2);
  if (pcVar5 != (char *)0x0) {
    uVar2 = 0xffffffff;
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
    pcVar6 = pcVar5;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
    }
    if (pcVar5 != (char *)0x0) {
      uVar2 = 0xffffffff;
      do {
        pcVar5 = param_3;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar5 = param_3 + 1;
        cVar1 = *param_3;
        param_3 = pcVar5;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar5 = pcVar5 + -uVar2;
      pcVar4 = (char *)(param_1 + 0x2b2);
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
    }
  }
  return;
}


