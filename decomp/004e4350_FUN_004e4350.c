// FUN_004e4350 @ 4e4350 size=158

void __thiscall FUN_004e4350(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  
  piVar1 = param_2;
  if (*(char *)((int)param_2 + 0x17d) == '\0') {
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x1c2) + 0x28))(&param_2,param_2);
    if ((*piVar3 == 0) && (*(int *)(param_1 + 0x12) != 0)) {
      if (*(int *)(param_1 + 0x46a) != 0) {
        cVar2 = (**(code **)(*piVar1 + 0x2c))();
        if (cVar2 != '\0') {
          FUN_004e2db0(piVar1);
          return;
        }
      }
      cVar2 = FUN_00444290();
      if (cVar2 == '\0') {
        if (DAT_00d0ca90 == 0) {
LAB_004e43cc:
          FUN_00459df0(piVar1);
          return;
        }
        cVar2 = FUN_00652410(piVar1);
        if (cVar2 == '\0') goto LAB_004e43cc;
      }
      FUN_004e2e70(piVar1);
    }
  }
  return;
}


