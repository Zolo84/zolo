// FUN_004cf8f0 @ 4cf8f0 size=93

void __thiscall FUN_004cf8f0(int param_1,code *param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    (*param_2)(*puVar1);
    if (puVar1[1] != 0) {
      FUN_004d01b0(param_2);
    }
    if (puVar1[2] != 0) {
      FUN_004d01b0(param_2);
    }
  }
  return;
}


