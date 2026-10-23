// FUN_0068b390 @ 68b390 size=343

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0068b390(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  float10 fVar8;
  
  piVar6 = param_2;
  if (param_2 == (int *)0x0) {
    return (float10)_DAT_007e3380;
  }
  piVar1 = *(int **)(param_1 + 10);
  if (param_2 == piVar1) {
    return (float10)_DAT_007e3380;
  }
  iVar2 = param_2[0xcd4];
  iVar3 = piVar1[0x48];
  param_2 = (int *)0x0;
  if ((iVar2 != 0) && (iVar2 != piVar1[0xcd4])) {
    param_2 = (int *)(float)*(int *)(iVar3 + 0x302);
  }
  if (((*(char *)(*(int *)((int)piVar6 + 0x12da) + 0x3b38) != '\0') && (iVar2 != piVar1[0xcd4])) &&
     ((float)param_2 <= (float)*(int *)(iVar3 + 0x30a))) {
    param_2 = (int *)(float)*(int *)(iVar3 + 0x30a);
  }
  if (((piVar1[0xcd4] == 0) && (*(char *)(*(int *)((int)piVar1 + 6) + 0x3354 + (int)piVar6) != '\0')
      ) && ((float)param_2 <= (float)*(int *)(iVar3 + 0x306))) {
    param_2 = (int *)(float)*(int *)(iVar3 + 0x306);
  }
  cVar7 = (**(code **)(*piVar6 + 0x1c))();
  if ((cVar7 == '\0') &&
     ((iVar2 = *(int *)(*(int *)(param_1 + 10) + 0x3350), iVar2 == 0 ||
      (cVar7 = (**(code **)(**(int **)(iVar2 + 0x22) + 0x24))(*(undefined4 *)((int)piVar6 + 6)),
      cVar7 == '\0')))) {
    fVar8 = (float10)(float)param_2;
    if (fVar8 <= (float10)*(int *)(iVar3 + 0x2fa)) {
      fVar8 = (float10)*(int *)(iVar3 + 0x2fa);
    }
  }
  else {
    fVar8 = (float10)(float)param_2;
  }
  piVar1 = *(int **)(iVar3 + 0x324);
  while (piVar1 != (int *)0x0) {
    piVar4 = (int *)piVar1[2];
    piVar5 = (int *)*piVar1;
    piVar1 = piVar4;
    if ((int *)(&DAT_0089cad8)[*piVar5] == piVar6) {
      iVar2 = piVar5[1];
      if (iVar2 < 1) {
        if (iVar2 < 0) {
          fVar8 = (float10)_DAT_007e3d28;
        }
      }
      else if (fVar8 <= (float10)iVar2) {
        fVar8 = (float10)iVar2;
      }
    }
  }
  return fVar8;
}


