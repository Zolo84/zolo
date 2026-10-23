// FUN_0073d770 @ 73d770 size=147

undefined4 __thiscall FUN_0073d770(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)FUN_004e9370(*(undefined4 *)(param_1 + 0x12));
  if (0 < *(int *)(param_1 + 0x16)) {
    param_2 = (&DAT_0089cad8)[*(int *)(param_1 + 0x16)];
  }
  if ((piVar2[0xf6] != 0) && (param_2 != 0)) {
    iVar1 = *(int *)((int)piVar2 + 0x12);
    iVar3 = FUN_0044e1b0();
    if (iVar3 == iVar1) {
      return 1;
    }
    uVar4 = (**(code **)(*(int *)(param_2 + 0xe) + 0xc))();
    uVar4 = (**(code **)(*piVar2 + 0xc))(uVar4);
    FUN_006d0d70(DAT_00d13348,s_Province__s_is_not_the_capital_o_00873b5c,uVar4);
    return 0;
  }
  FUN_006d0d70(DAT_00d13348,s_Invalid_arguments_in_control__008732ac);
  return 0;
}


