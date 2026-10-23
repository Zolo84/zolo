// FUN_004e43f0 @ 4e43f0 size=70

void __thiscall FUN_004e43f0(int param_1,int *param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x12) != 0) {
    if (*(int *)(param_1 + 0x46a) != 0) {
      cVar1 = (**(code **)(*param_2 + 0x2c))();
      if (cVar1 != '\0') {
        FUN_004e2d80(param_2);
        return;
      }
    }
    (**(code **)(**(int **)(param_1 + 0x1c2) + 0x18))(param_2);
  }
  return;
}


