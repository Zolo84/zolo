// FUN_007adcaf @ 7adcaf size=56

void FUN_007adcaf(char *param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_007adc49((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}


