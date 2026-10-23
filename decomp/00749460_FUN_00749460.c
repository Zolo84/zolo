// FUN_00749460 @ 749460 size=59

void FUN_00749460(int *param_1)

{
  int *piVar1;
  
  if (param_1 != DAT_00d4bdfc) {
    do {
      FUN_00749460(param_1[2]);
      piVar1 = (int *)*param_1;
      FUN_00796cd8(param_1);
      param_1 = piVar1;
    } while (piVar1 != DAT_00d4bdfc);
  }
  return;
}


