// FUN_0079a0d1 @ 79a0d1 size=43

char * __thiscall FUN_0079a0d1(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  
  if (param_2 != param_3) {
    do {
      cVar1 = FUN_007a57c4((int)*param_2,param_1 + 8);
      *param_2 = cVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}


