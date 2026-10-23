// FUN_007440d0 @ 7440d0 size=81

char * __thiscall FUN_007440d0(char *param_1,char *param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 != *(undefined4 **)(param_2 + 4)) {
      if ((*param_1 != '\0') && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *param_1 = *param_2;
      *param_2 = '\0';
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      return param_1;
    }
    if (*param_2 != '\0') {
      *param_1 = '\x01';
    }
    *param_2 = '\0';
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return param_1;
}


