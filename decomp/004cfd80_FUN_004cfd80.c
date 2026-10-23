// FUN_004cfd80 @ 4cfd80 size=49

undefined4 * __thiscall
FUN_004cfd80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}


