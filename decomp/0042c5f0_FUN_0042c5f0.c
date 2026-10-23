// FUN_0042c5f0 @ 42c5f0 size=174

undefined4 FUN_0042c5f0(int *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_007a76c0((int)*param_2);
    iVar3 = FUN_007a76c0((int)*(char *)(*param_1 + 4));
    if (iVar2 == iVar3) {
      if (param_2[1] == '\0') {
        uVar1 = *(undefined4 *)*param_1;
      }
      else {
        uVar1 = FUN_0042c5f0(*param_1 + 0xe,param_2 + 1);
      }
    }
    else if (iVar2 - iVar3 < 1) {
      uVar1 = FUN_0042c5f0(*param_1 + 6,param_2);
    }
    else {
      uVar1 = FUN_0042c5f0(*param_1 + 10,param_2);
    }
  }
  return uVar1;
}


