// FUN_00598bc0 @ 598bc0 size=99

char * __thiscall FUN_00598bc0(char *param_1,float param_2)

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
  *(undefined ***)param_1 = &PTR_LAB_007eb304;
  *(float *)(param_1 + 0x104) = param_2;
  FUN_007a630a(param_1 + 8,&PTR_PTR_0083c9e8,(double)param_2);
  return param_1;
}


