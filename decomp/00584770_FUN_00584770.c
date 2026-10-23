// FUN_00584770 @ 584770 size=68

void FUN_00584770(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < DAT_00bd1bbc) {
    piVar2 = &DAT_00bd1960;
    do {
      if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar2)(1);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < DAT_00bd1bbc);
    DAT_00bd1bbc = 0;
    return;
  }
  DAT_00bd1bbc = 0;
  return;
}


