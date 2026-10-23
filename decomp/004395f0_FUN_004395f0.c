// FUN_004395f0 @ 4395f0 size=59

undefined4 __thiscall FUN_004395f0(int param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar2 = *(char **)(param_1 + 0x26);
  uVar3 = 0xffffffff;
  pcVar4 = pcVar2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  do {
    uVar3 = uVar3 - 1;
    if ((int)uVar3 < 1) {
      return 0;
    }
  } while (pcVar2[uVar3] != '\\');
  if (param_2 != '\0') {
    return 1;
  }
  pcVar2[uVar3] = '\0';
  return 1;
}


