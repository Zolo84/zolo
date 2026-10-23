// FUN_007ab759 @ 7ab759 size=39

void FUN_007ab759(char *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  for (; (iVar1 != 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    *(char *)*param_2 = *param_1;
    *param_2 = *param_2 + 1;
    *param_3 = *param_3 + -1;
    iVar1 = *param_3;
  }
  return;
}


