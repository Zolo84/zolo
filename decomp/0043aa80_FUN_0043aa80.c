// FUN_0043aa80 @ 43aa80 size=69

void __fastcall FUN_0043aa80(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x20);
  iVar1 = 4;
  do {
    if ((undefined4 *)piVar2[-8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[-8])(1);
    }
    if ((undefined4 *)piVar2[-4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar2[-4])(1);
    }
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    piVar2[-8] = 0;
    piVar2[-4] = 0;
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


