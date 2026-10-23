// FUN_00692220 @ 692220 size=1124

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00692220(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float10 fVar12;
  undefined1 local_2c [4];
  int local_28;
  int *local_24;
  int *local_20;
  float local_1c;
  int local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_8 = 0.0;
  local_10 = 0.0;
  piVar11 = *(int **)(*(int *)(param_2 + 0x482) + 0x2c);
  while (local_18 = param_1, piVar11 != (int *)0x0) {
    local_28 = *piVar11;
    local_24 = (int *)piVar11[2];
    local_c = 0.0;
    iVar9 = local_28;
    piVar11 = *(int **)(*(int *)(local_28 + 0x1c2) + 4);
    while (piVar11 != (int *)0x0) {
      piVar1 = (int *)*piVar11;
      local_20 = (int *)piVar11[2];
      cVar7 = (**(code **)(*piVar1 + 0x28))();
      piVar11 = local_20;
      if ((cVar7 != '\0') &&
         (cVar7 = FUN_0044b280(*(undefined4 *)(piVar1[0x92] + 6)), piVar11 = local_20, cVar7 != '\0'
         )) {
        local_1c = *(float *)((int)piVar1 + 0x26);
        iVar9 = *(int *)(iVar9 + 0x12);
        iVar10 = *(int *)(param_2 + 0x12);
        local_14 = 0.0;
        while (local_1c != 0.0) {
          puVar8 = (undefined4 *)FUN_00499730(local_2c,0);
          iVar2 = *(int *)*puVar8;
          if (*(char *)(iVar2 + 0x155) == '\0') {
            fVar5 = *(float *)(iVar2 + 0xec) * _DAT_007e46cc;
            fVar6 = fVar5;
            if ((*(int *)(iVar2 + 0x134) == 9) && (fVar6 = _DAT_007e3380, iVar9 == iVar10)) {
              fVar6 = fVar5 * _DAT_007e34c0;
            }
            if (*(int *)(iVar2 + 0x134) == 0xb) {
              fVar6 = fVar6 * _DAT_007e34c0;
            }
            local_14 = fVar6 + local_14;
          }
        }
        local_c = local_14 + local_c;
        local_1c = 0.0;
        iVar9 = local_28;
        piVar11 = local_20;
      }
    }
    if (*(int *)(iVar9 + 0x12) == *(int *)(param_2 + 0x12)) {
      local_8 = local_c + local_c + local_8;
      local_10 = local_c + local_c + local_10;
      piVar11 = local_24;
      param_1 = local_18;
    }
    else {
      cVar7 = FUN_004e7970(*(int *)(param_2 + 0x12));
      if (cVar7 == '\0') {
        fVar12 = (float10)FUN_0044a9c0(*(undefined4 *)(param_2 + 0x12),*(undefined4 *)(iVar9 + 0x12)
                                      );
        if ((float10)_DAT_007e3848 <= fVar12) {
          fVar12 = (float10)_DAT_007e3848 / fVar12;
        }
        else {
          fVar12 = (float10)_DAT_007e3374;
        }
        local_8 = (float)(fVar12 * (float10)local_c * (float10)_DAT_007e6808 + (float10)local_8);
        piVar11 = local_24;
        param_1 = local_18;
      }
      else {
        local_8 = local_c + local_8;
        local_10 = local_c + local_10;
        piVar11 = local_24;
        param_1 = local_18;
      }
    }
  }
  local_1c = 0.0;
  piVar11 = *(undefined4 **)(*(int *)(param_2 + 0x482) + 0x3e);
  do {
    while( true ) {
      do {
        if (piVar11 == (undefined4 *)0x0) {
          iVar9 = (int)ROUND(local_8 - local_1c);
          if ((int)ROUND(local_8 - local_1c) <= (int)ROUND(local_10)) {
            iVar9 = (int)ROUND(local_10);
          }
          if ((0 < iVar9) && (iVar9 < 3)) {
            return 3;
          }
          if (iVar9 < 1) {
            iVar9 = 1;
          }
          return iVar9;
        }
        local_20 = (int *)piVar11[2];
        piVar1 = (int *)*piVar11;
        piVar11 = local_20;
      } while ((*(int *)(*piVar1 + 0x4c) != 0) ||
              (iVar9 = FUN_004c9f81(), piVar11 = local_20, iVar9 == 0));
      iVar9 = *(int *)(local_18 + 10);
      iVar10 = FUN_004c9f81();
      if ((iVar10 == iVar9) ||
         (iVar9 = *(int *)(*(int *)(param_2 + 0x3d8) + 6), iVar10 = FUN_004c9f81(),
         *(char *)(*(int *)(iVar10 + 0x12da) + iVar9 * 0x2c + 0x2c) != '\0')) break;
      iVar9 = FUN_004c9f81();
      iVar9 = *(int *)(iVar9 + 0x12da);
      iVar10 = FUN_006a9d50();
      piVar11 = local_20;
      if (*(char *)(iVar9 + (iVar10 + 1) * 0x2c) != '\0') {
        piVar1 = *(int **)(*piVar1 + 0x2c);
        while (piVar11 = local_20, piVar1 != (int *)0x0) {
          piVar11 = (int *)piVar1[2];
          local_14 = 0.0;
          local_28 = *piVar1;
          piVar1 = *(int **)(*(int *)(local_28 + 0x1c2) + 4);
          while (piVar1 != (int *)0x0) {
            piVar3 = (int *)piVar1[2];
            piVar4 = (int *)*piVar1;
            cVar7 = (**(code **)(*piVar4 + 0x28))();
            piVar1 = piVar3;
            if (cVar7 != '\0') {
              piVar3 = *(int **)((int)piVar4 + 0x26);
              fVar5 = _DAT_007e3380;
              while (piVar3 != (int *)0x0) {
                piVar4 = piVar3 + 2;
                iVar9 = *piVar3;
                piVar3 = (int *)*piVar4;
                if (*(char *)(iVar9 + 0x155) == '\0') {
                  fVar6 = *(float *)(iVar9 + 0xec) * _DAT_007e46cc;
                  if (*(int *)(iVar9 + 0x134) == 9) {
                    fVar6 = _DAT_007e3380;
                  }
                  if (*(int *)(iVar9 + 0x134) == 0xb) {
                    fVar6 = fVar6 * _DAT_007e34c0;
                  }
                  fVar5 = fVar6 + fVar5;
                }
              }
              local_14 = fVar5 + local_14;
            }
          }
          fVar12 = (float10)FUN_0044a9c0(*(undefined4 *)(param_2 + 0x12),
                                         *(undefined4 *)(local_28 + 0x12));
          if ((float10)_DAT_007e3848 <= fVar12) {
            fVar12 = (float10)_DAT_007e3848 / fVar12;
          }
          else {
            fVar12 = (float10)_DAT_007e3374;
          }
          local_8 = (float)(fVar12 * (float10)local_14 * (float10)_DAT_007e6800 + (float10)local_8);
          piVar1 = piVar11;
        }
      }
    }
    piVar1 = *(int **)(*piVar1 + 0x2c);
joined_r0x00692552:
    piVar11 = local_20;
  } while (piVar1 == (int *)0x0);
  iVar9 = *piVar1;
  local_24 = (int *)piVar1[2];
  local_c = 0.0;
  piVar11 = *(int **)(*(int *)(iVar9 + 0x1c2) + 4);
  while (piVar11 != (int *)0x0) {
    piVar1 = (int *)piVar11[2];
    piVar3 = (int *)*piVar11;
    cVar7 = (**(code **)(*piVar3 + 0x28))();
    piVar11 = piVar1;
    if (cVar7 != '\0') {
      iVar10 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
      local_c = (float)((int)local_c + iVar10);
    }
  }
  iVar10 = 0;
  piVar1 = local_24;
  if (0 < *(int *)(iVar9 + 0x290)) {
    piVar11 = *(int **)(iVar9 + 0x298);
    do {
      if ((piVar11[1] != 4) &&
         (*(int *)(DAT_00ab27b4 + 0x482 + *piVar11 * 0x4b2) == *(int *)(param_2 + 0x482))) {
        fVar12 = (float10)FUN_0044a9c0(*(undefined4 *)(param_2 + 0x12),*(undefined4 *)(iVar9 + 0x12)
                                      );
        if ((float10)_DAT_007e3848 <= fVar12) {
          fVar12 = (float10)_DAT_007e3848 / fVar12;
        }
        else {
          fVar12 = (float10)_DAT_007e3374;
        }
        local_1c = (float)((float10)(int)local_c * fVar12 * (float10)_DAT_007e34c0 +
                          (float10)local_1c);
        piVar1 = local_24;
        break;
      }
      iVar10 = iVar10 + 1;
      piVar11 = piVar11 + 3;
    } while (iVar10 < *(int *)(iVar9 + 0x290));
  }
  goto joined_r0x00692552;
}


