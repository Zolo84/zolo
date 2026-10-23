// FUN_00586940 @ 586940 size=55

undefined4 __thiscall FUN_00586940(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x3b2c) + 0x3350) != 0) {
    cVar1 = FUN_00584e20(param_2);
    if (cVar1 != '\0') {
      return *(undefined4 *)(*(int *)(param_1 + 0x3b2c) + 0x3350);
    }
  }
  return 0;
}


