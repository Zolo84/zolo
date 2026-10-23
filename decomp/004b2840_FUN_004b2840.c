// FUN_004b2840 @ 4b2840 size=62

undefined4 * __thiscall FUN_004b2840(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    FUN_004b1b50();
    FUN_00796cd8(iVar1);
  }
  FUN_00796cd8(*param_1);
  if ((param_2 & 1) != 0) {
    FUN_00796cd8(param_1);
  }
  return param_1;
}


