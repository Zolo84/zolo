// FUN_00441830 @ 441830 size=67

void __fastcall FUN_00441830(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1] != 0) {
    FUN_00796cd8(param_1[1]);
  }
  *param_1 = 1;
  puVar1 = operator_new(8);
  param_1[1] = puVar1;
  *puVar1 = 0;
  iVar2 = FUN_005841a0();
  *(int *)(param_1[1] + 4) = iVar2 * 2 + -2;
  return;
}


