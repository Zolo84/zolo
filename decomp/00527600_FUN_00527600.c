// FUN_00527600 @ 527600 size=36

undefined4 __fastcall FUN_00527600(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = *(int *)(iVar1 + 8);
    cVar2 = FUN_00525720();
  } while (cVar2 == '\0');
  return 1;
}


