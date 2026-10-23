// FUN_0073bac0 @ 73bac0 size=88

undefined4 __thiscall FUN_0073bac0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0044dc80(*(undefined4 *)(param_1 + 0x16));
  if (*(int *)(param_1 + 0x12) + -1 <= iVar1) {
    return 1;
  }
  uVar2 = FUN_00760540(*(undefined4 *)(param_1 + 0x16));
  uVar2 = (**(code **)(*(int *)(param_2 + 0xe) + 0xc))(*(undefined4 *)(param_1 + 0x12),uVar2);
  FUN_006d0d70(DAT_00d13348,s__s_has_not_at_least__d_in__s_008738ac,uVar2);
  return 0;
}


