// FUN_004300c0 @ 4300c0 size=67

void __thiscall FUN_004300c0(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  iVar3 = 0;
  pcVar5 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar4 = 0;
  if (0 < (int)(~uVar2 - 1)) {
    do {
      cVar1 = param_2[iVar4];
      if (((cVar1 != '+') && (cVar1 != '?')) && (cVar1 != '*')) {
        *(char *)(iVar3 + 0x10 + param_1) = cVar1;
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(~uVar2 - 1));
  }
  *(undefined1 *)(iVar3 + 0x10 + param_1) = 0;
  return;
}


