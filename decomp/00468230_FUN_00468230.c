// FUN_00468230 @ 468230 size=586

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00468230(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int local_18;
  float local_14;
  float local_10;
  
  local_18 = 100;
  iVar8 = FUN_004a0750();
  if (*(int *)(iVar8 + 0x3d8) != param_1) {
    local_18 = 0x32;
  }
  local_10 = 0.0;
  fVar4 = _DAT_007e3380;
  piVar1 = DAT_00d615e4;
  while (piVar1 != (int *)0x0) {
    iVar8 = *piVar1;
    piVar1 = (int *)piVar1[2];
    piVar11 = *(int **)(*(int *)(iVar8 + 0x26) + 0x22);
    piVar10 = *(int **)(*(int *)(iVar8 + 0x22) + 0x22);
    cVar7 = (**(code **)(*piVar11 + 0x24))(*(undefined4 *)(param_1 + 6));
    if ((cVar7 != '\0') ||
       (cVar7 = (**(code **)(*piVar10 + 0x24))(*(undefined4 *)(param_1 + 6)), cVar7 != '\0')) {
      cVar7 = (**(code **)(**(int **)(*(int *)(iVar8 + 0x22) + 0x22) + 0x24))
                        (*(undefined4 *)(param_1 + 6));
      if (cVar7 != '\0') {
        piVar11 = *(int **)(*(int *)(iVar8 + 0x22) + 0x22);
        piVar10 = *(int **)(*(int *)(iVar8 + 0x26) + 0x22);
      }
      piVar11 = (int *)piVar11[1];
      while (piVar11 != (int *)0x0) {
        piVar2 = (int *)piVar11[2];
        iVar8 = (&DAT_0089cad8)[*piVar11];
        piVar11 = piVar2;
        if (iVar8 != 0) {
          if (iVar8 == param_1) {
            local_10 = local_10 + *(float *)(iVar8 + 0x11836);
          }
          else {
            local_10 = *(float *)(iVar8 + 0x11836) * _DAT_007e5390 + local_10;
          }
        }
      }
      piVar11 = (int *)piVar10[1];
      while (piVar11 != (int *)0x0) {
        piVar10 = (int *)piVar11[2];
        iVar8 = (&DAT_0089cad8)[*piVar11];
        piVar11 = piVar10;
        if (iVar8 != 0) {
          if (*(char *)(iVar8 + 0xe8d6 + *(int *)(param_1 + 6)) == '\0') {
            fVar4 = *(float *)(iVar8 + 0x11836) * _DAT_007e5390 + fVar4;
          }
          else {
            fVar4 = fVar4 + *(float *)(iVar8 + 0x11836);
          }
        }
      }
    }
  }
  fVar4 = (local_10 + _DAT_007e4090) / (fVar4 + _DAT_007e4090);
  fVar5 = _DAT_007e40a0;
  if ((_DAT_007e40a0 <= fVar4) && (fVar5 = fVar4, _DAT_007e384c < fVar4)) {
    fVar5 = _DAT_007e384c;
  }
  iVar8 = 0;
  puVar6 = *(undefined4 **)(param_1 + 0xe892);
  while (puVar6 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar6[2];
    iVar9 = FUN_004e9370(*puVar6);
    puVar6 = puVar3;
    if ((*(int *)(iVar9 + 0x3d8) != 0) && (*(int *)(*(int *)(iVar9 + 0x3d8) + 6) == 0x157)) {
      iVar8 = iVar8 + 1;
    }
  }
  local_14 = 0.0;
  iVar9 = (**(code **)(*(int *)(param_1 + 0xe8a0) + 4))();
  if ((iVar9 < 1) || (iVar8 < 1)) {
    iVar8 = (**(code **)(*(int *)(param_1 + 0xe8a0) + 4))();
    if (iVar8 < 1) {
      return 0;
    }
  }
  else {
    local_14 = (float)iVar8 * _DAT_007e4088;
    iVar8 = (**(code **)(*(int *)(param_1 + 0xe8a0) + 4))();
    local_14 = local_14 / (float)iVar8;
  }
  iVar8 = (int)ROUND((float)local_18 * fVar5) - (int)ROUND(local_14);
  if (iVar8 < 0x65) {
    if (iVar8 < 0) {
      return 0;
    }
    return iVar8;
  }
  return 100;
}


