// FUN_004a4720 @ 4a4720 size=239

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __thiscall FUN_004a4720(int param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  float10 fVar6;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  cVar5 = (**(code **)(*param_2 + 8))();
  if (cVar5 == '\0') {
    fVar1 = *(float *)(param_1 + 0x39c4);
    fVar6 = (float10)FUN_004a4610(param_2);
    if ((float10)fVar1 < fVar6 + (float10)_DAT_007e4088) {
      return 0;
    }
    fVar1 = *(float *)(param_1 + 0x39b4);
    fVar6 = (float10)FUN_004a4690(param_2);
    if ((float10)fVar1 < fVar6 + (float10)_DAT_007e4088) {
      return 0;
    }
    piVar3 = (int *)param_2[1];
    while (piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[2];
      piVar3 = (int *)*piVar3;
      if (piVar3[0x92] != param_1) {
        if (DAT_00d0ca90 != param_1) {
          return 0;
        }
        if (*(char *)(*(int *)(param_1 + 6) + 0x34ac + piVar3[0x92]) == '\0') {
          return 0;
        }
      }
      cVar5 = (**(code **)(*piVar3 + 0x28))();
      if (cVar5 == '\0') {
        return 0;
      }
      cVar5 = FUN_00524000();
      if (cVar5 == '\0') {
        return 0;
      }
      if (*(char *)((int)piVar3 + 0x17b) != '\0') {
        return 0;
      }
      iVar4 = *(int *)((int)piVar3 + 0x26);
      while (piVar3 = piVar2, iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 8);
        cVar5 = FUN_004fd350();
        if (cVar5 != '\0') {
          return 0;
        }
      }
    }
  }
  return 1;
}


