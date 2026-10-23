// FUN_004e8b50 @ 4e8b50 size=989

int * __thiscall FUN_004e8b50(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *local_c;
  int local_8;
  int iStack_4;
  
  piVar4 = param_2;
  local_8 = 0;
  if (*(int *)(param_1 + 0x3d4) == 0) {
    return (int *)0x0;
  }
  if ((((DAT_00dc18f9 != '\0') && (cVar3 = (**(code **)(*param_2 + 0x1c))(), cVar3 != '\0')) &&
      (iVar8 = *(int *)(*(int *)((int)piVar4 + 0x12da) + 0x3b30), iVar8 != 0)) &&
     (((piVar10 = (int *)(&DAT_0089cad8)[iVar8], piVar10 != (int *)0x0 &&
       (cVar3 = (**(code **)(*piVar10 + 0x1c))(), cVar3 != '\0')) &&
      (cVar3 = FUN_0044b280(*(undefined4 *)(*(int *)(param_1 + 0x3d8) + 6)), cVar3 != '\0')))) {
    piVar4 = piVar10;
    param_2 = piVar10;
  }
  local_c = (int *)0x0;
  cVar3 = FUN_0044b280(*(undefined4 *)(*(int *)(param_1 + 0x3d8) + 6));
  if ((cVar3 == '\0') && (*(int **)(param_1 + 0x3d4) != piVar4)) {
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x290)) {
      piVar4 = *(int **)(param_1 + 0x298);
      do {
        if (((piVar4[1] != 4) && (*(int *)(DAT_00ab27b4 + 0x3d4 + *piVar4 * 0x4b2) != 0)) &&
           (*(int *)(DAT_00ab27b4 + *piVar4 * 0x4b2 + 0x3d8) == *(int *)(param_1 + 0x3d8))) {
          iVar8 = *(int *)(*(int *)(param_1 + 0x3d4) + 0x3350);
          if ((iVar8 != 0) && (iVar8 == param_2[0xcd4])) {
            uVar2 = *(undefined4 *)(param_1 + 0x482);
            FUN_0044e1d0();
            piVar4 = (int *)FUN_004c7fad(&param_2,uVar2);
            if (*piVar4 != 0) {
              return *(int **)(param_1 + 0x3d4);
            }
          }
          return *(int **)(param_1 + 0x3d8);
        }
        iVar8 = iVar8 + 1;
        piVar4 = piVar4 + 3;
      } while (iVar8 < *(int *)(param_1 + 0x290));
    }
  }
  iVar8 = *(int *)(param_1 + 0x290);
  iVar9 = 0;
  if (0 < iVar8) {
    piVar4 = *(int **)(param_1 + 0x298);
    do {
      if (((piVar4[1] != 4) && (*(int *)(DAT_00ab27b4 + 0x3d4 + *piVar4 * 0x4b2) != 0)) &&
         (*(int **)(DAT_00ab27b4 + *piVar4 * 0x4b2 + 0x3d8) == param_2)) goto LAB_004e8dc4;
      iVar9 = iVar9 + 1;
      piVar4 = piVar4 + 3;
    } while (iVar9 < iVar8);
  }
  iStack_4 = 0;
  if (0 < iVar8) {
    iVar9 = 0;
    iVar8 = DAT_00ab27b4;
    do {
      iVar5 = *(int *)(iVar9 + *(int *)(param_1 + 0x298));
      iVar1 = iVar8 + iVar5 * 0x4b2;
      piVar4 = *(int **)(iVar8 + 0x3d4 + iVar5 * 0x4b2);
      if (piVar4 != (int *)0x0) {
        if ((piVar4 == param_2) && (*(int **)(iVar1 + 0x3d8) == param_2)) {
          local_c = param_2;
        }
        else if ((param_2[0xcd4] != 0) &&
                (((*(int *)(*(int *)(iVar1 + 0x3d8) + 0x3350) == param_2[0xcd4] &&
                  (cVar3 = FUN_0044b280(*(undefined4 *)(*(int *)(param_1 + 0x3d8) + 6)),
                  iVar8 = DAT_00ab27b4, cVar3 != '\0')) &&
                 (iVar5 = (**(code **)(*(int *)(*(int *)(iVar1 + 0x3d8) + 0xe8a0) + 4))(),
                 iVar8 = DAT_00ab27b4, local_8 < iVar5)))) {
          local_c = *(int **)(iVar1 + 0x3d8);
          local_8 = iVar5;
        }
      }
      iStack_4 = iStack_4 + 1;
      iVar9 = iVar9 + 0xc;
    } while (iStack_4 < *(int *)(param_1 + 0x290));
    if (local_c != (int *)0x0) goto LAB_004e8dd0;
  }
LAB_004e8dc4:
  local_c = param_2;
LAB_004e8dd0:
  piVar10 = param_2;
  piVar4 = *(int **)(param_1 + 0x3d4);
  if (param_2 == piVar4) {
    local_c = param_2;
  }
  if (((local_c != piVar4) && (local_c != param_2)) &&
     (*(int *)(*(int *)((int)local_c + 0x12da) + 0x3b30) == *(int *)((int)param_2 + 6))) {
    local_c = param_2;
  }
  if ((((param_2[0xcd4] == 0) || (piVar4 == (int *)0x0)) || (piVar4[0xcd4] != param_2[0xcd4])) &&
     (cVar3 = FUN_0044b280(*(undefined4 *)((int)param_2 + 6)), piVar4 = local_c, cVar3 == '\0')) {
    piVar4 = *(int **)(param_1 + 0x3d8);
  }
  if ((piVar10 != *(int **)(param_1 + 0x3d4)) && (piVar4 == *(int **)(param_1 + 0x3d4))) {
    iVar8 = FUN_0044ab40();
    iVar9 = FUN_0044ab40();
    if ((iVar8 * 2 < iVar9) && (*(int **)(param_1 + 0x3d8) != piVar4)) {
      uVar2 = *(undefined4 *)(param_1 + 0x482);
      FUN_0044e1d0();
      piVar6 = (int *)FUN_004c7fad(&iStack_4,uVar2);
      piVar10 = param_2;
      if (*piVar6 == 0) {
        piVar4 = param_2;
      }
    }
  }
  if ((piVar4 == *(int **)(param_1 + 0x3d4)) && (piVar4 != piVar10)) {
    cVar3 = FUN_005861a0(*(undefined4 *)((int)piVar4 + 6));
    bVar7 = *(int *)(*(int *)((int)piVar10 + 0x12da) + 0x3b30) == *(int *)((int)piVar4 + 6) ||
            (*(int *)(*(int *)((int)piVar4 + 0x12da) + 0x3b30) == *(int *)((int)piVar10 + 6) ||
            cVar3 != '\0');
    if ((piVar4[0xcd4] != 0) && (piVar4[0xcd4] == piVar10[0xcd4])) {
      bVar7 = true;
    }
    if (((!bVar7) && (cVar3 = FUN_0044beb0(), cVar3 != '\0')) &&
       (cVar3 = FUN_0044beb0(), cVar3 != '\0')) {
      piVar4 = piVar10;
    }
  }
  return piVar4;
}


