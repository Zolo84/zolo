// FUN_00467480 @ 467480 size=3490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00467480(int *param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  float fVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float10 fVar16;
  char in_stack_00000034;
  undefined2 local_40;
  undefined4 local_3e;
  int *local_38;
  float local_34;
  float local_30;
  float local_2c;
  int *local_28;
  int *local_24;
  float local_20;
  float local_1c;
  float local_18;
  int *local_14;
  float local_10;
  float local_c;
  char local_7;
  char local_6;
  bool local_5;
  
  iVar15 = (int)param_2;
  if (param_2 != 0.0) {
    local_28 = param_1;
    if ((DAT_00d610e6 != '\0') && (cVar12 = (**(code **)(*param_1 + 0x1c))(), cVar12 == '\0')) {
      return 100;
    }
    cVar12 = (**(code **)(*(int *)(*(int *)((int)param_2 + 0x120) + 0x1c0) + 0x24))
                       (*(undefined4 *)((int)param_1 + 6));
    if (cVar12 == '\0') {
      local_7 = (&DAT_00dc0fd4)[*(int *)((int)param_2 + 6)] != 0;
      local_5 = !(bool)local_7 && (&DAT_00dc0fd4)[*(int *)((int)param_1 + 6)] == 0;
      iVar13 = FUN_0044ab40();
      local_1c = (float)iVar13;
      fVar16 = (float10)FUN_0049b4b0(0);
      fVar16 = (fVar16 + (float10)local_1c) * (float10)_DAT_007e6804;
      local_1c = (float)fVar16;
      if (fVar16 <= (float10)_DAT_007e3374) {
        if (local_1c < _DAT_007e34e0) {
          local_1c = 0.1;
        }
      }
      else {
        local_1c = 1.0;
      }
      local_10 = 0.0;
      local_6 = in_stack_00000034 != '\0';
      local_c = 0.0;
      iVar13 = 0;
      do {
        local_14 = *(int **)((int)param_2 + 0x3bd4 + iVar13 * 4);
        fVar16 = (float10)FUN_00442c00(iVar13);
        fVar1 = (float)fVar16;
        local_20 = *(float *)((int)param_2 + 0x3b8c + iVar13 * 4);
        fVar16 = (float10)FUN_0049ea70(iVar13);
        local_18 = (float)fVar16;
        local_30 = *(float *)((int)param_2 + 0x3bbc + iVar13 * 4);
        local_24 = *(int **)((int)param_2 + 0x3ba4 + iVar13 * 4);
        if (local_6 == '\0') {
          fVar11 = _DAT_007e40a4;
          if ((float)_DAT_007e3380 <= local_20) {
            fVar11 = _DAT_007e67fc;
          }
          local_14 = (int *)((float)local_14 * fVar11);
          cVar12 = FUN_0044beb0();
          if ((cVar12 != '\0') && ((iVar13 == 0 || (iVar13 == 5)))) {
            local_14 = (int *)((float)local_14 * _DAT_007e67fc);
          }
          if (fVar1 <= (float)_DAT_007e3380) {
            if (fVar1 < (float)_DAT_007e3380) {
              if (*(char *)(iVar13 + 0x3bf3 + (int)param_2) == '\0') {
                return 0;
              }
              if ((iVar13 == 4) && (cVar12 = FUN_004a7520(), cVar12 != '\0')) {
                return 0;
              }
              piVar3 = local_14;
              if (iVar13 != 4) {
                fVar11 = local_18 - -fVar1;
                if (fVar11 < local_30) {
                  return 0;
                }
                if (fVar11 < (float)local_24) {
                  fVar4 = local_18 / fVar11;
                  if (_DAT_007e5e34 < local_18 / fVar11) {
                    fVar4 = _DAT_007e5e34;
                  }
                  piVar3 = (int *)(fVar4 * (float)local_14);
                }
              }
              local_c = -fVar1 * (float)piVar3 + local_c;
            }
          }
          else {
            piVar3 = local_14;
            if (*(char *)(iVar13 + 0x3bf9 + (int)param_2) == '\0') {
              piVar3 = _DAT_007e3380;
            }
            if (iVar13 < 4) {
              local_2c = fVar1 * _DAT_007e34e0;
              fVar11 = (float)local_24 - local_18;
              if ((float)local_24 - local_18 < local_2c) {
                fVar11 = local_2c;
              }
              if (fVar1 < fVar11) goto LAB_0046772a;
            }
            else {
LAB_0046772a:
              fVar11 = fVar1;
            }
            if (local_30 <= local_18) {
              if (local_18 <= (float)local_24) {
                fVar1 = (float)local_24 / local_18;
                if (_DAT_007e67f8 < (float)local_24 / local_18) {
                  fVar1 = _DAT_007e67f8;
                }
                piVar3 = (int *)(fVar1 * (float)piVar3);
              }
              else if (iVar13 < 4) {
                local_10 = fVar11 * (float)piVar3 * _DAT_007e34e0 + local_10;
                goto LAB_0046782b;
              }
              local_10 = fVar11 * (float)piVar3 + local_10;
            }
            else {
              local_10 = fVar11 * (float)piVar3 * _DAT_007e3650 + local_10;
            }
          }
        }
        else if ((float)_DAT_007e3380 < fVar1) {
          piVar3 = local_14;
          if (*(char *)(iVar13 + 0x3bf9 + (int)param_2) == '\0') {
            piVar3 = _DAT_007e3380;
          }
          if (iVar13 < 4) {
            if ((float)_DAT_007e3380 < local_20) {
              fVar11 = local_20;
              if (fVar1 < local_20) {
                fVar11 = fVar1;
              }
            }
            else {
              piVar3 = (int *)((float)piVar3 * _DAT_007e6800);
              fVar11 = fVar1;
            }
            fVar1 = fVar11;
            if ((float)local_24 < local_18) {
              piVar3 = (int *)((float)piVar3 * _DAT_007e6800);
            }
          }
          local_10 = fVar1 * (float)piVar3 + local_10;
        }
        else if (fVar1 < (float)_DAT_007e3380) {
          if (*(char *)(iVar13 + 0x3bf3 + (int)param_2) == '\0') {
            return 0;
          }
          if (-local_20 < -fVar1) {
            return 0;
          }
          local_c = -fVar1 * (float)local_14 + local_c;
        }
LAB_0046782b:
        iVar13 = iVar13 + 1;
      } while (iVar13 < 6);
      bVar10 = false;
      if (local_6 == '\0') {
        local_30 = 0.0;
        local_20 = 0.0;
        local_2c = 0.0;
        local_14 = (int *)0x0;
        bVar10 = false;
        do {
          if (0 < *(int *)(&stack0x0000005e + (int)local_14 * 4)) {
            local_18 = 1.0;
            if ((&DAT_00dc0fd4)[*(int *)(iVar15 + 6)] == 0) {
              local_24 = (int *)FUN_006b8030(*(int *)(&stack0x0000005e + (int)local_14 * 4));
              local_18 = (float)(int)local_24 * _DAT_007e543c + _DAT_007e3374;
            }
            if ((*(int *)(iVar15 + 0x117e4) < 1) && (*(int *)(iVar15 + 0x117e8) < 1)) {
              local_40 = 0x11;
              local_3e = *(undefined4 *)(&stack0x0000005e + (int)local_14 * 4);
              iVar13 = FUN_00428460(&local_40);
              if (((iVar13 != 0) && (iVar13 != 8)) &&
                 ((*(int *)(iVar13 + 0x76) == 7 || (*(int *)(iVar13 + 0x76) == 2)))) {
                local_18 = 0.0;
              }
            }
            local_10 = local_18 * local_1c * _DAT_007e67f4 + local_10;
          }
          iVar13 = (int)local_14 * 4;
          if (0 < *(int *)(&stack0x00000072 + (int)local_14 * 4)) {
            if (*(int *)(*(int *)(iVar15 + 0x12da) + 0x3b30) != *(int *)((int)param_1 + 6)) {
              cVar12 = (**(code **)(*(int *)(*(int *)(iVar15 + 0x120) + 0x204) + 0x24))
                                 (*(int *)((int)param_1 + 6));
              if (cVar12 != '\0') {
                local_c = local_c + _DAT_007e67f0;
              }
              cVar12 = (**(code **)(*(int *)(*(int *)(iVar15 + 0x120) + 0x216) + 0x24))
                                 (*(undefined4 *)(&stack0x00000072 + iVar13));
              if (cVar12 != '\0') {
                local_c = local_c + _DAT_007e67f0;
              }
            }
            local_c = local_c + _DAT_007e67ec;
            bVar10 = true;
          }
          local_24 = *(int **)(&stack0x00000086 + (int)local_14 * 4);
          if (0 < (int)local_24) {
            local_38 = (int *)param_1[0x1142];
            while (local_38 != (int *)0x0) {
              iVar13 = *local_38;
              local_38 = (int *)local_38[2];
              piVar3 = *(int **)(iVar13 + 0x26);
              while (piVar3 != (int *)0x0) {
                piVar2 = (int *)piVar3[2];
                iVar13 = *piVar3;
                piVar3 = piVar2;
                if ((*(int **)(iVar13 + 0xe) == local_24) &&
                   ((uint)*(ushort *)(iVar13 + 0xc) ==
                    *(uint *)(&stack0x0000009a + (int)local_14 * 4))) {
                  fVar16 = (float10)FUN_004ff410();
                  local_34 = (float)fVar16;
                  fVar16 = (float10)FUN_004ff400();
                  local_20 = (float)(fVar16 * (float10)local_34 + fVar16 * (float10)local_34 +
                                    (float10)local_20);
                  local_30 = _DAT_00dc17f0 + local_30;
                  local_2c = *(float *)(iVar13 + 0x108) * *(float *)(iVar13 + 0xf0) * _DAT_007e543c
                             + local_2c;
                }
              }
            }
          }
          local_38 = *(int **)(&stack0x000000ae + (int)local_14 * 4);
          if (0 < (int)local_38) {
            local_24 = *(int **)(iVar15 + 0x4508);
            while (local_24 != (int *)0x0) {
              iVar13 = *local_24;
              local_24 = (int *)local_24[2];
              piVar3 = *(int **)(iVar13 + 0x26);
              while (piVar3 != (int *)0x0) {
                piVar2 = (int *)piVar3[2];
                iVar13 = *piVar3;
                piVar3 = piVar2;
                if (((int *)*(float *)(iVar13 + 0xe) == local_38) &&
                   ((uint)*(ushort *)(iVar13 + 0xc) ==
                    *(uint *)(&stack0x000000c2 + (int)local_14 * 4))) {
                  bVar10 = true;
                  fVar16 = (float10)FUN_004ff410();
                  local_34 = (float)fVar16;
                  fVar16 = (float10)FUN_004ff400();
                  local_c = (float)(fVar16 * (float10)local_34 * (float10)_DAT_007e4088 +
                                   (float10)local_c);
                }
              }
            }
          }
          piVar3 = local_14;
          if (0 < *(int *)(&stack0x00000036 + (int)local_14 * 4)) {
            iVar13 = FUN_004e9370(*(int *)(&stack0x00000036 + (int)local_14 * 4));
            fVar16 = (float10)FUN_004ed140();
            if (fVar16 <= (float10)_DAT_007e4090) {
              fVar16 = (float10)_DAT_007e4090;
            }
            iVar14 = (&DAT_00dc0fd4)[*(int *)(iVar15 + 6)];
            fVar1 = DAT_00d77b88;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 0x1e8))) {
              fVar1 = *(float *)(*(int *)(iVar15 + 0x120) + 0x1e8);
            }
            fVar11 = DAT_00d77b88;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 0x1e8))) {
              fVar11 = *(float *)(*(int *)(iVar15 + 0x120) + 0x1e8);
            }
            fVar4 = _DAT_00d77b94;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 500))) {
              fVar4 = *(float *)(*(int *)(iVar15 + 0x120) + 500);
            }
            fVar5 = _DAT_00d77b94;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 500))) {
              fVar5 = *(float *)(*(int *)(iVar15 + 0x120) + 500);
            }
            fVar6 = _DAT_00d77b90;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 0x1f0))) {
              fVar6 = *(float *)(*(int *)(iVar15 + 0x120) + 0x1f0);
            }
            fVar7 = _DAT_00d77b90;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 0x1f0))) {
              fVar7 = *(float *)(*(int *)(iVar15 + 0x120) + 0x1f0);
            }
            fVar8 = DAT_00d77b8c;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 0x1ec))) {
              fVar8 = *(float *)(*(int *)(iVar15 + 0x120) + 0x1ec);
            }
            fVar9 = DAT_00d77b8c;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 0x1ec))) {
              fVar9 = *(float *)(*(int *)(iVar15 + 0x120) + 0x1ec);
            }
            local_24 = (int *)(float)((float10)fVar9 * (float10)fVar8 *
                                      (float10)*(float *)(iVar13 + 0x206) * (float10)_DAT_007e67e8 +
                                     (float10)fVar7 * (float10)fVar6 *
                                     (float10)*(float *)(iVar13 + 0x20a) * (float10)_DAT_007e67e8 +
                                     (float10)fVar5 * (float10)fVar4 *
                                     (float10)*(float *)(iVar13 + 0x202) * (float10)_DAT_007e67e8 +
                                     (float10)fVar11 * (float10)fVar1 *
                                     (float10)*(float *)(iVar13 + 0x1fe) * (float10)_DAT_007e67e8 +
                                     fVar16 * (float10)_DAT_007e67e8);
            cVar12 = (**(code **)(*(int *)(iVar15 + 0xe8b2) + 0x24))
                               (*(undefined4 *)(&stack0x00000036 + (int)piVar3 * 4));
            if ((cVar12 != '\0') ||
               (cVar12 = (**(code **)(*(int *)(iVar15 + 0xe8c4) + 0x24))
                                   (*(undefined4 *)(&stack0x00000036 + (int)piVar3 * 4)),
               cVar12 != '\0')) {
              local_24 = (int *)((float)local_24 + (float)local_24);
            }
            cVar12 = FUN_004ea770(iVar15);
            piVar2 = local_24;
            if (cVar12 == '\0') {
              piVar2 = _DAT_007e3380;
              if (*(char *)(iVar13 + 0x470) != '\0') {
                cVar12 = FUN_004e4b60();
                if (cVar12 == '\0') {
                  piVar2 = (int *)((float)local_24 * _DAT_007e6800);
                }
                else {
                  piVar2 = (int *)((float)local_24 * _DAT_007e34c0);
                }
                goto LAB_00467d30;
              }
            }
            else {
LAB_00467d30:
              if ((float)_DAT_007e67e4 < (float)piVar2) {
                piVar2 = _DAT_007e67e4;
              }
            }
            local_10 = (float)piVar2 + local_10;
          }
          if (0 < *(int *)(&stack0x0000004a + (int)piVar3 * 4)) {
            iVar13 = FUN_004e9370(*(int *)(&stack0x0000004a + (int)piVar3 * 4));
            fVar16 = (float10)FUN_004ed140();
            if (fVar16 <= (float10)_DAT_007e4090) {
              fVar16 = (float10)_DAT_007e4090;
            }
            iVar14 = (&DAT_00dc0fd4)[*(int *)(iVar15 + 6)];
            fVar1 = DAT_00d77b88;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 0x1e8))) {
              fVar1 = *(float *)(*(int *)(iVar15 + 0x120) + 0x1e8);
            }
            fVar11 = DAT_00d77b88;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 0x1e8))) {
              fVar11 = *(float *)(*(int *)(iVar15 + 0x120) + 0x1e8);
            }
            fVar4 = _DAT_00d77b94;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 500))) {
              fVar4 = *(float *)(*(int *)(iVar15 + 0x120) + 500);
            }
            fVar5 = _DAT_00d77b94;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 500))) {
              fVar5 = *(float *)(*(int *)(iVar15 + 0x120) + 500);
            }
            fVar6 = _DAT_00d77b90;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 0x1f0))) {
              fVar6 = *(float *)(*(int *)(iVar15 + 0x120) + 0x1f0);
            }
            fVar7 = _DAT_00d77b90;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 0x1f0))) {
              fVar7 = *(float *)(*(int *)(iVar15 + 0x120) + 0x1f0);
            }
            fVar8 = DAT_00d77b8c;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 0x1ec))) {
              fVar8 = *(float *)(*(int *)(iVar15 + 0x120) + 0x1ec);
            }
            fVar9 = DAT_00d77b8c;
            if ((iVar14 == 0) &&
               ((float)_DAT_007e3380 <= *(float *)(*(int *)(iVar15 + 0x120) + 0x1ec))) {
              fVar9 = *(float *)(*(int *)(iVar15 + 0x120) + 0x1ec);
            }
            param_2 = (float)(((float10)fVar9 * (float10)fVar8 * (float10)*(float *)(iVar13 + 0x206)
                               * (float10)_DAT_007e67e8 +
                              (float10)fVar7 * (float10)fVar6 * (float10)*(float *)(iVar13 + 0x20a)
                              * (float10)_DAT_007e67e8 +
                              (float10)fVar5 * (float10)fVar4 * (float10)*(float *)(iVar13 + 0x202)
                              * (float10)_DAT_007e67e8 +
                              (float10)fVar11 * (float10)fVar1 * (float10)*(float *)(iVar13 + 0x1fe)
                              * (float10)_DAT_007e67e8 + fVar16 * (float10)_DAT_007e67e8) *
                             (float10)_DAT_007e67e0);
            cVar12 = (**(code **)(*(int *)(iVar15 + 0xe8b2) + 0x24))
                               (*(undefined4 *)(&stack0x0000004a + (int)piVar3 * 4));
            if ((cVar12 != '\0') ||
               (cVar12 = (**(code **)(*(int *)(iVar15 + 0xe8c4) + 0x24))
                                   (*(undefined4 *)(&stack0x00000036 + (int)piVar3 * 4)),
               cVar12 != '\0')) {
              param_2 = param_2 * _DAT_007e384c;
            }
            iVar13 = *(int *)(iVar13 + 0x482);
            iVar14 = FUN_0044e1d0();
            if (iVar13 != iVar14) {
              param_2 = param_2 * _DAT_007e4094;
            }
            local_c = param_2 + local_c;
            bVar10 = true;
          }
          local_14 = (int *)((int)piVar3 + 1);
          param_1 = local_28;
        } while ((int)local_14 < 5);
        if (0 < *(int *)(iVar15 + 0x3968)) {
          fVar16 = (float10)FUN_0049b210(0x3f000000,0);
          local_38 = (int *)(float)fVar16;
          fVar16 = (float10)FUN_0049b830();
          param_1 = local_28;
          if ((float10)(float)_DAT_007e3380 <
              (float10)(float)local_38 - (fVar16 + (float10)local_2c)) {
            fVar1 = ((float)*(int *)(iVar15 + 0x3968) -
                    ((float)*(int *)(iVar15 + 0x396c) + local_30)) /
                    (float)*(int *)(iVar15 + 0x3968);
            fVar11 = local_20;
            if (fVar1 <= (float)_DAT_007e3380) {
              fVar11 = (fVar1 + _DAT_007e3374) * local_20;
            }
            local_10 = fVar11 + local_10;
          }
        }
      }
      else if (local_5 != false) {
        iVar13 = *(int *)(*(int *)((int)param_2 + 0x12da) + 0x3b30);
        if ((iVar13 != 0) && (iVar13 == *(int *)((int)param_1 + 6))) {
          return 100;
        }
        iVar13 = *(int *)(*(int *)((int)param_1 + 0x12da) + 0x3b30);
        if ((iVar13 != 0) && (iVar13 == *(int *)((int)param_2 + 6))) {
          return 100;
        }
      }
      if ((float)_DAT_007e3380 < local_10) {
        if (local_c <= (float)_DAT_007e3380) {
          return 100;
        }
        if (bVar10) {
          fVar16 = (float10)FUN_005885d0();
          param_2 = (float)(fVar16 * (float10)_DAT_007e543c);
          if (local_5 == false) {
            cVar12 = FUN_0044d860();
            if ((cVar12 != '\0') && (cVar12 = FUN_0044d860(), cVar12 == '\0')) {
              param_2 = param_2 - _DAT_007e3374;
            }
            cVar12 = FUN_0044d880();
            if ((cVar12 != '\0') && (cVar12 = FUN_0044d880(), cVar12 == '\0')) {
              param_2 = param_2 - _DAT_007e3374;
            }
            cVar12 = FUN_0044d840();
            if ((cVar12 != '\0') && (cVar12 = FUN_0044d840(), cVar12 == '\0')) {
              param_2 = param_2 - _DAT_007e3374;
            }
          }
          cVar12 = FUN_0044b300(*(undefined4 *)((int)param_1 + 6));
          if (cVar12 != '\0') {
            param_2 = param_2 + _DAT_007e34c0;
          }
          fVar1 = (float)param_1[0xcd3] * _DAT_007e67dc;
          if (_DAT_007e5e34 <= (float)param_1[0xcd3] * _DAT_007e67dc) {
            fVar1 = _DAT_007e5e34;
          }
          param_2 = param_2 - fVar1;
          if (param_2 <= _DAT_007e5e34) {
            if (param_2 <= (float)_DAT_007e3380) {
              fVar1 = param_2 * local_c * _DAT_007e67d4;
            }
            else {
              fVar1 = param_2 * local_c * _DAT_007e67d8;
            }
          }
          else {
            fVar1 = _DAT_007e5e34 * local_c * _DAT_007e67d8;
          }
          local_c = local_c - fVar1;
        }
        fVar1 = local_10 / local_c - _DAT_007e34c0;
        local_38 = (int *)(int)ROUND((fVar1 + fVar1) * _DAT_007e4088);
        FUN_0044c670(0x12,*(undefined4 *)(iVar15 + 6));
        iVar15 = __ftol();
        iVar15 = iVar15 + (int)local_38;
        if (iVar15 < 0x65) {
          if (iVar15 < 0) {
            iVar15 = 0;
          }
        }
        else {
          iVar15 = 100;
        }
        if (local_7 != '\0') {
          return iVar15;
        }
        if (DAT_00dc18b8 <= iVar15) {
          return iVar15;
        }
      }
    }
  }
  return 0;
}


