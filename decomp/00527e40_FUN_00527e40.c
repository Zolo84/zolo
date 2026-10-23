// FUN_00527e40 @ 527e40 size=73

undefined4 __thiscall FUN_00527e40(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  
  if ((param_2 != 0) && (cVar2 = (**(code **)(*param_1 + 8))(), cVar2 == '\0')) {
    iVar1 = param_1[1];
    do {
      if (iVar1 == 0) {
        return 1;
      }
      iVar1 = *(int *)(iVar1 + 8);
      cVar2 = FUN_00523c90(param_2,param_3);
    } while (cVar2 != '\0');
  }
  return 0;
}


