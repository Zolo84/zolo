// FUN_00490020 @ 490020 size=264

undefined4 FUN_00490020(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 8))();
  switch(uVar2) {
  case 0x15d:
    break;
  case 0x15e:
    iVar1 = *(int *)(param_1[1] + 0x12);
    if (iVar1 < 1) {
      FUN_0049eae0(*(undefined4 *)(param_1[1] + 0xe));
      return 3;
    }
    FUN_004e9370(iVar1);
    FUN_004ed460(*(undefined4 *)(param_1[1] + 0xe),0);
    return 3;
  case 0x15f:
    FUN_0049eb40(*(undefined4 *)(param_1[1] + 0xe));
    return 3;
  case 0x160:
    FUN_0049eb10(*(undefined4 *)(param_1[1] + 0xe));
    return 3;
  case 0x161:
    FUN_0049eb70(*(undefined4 *)(param_1[1] + 0xe));
    return 3;
  default:
    return 3;
  case 0x164:
    FUN_0049ebd0(*(undefined4 *)(param_1[1] + 0xe));
    return 3;
  }
  iVar1 = *(int *)(param_1[1] + 0x12);
  if (iVar1 < 1) {
    FUN_0049eba0(*(undefined4 *)(param_1[1] + 0xe));
    return 3;
  }
  FUN_004e9370(iVar1);
  FUN_004ea3b0(*(undefined4 *)(param_1[1] + 0xe));
  return 3;
}


