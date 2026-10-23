// FUN_004268a0 @ 4268a0 size=73

undefined4 __thiscall FUN_004268a0(int param_1,int param_2)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return 1;
    }
    cVar1 = FUN_007a81b4(*(undefined4 *)(param_1 + 4));
    while (cVar1 != '\n') {
      if ((*(byte *)(*(int *)(param_1 + 4) + 0xc) & 0x10) != 0) {
        return 0;
      }
      cVar1 = FUN_007a81b4(*(int *)(param_1 + 4));
    }
    param_2 = param_2 + -1;
  } while( true );
}


