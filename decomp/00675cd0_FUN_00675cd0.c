// FUN_00675cd0 @ 675cd0 size=67

void FUN_00675cd0(int *param_1)

{
  int *piVar1;
  
  if (param_1 != DAT_00d11170) {
    do {
      FUN_00675cd0(param_1[2]);
      piVar1 = (int *)*param_1;
      FUN_00674630();
      FUN_00796cd8(param_1);
      param_1 = piVar1;
    } while (piVar1 != DAT_00d11170);
  }
  return;
}


