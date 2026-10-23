// FUN_00533df2 @ 533df2 size=78

void __thiscall FUN_00533df2(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  char *local_8;
  
  *param_1 = param_2;
  local_8 = (char *)(param_1 + 1);
  for (; *param_3 != '\0'; param_3 = param_3 + 1) {
    *local_8 = *param_3;
    local_8 = local_8 + 1;
  }
  *local_8 = '\0';
  return;
}


