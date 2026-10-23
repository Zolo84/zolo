// FUN_004265c0 @ 4265c0 size=76

undefined4 __thiscall FUN_004265c0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = 'z';
  while (cVar1 != '\n') {
    cVar1 = FUN_007a81b4(*(undefined4 *)(param_1 + 4));
    if ((*(byte *)(*(int *)(param_1 + 4) + 0xc) & 0x10) != 0) {
      *(undefined1 *)(iVar2 + param_2) = 0;
      return 0;
    }
    if ((cVar1 == ';') || (cVar1 == '\n')) break;
    *(char *)(iVar2 + param_2) = cVar1;
    iVar2 = iVar2 + 1;
  }
  *(undefined1 *)(iVar2 + param_2) = 0;
  return 1;
}


