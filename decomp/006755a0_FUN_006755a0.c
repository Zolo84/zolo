// FUN_006755a0 @ 6755a0 size=59

void FUN_006755a0(int *param_1)

{
  int *piVar1;
  
  if (param_1 != DAT_00d11168) {
    do {
      FUN_006755a0(param_1[2]);
      piVar1 = (int *)*param_1;
      FUN_00796cd8(param_1);
      param_1 = piVar1;
    } while (piVar1 != DAT_00d11168);
  }
  return;
}


