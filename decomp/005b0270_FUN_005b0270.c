// FUN_005b0270 @ 5b0270 size=76

void FUN_005b0270(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = param_1;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x80) + 0xc))();
  uVar2 = param_2;
  piVar3 = (int *)(**(code **)(*piVar3 + 0x28))(&param_1,param_2);
  if (*piVar3 != 0) {
    FUN_005b02c0(iVar1,uVar2,1);
    return;
  }
  FUN_005b02c0(iVar1,uVar2,0);
  return;
}


