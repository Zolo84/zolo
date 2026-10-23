// FUN_0057be80 @ 57be80 size=61

void __fastcall FUN_0057be80(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xbc4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1);
    (**(code **)(**(int **)(param_1 + 0xbc4) + 8))(*(int **)(param_1 + 0xbc4));
    *(undefined4 *)(param_1 + 0xbc4) = 0;
  }
  *(undefined1 *)(param_1 + 0x37b) = 0;
  *(undefined1 *)(param_1 + 0x37a) = 0;
  *(undefined1 *)(param_1 + 0xbd4) = 0;
  return;
}


