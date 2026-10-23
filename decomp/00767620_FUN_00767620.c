// FUN_00767620 @ 767620 size=35

int FUN_00767620(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = DAT_00d7d8fc;
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[2];
  } while (param_1 != *(int *)(iVar1 + 8));
  return iVar1;
}


