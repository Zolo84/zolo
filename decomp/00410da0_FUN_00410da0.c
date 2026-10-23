// FUN_00410da0 @ 410da0 size=50

void __thiscall FUN_00410da0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; param_3 != puVar1; param_3 = param_3 + 1) {
    *param_2 = *param_3;
    param_2 = param_2 + 1;
  }
  *(undefined4 **)(param_1 + 8) = param_2;
  return;
}


