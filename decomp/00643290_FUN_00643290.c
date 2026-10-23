// FUN_00643290 @ 643290 size=48

void __fastcall FUN_00643290(int *param_1)

{
  int iVar1;
  
  iVar1 = 0x42;
  do {
    if (*param_1 != 0) {
      FUN_006d4380(*param_1);
      if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*param_1)(1);
      }
    }
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


