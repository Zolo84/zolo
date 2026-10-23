// FUN_00426720 @ 426720 size=97

int __fastcall FUN_00426720(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  FUN_007a8307(*(undefined4 *)(param_1 + 4),0,0);
  do {
    iVar3 = 1;
    do {
      cVar1 = FUN_007a81b4(*(undefined4 *)(param_1 + 4));
      while (cVar1 != '\n') {
        if ((*(byte *)(*(int *)(param_1 + 4) + 0xc) & 0x10) != 0) {
          FUN_007a8307(*(undefined4 *)(param_1 + 4),0,0);
          return iVar2;
        }
        cVar1 = FUN_007a81b4(*(int *)(param_1 + 4));
      }
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    iVar2 = iVar2 + 1;
  } while( true );
}


