// FUN_0074c520 @ 74c520 size=36

void __thiscall FUN_0074c520(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    param_2 = *(uint *)(param_1 + 4) | param_2;
    if (*(int *)(param_1 + 0x28) == 0) {
      param_2 = param_2 | 4;
    }
    FUN_00798ed3(param_2,param_3);
  }
  return;
}


