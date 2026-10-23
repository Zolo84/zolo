// FUN_0067ac00 @ 67ac00 size=1556

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0067ac00(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float10 fVar14;
  undefined4 uVar15;
  int local_28 [2];
  undefined4 *local_20;
  float local_1c;
  undefined4 *local_18;
  int local_14;
  int *local_10;
  int local_c;
  float local_8;
  
  local_c = FUN_00428ee0(&stack0x00000008);
  if (local_c == 0) {
    local_c = 0;
  }
  else {
    local_c = local_c + -8;
  }
  iVar10 = local_c;
  local_10 = (int *)(&DAT_0089cad8)[param_2];
  if ((local_c != 0) && (local_10 != (int *)0x0)) {
    if ((DAT_00d610e6 != '\0') && (cVar6 = (**(code **)(*local_10 + 0x1c))(), cVar6 == '\0')) {
      return 1;
    }
    cVar6 = FUN_0049ed40(param_2);
    if ((cVar6 == '\0') &&
       ((((piVar1 = *(int **)(*(int *)(param_1 + 10) + 0x3350), piVar1 == (int *)0x0 ||
          (((cVar6 = (**(code **)(*piVar1 + 0x14))(), cVar6 == '\0' &&
            (cVar6 = (**(code **)(*piVar1 + 0x18))(), cVar6 == '\0')) &&
           (cVar6 = (**(code **)(*piVar1 + 0x1c))(), cVar6 == '\0')))) &&
         (((iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 10) + 0x12da) + 0x3b30), iVar7 == 0 ||
           (cVar6 = FUN_0044b280(iVar7), cVar6 == '\0')) &&
          (*(char *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0xb6) == '\0')))) &&
        ((iVar7 = FUN_00428ee0(iVar10 + 0x1a), iVar7 != 0 && (iVar7 != 8)))))) {
      if (*(char *)(iVar10 + 0x138b5) == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_006a9d50();
      }
      uVar15 = 0;
      uVar11 = -(uint)(*(char *)(iVar10 + 0x138b4) != '\0') & param_2;
      uVar9 = FUN_006a9d50(uVar8,uVar11,0);
      local_14 = FUN_0058bcc0(uVar9,uVar8,uVar11,uVar15);
      local_8 = 0.0;
      local_18 = (undefined4 *)FUN_00468230();
      iVar10 = FUN_0042e060(local_28,iVar7 + 0x14);
      local_1c = (float)((int)*(char *)(iVar10 + 2) + *(short *)(iVar10 + 4) * 0xc);
      local_20 = (undefined4 *)(float)(int)local_1c;
      piVar1 = *(int **)(*(int *)(param_1 + 10) + 0x3350);
      if ((piVar1 != (int *)0x0) &&
         (((cVar6 = (**(code **)(*piVar1 + 0x14))(), cVar6 != '\0' ||
           (cVar6 = (**(code **)(*piVar1 + 0x18))(), cVar6 != '\0')) ||
          (cVar6 = (**(code **)(*piVar1 + 0x1c))(), cVar6 != '\0')))) {
        local_1c = (float)FUN_006a9d50();
        iVar10 = FUN_00584c90();
        if ((float)iVar10 == local_1c) {
          return 0;
        }
      }
      piVar1 = local_10;
      if ((0 < local_14) &&
         (*(float *)((int)local_10 + 0x11836) * _DAT_007e34c0 <
          *(float *)(*(int *)(param_1 + 10) + 0x11836))) {
        return 0;
      }
      iVar10 = FUN_004a0750();
      if (*(int **)(iVar10 + 0x3d8) == piVar1) {
        iVar10 = *(int *)(local_c + 0x138c8);
        *(uint *)(param_1 + 0x174) = param_2;
        *(float *)(param_1 + 0x170) = (float)iVar10;
        *(undefined1 *)(param_1 + 0x178) = *(undefined1 *)(local_c + 0x138c3);
        iVar10 = DAT_00893530;
        if ((-10 < local_14) && (local_14 < 10)) {
          uVar11 = _rand();
          uVar11 = uVar11 & 0x80000003;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
          }
          if ((((int)*(short *)(iVar10 + 0x18) - (int)*(short *)(iVar7 + 0x12)) * 0xc -
              (int)*(char *)(iVar7 + 0x10)) + (int)*(char *)(iVar10 + 0x16) < (int)(uVar11 + 6)) {
            return 0;
          }
        }
        local_1c = *(float *)(local_c + 0x138c8);
        if ((local_1c == 0.0) && (*(char *)(local_c + 0x138c2) == '\0')) {
          if (((*(char *)(local_c + 0x138b4) == '\0') ||
              (fVar4 = _DAT_007e4090, *(char *)(*(int *)(param_1 + 10) + 0xe8d6 + param_2) != '\0'))
             && ((fVar4 = local_8, *(char *)(local_c + 0x138b5) != '\0' &&
                 (*(char *)(*(int *)(param_1 + 10) + 0xe8d6 + param_2) == '\0')))) {
            fVar4 = _DAT_007e3848;
          }
          fVar5 = _DAT_007e3848;
          if (*(char *)(*(int *)(param_1 + 10) + 0xe8d6 + param_2) != '\0') {
            fVar5 = _DAT_007e409c;
          }
          if (6 < (((int)*(short *)(DAT_00893530 + 0x18) - (int)*(short *)(iVar7 + 0x12)) * 0xc -
                  (int)*(char *)(iVar7 + 0x10)) + (int)*(char *)(DAT_00893530 + 0x16)) {
            fVar4 = fVar5 * (float)local_20 + fVar4;
          }
          local_1c = 0.0;
          local_8 = (_DAT_007e4088 - (float)(int)local_18) + fVar4;
          piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0xb1a);
          while (piVar1 != (int *)0x0) {
            piVar2 = (int *)piVar1[2];
            puVar13 = (undefined4 *)*piVar1;
            iVar10 = FUN_004e9370(*puVar13);
            piVar1 = piVar2;
            if (*(int **)(iVar10 + 0x3d4) == local_10) {
              local_1c = (float)(int)puVar13[1] + local_1c;
            }
          }
          if (0x5a < (int)local_18) {
            local_8 = local_8 - local_1c;
          }
          puVar13 = local_18;
          if ((*(uint *)(param_1 + 0x16a) == param_2) &&
             (*(float *)(param_1 + 0x166) == _DAT_007e3380)) {
            local_8 = 100.0;
          }
        }
        else {
          puVar13 = local_18;
          if (*(char *)(local_c + 0x138c3) == '\0') {
            local_8 = (float)(int)local_1c;
            local_1c = 0.0;
            puVar12 = *(undefined4 **)((int)local_10 + 0xe892);
            while (puVar12 != (undefined4 *)0x0) {
              puVar3 = (undefined4 *)puVar12[2];
              local_18 = puVar13;
              iVar10 = FUN_004e9370(*puVar12);
              fVar14 = (float10)FUN_004e4600(*(undefined4 *)(iVar10 + 0x3d4));
              local_20 = (undefined4 *)(float)fVar14;
              fVar14 = (float10)FUN_004e4600(*(undefined4 *)(param_1 + 10));
              local_1c = (float)((fVar14 + (float10)(float)local_20) * (float10)_DAT_007e34c0 +
                                (float10)local_1c);
              puVar12 = puVar3;
              puVar13 = local_18;
            }
            local_20 = (undefined4 *)(local_1c * _DAT_007e6964);
            iVar10 = *(int *)(local_c + 0x138c8);
            if ((int)ROUND((float)local_20) <= iVar10) {
              local_8 = local_8 * _DAT_007e67d4;
            }
            local_28[0] = iVar10 - local_14;
            fVar4 = (float)local_28[0];
            if (_DAT_007e3380 < fVar4) {
              fVar4 = fVar4 + fVar4;
            }
            local_8 = fVar4 + local_8 + (_DAT_007e4088 - (float)(int)puVar13) * _DAT_007e34c0;
            if (((*(uint *)(param_1 + 0x16a) == param_2) && (*(char *)(param_1 + 0x16e) != '\0')) &&
               (*(float *)(param_1 + 0x166) <= (float)iVar10)) {
              local_8 = 100.0;
            }
            local_1c = 0.0;
            param_2 = 0;
            local_18 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0xb1a);
            if (local_18 != (undefined4 *)0x0) {
              do {
                puVar13 = (undefined4 *)*local_18;
                local_18 = (undefined4 *)local_18[2];
                local_20 = puVar13;
                local_28[0] = FUN_004e9370(*puVar13);
                if (*(int **)(local_28[0] + 0x3d4) == local_10) {
                  iVar10 = 0;
                  if (0 < *(int *)(local_c + 0x2c)) {
                    puVar12 = (undefined4 *)(local_c + 0x34);
                    do {
                      iVar7 = FUN_004e9370(*puVar12);
                      if (*(int *)(iVar7 + 0x12) == *(int *)(local_28[0] + 0x12)) goto LAB_0067b1bb;
                      iVar10 = iVar10 + 1;
                      puVar12 = puVar12 + 1;
                      puVar13 = local_20;
                    } while (iVar10 < *(int *)(local_c + 0x2c));
                  }
                  param_2 = param_2 + 1;
                  local_1c = (float)((int)local_1c + puVar13[1]);
                }
LAB_0067b1bb:
              } while (local_18 != (undefined4 *)0x0);
              puVar13 = local_18;
              if (0 < (int)param_2) {
                local_8 = local_8 - (float)(int)local_1c / (float)(int)param_2;
              }
            }
          }
          else {
            local_8 = (_DAT_007e4088 -
                      ((float)((int)local_1c + local_14) + _DAT_007e4088) * _DAT_007e6808) -
                      (float)(int)local_18;
            if (((*(uint *)(param_1 + 0x16a) == param_2) && (*(char *)(param_1 + 0x16e) == '\0')) &&
               ((float)(int)local_1c <= *(float *)(param_1 + 0x166))) {
              local_8 = 100.0;
            }
          }
        }
        local_18 = puVar13;
        uVar8 = FUN_006a9d50();
        fVar14 = (float10)FUN_0044c670(0x18,uVar8);
        local_8 = (float)(fVar14 + (float10)local_8);
        fVar4 = ROUND(local_8);
        iVar10 = _rand();
        if (iVar10 % 100 < (int)fVar4) {
          return 1;
        }
      }
    }
  }
  return 0;
}


