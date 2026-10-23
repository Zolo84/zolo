// FUN_00524840 @ 524840 size=3488

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00524840(int *param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined2 *puVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  float10 fVar15;
  int *piVar16;
  undefined4 uVar17;
  int *piVar18;
  float local_44;
  float local_40 [2];
  int *local_38;
  int *local_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c2279;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_34 = param_1;
  cVar4 = FUN_0050c360(param_1);
  if (cVar4 != '\0') {
    ExceptionList = local_c;
    return;
  }
  local_38 = (int *)0x0;
  local_44 = 0.0;
  local_40[0] = 0.0;
  piVar13 = *(int **)((int)param_1 + 0x26);
joined_r0x00524893:
  if (piVar13 != (int *)0x0) {
    cVar4 = (**(code **)(*param_1 + 0x2c))();
    if (cVar4 == '\0') goto LAB_005248d2;
    piVar12 = (int *)piVar13[2];
    iVar5 = *piVar13;
    if (local_44 < *(float *)(iVar5 + 0x2cc)) {
      local_44 = *(float *)(iVar5 + 0x2cc);
    }
    fVar1 = *(float *)(iVar5 + 0x2ec);
    goto LAB_00524909;
  }
  local_44 = *(float *)(param_1[0x92] + 0x13c64) + local_44;
  cVar4 = (**(code **)(*param_1 + 0x30))();
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(*param_1 + 0x2c))();
    if (cVar4 == '\0') goto LAB_0052499b;
    fVar2 = *(float *)(param_1[0x92] + 0xe3bc);
    fVar1 = *(float *)(param_1[0x92] + 0xe3bc);
  }
  else {
    fVar2 = *(float *)(param_1[0x92] + 0xe3a8);
    fVar1 = *(float *)(param_1[0x92] + 0xe3a8);
  }
  local_44 = fVar2 * local_44;
  local_40[0] = fVar1 * local_40[0];
LAB_0052499b:
  piStack_2c = (int *)0x3f800000;
  piStack_24 = &DAT_0089cad8;
  do {
    if (local_38 != (int *)0x0) goto LAB_00524ae9;
    iVar5 = *piStack_24;
    if ((iVar5 != 0) && (cVar4 = FUN_0044b280(*(undefined4 *)(iVar5 + 6)), cVar4 != '\0')) {
      piVar13 = *(int **)(iVar5 + 0x3b6c);
      while ((piVar13 != (int *)0x0 && (local_38 == (int *)0x0))) {
        piVar12 = (int *)piVar13[2];
        piVar18 = (int *)*piVar13;
        piVar13 = piVar12;
        if ((0 < *(int *)((int)piVar18 + 0x12e)) &&
           (cVar4 = FUN_004d5c00(param_1[3]), cVar4 != '\0')) {
          piStack_30 = *(int **)(iVar5 + 0xe306);
          if ((float)piStack_30 <= (float)_DAT_007e3380) {
            piStack_30 = (int *)0x38d1b717;
          }
          piStack_28 = (int *)(local_44 / (float)piStack_30);
          fVar1 = (*(float *)(param_1[0x92] + 0x37c2) + *(float *)(iVar5 + 0x37c6)) - _DAT_007e7a60;
          if ((float)_DAT_007e3380 < fVar1) {
            piStack_28 = (int *)((fVar1 * _DAT_007e543c + (float)_DAT_007e3374) * (float)piStack_28)
            ;
          }
          iStack_20 = _rand();
          iStack_20 = iStack_20 % 0x32;
          if ((float)iStack_20 < (float)piStack_28) {
            FUN_004d2f00();
            local_38 = piVar18;
            piStack_2c = piStack_30;
          }
        }
      }
    }
    piStack_24 = piStack_24 + 1;
  } while ((int)piStack_24 < 0x89d038);
  if (local_38 != (int *)0x0) {
LAB_00524ae9:
    iVar5 = (**(code **)(*(int *)((int)param_1 + 0x22) + 4))();
    if (0 < iVar5) {
      piStack_24 = (int *)local_40[0];
      cVar4 = (**(code **)(*param_1 + 0x30))();
      if (cVar4 != '\0') {
        piStack_24 = (int *)(local_40[0] * _DAT_007e3848);
      }
      fVar15 = (float10)FUN_004d2f00();
      if ((float10)(float)piStack_24 < fVar15 * (float10)(float)piStack_2c) {
        puVar6 = operator_new(0xc);
        uStack_4 = 0;
        puStack_18 = puVar6;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          FUN_004c0150(0xe6,param_1 + 6);
          *puVar6 = &PTR_FUN_007e3e3c;
        }
        uStack_4 = 0xffffffff;
        FUN_00565bc0(puVar6);
        ExceptionList = local_c;
        return;
      }
      puStack_18 = operator_new(700);
      piVar13 = local_38;
      uStack_4 = 1;
      if (puStack_18 == (undefined4 *)0x0) {
        piStack_28 = (int *)0x0;
      }
      else {
        piStack_28 = (int *)FUN_005169b0(*(undefined4 *)((int)local_38 + 0x12a));
      }
      piVar12 = piStack_28;
      uStack_4 = 0xffffffff;
      (**(code **)(piStack_28[5] + 8))();
      (**(code **)(*piVar12 + 0x38))(*(undefined4 *)((int)piVar13 + 0x12a));
      piStack_24 = *(int **)((int)piVar13 + 0x132);
      local_44 = (float)(int)piStack_24;
      piStack_28 = (int *)local_44;
      iVar5 = (**(code **)(*(int *)((int)piVar13 + 0x10a) + 4))();
      local_44 = local_44 / ((float)iVar5 * (float)piStack_30);
      if ((float)piStack_28 < local_44) {
        local_44 = (float)piStack_28;
      }
      if (((float)_DAT_007e3380 < local_44) && (local_44 < (float)_DAT_007e3374)) {
        local_44 = 1.0;
      }
      piStack_24 = *(int **)((int)piVar13 + 0x12e);
      fVar1 = (float)(int)piStack_24;
      piStack_28 = (int *)fVar1;
      piStack_24 = (int *)(**(code **)(*(int *)((int)piVar13 + 0x10a) + 4))();
      piVar18 = (int *)(fVar1 / ((float)(int)piStack_24 / (float)piStack_30));
      if ((float)piStack_28 < (float)piVar18) {
        piVar18 = piStack_28;
      }
      if (((float)_DAT_007e3380 < (float)piVar18) && ((float)piVar18 < (float)_DAT_007e3374)) {
        piVar18 = (int *)0x3f800000;
      }
      iVar5 = FUN_0044c450(0x19);
      iVar5 = iVar5 + _DAT_00dc1604;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      piStack_24 = (int *)FUN_0044c3d0(0x19,iVar5);
      iVar5 = FUN_0044c450(0x1e);
      iVar5 = iVar5 + _DAT_00877238;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      uStack_1c = FUN_0044c3d0(0x1e,iVar5);
      piStack_28 = (int *)0x0;
      if (*(char *)(*(int *)((int)piVar13 + 0x12a) + 0x4aeb) != '\0') {
        iVar5 = FUN_0044c450(0x1b);
        iVar5 = iVar5 + _DAT_00dc1608;
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        piStack_28 = (int *)FUN_0044c3d0(0x1b,iVar5);
      }
      local_34 = (int *)0x0;
      piVar3 = _DAT_007e3380;
      while ((float)piVar3 < local_44) {
        puVar6 = operator_new(0x300);
        puStack_8 = (undefined1 *)0x2;
        puStack_18 = puVar6;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          FUN_004fb840();
          *puVar6 = &PTR_FUN_007e69a8;
          puVar6[2] = &PTR_LAB_007e6994;
          *(undefined ***)((int)puVar6 + 0x12) = &PTR_FUN_007e698c;
          puVar7 = puVar6 + 0xb3;
          for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          *(undefined1 *)((int)puVar6 + 0x161) = 1;
        }
        puStack_8 = (undefined1 *)0xffffffff;
        (**(code **)(puVar6[2] + 8))();
        piVar3 = piStack_28;
        puVar6[0x17] = *(undefined4 *)((int)piVar13 + 0x12a);
        piVar16 = piStack_24;
        if ((piStack_28 != (int *)0x0) &&
           (iVar5 = _rand(), piVar16 = piStack_24, iVar5 % 100 < DAT_00dc160c)) {
          piVar16 = piVar3;
        }
        FUN_004fcfd0(piVar16,0);
        iVar5 = *(int *)((int)piVar12 + 0x2a);
        puVar7 = operator_new(0xe);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = puVar6;
          puVar7[1] = iVar5;
          puVar7[2] = 0;
          *(undefined1 *)(puVar7 + 3) = 0;
        }
        iVar10 = *(int *)((int)piVar12 + 0x2e);
        *(undefined4 **)((int)piVar12 + 0x2a) = puVar7;
        *(int *)((int)piVar12 + 0x2e) = iVar10 + 1;
        if (iVar10 == 0) {
          *(undefined4 **)((int)piVar12 + 0x26) = puVar7;
        }
        else {
          *(undefined4 **)(iVar5 + 8) = puVar7;
        }
        local_34 = (int *)((int)local_34 + 1);
        piVar3 = (int *)(float)(int)local_34;
      }
      local_34 = (int *)0x0;
      piVar3 = _DAT_007e3380;
      while ((float)piVar3 < (float)piVar18) {
        puVar6 = operator_new(0x300);
        puStack_8 = (undefined1 *)0x3;
        puStack_18 = puVar6;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          FUN_004fb840();
          *puVar6 = &PTR_FUN_007e69a8;
          puVar6[2] = &PTR_LAB_007e6994;
          *(undefined ***)((int)puVar6 + 0x12) = &PTR_FUN_007e698c;
          puVar7 = puVar6 + 0xb3;
          for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          *(undefined1 *)((int)puVar6 + 0x161) = 1;
        }
        puStack_8 = (undefined1 *)0xffffffff;
        (**(code **)(puVar6[2] + 8))();
        puVar6[0x17] = *(undefined4 *)((int)piVar13 + 0x12a);
        FUN_004fcfd0(uStack_1c,0);
        iVar5 = *(int *)((int)piVar12 + 0x2a);
        puVar7 = operator_new(0xe);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = puVar6;
          puVar7[1] = iVar5;
          puVar7[2] = 0;
          *(undefined1 *)(puVar7 + 3) = 0;
        }
        iVar10 = *(int *)((int)piVar12 + 0x2e);
        *(undefined4 **)((int)piVar12 + 0x2a) = puVar7;
        *(int *)((int)piVar12 + 0x2e) = iVar10 + 1;
        if (iVar10 == 0) {
          *(undefined4 **)((int)piVar12 + 0x26) = puVar7;
        }
        else {
          *(undefined4 **)(iVar5 + 8) = puVar7;
        }
        local_34 = (int *)((int)local_34 + 1);
        piVar3 = (int *)(float)(int)local_34;
      }
      puStack_18 = (undefined4 *)(**(code **)(*(int *)((int)piVar12 + 0x22) + 4))();
      piVar13 = local_34;
      if ((float)_DAT_007e3380 < (float)(int)puStack_18) {
        puStack_18 = *(undefined4 **)((int)local_34 + 0x176);
        cVar4 = (**(code **)(*local_34 + 0x2c))();
        if (cVar4 == '\0') {
          puStack_14 = operator_new(0xf0);
          uStack_4 = 5;
          if (puStack_14 == (void *)0x0) {
            piVar18 = (int *)0x0;
          }
          else {
            uVar8 = FUN_004e9370(piVar13[3]);
            uVar17 = 5;
            uVar9 = FUN_00428eb0(local_40,5);
            piVar18 = (int *)FUN_004b42d0(uVar8,uVar9,uVar17);
          }
        }
        else {
          puStack_14 = operator_new(0xb8);
          uStack_4 = 4;
          if (puStack_14 == (void *)0x0) {
            piVar18 = (int *)0x0;
          }
          else {
            uVar8 = FUN_004e9370(piVar13[3]);
            uVar9 = FUN_00428eb0(&iStack_20);
            piVar18 = (int *)FUN_004c5530(uVar8,uVar9);
          }
          *(undefined1 *)((int)piVar18 + 0x9b) = 1;
        }
        uStack_4 = 0xffffffff;
        FUN_004bd9e0(piVar13,1);
        FUN_004bd9e0(piVar12,0);
        (**(code **)(*piVar18 + 0x68))();
        if (piVar18[0x1d] == 2) {
          fVar15 = (float10)FUN_004c5f80(0x42c80000);
          if ((float)fVar15 <= (float)_DAT_007e3374) {
            if ((float)fVar15 < (float)_DAT_007e3380) {
              fVar15 = (float10)(float)_DAT_007e3380;
            }
          }
          else {
            fVar15 = (float10)(float)_DAT_007e3374;
          }
          piVar18[0x2d] = (int)(float)fVar15;
          piStack_24 = *(int **)(piVar13[0x92] + 0xe3bc);
          piVar3 = _DAT_007e3374;
          if (((float)piStack_24 <= (float)_DAT_007e3374) &&
             (piVar3 = piStack_24, (float)piStack_24 < (float)_DAT_007e3380)) {
            piVar3 = _DAT_007e3380;
          }
          *(int **)(piVar18[0x20] + 100) = piVar3;
          piVar3 = _DAT_007e3374;
          if (((float)piStack_2c <= (float)_DAT_007e3374) &&
             (piVar3 = piStack_2c, (float)piStack_2c < (float)_DAT_007e3380)) {
            piVar3 = _DAT_007e3380;
          }
          *(int **)(piVar18[0x21] + 100) = piVar3;
        }
        (**(code **)(*(int *)piVar18[0x20] + 0x1c))(piVar18[0x21]);
        (**(code **)(*(int *)piVar18[0x21] + 0x1c))(piVar18[0x20]);
        piVar3 = *(int **)((int)piVar12 + 0x26);
        local_34 = _DAT_007e3380;
        local_38 = _DAT_007e3380;
        while (piVar3 != (int *)0x0) {
          piVar16 = (int *)piVar3[2];
          iVar5 = *piVar3;
          piVar3 = piVar16;
          if (_DAT_007e8d04 < *(float *)(iVar5 + 0x7c)) {
            if (*(int *)(iVar5 + 0x134) == 0x19) {
              local_34 = (int *)((float)local_34 + (float)_DAT_007e3374);
            }
            else {
              fVar1 = *(float *)(iVar5 + 0x7c);
              if (*(float *)(iVar5 + 0xec) < fVar1) {
                fVar1 = *(float *)(iVar5 + 0xec);
              }
              local_38 = (int *)((fVar1 - _DAT_007e8d04) * _DAT_007e8d00 + (float)_DAT_007e3374 +
                                (float)local_38);
            }
          }
        }
        iVar10 = FUN_004e9370(piVar13[3]);
        iVar5 = DAT_00893530;
        *(undefined4 *)(iVar10 + 0x3c2) = *(undefined4 *)(DAT_00893530 + 0x14);
        *(undefined2 *)(iVar10 + 0x3c6) = *(undefined2 *)(iVar5 + 0x18);
        (**(code **)(piVar13[0x47] + 0x18))(piVar18);
        *(undefined4 **)((int)piVar13 + 0x176) = puStack_18;
        puVar6 = operator_new(0xc);
        uStack_4 = 6;
        puStack_14 = puVar6;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar11 = operator_new(0x12);
          uStack_4 = CONCAT31(uStack_4._1_3_,7);
          puStack_18 = (undefined4 *)puVar11;
          if (puVar11 == (undefined2 *)0x0) {
            puVar11 = (undefined2 *)0x0;
          }
          else {
            FUN_0042d6c0();
          }
          puVar6[1] = puVar11;
          *(undefined1 *)(puVar6 + 2) = 0;
          *(undefined1 *)((int)puVar6 + 9) = 1;
          *puVar6 = &PTR_FUN_007e5f80;
          *(undefined1 *)((int)puVar6 + 10) = 0;
          *puVar11 = 0x191;
          iVar5 = puVar6[1];
          *(int *)(iVar5 + 8) = local_34[6];
          *(short *)(iVar5 + 0xc) = (short)local_34[7];
          puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          iVar5 = puVar6[1];
          *(undefined4 *)(iVar5 + 2) = *puVar7;
          *(undefined2 *)(iVar5 + 6) = *(undefined2 *)(puVar7 + 1);
          iVar5 = puVar6[1];
          *puVar6 = &PTR_FUN_007e5f60;
          uVar8 = __ftol();
          *(undefined4 *)(iVar5 + 0xe) = uVar8;
          piVar13 = local_34;
        }
        uStack_4 = 0xffffffff;
        FUN_00565ca0(puVar6);
        FUN_004bc8f0(4);
        if ((((char)piVar13[0x33] != '\0') || ((float)_DAT_007e3380 < (float)piStack_2c)) ||
           ((float)_DAT_007e3380 < (float)piStack_30)) {
          uVar8 = *(undefined4 *)((int)local_38 + 0x12a);
          uVar9 = FUN_004e9370(piVar13[3]);
          FUN_006ad820(0x24,&LAB_005271b0,uVar8,uVar9);
          puVar6 = operator_new(0xc);
          uStack_4 = 8;
          puStack_14 = puVar6;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            iVar5 = local_34[3];
            puVar11 = operator_new(0x26);
            uStack_4 = CONCAT31(uStack_4._1_3_,9);
            puStack_18 = (undefined4 *)puVar11;
            if (puVar11 == (undefined2 *)0x0) {
              puVar11 = (undefined2 *)0x0;
            }
            else {
              FUN_0042d6c0();
              puVar11[7] = 0;
              *(undefined4 *)(puVar11 + 8) = 0;
              puVar11[0x10] = 0;
              *(undefined4 *)(puVar11 + 0x11) = 0;
            }
            FUN_0042d320(puVar11);
            piVar12 = local_38;
            *puVar6 = &PTR_FUN_007e8ce0;
            *(undefined1 *)((int)puVar6 + 10) = 0;
            piVar13 = local_38 + 3;
            *(undefined2 *)puVar6[1] = 0xf5;
            iVar10 = puVar6[1];
            *(int *)(iVar10 + 8) = *piVar13;
            *(short *)(iVar10 + 0xc) = (short)local_38[4];
            puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
            iVar10 = puVar6[1];
            *(undefined4 *)(iVar10 + 2) = *puVar7;
            *(undefined2 *)(iVar10 + 6) = *(undefined2 *)(puVar7 + 1);
            iVar10 = puVar6[1];
            *puVar6 = &PTR_FUN_007e8cc0;
            *(int *)(iVar10 + 0xe) = *piVar13;
            *(short *)(iVar10 + 0x12) = (short)piVar12[4];
            iVar10 = puVar6[1];
            *(int *)(iVar10 + 0x20) = local_34[6];
            *(short *)(iVar10 + 0x24) = (short)local_34[7];
            iVar10 = puVar6[1];
            uVar8 = __ftol();
            *(undefined4 *)(iVar10 + 0x14) = uVar8;
            iVar10 = puVar6[1];
            uVar8 = __ftol();
            *(undefined4 *)(iVar10 + 0x18) = uVar8;
            *(int *)(puVar6[1] + 0x1c) = iVar5;
            piVar12 = piStack_28;
            piVar13 = local_34;
          }
          uStack_4 = 0xffffffff;
          FUN_00565ca0(puVar6);
        }
        else {
          puVar6 = operator_new(0xc);
          uStack_4 = 10;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
            puStack_14 = (undefined4 *)0x0;
          }
          else {
            puStack_14 = puVar6;
            puVar11 = operator_new(0xe);
            if (puVar11 == (undefined2 *)0x0) {
              puVar11 = (undefined2 *)0x0;
            }
            else {
              puVar11[3] = 0;
              *(undefined1 *)(puVar11 + 2) = 0;
              *(undefined1 *)((int)puVar11 + 3) = 0;
              *(undefined1 *)(puVar11 + 1) = 0;
              puVar11[4] = 0;
              *(undefined4 *)(puVar11 + 5) = 0;
            }
            puVar6[1] = puVar11;
            *(undefined1 *)(puVar6 + 2) = 0;
            *(undefined1 *)((int)puVar6 + 9) = 1;
            *puVar6 = &PTR_FUN_007e3e5c;
            *(undefined1 *)((int)puVar6 + 10) = 0;
            *puVar11 = 0xe6;
            iVar5 = puVar6[1];
            *(int *)(iVar5 + 8) = piVar13[6];
            *(short *)(iVar5 + 0xc) = (short)piVar13[7];
            iVar5 = puVar6[1];
            puStack_14 = (undefined4 *)((uint)puStack_14 & 0xff000000);
            *(undefined4 **)(iVar5 + 2) = puStack_14;
            *(undefined2 *)(iVar5 + 6) = 0;
            *puVar6 = &PTR_FUN_007e3e3c;
          }
          uStack_4 = 0xffffffff;
          FUN_00565bc0(puVar6);
        }
        if (piVar18 != (int *)0x0) {
          (**(code **)*piVar18)(1);
        }
      }
      uVar14 = -(uint)(piVar12 != (int *)0x0) & (int)piVar12 + 0x22U;
      piVar18 = *(int **)(uVar14 + 4);
      while (piVar18 != (int *)0x0) {
        piVar13 = (int *)piVar18[2];
        if ((undefined4 *)*piVar18 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar18)(1);
        }
        FUN_00796cd8(piVar18);
        piVar18 = piVar13;
        piVar13 = local_34;
      }
      *(undefined4 *)(uVar14 + 4) = 0;
      *(undefined4 *)(uVar14 + 8) = 0;
      *(undefined4 *)(uVar14 + 0xc) = 0;
      *(undefined1 *)((int)piVar12 + 0x17d) = 1;
      if (piVar12 != (int *)0x0) {
        (**(code **)*piVar12)(1);
      }
      iVar5 = DAT_00893530;
      piVar13[0x4d] = *(int *)(DAT_00893530 + 0x14);
      *(undefined2 *)(piVar13 + 0x4e) = *(undefined2 *)(iVar5 + 0x18);
    }
  }
  ExceptionList = local_c;
  return;
LAB_005248d2:
  cVar4 = (**(code **)(*param_1 + 0x30))();
  if (cVar4 != '\0') {
    piVar12 = (int *)piVar13[2];
    iVar5 = *piVar13;
    if (local_44 < *(float *)(iVar5 + 0x2d0)) {
      local_44 = *(float *)(iVar5 + 0x2d0);
    }
    fVar1 = *(float *)(iVar5 + 0x2e8);
LAB_00524909:
    local_40[0] = *(float *)(iVar5 + 0xf4) * fVar1 * *(float *)(iVar5 + 0xec) * _DAT_007e8d08 +
                  local_40[0];
    piVar13 = piVar12;
  }
  goto joined_r0x00524893;
}


