// FUN_00438900 @ 438900 size=68

void __thiscall FUN_00438900(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      iVar3 = iVar2 + 1;
      *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x18)) = 0;
      iVar2 = iVar3;
    } while (iVar3 < *(int *)(param_1 + 0x30));
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = *(char **)(param_1 + 0x18);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return;
}


