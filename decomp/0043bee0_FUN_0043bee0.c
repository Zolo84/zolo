// FUN_0043bee0 @ 43bee0 size=59

void __thiscall FUN_0043bee0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  if (*(int *)(param_1 + 0x66) != 0) {
    FUN_00415d30(param_2);
  }
  if (*(int *)(param_1 + 0x6a) != 0) {
    FUN_00415d30(*(undefined4 *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x6e) != 0) {
    FUN_00415d30(*(undefined4 *)(param_1 + 0x20));
  }
  return;
}


