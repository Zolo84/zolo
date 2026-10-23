// FUN_0046bed0 @ 46bed0 size=1267

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046bed0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  float local_10;
  int *apiStack_8 [2];
  
  local_10 = _DAT_007e3380;
  if (((DAT_00dc1886 != '\0') && (iVar8 = (&DAT_0089cad8)[param_3], iVar8 != 0)) &&
     (iVar4 = FUN_004e9f80(iVar8), 0 < iVar4)) {
    iVar5 = FUN_004e9370(iVar4);
    if (((*(int *)(iVar5 + 0x3d8) != 0) && (*(int *)(iVar5 + 0x3d8) == iVar8)) &&
       (iVar5 = FUN_004e9f80(iVar8), iVar5 == iVar4)) {
      iVar4 = (**(code **)*param_2)();
      apiStack_8[0] = *(int **)(*(int *)(iVar4 + 0x6c) + 4);
      if (apiStack_8[0] == (int *)0x0) {
        return;
      }
      do {
        iVar4 = *apiStack_8[0];
        iVar5 = FUN_004c9f81();
        if (iVar5 == iVar8) {
          if ((iVar8 != param_1) &&
             (iVar5 = *(int *)(**(int **)(iVar4 + 0x2c) + 0x482), iVar6 = FUN_0044e1d0(),
             iVar6 == iVar5)) {
            local_10 = local_10 + _DAT_007e3374;
          }
          piVar10 = *(int **)(iVar4 + 0x2c);
joined_r0x0046bfb9:
          do {
            if ((piVar10 == (int *)0x0) || (local_10 != _DAT_007e3380)) goto LAB_0046c0c8;
            piVar1 = (int *)piVar10[2];
            iVar4 = *piVar10;
            local_10 = *(float *)(iVar4 + 0x1fe) + *(float *)(iVar4 + 0x6a) + local_10 +
                       *(float *)(iVar4 + 0x202) + *(float *)(iVar4 + 0x72) +
                       *(float *)(iVar4 + 0x206) + *(float *)(iVar4 + 0x6e) +
                       *(float *)(iVar4 + 0x20a) + *(float *)(iVar4 + 0x76) +
                       *(float *)(iVar4 + 0x66);
            piVar10 = piVar1;
          } while ((DAT_00dc1888 == '\0') ||
                  ((*(float *)(iVar4 + 0x270) <= _DAT_007e3380 || (local_10 != _DAT_007e3380))));
          fVar2 = *(float *)(iVar4 + 0x26c) * _DAT_00dc188c * _DAT_008775a0;
          if (DAT_0087759c <= fVar2) {
            fVar2 = DAT_0087759c;
          }
          if (*(float *)(iVar4 + 0x270) - fVar2 <= _DAT_007e3380) {
            fVar2 = *(float *)(iVar4 + 0x268) * _DAT_00dc188c * _DAT_008775a0;
            if (DAT_0087759c <= fVar2) {
              fVar2 = DAT_0087759c;
            }
            if (*(float *)(iVar4 + 0x280) - fVar2 <= _DAT_007e3380) goto joined_r0x0046bfb9;
          }
          local_10 = local_10 + _DAT_007e3374;
          goto joined_r0x0046bfb9;
        }
LAB_0046c0c8:
      } while ((local_10 <= _DAT_007e3380) &&
              (apiStack_8[0] = (int *)apiStack_8[0][2], apiStack_8[0] != (int *)0x0));
      goto LAB_0046c215;
    }
  }
  piVar10 = (int *)param_2[0xb];
  if (piVar10 == (int *)0x0) {
    return;
  }
  do {
    if (local_10 != _DAT_007e3380) goto LAB_0046c22a;
    piVar1 = piVar10 + 2;
    iVar8 = *piVar10;
    local_10 = *(float *)(iVar8 + 0x1fe) + *(float *)(iVar8 + 0x6a) + local_10 +
               *(float *)(iVar8 + 0x202) + *(float *)(iVar8 + 0x72) + *(float *)(iVar8 + 0x206) +
               *(float *)(iVar8 + 0x6e) + *(float *)(iVar8 + 0x20a) + *(float *)(iVar8 + 0x76) +
               *(float *)(iVar8 + 0x66);
    if (((DAT_00dc1888 != '\0') && (_DAT_007e3380 < *(float *)(iVar8 + 0x270))) &&
       (local_10 == _DAT_007e3380)) {
      fVar2 = *(float *)(iVar8 + 0x26c) * _DAT_00dc188c * _DAT_008775a0;
      if (DAT_0087759c <= fVar2) {
        fVar2 = DAT_0087759c;
      }
      if (*(float *)(iVar8 + 0x270) - fVar2 <= _DAT_007e3380) {
        fVar2 = *(float *)(iVar8 + 0x268) * _DAT_00dc188c * _DAT_008775a0;
        if (DAT_0087759c <= fVar2) {
          fVar2 = DAT_0087759c;
        }
        if (*(float *)(iVar8 + 0x280) - fVar2 <= _DAT_007e3380) goto LAB_0046c207;
      }
      local_10 = local_10 + _DAT_007e3374;
    }
LAB_0046c207:
    piVar10 = (int *)*piVar1;
  } while ((int *)*piVar1 != (int *)0x0);
LAB_0046c215:
  if (local_10 != _DAT_007e3380) {
LAB_0046c22a:
    FUN_004e9370(*(undefined4 *)((int)param_2 + 0x52));
    uVar7 = FUN_004e9f40();
    iVar8 = FUN_004e9370(uVar7);
    if (*(char *)(iVar8 + 0x470) == '\0') {
      uVar7 = *(undefined4 *)((int)param_2 + 0x52);
    }
    iVar8 = FUN_004e9370(uVar7);
    if (*(char *)(iVar8 + 0x470) != '\0') {
      apiStack_8[0] = (int *)0x0;
      if (DAT_00dc1886 == '\0') {
        uVar7 = *(undefined4 *)(iVar8 + 0x12);
        FUN_0044e1d0(param_1,uVar7);
        apiStack_8[0] = (int *)FUN_004cc4d5(param_1,uVar7);
      }
      else {
        local_10 = NAN;
        puVar9 = (undefined4 *)FUN_0044e1d0();
        iVar4 = (**(code **)*puVar9)();
        param_2 = *(int **)(*(int *)(iVar4 + 0x6c) + 4);
        if (param_2 == (int *)0x0) {
          return;
        }
        do {
          iVar4 = *param_2;
          if ((DAT_00dc1887 != '\0') || (iVar5 = FUN_004c9f81(), iVar5 == param_1)) {
            piVar10 = *(int **)(iVar4 + 0x2c);
            while (piVar10 != (int *)0x0) {
              piVar1 = (int *)piVar10[2];
              iVar4 = *piVar10;
              piVar10 = piVar1;
              if (*(int *)(iVar4 + 0x46a) != 0) {
                uVar7 = *(undefined4 *)(iVar8 + 0x3dc);
                FUN_004e9370(*(undefined4 *)(iVar4 + 0x3dc));
                cVar3 = FUN_004ed600(param_1,uVar7);
                if (cVar3 != '\0') {
                  FUN_004ed6d0(*(undefined4 *)(iVar4 + 0x12));
                  iVar5 = __ftol();
                  if (iVar5 < (int)local_10) {
                    apiStack_8[0] = *(int **)(iVar4 + 0x12);
                    local_10 = (float)iVar5;
                  }
                }
              }
            }
          }
          param_2 = (int *)param_2[2];
        } while (param_2 != (int *)0x0);
      }
      if ((0 < (int)apiStack_8[0]) &&
         (iVar8 = FUN_004e9370(apiStack_8[0]), *(char *)(iVar8 + 0x470) != '\0')) {
        FUN_00428eb0(apiStack_8);
        FUN_00449290(apiStack_8);
        FUN_0045d580();
        return;
      }
    }
  }
  return;
}


