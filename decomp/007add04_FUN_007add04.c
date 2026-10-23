// FUN_007add04 @ 7add04 size=14

undefined4 FUN_007add04(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}


