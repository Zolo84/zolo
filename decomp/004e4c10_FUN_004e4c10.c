// FUN_004e4c10 @ 4e4c10 size=35

undefined4 __fastcall FUN_004e4c10(int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x1c2) + 8))();
  if (cVar1 != '\0') {
    return 0;
  }
  return **(undefined4 **)(*(int *)(param_1 + 0x1c2) + 4);
}


