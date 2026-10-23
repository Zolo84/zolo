// FUN_00758e90 @ 758e90 size=107

undefined4 __thiscall FUN_00758e90(uint param_1,uint param_2)

{
  uint *puVar1;
  uint local_4;
  
  param_2 = *(uint *)(param_2 + 0x28);
  local_4 = param_1;
  local_4 = FUN_0074a090(&param_2);
  if ((local_4 == *(uint *)(param_1 + 8)) || (param_2 < *(uint *)(local_4 + 0xc))) {
    puVar1 = &param_2;
    param_2 = *(uint *)(param_1 + 8);
  }
  else {
    puVar1 = &local_4;
  }
  if (*puVar1 == *(uint *)(param_1 + 8)) {
    return 0;
  }
  FUN_00749060(&param_2,*puVar1);
  return 1;
}


