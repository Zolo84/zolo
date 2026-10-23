// FUN_006aee10 @ 6aee10 size=102

undefined2 __thiscall FUN_006aee10(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar2 = (**(code **)(*param_1 + 4))(param_2);
  if (iVar2 != 0) {
    return *(undefined2 *)(iVar2 + 0x100);
  }
  pcVar3 = operator_new(0x102);
  uVar4 = 0xffffffff;
  pcVar3[0x100] = '\0';
  pcVar3[0x101] = '\0';
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
  pcVar7 = pcVar3;
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
  (**(code **)(*param_1 + 0x18))(pcVar3,pcVar3);
  return 0;
}


