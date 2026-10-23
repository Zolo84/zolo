// FUN_0049aec0 @ 49aec0 size=774

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0049aec0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  float fVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  float10 fVar9;
  float local_8;
  
  fVar5 = (float)*(int *)(param_1 + 0x3924) * _DAT_00d7ca60;
  if (fVar5 < _DAT_007e4090) {
    fVar5 = _DAT_007e4090;
  }
  *(int *)(param_1 + 0x3968) =
       (int)ROUND(((float)*(int *)(param_1 + 0x3970) + fVar5) * *(float *)(param_1 + 0x13c38) *
                  *(float *)(param_1 + 0xe848));
  *(undefined4 *)(param_1 + 0x3974) = 0;
  *(undefined4 *)(param_1 + 0x3978) = 0;
  *(undefined4 *)(param_1 + 0x397c) = 0;
  *(undefined4 *)(param_1 + 0x3980) = 0;
  *(undefined4 *)(param_1 + 0x3984) = 0;
  *(undefined4 *)(param_1 + 0x3988) = 0;
  piVar2 = *(int **)(param_1 + 0x4508);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    piVar4 = *(int **)(*piVar2 + 0x26);
    while (piVar2 = piVar1, piVar4 != (int *)0x0) {
      piVar2 = (int *)piVar4[2];
      local_8 = DAT_00dc1804;
      if ((*(char *)(*piVar4 + 0x161) == '\0') &&
         (local_8 = DAT_00dc17fc, *(char *)(*piVar4 + 0x160) != '\0')) {
        local_8 = DAT_00dc1800;
      }
      cVar7 = FUN_004fd350();
      if (cVar7 != '\0') {
        local_8 = _DAT_00dc180c * local_8;
      }
      fVar9 = (float10)FUN_004fd5d0(0);
      *(float *)(param_1 + 0x3974) =
           (float)(fVar9 * (float10)local_8 + (float10)*(float *)(param_1 + 0x3974));
      fVar9 = (float10)FUN_004fd7c0(0);
      *(float *)(param_1 + 0x3974) =
           (float)(fVar9 * (float10)local_8 + (float10)*(float *)(param_1 + 0x3974));
      piVar4 = piVar2;
    }
  }
  piVar2 = *(int **)(param_1 + 0x451c);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    iVar8 = *piVar2;
    piVar2 = piVar1;
    if (*(char *)(iVar8 + 0x154) == '\0') {
      local_8 = DAT_00dc1804;
      if ((*(char *)(iVar8 + 0x161) == '\0') &&
         (local_8 = DAT_00dc17fc, *(char *)(iVar8 + 0x160) != '\0')) {
        local_8 = DAT_00dc1800;
      }
      fVar9 = (float10)FUN_004fd5d0(0);
      *(float *)(param_1 + 0x3974) =
           (float)(fVar9 * (float10)local_8 + (float10)*(float *)(param_1 + 0x3974));
      fVar9 = (float10)FUN_004fd7c0(0);
      *(float *)(param_1 + 0x3974) =
           (float)(fVar9 * (float10)local_8 + (float10)*(float *)(param_1 + 0x3974));
      fVar5 = _DAT_00dc17f0;
      if (*(char *)(iVar8 + 0x162) != '\0') {
        fVar5 = _DAT_00dc17f0 * _DAT_00dc17f4;
      }
      *(float *)(param_1 + 0x397c) = fVar5 + *(float *)(param_1 + 0x397c);
    }
  }
  puVar6 = *(undefined4 **)(param_1 + 0xe8a4);
  while (puVar6 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar6[2];
    iVar8 = FUN_004e9370(*puVar6);
    if (*(int *)(iVar8 + 0x3d4) != param_1) {
      *(float *)(param_1 + 0x3978) = _DAT_00dc17f8 + *(float *)(param_1 + 0x3978);
    }
    *(float *)(param_1 + 0x3980) =
         (float)*(int *)(iVar8 + 0x222) * _DAT_00dc1808 * _DAT_007e543c +
         *(float *)(param_1 + 0x3980);
    puVar6 = puVar3;
  }
  piVar2 = *(int **)(param_1 + 0x3b7e);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    piVar4 = (int *)*piVar2;
    cVar7 = (**(code **)(*piVar4 + 0x10))();
    piVar2 = piVar1;
    if ((cVar7 != '\0') && (iVar8 = piVar4[0xe], 0 < iVar8)) {
      switch(*(undefined4 *)((int)piVar4 + 0x5a)) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 8:
      case 9:
      case 10:
        *(float *)(param_1 + 0x3988) = (float)iVar8 * _DAT_00dc1810 + *(float *)(param_1 + 0x3988);
        break;
      case 6:
      case 7:
        *(float *)(param_1 + 0x3984) = (float)iVar8 * _DAT_00dc1814 + *(float *)(param_1 + 0x3984);
      }
    }
  }
  fVar5 = (_DAT_007e3374 / *(float *)(param_1 + 0xe84c)) * *(float *)(param_1 + 0x3978);
  *(float *)(param_1 + 0x3978) = fVar5;
  *(int *)(param_1 + 0x396c) =
       (int)ROUND(*(float *)(param_1 + 0x3980) + *(float *)(param_1 + 0x3974) + fVar5 +
                  *(float *)(param_1 + 0x3988) + *(float *)(param_1 + 0x3984) +
                  *(float *)(param_1 + 0x397c));
  return;
}


