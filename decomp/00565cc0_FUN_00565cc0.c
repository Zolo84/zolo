// FUN_00565cc0 @ 565cc0 size=60

void FUN_00565cc0(int param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  cVar1 = FUN_0042e980();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_00577bb0(param_1,1);
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_00577bb0(param_1,1);
  return;
}


