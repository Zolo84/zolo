// FUN_004262f0 @ 4262f0 size=64

undefined1 __thiscall FUN_004262f0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  do {
    if (param_2 < 1) {
      return 1;
    }
    iVar2 = *(int *)(param_1 + 4);
    do {
      cVar1 = FUN_007a81b4(iVar2);
      iVar2 = *(int *)(param_1 + 4);
      if ((*(byte *)(iVar2 + 0xc) & 0x10) != 0) {
        return 0;
      }
    } while ((cVar1 != ';') && (cVar1 != '\n'));
    param_2 = param_2 + -1;
  } while( true );
}


