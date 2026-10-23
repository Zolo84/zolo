// FUN_004cd330 @ 4cd330 size=102

void __fastcall FUN_004cd330(undefined4 *param_1)

{
  int iVar1;
  int local_8;
  
  *param_1 = &PTR_FUN_007e6eac;
  local_8 = param_1[1];
  while (local_8 != 0) {
    iVar1 = *(int *)(local_8 + 8);
    FUN_00796cd8(local_8);
    local_8 = iVar1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


