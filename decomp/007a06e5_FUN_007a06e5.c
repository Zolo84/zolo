// FUN_007a06e5 @ 7a06e5 size=35

void __fastcall FUN_007a06e5(int *param_1)

{
  short sVar1;
  
  if (*param_1 != 0) {
    sVar1 = FUN_007a0708();
    if (sVar1 != -1) {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


