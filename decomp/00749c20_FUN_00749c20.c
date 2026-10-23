// FUN_00749c20 @ 749c20 size=67

void FUN_00749c20(int *param_1)

{
  int *piVar1;
  
  if (param_1 != DAT_00d4be04) {
    do {
      FUN_00749c20(param_1[2]);
      piVar1 = (int *)*param_1;
      FUN_00748b80();
      FUN_00796cd8(param_1);
      param_1 = piVar1;
    } while (piVar1 != DAT_00d4be04);
  }
  return;
}


