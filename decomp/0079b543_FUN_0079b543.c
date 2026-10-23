// FUN_0079b543 @ 79b543 size=34

void __fastcall FUN_0079b543(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = FUN_0079b565();
    if (iVar1 != -1) {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


