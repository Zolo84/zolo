// FUN_00798928 @ 798928 size=74

void __thiscall FUN_00798928(int param_1,undefined4 param_2,char param_3)

{
  undefined2 uVar1;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  uVar1 = FUN_0079c11f(0x20);
  *(undefined2 *)(param_1 + 0x30) = uVar1;
  FUN_00799443();
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_00798ed3(*(uint *)(param_1 + 4) | 4,0);
  }
  if (param_3 != '\0') {
    FUN_007993f5();
  }
  return;
}


