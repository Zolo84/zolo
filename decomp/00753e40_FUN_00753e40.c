// FUN_00753e40 @ 753e40 size=171

undefined4 __thiscall FUN_00753e40(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint local_4;
  
  uVar1 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0xe;
  }
  param_3 = param_2;
  local_4 = param_1;
  FUN_007542c0(&local_4,&param_3);
  if ((local_4 == *(uint *)(param_1 + 8)) || (param_3 < *(uint *)(local_4 + 0xc))) {
    puVar2 = &param_3;
    param_3 = *(uint *)(param_1 + 8);
  }
  else {
    puVar2 = &local_4;
  }
  if (*puVar2 == *(uint *)(param_1 + 8)) {
    return 3;
  }
  if (*(int *)(uVar1 + 0x24) != 0) {
    return 7;
  }
  FUN_00748610(&param_2);
  uVar3 = FUN_0074b290(uVar1);
  return uVar3;
}


