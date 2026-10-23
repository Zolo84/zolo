// FUN_007a2978 @ 7a2978 size=62

uint FUN_007a2978(char *param_1,char *param_2,char *param_3,char *param_4)

{
  uint uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 == param_4) goto LAB_007a29a9;
    if (*param_1 < *param_3) goto LAB_007a299a;
    if (*param_3 < *param_1) {
      return 1;
    }
    param_3 = param_3 + 1;
  }
  if (param_3 == param_4) {
LAB_007a29a9:
    uVar1 = (uint)(param_1 != param_2);
  }
  else {
LAB_007a299a:
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


