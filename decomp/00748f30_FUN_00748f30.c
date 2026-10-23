// FUN_00748f30 @ 748f30 size=42

void FUN_00748f30(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (param_1 == (void *)0x0) {
    param_1 = puVar1;
  }
  *puVar1 = param_1;
  if (param_2 != 0) {
    puVar1[1] = param_2;
    return;
  }
  puVar1[1] = puVar1;
  return;
}


