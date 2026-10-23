// FUN_0044cc40 @ 44cc40 size=175

undefined4 __thiscall FUN_0044cc40(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x482);
  iVar1 = FUN_004a0750();
  if (*(int *)(iVar1 + 0x3d8) == param_1) {
    uVar2 = *(undefined4 *)(param_1 + 0x117de);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x117f0);
  }
  iVar1 = FUN_004e9370(uVar2);
  if (iVar4 == *(int *)(iVar1 + 0x482)) {
    return 1;
  }
  iVar4 = *(int *)(param_2 + 0x3d4);
  if (((iVar4 != 0) && (iVar4 != param_1)) &&
     (*(char *)(*(int *)(param_1 + 0x12da) + (*(int *)(iVar4 + 6) + 1) * 0x2c) == '\0')) {
    iVar1 = *(int *)(param_2 + 0x482);
    iVar3 = FUN_004a0750();
    if (*(int *)(iVar3 + 0x3d8) == iVar4) {
      uVar2 = *(undefined4 *)(iVar4 + 0x117de);
    }
    else {
      uVar2 = *(undefined4 *)(iVar4 + 0x117f0);
    }
    iVar4 = FUN_004e9370(uVar2);
    if (iVar1 == *(int *)(iVar4 + 0x482)) {
      return 1;
    }
  }
  return 0;
}


