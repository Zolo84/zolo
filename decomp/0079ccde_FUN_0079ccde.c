// FUN_0079ccde @ 79ccde size=45

char * FUN_0079ccde(char *param_1,char *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = FUN_0079c11f((int)*param_1);
    *param_3 = uVar1;
    param_3 = param_3 + 1;
  }
  return param_1;
}


