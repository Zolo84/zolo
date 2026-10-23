// FUN_00738120 @ 738120 size=223

undefined4 __thiscall FUN_00738120(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = (int *)FUN_004e9370(*(undefined4 *)(param_1 + 0x12));
  if (piVar3[0xf6] == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x16);
  if (iVar1 == -3) {
    cVar2 = FUN_0044b300(*(undefined4 *)(param_2 + 6));
    if ((cVar2 == '\0') && (cVar2 = FUN_0044a690(*(undefined4 *)(param_2 + 6)), cVar2 == '\0')) {
      return 0;
    }
    return 1;
  }
  if (iVar1 == -2) {
    uVar4 = FUN_0044b280(*(undefined4 *)(param_2 + 6));
    return uVar4;
  }
  if (0 < iVar1) {
    param_2 = (&DAT_0089cad8)[iVar1];
  }
  if (param_2 != 0) {
    if (piVar3[0xf6] == param_2) {
      return 1;
    }
    uVar4 = (**(code **)(*(int *)(param_2 + 0xe) + 0xc))();
    uVar4 = (**(code **)(*piVar3 + 0xc))(uVar4);
    FUN_006d0d70(DAT_00d13348,s_Province__s_is_not_controlled_by_00873288,uVar4);
    return 0;
  }
  FUN_006d0d70(DAT_00d13348,s_Invalid_arguments_in_control__008732ac);
  return 0;
}


