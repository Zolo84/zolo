// FUN_00417fa0 @ 417fa0 size=110

undefined4 FUN_00417fa0(int param_1,char *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  uVar3 = 0xffffffff;
  pcVar6 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar3 - 1;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      if ((param_2[iVar5] == param_3) && (param_2[iVar5 + 1] == '-')) {
        iVar2 = 0;
        iVar4 = (iVar4 - iVar5) + -2;
        if (0 < iVar4) {
          while ((cVar1 = param_2[iVar2 + iVar5 + 2], cVar1 != '.' && (cVar1 != ' '))) {
            *(char *)(iVar2 + param_1) = cVar1;
            iVar2 = iVar2 + 1;
            if (iVar4 <= iVar2) {
              return CONCAT31((int3)((uint)iVar2 >> 8),1);
            }
          }
          *(undefined1 *)(iVar2 + param_1) = 0;
        }
        return CONCAT31((int3)((uint)iVar2 >> 8),1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return 0;
}


