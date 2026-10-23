// FUN_007979be @ 7979be size=64

void __thiscall FUN_007979be(int param_1,undefined4 param_2,char param_3)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined1 *)(param_1 + 0x30) = 0x20;
  FUN_00799443();
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_00798ed3(*(uint *)(param_1 + 4) | 4,0);
  }
  if (param_3 != '\0') {
    FUN_007993f5();
  }
  return;
}


