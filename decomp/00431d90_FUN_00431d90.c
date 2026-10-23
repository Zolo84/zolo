// FUN_00431d90 @ 431d90 size=50

undefined4 __thiscall FUN_00431d90(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = *(int *)(iVar1 + 8);
    cVar2 = FUN_004e9500(param_2);
  } while (cVar2 == '\0');
  return 1;
}


