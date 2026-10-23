// FUN_00468f00 @ 468f00 size=918

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00468f00(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
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
     ((cVar4 = FUN_0044b300(param_2), cVar4 == '\0' &&
      (*(char *)(*(int *)(param_1 + 0x12da) + param_2 * 0x2c + 0x2c) == '\0')))) {
    if ((DAT_00d610e6 != '\0') && (cVar4 = (**(code **)(*piVar2 + 0x1c))(), cVar4 == '\0')) {
      return 100;
    }
    iVar5 = FUN_004697d0();
    if (((param_2 != iVar5) &&
        ((iVar6 = FUN_006b5880(param_2), _DAT_007e3374 <= (float)iVar6 ||
         (*(float *)(*(int *)(param_1 + 0x120) + 0xdc) < _DAT_007e4088)))) &&
       ((iVar6 = *(int *)(*(int *)(param_1 + 0x12da) + 0x3b30), iVar6 == 0 || (iVar6 == param_2))))
    {
      fVar11 = (float10)FUN_005885d0();
      local_8 = (float)(fVar11 * (float10)_DAT_007e3358);
      if (*(char *)(iVar5 + 0xe8d6 + (int)piVar2) != '\0') {
        local_8 = local_8 + _DAT_007e681c;
      }
      iVar5 = FUN_0044d810();
      iVar6 = FUN_0044d810();
      local_c = 0.0;
      uVar9 = iVar6 - iVar5 >> 0x1f;
      piVar7 = DAT_00d615e4;
      if (DAT_00d615e4 != (int *)0x0) {
        do {
          iVar8 = *piVar7;
          piVar7 = (int *)piVar7[2];
          cVar4 = (**(code **)(**(int **)(*(int *)(iVar8 + 0x26) + 0x22) + 0x24))(param_2);
          if (cVar4 == '\0') {
            cVar4 = (**(code **)(**(int **)(*(int *)(iVar8 + 0x22) + 0x22) + 0x24))(param_2);
            if (cVar4 != '\0') {
              iVar8 = *(int *)(iVar8 + 0x26);
              goto LAB_0046908a;
            }
          }
          else {
            iVar8 = *(int *)(iVar8 + 0x22);
LAB_0046908a:
            if (*(int *)(iVar8 + 0x22) != 0) {
              piVar10 = *(int **)(*(int *)(iVar8 + 0x22) + 4);
              local_14 = 0.0;
              local_10 = 0;
              if (piVar10 != (int *)0x0) {
                do {
                  piVar3 = (int *)piVar10[2];
                  iVar8 = (&DAT_0089cad8)[*piVar10];
                  cVar4 = FUN_0044b300(*(undefined4 *)(param_1 + 6));
                  if (cVar4 != '\0') {
                    return 0;
                  }
                  iVar8 = *(int *)(iVar8 + 6);
                  puVar1 = (undefined4 *)(param_1 + 0x2b36 + iVar8 * 6);
                  cStack_22 = (char)((uint)*puVar1 >> 0x10);
                  if (((int)*(char *)(DAT_00893530 + 0x16) +
                      ((int)*(short *)(DAT_00893530 + 0x18) - (int)*(short *)(puVar1 + 1)) * 0xc) -
                      (int)cStack_22 < 0x12) {
                    return 0;
                  }
                  if (*(char *)(*(int *)(param_1 + 0x12da) + iVar8 * 0x2c + 0x2c) == '\0') {
                    fVar11 = (float10)FUN_00469920(iVar8);
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
        } while (piVar7 != (int *)0x0);
        if ((local_c != _DAT_007e3380) && (iVar8 = FUN_00527630(0), iVar8 < 1)) {
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
      local_8 = local_c + (local_8 - (float)(int)(((iVar6 - iVar5 ^ uVar9) - uVar9) * 10));
      cVar4 = FUN_0044beb0();
      if ((cVar4 != '\0') && (_DAT_007e3380 <= local_c)) {
        local_8 = local_8 + _DAT_007e681c;
      }
      cVar4 = FUN_0044d840();
      if (cVar4 != '\0') {
        local_8 = local_8 - ((float)piVar2[0xcd3] + (float)piVar2[0xcd3]);
      }
      if (*(int *)(*(int *)(param_1 + 0x12da) + 0x3b30) == param_2) {
        local_8 = local_8 + _DAT_007e681c;
      }
      local_8 = local_8 - *(float *)(*(int *)(param_1 + 0x120) + 0xdc) * _DAT_007e34e0;
      if (*(int *)(*(int *)((int)piVar2 + 0x12da) + 0x3b30) == *(int *)(param_1 + 6)) {
        local_8 = local_8 + _DAT_007e680c;
      }
      fVar11 = (float10)FUN_0044c670(1,*(int *)(param_1 + 6));
      iVar5 = (int)ROUND((float)(fVar11 + (float10)local_8));
      if (-1 < iVar5) {
        if (100 < iVar5) {
          return 100;
        }
        return iVar5;
      }
    }
  }
  return 0;
}


