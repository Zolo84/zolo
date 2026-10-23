// FUN_00565b70 @ 565b70 size=65

void FUN_00565b70(int param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  
  *(undefined1 *)(param_1 + 9) = 0;
  cVar2 = FUN_0042e980();
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 2) = *param_2;
  *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(param_2 + 1);
  FUN_00577bb0(param_1,0);
  return;
}


