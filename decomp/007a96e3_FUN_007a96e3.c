// FUN_007a96e3 @ 7a96e3 size=154

char * FUN_007a96e3(undefined8 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_2c [24];
  undefined1 local_14 [16];
  
  iVar2 = FUN_007b2e97(param_1,local_14,local_2c);
  iVar2 = *(int *)(iVar2 + 4) + -1;
  if ((iVar2 < -1) || (param_2 + -1 < iVar2)) {
    pcVar3 = (char *)FUN_007ac1d1(&param_1,param_3,param_2 + -1,0);
    pcVar4 = pcVar3;
  }
  else {
    pcVar3 = (char *)FUN_007ac2f4();
    pcVar4 = pcVar3;
  }
  for (; (*pcVar3 != '\0' && (*pcVar3 != DAT_0087cfe0)); pcVar3 = pcVar3 + 1) {
  }
  if (*pcVar3 != '\0') {
    do {
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar3;
      if (*pcVar3 == '\0') break;
    } while (*pcVar3 != 'e');
    do {
      pcVar5 = pcVar5 + -1;
    } while (*pcVar5 == '0');
    do {
      cVar1 = *pcVar3;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
      *pcVar5 = cVar1;
    } while (cVar1 != '\0');
  }
  return pcVar4;
}


