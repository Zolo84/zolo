// FUN_00757750 @ 757750 size=37

void FUN_00757750(void)

{
  int *piVar1;
  
  piVar1 = &DAT_00d4c350;
  do {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0xd4c3b0);
  return;
}


