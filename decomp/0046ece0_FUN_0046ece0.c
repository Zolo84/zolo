// FUN_0046ece0 @ 46ece0 size=203

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046ece0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  if ((((*(char *)(param_2 + 0x162) != '\0') && (*(int *)(param_2 + 0x88) != 0)) &&
      (*(int *)(param_2 + 0x13c) == 1)) &&
     (((iVar3 = FUN_005045e0(), iVar3 == param_1 &&
       (cVar2 = FUN_0042dd70(DAT_00893530 + 0x14), cVar2 == '\0')) &&
      (*(char *)(param_2 + 0x154) == '\0')))) {
    for (piVar1 = *(int **)(param_3 + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if (*(float *)(&DAT_00dbfdfa + *(int *)(*piVar1 + 0x88) * 4) * _DAT_007e4088 +
          (float)*(int *)(*piVar1 + 0x9c) <
          *(float *)(&DAT_00dbfdfa + *(int *)(param_2 + 0x88) * 4) * _DAT_007e4088 +
          (float)*(int *)(param_2 + 0x9c)) {
        FUN_00473950(param_2,piVar1);
        return;
      }
    }
    FUN_0046a350(param_2);
  }
  return;
}


