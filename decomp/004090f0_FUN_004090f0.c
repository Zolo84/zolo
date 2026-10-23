// FUN_004090f0 @ 4090f0 size=64

uint __thiscall FUN_004090f0(char *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  uVar4 = 0;
  iVar3 = 0;
  pcVar5 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar2 - 1)) {
    do {
      uVar4 = uVar4 + (int)param_1[iVar3];
      uVar2 = 0xffffffff;
      iVar3 = iVar3 + 1;
      pcVar5 = param_1;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    } while (iVar3 < (int)(~uVar2 - 1));
  }
  return uVar4 % param_2;
}


