// FUN_0057a0b0 @ 57a0b0 size=107

uint FUN_0057a0b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_00857744 == 0) {
    local_8 = 0x7e0;
  }
  else if (DAT_00857744 == 1) {
    local_8 = 0x3e0;
  }
  else {
    FUN_00429a50(s_Grafix_mode_is_NOT_supported_00856fac);
  }
  local_4 = local_8;
  iVar1 = (**(code **)(*param_1 + 0x74))(param_1,8,&local_8);
  if (iVar1 != 0) {
    uVar2 = FUN_00405ad0(s_Color_key_failure__00856f94);
    return uVar2 & 0xffffff00;
  }
  return 1;
}


