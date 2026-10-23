// FUN_006d5090 @ 6d5090 size=58

void __thiscall FUN_006d5090(int param_1,int param_2)

{
  *(int *)(param_1 + 0x22202) = param_2;
  if (1 < param_2) {
    param_2 = param_2 + -1;
    do {
      if (*(undefined4 **)(param_1 + 0x221c8) != (undefined4 *)0x0) {
        (**(code **)(*(int *)(param_1 + 0x221c4) + 0x18))(**(undefined4 **)(param_1 + 0x221c8));
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


