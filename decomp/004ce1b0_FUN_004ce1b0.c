// FUN_004ce1b0 @ 4ce1b0 size=129

undefined4 * __thiscall FUN_004ce1b0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int local_8;
  
  *param_1 = &PTR_FUN_007e7cc8;
  local_8 = param_1[1];
  while (local_8 != 0) {
    iVar1 = *(int *)(local_8 + 8);
    FUN_00796cd8(local_8);
    local_8 = iVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00796cd8(param_1);
  }
  return param_1;
}


