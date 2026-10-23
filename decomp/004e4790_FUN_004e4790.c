// FUN_004e4790 @ 4e4790 size=78

void __thiscall FUN_004e4790(int param_1,undefined4 *param_2)

{
  char cVar1;
  
  (**(code **)(**(int **)(param_1 + 0x1aa) + 0x18))(param_2);
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(1);
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x1aa) + 8))();
  if (cVar1 != '\0') {
    if (*(undefined4 **)(param_1 + 0x1aa) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1aa))(1);
    }
    *(undefined4 *)(param_1 + 0x1aa) = 0;
  }
  return;
}


