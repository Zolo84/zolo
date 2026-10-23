// FUN_004b6220 @ 4b6220 size=4379

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b6220(int *param_1)

{
  void *pvVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined2 *puVar12;
  int iVar13;
  int *piVar14;
  float *pfVar15;
  bool bVar16;
  float10 fVar17;
  float local_90 [11];
  undefined **local_64;
  int *local_60;
  int *local_5c;
  int local_58;
  int *local_50;
  float *local_48;
  undefined4 *local_40;
  int *local_3c;
  undefined4 *local_38;
  int *local_34;
  undefined2 local_30;
  int *local_2c;
  undefined2 *local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  float local_18;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007be744;
  local_10 = ExceptionList;
  local_24 = *(int *)(param_1[0x10] + 0x78);
  ExceptionList = &local_10;
  local_2c = param_1;
  piVar5 = operator_new(0x98);
  iVar13 = 0;
  local_8 = 0;
  local_50 = piVar5;
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    local_48 = *(float **)(local_24 + 0x12);
    FUN_00416730();
    *piVar5 = (int)&PTR_FUN_007e74b8;
    piVar5[0x25] = (int)local_48;
    piVar5[2] = (int)&PTR_LAB_007e74b4;
    *(undefined ***)((int)piVar5 + 0x7e) = &PTR_LAB_007e74b0;
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar5 + 0x2c))();
  FUN_00413d60();
  FUN_00415f20();
  (**(code **)(*piVar5 + 0x18))();
  (**(code **)(*piVar5 + 0x34))();
  *(undefined4 *)((int)piVar5 + 0x22) = 0;
  *(undefined4 *)((int)piVar5 + 0x26) = 5;
  *(undefined1 *)((int)piVar5 + 0x67) = 0;
  (**(code **)(*piVar5 + 0x38))();
  FUN_0040fd60();
  (**(code **)(*DAT_00bd0e18 + 0x20))();
  local_11 = '\0';
  local_28 = (undefined2 *)0x0;
  iVar6 = (**(code **)(*param_1 + 0x18))();
  local_34 = *(int **)(iVar6 + 4);
  while ((local_34 != (int *)0x0 && (local_11 == '\0'))) {
    piVar5 = (int *)*local_34;
    local_34 = (int *)local_34[2];
    cVar4 = (**(code **)(*piVar5 + 0x7c))();
    if (cVar4 != '\0') {
      puVar8 = *(undefined4 **)((int)piVar5 + 0x26);
      while ((puVar8 != (undefined4 *)0x0 && (local_11 == '\0'))) {
        puVar10 = (undefined4 *)puVar8[2];
        puVar12 = (undefined2 *)*puVar8;
        puVar8 = puVar10;
        if (*(char *)((int)puVar12 + 0x15b) != '\0') {
          local_11 = '\x01';
          *(undefined1 *)((int)puVar12 + 0x15b) = 0;
          local_28 = puVar12;
        }
      }
    }
  }
  cVar4 = FUN_0042e980();
  if ((cVar4 != '\0') && (local_28 != (undefined2 *)0x0)) {
    (**(code **)(*param_1 + 0x18))();
    iVar6 = FUN_00522770();
    local_18 = *(float *)(iVar6 + 0xe31a);
    iVar6 = (**(code **)(*param_1 + 0x18))();
    local_50 = *(int **)(*(int *)(**(int **)(iVar6 + 4) + 0x248) + 6);
    FUN_00457e10();
    local_64 = &PTR_FUN_007e4c84;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    piVar5 = *(int **)(*(int *)(local_24 + 0x1c2) + 4);
    piVar14 = local_60;
joined_r0x004b63ea:
    local_60 = piVar14;
    if (piVar5 != (int *)0x0) {
      piVar2 = (int *)*piVar5;
      local_20 = (int *)piVar5[2];
      piVar5 = local_20;
      piVar14 = local_60;
      local_1c = piVar2;
      if ((*(char *)((int)piVar2 + 0x17d) == '\0') &&
         (cVar4 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 8))(), piVar5 = local_20,
         piVar14 = local_60, cVar4 == '\0')) {
        cVar4 = (**(code **)(*piVar2 + 0x30))();
        if (cVar4 != '\0') {
          piVar5 = (int *)(**(code **)(*param_1 + 0x18))();
          piVar7 = (int *)(**(code **)(*piVar5 + 0x28))();
          piVar5 = local_20;
          piVar14 = local_60;
          if (*piVar7 != 0) goto joined_r0x004b63ea;
          iVar6 = (**(code **)(*piVar2 + 0x18))();
          iVar6 = (**(code **)(**(int **)(iVar6 + 0x294) + 4))();
          if (0 < iVar6) {
            iVar6 = (**(code **)(*piVar2 + 0x18))();
            piVar5 = *(int **)(*(int *)(iVar6 + 0x294) + 4);
            piVar14 = local_60;
            while (local_60 = piVar14, piVar5 != (int *)0x0) {
              piVar14 = (int *)piVar5[2];
              iVar6 = *piVar5;
              piVar5 = piVar14;
              piVar14 = local_60;
              if ((*(char *)(iVar6 + 0x17d) == '\0') &&
                 (cVar4 = (**(code **)(*(int *)(iVar6 + 0x22) + 8))(), piVar14 = local_60,
                 cVar4 == '\0')) {
                local_3c = local_5c;
                local_40 = operator_new(0xe);
                local_8._0_1_ = 2;
                if (local_40 == (undefined4 *)0x0) {
                  local_5c = (int *)0x0;
                }
                else {
                  local_5c = (int *)FUN_0045bab0(iVar6);
                }
                local_8._0_1_ = 1;
                iVar6 = local_58 + 1;
                bVar16 = local_58 != 0;
                piVar14 = local_5c;
                local_58 = iVar6;
                if (bVar16) {
                  local_3c[2] = (int)local_5c;
                  piVar14 = local_60;
                }
              }
            }
          }
        }
        piVar2 = local_5c;
        local_40 = operator_new(0xe);
        local_8._0_1_ = 3;
        if (local_40 == (undefined4 *)0x0) {
          local_5c = (int *)0x0;
        }
        else {
          local_5c = (int *)FUN_0045bab0(local_1c);
        }
        local_8._0_1_ = 1;
        iVar6 = local_58 + 1;
        bVar16 = local_58 != 0;
        piVar5 = local_20;
        param_1 = local_2c;
        piVar14 = local_5c;
        local_58 = iVar6;
        if (bVar16) {
          piVar2[2] = (int)local_5c;
          piVar14 = local_60;
        }
      }
      goto joined_r0x004b63ea;
    }
    piVar5 = local_60;
    if (*(int *)(local_24 + 0x46a) != 0) {
      piVar14 = *(int **)(*(int *)(local_24 + 0x46a) + 0x34);
      while (local_60 = piVar5, piVar5 = local_60, piVar14 != (int *)0x0) {
        local_20 = (int *)piVar14[2];
        piVar2 = (int *)*piVar14;
        piVar14 = local_20;
        local_1c = piVar2;
        if ((*(char *)((int)piVar2 + 0x17d) == '\0') &&
           (cVar4 = (**(code **)(*(int *)((int)piVar2 + 0x22) + 8))(), piVar5 = local_60,
           cVar4 == '\0')) {
          cVar4 = (**(code **)(*piVar2 + 0x2c))();
          if (cVar4 != '\0') {
            (**(code **)(*piVar2 + 0x14))();
            iVar6 = FUN_00517bf0();
            if (iVar6 != 0) {
              iVar6 = (**(code **)(*piVar2 + 0x14))();
              piVar5 = *(int **)(*(int *)(iVar6 + 0x2aa) + 4);
              piVar14 = local_60;
              while (local_60 = piVar14, piVar5 != (int *)0x0) {
                piVar14 = (int *)piVar5[2];
                iVar6 = *piVar5;
                piVar5 = piVar14;
                piVar14 = local_60;
                if ((*(char *)(iVar6 + 0x17d) == '\0') &&
                   (cVar4 = (**(code **)(*(int *)(iVar6 + 0x22) + 8))(), piVar14 = local_60,
                   cVar4 == '\0')) {
                  local_3c = local_5c;
                  local_5c = operator_new(0xe);
                  if (local_5c == (int *)0x0) {
                    local_5c = (int *)0x0;
                  }
                  else {
                    *local_5c = iVar6;
                    local_5c[1] = (int)local_3c;
                    local_5c[2] = 0;
                    *(undefined1 *)(local_5c + 3) = 0;
                  }
                  iVar6 = local_58 + 1;
                  bVar16 = local_58 != 0;
                  piVar14 = local_5c;
                  local_58 = iVar6;
                  if (bVar16) {
                    local_3c[2] = (int)local_5c;
                    piVar14 = local_60;
                  }
                }
              }
            }
          }
          piVar2 = local_5c;
          local_5c = operator_new(0xe);
          if (local_5c == (int *)0x0) {
            local_5c = (int *)0x0;
          }
          else {
            local_5c[1] = (int)piVar2;
            *local_5c = (int)local_1c;
            local_5c[2] = 0;
            *(undefined1 *)(local_5c + 3) = 0;
          }
          iVar6 = local_58 + 1;
          bVar16 = local_58 != 0;
          piVar14 = local_20;
          piVar5 = local_5c;
          local_58 = iVar6;
          if (bVar16) {
            piVar2[2] = (int)local_5c;
            piVar5 = local_60;
          }
        }
      }
    }
    while (piVar5 != (int *)0x0) {
      local_20 = (int *)piVar5[2];
      local_48 = (float *)*piVar5;
      local_12 = '\0';
      local_11 = '\0';
      cVar4 = FUN_0044b280();
      if (cVar4 == '\0') {
        cVar4 = FUN_0044a690();
        if (cVar4 == '\0') {
          local_34 = (int *)0x5;
        }
        else {
          local_34 = (int *)0x1;
          local_11 = '\x01';
        }
      }
      else {
        local_34 = (int *)0x2;
      }
      piVar14 = *(int **)((int)local_48 + 0x26);
      piVar5 = local_20;
      if (piVar14 != (int *)0x0) {
        do {
          piVar5 = (int *)piVar14[2];
          iVar6 = *piVar14;
          local_3c = piVar5;
          if (*(float *)(iVar6 + 0xec) <= _DAT_007e3374) {
            local_1c = (int *)0x0;
          }
          else {
            local_40 = (undefined4 *)_rand();
            fVar3 = ((float)(int)local_40 * _DAT_007e68c0 + (float)_DAT_007e7110) * _DAT_00877424 *
                    local_18;
            if ((local_11 != '\0') && (_DAT_00877428 < fVar3)) {
              fVar3 = _DAT_00877428;
            }
            local_1c = (int *)(*(float *)(iVar6 + 0xec) * fVar3);
            if (*(float *)(iVar6 + 0xec) - (float)local_1c < _DAT_007e3374) {
              local_1c = (int *)(*(float *)(iVar6 + 0xec) - _DAT_007e3374);
            }
          }
          fVar3 = _DAT_00877430;
          if (local_11 != '\0') {
            fVar3 = _DAT_0087742c;
          }
          local_38 = (undefined4 *)(*(float *)(iVar6 + 0xf4) * fVar3);
          if (DAT_00dc191a == '\0') {
            puVar8 = operator_new(0xc);
            local_8._0_1_ = 4;
            local_40 = puVar8;
            if (puVar8 != (undefined4 *)0x0) {
              FUN_004b7b00();
              *puVar8 = &PTR_FUN_007e6e2c;
              *(int **)(puVar8[1] + 0xe) = local_1c;
              *(undefined4 **)(puVar8[1] + 0x12) = local_38;
              *(undefined1 *)(puVar8[1] + 0x16) = 0;
              *(undefined1 *)(puVar8[1] + 0x17) = 1;
            }
            local_8._0_1_ = 1;
            FUN_00565bc0();
            piVar14 = local_3c;
          }
          else {
            local_40 = *(undefined4 **)(*(int *)(local_28 + 0x2e) + 6);
            piVar14 = *(int **)(iVar6 + 0x2c);
            do {
              if (piVar14 == (int *)0x0) {
                piVar5 = operator_new(8);
                *piVar5 = (int)local_40;
                piVar5[1] = (int)local_1c;
                local_40 = *(undefined4 **)(iVar6 + 0x30);
                puVar8 = operator_new(0xe);
                if (puVar8 == (undefined4 *)0x0) {
                  puVar8 = (undefined4 *)0x0;
                }
                else {
                  *puVar8 = piVar5;
                  puVar8[1] = local_40;
                  puVar8[2] = 0;
                  *(undefined1 *)(puVar8 + 3) = 0;
                }
                iVar9 = *(int *)(iVar6 + 0x34);
                *(undefined4 **)(iVar6 + 0x30) = puVar8;
                *(int *)(iVar6 + 0x34) = iVar9 + 1;
                piVar5 = local_3c;
                if (iVar9 == 0) {
                  *(undefined4 **)(iVar6 + 0x2c) = puVar8;
                }
                else {
                  *(undefined4 **)((int)local_40 + 8) = puVar8;
                }
                goto LAB_004b6802;
              }
              piVar2 = (int *)*piVar14;
              piVar14 = (int *)piVar14[2];
            } while ((undefined4 *)*piVar2 != local_40);
            piVar2[1] = (int)((float)local_1c + (float)piVar2[1]);
LAB_004b6802:
            FUN_00447250();
            local_40 = (undefined4 *)&stack0xffffff44;
            FUN_004b7e10();
            FUN_0049a190();
            *(float *)(iVar6 + 0x7c) = (float)local_1c + *(float *)(iVar6 + 0x7c);
            *(float *)(iVar6 + 0x80) = (float)local_38 + *(float *)(iVar6 + 0x80);
            FUN_004fc2e0(0);
            fVar3 = _DAT_007e3380;
            *(undefined4 *)(iVar6 + 0x7c) = 0;
            *(undefined4 *)(iVar6 + 0x80) = 0;
            *(undefined4 *)(iVar6 + 0x84) = 0;
            piVar14 = piVar5;
            if ((fVar3 < (float)local_1c) && (local_34 == (int *)0x5)) {
              local_12 = '\x01';
            }
          }
        } while (piVar14 != (int *)0x0);
        piVar5 = local_20;
        if (local_12 != '\0') {
          puVar8 = operator_new(0xc);
          local_8._0_1_ = 5;
          local_40 = puVar8;
          if (puVar8 != (undefined4 *)0x0) {
            FUN_00499310();
            *puVar8 = &PTR_FUN_007e5f60;
            *(undefined4 *)(puVar8[1] + 0xe) = 5;
          }
          local_8._0_1_ = 1;
          FUN_00565bc0();
          piVar5 = local_20;
        }
      }
    }
    (*(code *)local_64[4])();
    puVar8 = operator_new(0xc);
    iVar6 = local_24;
    local_8._0_1_ = 6;
    local_38 = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      local_3c = (int *)local_2c[0x10];
      local_40 = *(undefined4 **)(local_24 + 0x12);
      local_48 = *(float **)(*(int *)(local_24 + 0x3d8) + 6);
      local_50 = *(int **)(*(int *)(local_28 + 0x2e) + 6);
      local_34 = *(int **)(DAT_00893530 + 0x14);
      local_30 = *(undefined2 *)(DAT_00893530 + 0x18);
      FUN_004b7e20();
      *puVar8 = &PTR_FUN_007e7490;
      *(int **)(puVar8[1] + 0xe) = local_50;
      *(float **)(puVar8[1] + 0x12) = local_48;
      *(undefined4 **)(puVar8[1] + 0x16) = local_40;
      iVar9 = puVar8[1];
      *(int **)(iVar9 + 0x1a) = local_34;
      *(undefined2 *)(iVar9 + 0x1e) = local_30;
      iVar9 = puVar8[1];
      *(int *)(iVar9 + 0x20) = local_3c[3];
      *(short *)(iVar9 + 0x24) = (short)local_3c[4];
    }
    local_8._0_1_ = 1;
    FUN_00565bc0();
    local_50 = (int *)DAT_00d7cba4;
    fVar17 = (float10)FUN_004ee170();
    local_48 = (float *)(float)(fVar17 * (float10)(float)local_50 * (float10)local_18);
    puVar8 = operator_new(0xc);
    local_8._0_1_ = 7;
    local_50 = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      FUN_004b7cc0();
      *puVar8 = &PTR_FUN_007e7470;
      *(float **)(puVar8[1] + 0xe) = local_48;
    }
    local_8._0_1_ = 1;
    FUN_00565ca0();
    puVar8 = operator_new(0xc);
    local_8._0_1_ = 8;
    local_50 = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      FUN_004b7cc0();
      fVar3 = (float)local_48 * _DAT_007e746c;
      *puVar8 = &PTR_FUN_007e7470;
      *(float *)(puVar8[1] + 0xe) = fVar3;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00565ca0();
    local_48 = local_90;
    piVar5 = (int *)(iVar6 + 0x1c6);
    local_40 = (undefined4 *)0xb;
    do {
      local_3c = *(int **)(*piVar5 + 0x14);
      local_50 = (int *)_rand();
      piVar5 = piVar5 + 1;
      pfVar15 = local_48 + 1;
      *local_48 = ((float)(int)local_50 * _DAT_007e68c0 + _DAT_007e3374) * (float)local_3c *
                  local_18 * (float)_DAT_007e6838;
      local_48 = pfVar15;
      local_40 = (undefined4 *)((int)local_40 + -1);
    } while (local_40 != (undefined4 *)0x0);
    puVar8 = operator_new(0xc);
    local_8._0_1_ = 9;
    local_20 = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      local_48 = *(float **)(iVar6 + 0x1fe);
      local_3c = *(int **)(iVar6 + 0x206);
      local_40 = *(undefined4 **)(iVar6 + 0x20a);
      local_38 = *(undefined4 **)(iVar6 + 0x202);
      iVar9 = FUN_004bf290();
      local_34 = *(int **)(iVar9 + 6);
      local_50 = (int *)_rand();
      local_28 = (undefined2 *)
                 (((float)(int)local_50 * _DAT_007e68c0 + _DAT_007e3374) * (float)local_48 *
                  local_18 * (float)_DAT_007e6838);
      local_50 = (int *)_rand();
      local_40 = (undefined4 *)
                 (((float)(int)local_50 * _DAT_007e68c0 + _DAT_007e3374) * (float)local_40 *
                  local_18 * (float)_DAT_007e6838);
      local_50 = (int *)_rand();
      local_48 = (float *)(((float)(int)local_50 * _DAT_007e68c0 + _DAT_007e3374) * (float)local_3c
                           * local_18 * (float)_DAT_007e6838);
      iVar9 = _rand();
      local_50 = (int *)(((float)iVar9 * _DAT_007e68c0 + _DAT_007e3374) * (float)local_38 * local_18
                        * (float)_DAT_007e6838);
      FUN_004b7b90();
      *puVar8 = &PTR_FUN_007e7288;
      *(int **)(puVar8[1] + 0xe) = local_34;
      *(int **)(puVar8[1] + 0x12) = local_50;
      *(float **)(puVar8[1] + 0x16) = local_48;
      *(undefined4 **)(puVar8[1] + 0x1a) = local_40;
      *(undefined2 **)(puVar8[1] + 0x1e) = local_28;
      iVar9 = 0;
      do {
        *(undefined4 *)(puVar8[1] + 0x22 + iVar9) = *(undefined4 *)((int)local_90 + iVar9);
        iVar9 = iVar9 + 4;
      } while (iVar9 < 0x2c);
      *(undefined1 *)(puVar8[1] + 0x4e) = 0;
    }
    local_8._0_1_ = 1;
    FUN_00565ca0();
    local_48 = *(float **)(iVar6 + 0x1f2);
    iVar9 = _rand();
    local_50 = (int *)(((float)iVar9 * _DAT_007e68c0 + _DAT_007e3374) * (float)(int)local_48 *
                       local_18 * (float)_DAT_007e6838);
    puVar8 = operator_new(0xc);
    local_8._0_1_ = 10;
    local_40 = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      local_48 = operator_new(0x12);
      local_8._0_1_ = 0xb;
      if (local_48 != (void *)0x0) {
        FUN_0042d6c0();
      }
      local_8._0_1_ = 10;
      FUN_0042d320();
      *puVar8 = &PTR_FUN_007e744c;
      *(undefined1 *)((int)puVar8 + 10) = 0;
      *(undefined2 *)puVar8[1] = 0x110;
      iVar9 = puVar8[1];
      *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar6 + 0x10);
      *(undefined2 *)(iVar9 + 0xc) = *(undefined2 *)(iVar6 + 0x14);
      puVar10 = (undefined4 *)FUN_0042d2f0(0,0);
      iVar9 = puVar8[1];
      *(undefined4 *)(iVar9 + 2) = *puVar10;
      *(undefined2 *)(iVar9 + 6) = *(undefined2 *)(puVar10 + 1);
      *puVar8 = &PTR_FUN_007e742c;
      *(float *)(puVar8[1] + 0xe) = -(float)local_50;
    }
    local_8._0_1_ = 1;
    FUN_00565ca0();
    iVar9 = _rand();
    local_50 = (int *)((float)iVar9 * _DAT_007e68c0 + _DAT_007e3374);
    fVar17 = (float10)FUN_004ecfc0();
    local_40 = (undefined4 *)
               (float)(fVar17 * (float10)(float)local_50 * (float10)local_18 *
                      (float10)_DAT_007e6838);
    iVar9 = _rand();
    local_50 = (int *)((float)iVar9 * _DAT_007e68c0 + _DAT_007e3374);
    fVar17 = (float10)FUN_004ed080();
    local_50 = (int *)(float)(fVar17 * (float10)(float)local_50 * (float10)local_18 *
                             (float10)_DAT_007e6838);
    puVar8 = operator_new(0xc);
    local_8._0_1_ = 0xc;
    local_3c = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      local_48 = operator_new(0x16);
      local_8._0_1_ = 0xd;
      if (local_48 != (void *)0x0) {
        FUN_0042d6c0();
      }
      local_8._0_1_ = 0xc;
      FUN_0042d320();
      *puVar8 = &PTR_FUN_007e740c;
      *(undefined1 *)((int)puVar8 + 10) = 0;
      *(undefined2 *)puVar8[1] = 0x29;
      iVar9 = puVar8[1];
      *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar6 + 0x10);
      *(undefined2 *)(iVar9 + 0xc) = *(undefined2 *)(iVar6 + 0x14);
      puVar10 = (undefined4 *)FUN_0042d2f0(0,0);
      iVar9 = puVar8[1];
      *(undefined4 *)(iVar9 + 2) = *puVar10;
      *(undefined2 *)(iVar9 + 6) = *(undefined2 *)(puVar10 + 1);
      *puVar8 = &PTR_FUN_007e73ec;
      uVar11 = __ftol();
      *(undefined4 *)(puVar8[1] + 0xe) = uVar11;
      uVar11 = __ftol();
      *(undefined4 *)(puVar8[1] + 0x12) = uVar11;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00565ca0();
    iVar9 = _rand();
    local_50 = (int *)((float)iVar9 * _DAT_007e68c0 + _DAT_007e3374);
    fVar17 = (float10)FUN_004ed140();
    local_34 = (int *)(float)(fVar17 * (float10)(float)local_50 * (float10)local_18 *
                             (float10)_DAT_007e6838);
    fVar17 = (float10)FUN_004ed140();
    if ((float10)_DAT_007e3380 < fVar17) {
      fVar17 = (float10)FUN_004ed140();
      if (fVar17 < (float10)(float)local_34) {
        fVar17 = (float10)FUN_004ed140();
        local_34 = (int *)(float)fVar17;
      }
      puVar8 = operator_new(0xc);
      local_8._0_1_ = 0xe;
      local_3c = puVar8;
      if (puVar8 != (undefined4 *)0x0) {
        local_40 = *(undefined4 **)(iVar6 + 0x12);
        local_50 = *(int **)(iVar6 + 0x3d8);
        local_48 = operator_new(0x1a);
        local_8._0_1_ = 0xf;
        if (local_48 != (void *)0x0) {
          FUN_0042d6c0();
        }
        local_8._0_1_ = 0xe;
        FUN_0042d320();
        *puVar8 = &PTR_FUN_007e73cc;
        *(undefined1 *)((int)puVar8 + 10) = 0;
        *(undefined2 *)puVar8[1] = 0x15c;
        iVar9 = puVar8[1];
        *(undefined4 *)(iVar9 + 8) = *(undefined4 *)((int)local_50 + 4);
        *(undefined2 *)(iVar9 + 0xc) = *(undefined2 *)((int)local_50 + 8);
        puVar10 = (undefined4 *)FUN_0042d2f0(0,0);
        iVar9 = puVar8[1];
        *(undefined4 *)(iVar9 + 2) = *puVar10;
        *(undefined2 *)(iVar9 + 6) = *(undefined2 *)(puVar10 + 1);
        *puVar8 = &PTR_FUN_007e73ac;
        *(undefined4 *)(puVar8[1] + 0xe) = 1;
        *(float *)(puVar8[1] + 0x12) = -(float)local_34;
        *(undefined4 **)(puVar8[1] + 0x16) = local_40;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00565ca0();
    }
    local_3c = (int *)0x0;
    local_50 = (int *)DAT_008eff78;
    fVar17 = (float10)FUN_004eceb0();
    if ((float10)(float)local_50 < fVar17) {
      iVar9 = _rand();
      local_50 = (int *)((float)iVar9 * _DAT_007e68c0 + _DAT_007e3374);
      fVar17 = (float10)FUN_004eceb0();
      pvVar1 = (void *)(int)ROUND((float)((fVar17 * (float10)(float)local_50 * (float10)local_18 *
                                          (float10)_DAT_007e6838) / (float10)DAT_008eff78));
      local_50 = (int *)DAT_008eff78;
      local_48 = pvVar1;
      fVar17 = (float10)FUN_004eceb0();
      local_50 = (int *)(float)(fVar17 / (float10)(float)local_50);
      local_40 = (undefined4 *)(int)ROUND((float)local_50);
      if ((int)local_40 <= (int)pvVar1) {
        local_48 = (float *)((int)local_40 + -1);
      }
      local_3c = (int *)(DAT_008eff78 * (float)(int)local_48);
      puVar8 = operator_new(0xc);
      local_8._0_1_ = 0x10;
      local_38 = puVar8;
      if (puVar8 != (undefined4 *)0x0) {
        local_40 = *(undefined4 **)(iVar6 + 0x12);
        local_50 = *(int **)(iVar6 + 0x3d8);
        local_48 = operator_new(0x1a);
        local_8._0_1_ = 0x11;
        if (local_48 != (void *)0x0) {
          FUN_0042d6c0();
        }
        local_8._0_1_ = 0x10;
        FUN_0042d320();
        *puVar8 = &PTR_FUN_007e73cc;
        *(undefined1 *)((int)puVar8 + 10) = 0;
        *(undefined2 *)puVar8[1] = 0x15c;
        iVar9 = puVar8[1];
        *(undefined4 *)(iVar9 + 8) = *(undefined4 *)((int)local_50 + 4);
        *(undefined2 *)(iVar9 + 0xc) = *(undefined2 *)((int)local_50 + 8);
        puVar10 = (undefined4 *)FUN_0042d2f0(0,0);
        iVar9 = puVar8[1];
        fVar3 = (float)local_3c * _DAT_007e5e7c;
        *(undefined4 *)(iVar9 + 2) = *puVar10;
        *(undefined2 *)(iVar9 + 6) = *(undefined2 *)(puVar10 + 1);
        *puVar8 = &PTR_FUN_007e73ac;
        *(undefined4 *)(puVar8[1] + 0xe) = 5;
        *(float *)(puVar8[1] + 0x12) = fVar3;
        *(undefined4 **)(puVar8[1] + 0x16) = local_40;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00565ca0();
    }
    if (1 < *(int *)(iVar6 + 0x19e)) {
      puVar8 = operator_new(0xc);
      local_8._0_1_ = 0x12;
      local_38 = puVar8;
      if (puVar8 != (undefined4 *)0x0) {
        local_40 = *(undefined4 **)(iVar6 + 0x19e);
        local_48 = *(float **)(iVar6 + 0x12);
        local_50 = *(int **)(iVar6 + 0x3d8);
        puVar12 = operator_new(0x16);
        local_8._0_1_ = 0x13;
        local_28 = puVar12;
        if (puVar12 == (undefined2 *)0x0) {
          puVar12 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d2d0();
          puVar12[4] = 0;
          *(undefined4 *)(puVar12 + 5) = 0;
        }
        piVar5 = local_50;
        puVar8[1] = puVar12;
        *(undefined1 *)(puVar8 + 2) = 0;
        *(undefined1 *)((int)puVar8 + 9) = 1;
        *puVar8 = &PTR_FUN_007e738c;
        *(undefined1 *)((int)puVar8 + 10) = 0;
        *puVar12 = 0x163;
        iVar6 = puVar8[1];
        puVar10 = (undefined4 *)((int)local_50 + 4);
        local_50 = (int *)((uint)local_50 & 0xff000000);
        *(undefined4 *)(iVar6 + 8) = *puVar10;
        *(undefined2 *)(iVar6 + 0xc) = *(undefined2 *)((int)piVar5 + 8);
        iVar6 = puVar8[1];
        *(int **)(iVar6 + 2) = local_50;
        *(undefined2 *)(iVar6 + 6) = 0;
        *puVar8 = &PTR_FUN_007e736c;
        *(float **)(puVar8[1] + 0xe) = local_48;
        *(int *)(puVar8[1] + 0x12) = 1 - (int)local_40;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00565ca0();
    }
    piVar5 = local_34;
    fVar3 = (float)local_3c * _DAT_007e543c;
    pfVar15 = local_90;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar15 = 0.0;
      pfVar15 = pfVar15 + 1;
    }
    local_90[1] = (float)piVar5;
    local_90[5] = fVar3;
    puVar8 = operator_new(0xc);
    local_8._0_1_ = 0x14;
    if (puVar8 == (undefined4 *)0x0) {
      local_50 = (int *)0x0;
    }
    else {
      local_50 = puVar8;
      iVar6 = FUN_004bf290();
      uVar11 = *(undefined4 *)(iVar6 + 6);
      puVar12 = operator_new(0x50);
      if (puVar12 == (undefined2 *)0x0) {
        puVar12 = (undefined2 *)0x0;
      }
      else {
        puVar12[3] = 0;
        *(undefined1 *)(puVar12 + 2) = 0;
        *(undefined1 *)((int)puVar12 + 3) = 0;
        *(undefined1 *)(puVar12 + 1) = 0;
        puVar12[4] = 0;
        *(undefined4 *)(puVar12 + 5) = 0;
      }
      puVar8[1] = puVar12;
      *(undefined1 *)(puVar8 + 2) = 0;
      *(undefined1 *)((int)puVar8 + 9) = 1;
      *puVar8 = &PTR_FUN_007e72a8;
      *(undefined1 *)((int)puVar8 + 10) = 0;
      *puVar12 = 0x10c;
      iVar6 = puVar8[1];
      local_50 = (int *)((uint)local_50 & 0xff000000);
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(local_24 + 0x10);
      *(undefined2 *)(iVar6 + 0xc) = *(undefined2 *)(local_24 + 0x14);
      iVar6 = puVar8[1];
      *(int **)(iVar6 + 2) = local_50;
      *(undefined2 *)(iVar6 + 6) = 0;
      *puVar8 = &PTR_FUN_007e7288;
      *(undefined4 *)(puVar8[1] + 0xe) = uVar11;
      *(undefined4 *)(puVar8[1] + 0x12) = 0;
      *(undefined4 *)(puVar8[1] + 0x16) = 0;
      *(undefined4 *)(puVar8[1] + 0x1a) = 0;
      *(undefined4 *)(puVar8[1] + 0x1e) = 0;
      do {
        *(undefined4 *)(puVar8[1] + 0x22 + iVar13) = *(undefined4 *)((int)local_90 + iVar13);
        iVar13 = iVar13 + 4;
      } while (iVar13 < 0x2c);
      *(undefined1 *)(puVar8[1] + 0x4e) = 1;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00565ca0();
    local_8 = 0xffffffff;
    FUN_00527230();
  }
  ExceptionList = local_10;
  return;
}


