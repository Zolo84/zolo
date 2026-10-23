// FUN_00583800 @ 583800 size=87

void FUN_00583800(void)

{
  int iVar1;
  int *piVar2;
  
  FUN_00796cd8(DAT_00bd1ba4);
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
  }
  FUN_0057ae80();
  if (DAT_00bd1bb4 != (undefined4 *)0x0) {
    (**(code **)*DAT_00bd1bb4)(1);
  }
  return;
}


