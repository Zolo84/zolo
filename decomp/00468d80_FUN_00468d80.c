// FUN_00468d80 @ 468d80 size=378

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00468d80(int param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  iVar5 = (int)param_2;
  piVar2 = (int *)(&DAT_0089cad8)[(int)param_2];
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  if ((DAT_00d610e6 == '\0') || (cVar3 = (**(code **)(*piVar2 + 0x1c))(), cVar3 != '\0')) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x12da) + 0x3b30);
    if ((iVar4 != 0) && (iVar4 != *(int *)((int)piVar2 + 6))) {
      return 0;
    }
    iVar4 = FUN_004697d0();
    if (param_2 == (float)iVar4) {
      return 0;
    }
    piVar2 = *(int **)(param_1 + 0x3350);
    if (piVar2 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar2 + 0x14))();
      if (cVar3 != '\0') {
        return 0;
      }
      cVar3 = (**(code **)(*piVar2 + 0x18))();
      if (cVar3 != '\0') {
        return 0;
      }
      cVar3 = (**(code **)(*piVar2 + 0x1c))();
      if (cVar3 != '\0') {
        return 0;
      }
    }
    fVar6 = (float10)FUN_005885d0();
    iVar4 = *(int *)(*(int *)(param_1 + 0x12da) + 0x3b30);
    fVar1 = (float)(fVar6 * (float10)_DAT_007e40b8);
    if ((iVar4 != 0) && ((float)iVar4 == param_2)) {
      fVar1 = fVar1 + _DAT_007e4088;
    }
    param_2 = fVar1;
    iVar4 = FUN_006b58b0(iVar5);
    fVar1 = (float)iVar4 * _DAT_007e40b8;
    iVar5 = FUN_006b5880(iVar5);
    param_2 = (float)iVar5 * _DAT_007e40b8 + fVar1 + param_2;
    if (*(int *)(param_1 + 0x3350) != 0) {
      param_2 = param_2 - _DAT_007e682c;
    }
    fVar6 = (float10)FUN_0044c670(0x13,*(undefined4 *)(param_1 + 6));
    iVar5 = (int)ROUND((float)(fVar6 + (float10)param_2));
    if (iVar5 < 0) {
      return 0;
    }
    if (iVar5 < 0x65) {
      return iVar5;
    }
  }
  return 100;
}


