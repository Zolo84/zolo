// FUN_00418010 @ 418010 size=82

undefined4 FUN_00418010(undefined4 param_1,char *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  iVar2 = 0;
  pcVar4 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar3 - 1)) {
    do {
      if ((param_2[iVar2] == param_3) && (param_2[iVar2 + 1] == '-')) {
        FUN_007a7c30(param_2 + iVar2 + 2,&DAT_008390a0,param_1);
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(~uVar3 - 1));
  }
  return 0;
}


