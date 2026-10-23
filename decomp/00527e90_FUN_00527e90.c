// FUN_00527e90 @ 527e90 size=65

undefined4 __thiscall FUN_00527e90(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  if ((param_2 != 0) && (cVar2 = (**(code **)(*param_1 + 8))(), cVar2 == '\0')) {
    iVar1 = param_1[1];
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 8);
      cVar2 = FUN_005215b0(param_2);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


