// FUN_0073d940 @ 73d940 size=153

undefined4 __thiscall FUN_0073d940(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)FUN_004e9370(*(undefined4 *)(param_1 + 0x12));
  if (0 < *(int *)(param_1 + 0x16)) {
    param_2 = (&DAT_0089cad8)[*(int *)(param_1 + 0x16)];
  }
  if ((piVar2[0xf6] != 0) && (param_2 != 0)) {
    cVar1 = (**(code **)(*(int *)(param_2 + 0xe8b2) + 0x24))(*(undefined4 *)((int)piVar2 + 0x12));
    if (cVar1 != '\0') {
      return 1;
    }
    uVar3 = (**(code **)(*(int *)(param_2 + 0xe) + 0xc))();
    uVar3 = (**(code **)(*piVar2 + 0xc))(uVar3);
    FUN_006d0d70(DAT_00d13348,s_Province__s_is_not_core_for__s_00873b98,uVar3);
    return 0;
  }
  FUN_006d0d70(DAT_00d13348,s_Invalid_arguments_in_control__008732ac);
  return 0;
}


