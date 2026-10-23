// FUN_00680570 @ 680570 size=63

void FUN_00680570(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = _rand();
  iVar2 = iVar2 % 5 + 2;
  cVar1 = FUN_004a0a80();
  if (cVar1 != '\0') {
    iVar2 = _rand();
    iVar2 = iVar2 % 3 + 1;
  }
  FUN_006adfb0(iVar2,0);
  return;
}


