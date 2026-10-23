// FUN_004a1fe0 @ 4a1fe0 size=384

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_004a1fe0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != (int *)0x0) {
    if ((*(float *)(*(int *)(param_1 + 0x244) + 0x2a) < _DAT_007e3374) &&
       ((cVar3 = FUN_0044beb0(), cVar3 == '\0' ||
        ((piVar2 = *(int **)(param_1 + 0x3350), piVar2 != (int *)0x0 &&
         (((cVar3 = (**(code **)(*piVar2 + 0x14))(), cVar3 != '\0' ||
           (cVar3 = (**(code **)(*piVar2 + 0x18))(), cVar3 != '\0')) ||
          (cVar3 = (**(code **)(*piVar2 + 0x1c))(), cVar3 != '\0')))))))) {
      return false;
    }
    if (*(int *)(param_1 + 0x3350) != 0) {
      cVar3 = (**(code **)(*param_2 + 0x14))();
      if (((cVar3 == '\0') && (cVar3 = (**(code **)(*param_2 + 0x18))(), cVar3 == '\0')) &&
         (cVar3 = (**(code **)(*param_2 + 0x1c))(), cVar3 == '\0')) {
        return false;
      }
      piVar2 = *(int **)(param_1 + 0x3350);
      cVar3 = (**(code **)(*piVar2 + 0x14))();
      if (((cVar3 != '\0') || (cVar3 = (**(code **)(*piVar2 + 0x18))(), cVar3 != '\0')) ||
         (cVar3 = (**(code **)(*piVar2 + 0x1c))(), cVar3 != '\0')) {
        return false;
      }
    }
    cVar3 = FUN_00584e20(*(undefined4 *)(param_1 + 6));
    if (cVar3 != '\0') {
      return false;
    }
    cVar3 = FUN_00586220(param_2);
    if (cVar3 == '\0') {
      return false;
    }
    iVar4 = FUN_00584c90();
    if (((iVar4 == 0) || (iVar4 == 0xa3)) || (iVar4 == 0x157)) {
      return false;
    }
    iVar4 = *(int *)(param_1 + 6);
    iVar5 = FUN_00584c90();
    if (iVar5 == iVar4) {
      return false;
    }
    piVar2 = *(int **)(*(int *)((int)param_2 + 0x22) + 4);
    do {
      if (piVar2 == (int *)0x0) {
        iVar4 = FUN_00584c90();
        return (&DAT_0089cad8)[iVar4] != 0;
      }
      piVar1 = piVar2 + 2;
      iVar4 = *piVar2;
      piVar2 = (int *)*piVar1;
    } while (((&DAT_0089cad8)[iVar4] == 0) ||
            (*(char *)(*(int *)(param_1 + 0x12da) +
                      (*(int *)((&DAT_0089cad8)[iVar4] + 6) + 1) * 0x2c) == '\0'));
  }
  return false;
}


