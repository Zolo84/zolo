// FUN_005b5e80 @ 5b5e80 size=178

undefined4 FUN_005b5e80(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = FUN_0042e980();
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*param_1 + 8))();
    if (iVar3 == 0x8f) {
      iVar3 = param_1[1];
      FUN_00449290(iVar3 + 0x12);
      FUN_005b5f40(*(undefined4 *)(iVar3 + 0xe),in_stack_ffffffe4);
    }
    else if (iVar3 == 0x90) {
      iVar1 = param_1[1];
      iVar3 = iVar1 + 0x12;
      iVar4 = FUN_00428ee0((short)iVar3);
      if ((iVar4 != 0) && (iVar4 != 0x14)) {
        FUN_00449290(iVar3);
        FUN_005b6070(*(undefined4 *)(iVar1 + 0xe));
        return 0;
      }
    }
    else if (iVar3 == 0x92) {
      FUN_005b60c0((short)(param_1[1] + 0xe));
      return 0;
    }
  }
  return 0;
}


