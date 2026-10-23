// FUN_0050c3d0 @ 50c3d0 size=409

undefined4 __thiscall FUN_0050c3d0(int param_1,int *param_2)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  
  iVar5 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
  if (iVar5 < 1) {
    return 0;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  cVar4 = FUN_0042dd70(DAT_00893530 + 0x14);
  if (cVar4 != '\0') {
    return 0;
  }
  if (((*(int *)(param_1 + 4) != 0) && (*(short *)(param_1 + 0x1c) != 0)) &&
     (cVar4 = FUN_0042dd70(DAT_00893530 + 0x14), cVar4 == '\0')) {
    return 0;
  }
  cVar4 = FUN_004e5a40();
  if ((cVar4 != '\0') && (*(char *)(param_1 + 0x10) == '\0')) {
    return 0;
  }
  cVar4 = FUN_004e5a40();
  if ((cVar4 == '\0') && (*(char *)(param_1 + 0x11) == '\0')) {
    return 0;
  }
  cVar4 = (**(code **)(*param_2 + 0x30))();
  if (cVar4 != '\0') {
    cVar4 = FUN_0051a490();
    if (cVar4 != '\0') {
      return 0;
    }
    iVar5 = FUN_0051b230();
    if ((3 < *(int *)(iVar5 + 0x3ac)) && (*(int *)(iVar5 + 0x3ac) < 6)) {
      return 0;
    }
  }
  if ((*(int *)(param_1 + 4) < 0x1e) || (0x1f < *(int *)(param_1 + 4))) {
    piVar6 = *(int **)((int)param_2 + 0x26);
    do {
      if (piVar6 == (int *)0x0) {
        return 1;
      }
      piVar1 = (int *)piVar6[2];
      iVar5 = *piVar6;
      fVar2 = *(float *)(iVar5 + 0xf4);
      fVar7 = (float10)FUN_004fd510();
      if ((float10)fVar2 < fVar7 * (float10)*(float *)(param_1 + 0x2e)) {
        return 0;
      }
      piVar6 = piVar1;
    } while (*(float *)(iVar5 + 0xf0) * *(float *)(param_1 + 0xc) <= *(float *)(iVar5 + 0xec));
  }
  else {
    bVar3 = false;
    cVar4 = (**(code **)(*param_2 + 0x2c))();
    if ((cVar4 != '\0') &&
       (piVar6 = *(int **)((int)param_2 + 0x26), *(int **)((int)param_2 + 0x26) != (int *)0x0)) {
      do {
        piVar1 = (int *)piVar6[2];
        piVar6 = (int *)*piVar6;
        cVar4 = (**(code **)(*piVar6 + 0x14))();
        if (cVar4 != '\0') {
          bVar3 = true;
          if ((float)piVar6[0x3b] < (float)piVar6[0x3c] * *(float *)(param_1 + 0xc)) {
            return 0;
          }
          fVar2 = (float)piVar6[0x3d];
          fVar7 = (float10)FUN_004fd510();
          if ((float10)fVar2 < fVar7 * (float10)*(float *)(param_1 + 0x2e)) {
            return 0;
          }
        }
        piVar6 = piVar1;
      } while (piVar1 != (int *)0x0);
      if (bVar3) {
        return 1;
      }
    }
  }
  return 0;
}


