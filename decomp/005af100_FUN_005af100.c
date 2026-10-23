// FUN_005af100 @ 5af100 size=239

undefined4 FUN_005af100(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar2 = FUN_0042e980();
  if (cVar2 == '\0') {
    return 0;
  }
  iVar3 = (**(code **)(*param_1 + 8))();
  if (iVar3 == 0x21) {
    iVar1 = param_1[1];
    iVar3 = FUN_00428ee0(iVar1 + 0xe);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -8;
    }
    iVar4 = FUN_00428ee0(iVar1 + 0x14);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + -0x14;
    }
    if ((iVar3 != 0) && (iVar4 != 0)) {
      FUN_005b02c0(iVar3,iVar4,*(undefined1 *)(iVar1 + 0x1a));
    }
  }
  else if (iVar3 == 0x24) {
    iVar3 = FUN_00428ee0(param_1[1] + 0x12);
    if ((iVar3 != 0) && (iVar3 + -8 != 0)) {
      FUN_005b0790(iVar3 + -8);
      return 3;
    }
  }
  else {
    if (iVar3 != 0x30) {
      return 0;
    }
    iVar3 = FUN_00428ee0(param_1[1] + 0xe);
    if ((iVar3 != 0) && (iVar3 + -0x14 != 0)) {
      FUN_005afd90(iVar3 + -0x14,*(undefined4 *)(iVar3 + -8));
      return 3;
    }
  }
  return 3;
}


