// FUN_007a0996 @ 7a0996 size=69

void FUN_007a0996(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 *puVar1;
  
  if ((param_2 < param_1) && (puVar1 = param_2 + param_3, param_1 < puVar1)) {
    param_1 = param_1 + param_3;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      puVar1 = puVar1 + -1;
      param_1 = param_1 + -1;
      *param_1 = *puVar1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


