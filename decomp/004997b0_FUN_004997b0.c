// FUN_004997b0 @ 4997b0 size=80

undefined4 * __thiscall FUN_004997b0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_007e6eac;
  iVar2 = param_1[1];
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00796cd8(param_1);
  }
  return param_1;
}


