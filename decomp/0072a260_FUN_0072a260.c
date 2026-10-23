// FUN_0072a260 @ 72a260 size=87

int __fastcall FUN_0072a260(int param_1)

{
  char extraout_AL;
  char extraout_AL_00;
  undefined4 in_EAX;
  uint3 uVar2;
  uint3 extraout_var;
  uint3 extraout_var_00;
  int iVar1;
  
  uVar2 = (uint3)((uint)in_EAX >> 8);
  if (*(char *)(param_1 + 0x1235) == '\0') {
    FUN_0042ddd0(DAT_00893530 + 0x14);
    uVar2 = extraout_var;
    if (extraout_AL != '\0') {
      FUN_0042dd70(DAT_00893530 + 0x14);
      uVar2 = extraout_var_00;
      if (extraout_AL_00 == '\0') {
        iVar1 = (**(code **)(*(int *)(param_1 + 0x1282) + 0x30))(*(undefined4 *)(param_1 + 0x24));
        return iVar1;
      }
    }
  }
  return (uint)uVar2 << 8;
}


