// FUN_0068e5b0 @ 68e5b0 size=423

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0068e5b0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float fStack_14;
  float local_c;
  
  cVar7 = FUN_004ca33c();
  local_c = 1e+06;
  piVar4 = *(int **)(param_1 + 0x94);
  iVar11 = 0;
  while (fVar6 = local_c, iVar5 = iVar11, piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    iVar2 = *piVar4;
    piVar4 = piVar1;
    iVar11 = iVar5;
    local_c = fVar6;
    if (((((*(int *)(iVar2 + 500) == param_1) &&
          (iVar9 = FUN_0051b230(), *(int *)(iVar9 + 0x482) == param_2)) &&
         (iVar9 = (**(code **)(*(int *)(iVar2 + 0x22) + 4))(), iVar9 != 0)) &&
        ((cVar8 = (**(code **)(*param_3 + 0x24))(iVar2), cVar8 == '\0' &&
         (cVar8 = (**(code **)(*(int *)(iVar2 + 0x22e) + 8))(), cVar8 != '\0')))) &&
       ((iVar10 = (**(code **)(*(int *)(iVar2 + 0x11c) + 4))(), iVar10 == 0 &&
        (*(char *)(iVar2 + 0x17b) == '\0')))) {
      iVar11 = FUN_0051b230();
      local_c = *(float *)(iVar11 + 0x48a);
      fStack_14 = 0.0;
      piVar1 = *(int **)(iVar2 + 0x26);
      while (piVar1 != (int *)0x0) {
        piVar3 = (int *)piVar1[2];
        iVar11 = *piVar1;
        fVar12 = (float10)FUN_004fd510();
        fStack_14 = (float)((((float10)*(float *)(iVar11 + 0xf0) -
                             (float10)*(float *)(iVar11 + 0xec)) * (float10)_DAT_007e6818) /
                            (float10)*(float *)(iVar11 + 0xf0) +
                           ((fVar12 - (float10)*(float *)(iVar11 + 0xf4)) * (float10)_DAT_007e4088)
                           / fVar12 + (float10)fStack_14);
        piVar1 = piVar3;
      }
      local_c = fStack_14 / (float)iVar9 + local_c;
      cVar8 = FUN_00525660();
      if (cVar7 == '\0') {
        if (cVar8 == '\0') {
          local_c = local_c - _DAT_007e4088;
        }
      }
      else if (cVar8 != '\0') {
        local_c = local_c - _DAT_007e4088;
      }
      iVar11 = iVar2;
      if ((iVar5 != 0) && (fVar6 <= local_c)) {
        iVar11 = iVar5;
        local_c = fVar6;
      }
    }
  }
  return iVar5;
}


