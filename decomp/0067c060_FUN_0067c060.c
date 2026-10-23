// FUN_0067c060 @ 67c060 size=1381

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0067c060(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  float10 fVar16;
  float local_20;
  int iStack_18;
  float fStack_14;
  float fStack_10;
  char cStack_6;
  
  iVar2 = (&DAT_0089cad8)[param_2];
  if (iVar2 == 0) {
    return (float10)_DAT_007e3d28;
  }
  iVar8 = FUN_006a9d50();
  if (param_2 == iVar8) {
    return (float10)_DAT_007e3d28;
  }
  if (param_2 == 0x157) {
    return (float10)_DAT_007e3d28;
  }
  cVar7 = FUN_0044b300(param_2);
  if (cVar7 != '\0') {
    return (float10)_DAT_007e3d28;
  }
  iVar8 = *(int *)(*(int *)(param_1 + 10) + 0x12da);
  if (*(char *)(iVar8 + param_2 * 0x2c + 0x2c) != '\0') {
    return (float10)_DAT_007e3d28;
  }
  iVar8 = *(int *)(iVar8 + 0x3b30);
  if ((iVar8 != 0) && (iVar8 != param_2)) {
    return (float10)_DAT_007e3d28;
  }
  iVar8 = FUN_004697d0();
  if (param_2 == iVar8) {
    return (float10)_DAT_007e3d28;
  }
  if (_DAT_007e6828 <= *(float *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0xdc)) {
    return (float10)_DAT_007e3d28;
  }
  if (_DAT_007e6828 <= *(float *)(*(int *)(iVar2 + 0x120) + 0xdc)) {
    return (float10)_DAT_007e3d28;
  }
  if (param_2 == 6) {
    FUN_006a9d50();
  }
  iVar9 = _rand();
  fVar4 = (float)(iVar9 % 0x32) - _DAT_007e681c;
  iVar9 = FUN_006b5880(param_2);
  if (((float)iVar9 < _DAT_007e3374) &&
     (_DAT_007e4088 <= *(float *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0xdc))) {
    return (float10)_DAT_007e3380;
  }
  if ((*(int *)(iVar2 + 0x3350) != 0) && (iVar9 = FUN_00584c90(), (&DAT_0089cad8)[iVar9] != 0)) {
    FUN_00584c90();
  }
  fVar16 = (float10)FUN_005885d0();
  local_20 = (float)(fVar16 * (float10)_DAT_007e3358 + (float10)fVar4);
  if (*(char *)(iVar8 + 0xe8d6 + iVar2) != '\0') {
    local_20 = local_20 + _DAT_007e681c;
  }
  if (*(char *)(*(int *)(param_1 + 10) + 0xe8d6 + param_2) != '\0') {
    local_20 = local_20 + _DAT_007e6b28;
  }
  iVar8 = FUN_0044d810();
  iVar9 = FUN_0044d810();
  uVar14 = iVar8 - iVar9 >> 0x1f;
  iVar10 = FUN_006b5880(param_2);
  iVar11 = FUN_006b5820(param_2);
  local_20 = ((float)iVar10 + (local_20 - (float)(int)(((iVar8 - iVar9 ^ uVar14) - uVar14) * 0x14)))
             - (float)(iVar11 << 1);
  if (*(int *)(*(int *)(*(int *)(param_1 + 10) + 0x12da) + 0x3b30) == param_2) {
    local_20 = local_20 + _DAT_007e6860;
  }
  iVar8 = *(int *)(*(int *)(iVar2 + 0x12da) + 0x3b30);
  iVar9 = FUN_006a9d50();
  if (iVar8 == iVar9) {
    local_20 = local_20 + _DAT_007e6860;
  }
  fStack_14 = 0.0;
  piVar12 = DAT_00d615e4;
  if (DAT_00d615e4 != (int *)0x0) {
    do {
      iVar8 = *piVar12;
      piVar12 = (int *)piVar12[2];
      cVar7 = (**(code **)(**(int **)(*(int *)(iVar8 + 0x26) + 0x22) + 0x24))(param_2);
      if (cVar7 == '\0') {
        cVar7 = (**(code **)(**(int **)(*(int *)(iVar8 + 0x22) + 0x22) + 0x24))(param_2);
        if (cVar7 != '\0') {
          iVar8 = *(int *)(iVar8 + 0x26);
          goto LAB_0067c3aa;
        }
      }
      else {
        iVar8 = *(int *)(iVar8 + 0x22);
LAB_0067c3aa:
        if (*(int *)(iVar8 + 0x22) != 0) {
          piVar15 = *(int **)(*(int *)(iVar8 + 0x22) + 4);
          fStack_10 = 0.0;
          iStack_18 = 0;
          if (piVar15 != (int *)0x0) {
            do {
              piVar3 = (int *)piVar15[2];
              iVar8 = (&DAT_0089cad8)[*piVar15];
              uVar13 = FUN_006a9d50();
              cVar7 = FUN_0044b300(uVar13);
              if (cVar7 != '\0') goto LAB_0067c4e7;
              iVar8 = *(int *)(iVar8 + 6);
              puVar1 = (undefined4 *)(*(int *)(param_1 + 10) + 0x2b36 + iVar8 * 6);
              cStack_6 = (char)((uint)*puVar1 >> 0x10);
              if (((int)*(char *)(DAT_00893530 + 0x16) +
                  ((int)*(short *)(DAT_00893530 + 0x18) - (int)*(short *)(puVar1 + 1)) * 0xc) -
                  (int)cStack_6 < 0x3c) goto LAB_0067c4e7;
              if (*(char *)(*(int *)(*(int *)(param_1 + 10) + 0x12da) + iVar8 * 0x2c + 0x2c) == '\0'
                 ) {
                fVar16 = (float10)FUN_00469920(iVar8);
                if (((float10)_DAT_007e681c < fVar16) &&
                   ((float10)*(float *)(param_1 + 0x60) + (float10)_DAT_007e6b28 < fVar16)) {
                  *(float *)(param_1 + 0x60) = (float)fVar16;
                  *(int *)(param_1 + 0x5c) = iVar8;
                }
                iStack_18 = iStack_18 + 1;
                fStack_10 = (float)(fVar16 + (float10)fStack_10);
              }
              else {
                fStack_14 = 100.0;
              }
              piVar15 = piVar3;
            } while (piVar3 != (int *)0x0);
            if (0 < iStack_18) {
              fStack_14 = (fStack_10 / (float)iStack_18) * _DAT_007e6800;
            }
          }
        }
      }
    } while (piVar12 != (int *)0x0);
    if ((fStack_14 != _DAT_007e3380) && (iVar8 = FUN_00527630(0), iVar8 < 1)) {
LAB_0067c4e7:
      return (float10)_DAT_007e3d28;
    }
  }
  fVar4 = *(float *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0xdc);
  fVar5 = *(float *)(*(int *)(iVar2 + 0x120) + 0xdc);
  fVar16 = (float10)FUN_0044c670(1,param_2);
  iVar8 = FUN_0044dc80(6);
  fVar6 = (float)((5 - iVar8) * 0x14);
  if (fVar6 < _DAT_007e3380) {
    fVar6 = _DAT_007e3380;
  }
  fVar6 = (float)(((((float10)fStack_14 + (float10)local_20) - (float10)fVar4) - (float10)fVar5) +
                 fVar16) - fVar6;
  cVar7 = FUN_0044d840();
  if (cVar7 == '\0') {
    fVar16 = (float10)fVar6;
  }
  else {
    fVar16 = (float10)fVar6 - (float10)*(float *)(iVar2 + 0x334c) * (float10)_DAT_007e3848;
  }
  if ((*(int *)(*(int *)(param_1 + 10) + 0x3350) == 0) && (*(int *)(iVar2 + 0x3350) == 0)) {
    fVar16 = fVar16 * (float10)_DAT_007e6868;
  }
  return fVar16;
}


