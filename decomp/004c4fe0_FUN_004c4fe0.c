// FUN_004c4fe0 @ 4c4fe0 size=59

void FUN_004c4fe0(int *param_1)

{
  int *piVar1;
  
  if (param_1 != DAT_008e8328) {
    do {
      FUN_004c4fe0(param_1[2]);
      piVar1 = (int *)*param_1;
      FUN_00796cd8(param_1);
      param_1 = piVar1;
    } while (piVar1 != DAT_008e8328);
  }
  return;
}


