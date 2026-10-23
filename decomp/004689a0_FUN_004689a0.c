// FUN_004689a0 @ 4689a0 size=990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004689a0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  float10 fVar11;
  char cStack_22;
  float local_14;
  int local_10;
  float local_c;
  float local_8;
  
  piVar2 = (int *)(&DAT_0089cad8)[param_2];
  if ((((piVar2 != (int *)0x0) && (param_2 != *(int *)(param_1 + 6))) && (param_2 != 0x157)) &&
     ((cVar5 = FUN_0044b300(param_2), cVar5 == '\0' &&
      (*(char *)(*(int *)(param_1 + 0x12da) + param_2 * 0x2c + 0x2c) == '\0')))) {
    if ((DAT_00d610e6 != '\0') && (cVar5 = (**(code **)(*piVar2 + 0x1c))(), cVar5 == '\0')) {
      return 100;
    }
    if ((((*(float *)(*(int *)(param_1 + 0x120) + 0xdc) < _DAT_007e6828) &&
         (iVar6 = FUN_004697d0(), param_2 != iVar6)) &&
        ((iVar7 = FUN_006b5880(param_2), _DAT_007e3374 <= (float)iVar7 ||
         (*(float *)(*(int *)(param_1 + 0x120) + 0xdc) < _DAT_007e4088)))) &&
       ((iVar7 = *(int *)(*(int *)(param_1 + 0x12da) + 0x3b30), iVar7 == 0 || (iVar7 == param_2))))
    {
      fVar11 = (float10)FUN_005885d0();
      local_8 = (float)(fVar11 * (float10)_DAT_007e6820);
      if (*(char *)(iVar6 + 0xe8d6 + (int)piVar2) != '\0') {
        local_8 = local_8 + _DAT_007e681c;
      }
      iVar6 = FUN_0044d810();
      iVar7 = FUN_0044d810();
      uVar9 = iVar7 - iVar6 >> 0x1f;
      iVar6 = (iVar7 - iVar6 ^ uVar9) - uVar9;
      local_8 = local_8 - (float)(iVar6 * 0xf);
      if (2 < iVar6) {
        local_8 = local_8 - (float)(iVar6 * 5);
      }
      local_c = 0.0;
      piVar8 = DAT_00d615e4;
      if (DAT_00d615e4 != (int *)0x0) {
        do {
          iVar6 = *piVar8;
          piVar8 = (int *)piVar8[2];
          cVar5 = (**(code **)(**(int **)(*(int *)(iVar6 + 0x26) + 0x22) + 0x24))(param_2);
          if (cVar5 == '\0') {
            cVar5 = (**(code **)(**(int **)(*(int *)(iVar6 + 0x22) + 0x22) + 0x24))(param_2);
            if (cVar5 != '\0') {
              iVar6 = *(int *)(iVar6 + 0x26);
              goto LAB_00468b5c;
            }
          }
          else {
            iVar6 = *(int *)(iVar6 + 0x22);
LAB_00468b5c:
            if (*(int *)(iVar6 + 0x22) != 0) {
              piVar10 = *(int **)(*(int *)(iVar6 + 0x22) + 4);
              local_14 = 0.0;
              local_10 = 0;
              if (piVar10 != (int *)0x0) {
                do {
                  piVar3 = (int *)piVar10[2];
                  iVar6 = (&DAT_0089cad8)[*piVar10];
                  cVar5 = FUN_0044b300(*(undefined4 *)(param_1 + 6));
                  if (cVar5 != '\0') {
                    return 0;
                  }
                  iVar6 = *(int *)(iVar6 + 6);
                  puVar1 = (undefined4 *)(param_1 + 0x2b36 + iVar6 * 6);
                  cStack_22 = (char)((uint)*puVar1 >> 0x10);
                  if (((int)*(char *)(DAT_00893530 + 0x16) +
                      ((int)*(short *)(DAT_00893530 + 0x18) - (int)*(short *)(puVar1 + 1)) * 0xc) -
                      (int)cStack_22 < 0x12) {
                    return 0;
                  }
                  if (*(char *)(*(int *)(param_1 + 0x12da) + iVar6 * 0x2c + 0x2c) == '\0') {
                    fVar11 = (float10)FUN_00469920(iVar6);
                    local_10 = local_10 + 1;
                    local_14 = (float)(fVar11 + (float10)local_14);
                  }
                  else {
                    local_c = local_c + _DAT_007e6818;
                  }
                  piVar10 = piVar3;
                } while (piVar3 != (int *)0x0);
                if (0 < local_10) {
                  local_c = (local_14 / (float)local_10) * _DAT_007e6800;
                }
              }
            }
          }
        } while (piVar8 != (int *)0x0);
        if ((local_c != _DAT_007e3380) && (iVar6 = FUN_00527630(0), iVar6 < 1)) {
          return 0;
        }
        if (local_c <= _DAT_007e6814) {
          if (local_c < _DAT_007e6810) {
            local_c = -50.0;
          }
        }
        else {
          local_c = 80.0;
        }
      }
      local_c = local_c + local_8;
      cVar5 = FUN_0044d840();
      if (cVar5 != '\0') {
        local_c = local_c - ((float)piVar2[0xcd3] + (float)piVar2[0xcd3]);
      }
      if (*(int *)(*(int *)(param_1 + 0x12da) + 0x3b30) == param_2) {
        local_c = local_c + _DAT_007e681c;
      }
      local_8 = local_c - *(float *)(*(int *)(param_1 + 0x120) + 0xdc) * _DAT_007e4094;
      if (*(int *)(*(int *)((int)piVar2 + 0x12da) + 0x3b30) == *(int *)(param_1 + 6)) {
        local_8 = local_8 + _DAT_007e680c;
      }
      fVar11 = (float10)FUN_0044c670(1,*(int *)(param_1 + 6));
      iVar6 = FUN_0044dc80(6);
      fVar4 = (float)((5 - iVar6) * 0xc);
      if (fVar4 < _DAT_007e3380) {
        fVar4 = _DAT_007e3380;
      }
      iVar6 = (int)ROUND((float)(fVar11 + (float10)local_8) - fVar4);
      if (-1 < iVar6) {
        if (100 < iVar6) {
          return 100;
        }
        return iVar6;
      }
    }
  }
  return 0;
}


