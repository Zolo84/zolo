// FUN_0074b320 @ 74b320 size=55

void __fastcall FUN_0074b320(int param_1)

{
  int *piVar1;
  int local_4;
  
  piVar1 = (int *)**(int **)(param_1 + 0x68);
  local_4 = param_1;
  if (piVar1 != *(int **)(param_1 + 0x68)) {
    do {
      *(undefined4 *)(*(int *)((int)piVar1 + 0x10) + 0x24) = 0;
      FUN_00749060(&local_4,piVar1);
      piVar1 = (int *)local_4;
    } while (local_4 != *(int *)(param_1 + 0x68));
  }
  return;
}


