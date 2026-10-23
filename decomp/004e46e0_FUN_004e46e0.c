// FUN_004e46e0 @ 4e46e0 size=28

undefined4 __fastcall FUN_004e46e0(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0x1aa) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x1aa) + 8))();
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}


