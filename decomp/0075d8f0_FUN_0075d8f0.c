// FUN_0075d8f0 @ 75d8f0 size=95

void FUN_0075d8f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = param_3;
  iVar2 = FUN_004e9370(param_3);
  if (*(int *)(iVar2 + 0x254) != 9) {
    iVar3 = FUN_00428ee0(&param_1);
    if ((iVar3 != 0) && (iVar3 != 8)) {
      piVar4 = (int *)(**(code **)(*(int *)(iVar3 + 0xe) + 0x28))(&param_3,uVar1);
      if (*piVar4 == 0) {
        FUN_0049a100(uVar1);
      }
      *(undefined4 *)(iVar2 + 0x3ac) = param_2;
    }
  }
  return;
}


