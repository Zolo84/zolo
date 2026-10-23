// FUN_00439320 @ 439320 size=79

void __fastcall FUN_00439320(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  uVar4 = 0xffffffff;
  pcVar3 = *(char **)(param_1 + 0x26);
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0x22);
  cVar1 = *(char *)(iVar2 + 0x34);
  if (cVar1 != '\0') {
    pcVar3 = (char *)(iVar2 + 0x35);
    while (cVar1 != '[') {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    }
    cVar1 = *pcVar3;
    iVar2 = ~uVar4 - 1;
    while (cVar1 != ']') {
      pcVar3 = pcVar3 + 1;
      *(char *)(iVar2 + *(int *)(param_1 + 0x26)) = cVar1;
      iVar2 = iVar2 + 1;
      cVar1 = *pcVar3;
    }
    *(undefined1 *)(iVar2 + *(int *)(param_1 + 0x26)) = 0;
  }
  return;
}


