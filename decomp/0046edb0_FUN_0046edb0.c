// FUN_0046edb0 @ 46edb0 size=339

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046edb0(int param_1,int param_2,char param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  
  if (((((*(int *)(param_1 + 0x13c) < *(int *)(&DAT_00d7c830 + *(int *)(param_1 + 0x130) * 4)) &&
        (*(int *)(param_1 + 0x6c) != 0)) &&
       (iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x11c) + 4))(), iVar5 == 0)) &&
      ((*(int *)(*(int *)(param_1 + 0x6c) + 0x176) == 0 && (cVar4 = FUN_004fd350(), cVar4 == '\0')))
      ) && ((iVar5 = FUN_0051b230(), *(int *)(iVar5 + 0x3d4) != 0 &&
            ((*(char *)(param_1 + 0x156) == '\0' && (*(char *)(param_1 + 0x154) == '\0')))))) {
    fVar2 = _DAT_007e3380;
    if ((param_3 != '\0') && (*(char *)(*(int *)(param_1 + 0x6c) + 0x187) != '\0')) {
      fVar2 = _DAT_007e68c8;
    }
    for (piVar1 = *(int **)(param_2 + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      iVar5 = *piVar1;
      fVar3 = _DAT_007e3380;
      if ((param_3 != '\0') && (*(char *)(*(int *)(iVar5 + 0x6c) + 0x187) != '\0')) {
        fVar3 = _DAT_007e68c8;
      }
      if (*(float *)(&DAT_00dbe9be + *(int *)(iVar5 + 0x134) * 4) * _DAT_007e4088 + fVar3 +
          (float)*(int *)(iVar5 + 0x138) <
          *(float *)(&DAT_00dbe9be + *(int *)(param_1 + 0x134) * 4) * _DAT_007e4088 + fVar2 +
          (float)*(int *)(param_1 + 0x138)) {
        FUN_00473950(param_1,piVar1);
        return;
      }
    }
    FUN_0046a350(param_1);
  }
  return;
}


