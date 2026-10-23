// FUN_0066b510 @ 66b510 size=56

undefined4 __thiscall FUN_0066b510(char *param_1,char *param_2)

{
  if ((((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) &&
      (*(short *)(param_1 + 4) == *(short *)(param_2 + 4))) && (*param_1 == *param_2)) {
    return 1;
  }
  return 0;
}


