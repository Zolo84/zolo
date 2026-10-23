// FUN_00414410 @ 414410 size=133

undefined4 __thiscall FUN_00414410(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  iVar1 = FUN_007a76c0((int)*(char *)(*(int *)(param_1 + 4) + 4));
  iVar2 = FUN_007a76c0((int)*param_2);
  if (iVar2 == iVar1) {
    if (param_2[1] == '\0') {
      return **(undefined4 **)(param_1 + 4);
    }
    uVar3 = FUN_004148b0(*(int *)(param_1 + 4) + 0xe,param_2 + 1);
    return uVar3;
  }
  if (iVar2 != iVar1 && -1 < iVar2 - iVar1) {
    uVar3 = FUN_004148b0(*(int *)(param_1 + 4) + 10,param_2);
    return uVar3;
  }
  uVar3 = FUN_004148b0(*(int *)(param_1 + 4) + 6,param_2);
  return uVar3;
}


