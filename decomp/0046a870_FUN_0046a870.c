// FUN_0046a870 @ 46a870 size=3319

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0046a870(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  char cVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  void *pvVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  float10 fVar20;
  int local_70;
  int local_68;
  int local_60;
  void *pvStack_54;
  int *local_44;
  int *local_40;
  int local_3c;
  int *local_30;
  int *local_2c;
  int local_28;
  int *local_1c;
  int *local_18;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bcb34;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x3902) = 0;
  local_60 = __ftol();
  local_70 = __ftol();
  local_30 = (int *)0x0;
  local_2c = (int *)0x0;
  local_28 = 0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_44 = (int *)0x0;
  local_40 = (int *)0x0;
  local_3c = 0;
  local_4._1_3_ = 0;
  local_4._0_1_ = 2;
  local_68 = 0;
  piVar2 = *(int **)(param_1 + 0x3b6c);
  piVar5 = local_1c;
  piVar3 = local_18;
  piVar4 = local_44;
  piVar8 = local_40;
  iVar13 = local_3c;
  while (piVar7 = local_2c, piVar6 = local_30, piVar1 = piVar6, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    iVar17 = *piVar2;
    iVar10 = (**(code **)(*(int *)(iVar17 + 0x10a) + 4))();
    piVar2 = piVar1;
    local_30 = piVar6;
    if (iVar10 < 2) {
      pvStack_54 = operator_new(0xe);
      local_4 = CONCAT31(local_4._1_3_,3);
LAB_0046ab62:
      if (pvStack_54 == (void *)0x0) {
        local_2c = (int *)0x0;
      }
      else {
        local_2c = (int *)FUN_00473ab0(iVar17,piVar7,0);
      }
      local_4._0_1_ = 2;
      iVar17 = local_28 + 1;
      bVar19 = local_28 != 0;
      local_30 = local_2c;
      local_28 = iVar17;
      if (bVar19) {
        piVar7[2] = (int)local_2c;
        local_30 = piVar6;
      }
    }
    else {
      cVar9 = FUN_004d2f60();
      local_40 = piVar8;
      local_1c = piVar5;
      local_18 = piVar3;
      local_2c = piVar7;
      if (cVar9 == '\0') {
        FUN_004d31d0();
        FUN_004d37b0();
        FUN_004d3fe0();
        if (((((_DAT_007e3380 < *(float *)(iVar17 + 0x24)) ||
              (_DAT_007e3380 < *(float *)(iVar17 + 0x30))) ||
             (_DAT_007e3380 < *(float *)(iVar17 + 0x28))) ||
            (_DAT_007e3380 < *(float *)(iVar17 + 0x2c))) ||
           ((DAT_00dc1888 != '\0' && (_DAT_007e3380 < *(float *)(iVar17 + 0x20))))) {
          fVar20 = (float10)FUN_004d3110();
          if (fVar20 < (float10)_DAT_007e4088) {
            local_44 = piVar4;
            if (fVar20 <= (float10)_DAT_007e3374) {
              pvVar14 = operator_new(0xe);
              local_4._0_1_ = 8;
              if (pvVar14 == (void *)0x0) {
                local_18 = (int *)0x0;
              }
              else {
                local_18 = (int *)FUN_00473ab0(iVar17,piVar3,0);
              }
              iVar17 = local_14 + 1;
              bVar19 = local_14 != 0;
              local_3c = iVar13;
              local_1c = local_18;
              local_14 = iVar17;
              if (bVar19) {
                piVar3[2] = (int)local_18;
                local_1c = piVar5;
              }
            }
            else {
              pvVar14 = operator_new(0xe);
              local_4._0_1_ = 7;
              if (pvVar14 == (void *)0x0) {
                local_40 = (int *)0x0;
              }
              else {
                local_40 = (int *)FUN_00473ab0(iVar17,piVar8,0);
              }
              local_3c = iVar13 + 1;
              local_44 = local_40;
              if (iVar13 != 0) {
                piVar8[2] = (int)local_40;
                local_44 = piVar4;
              }
            }
          }
          else {
            pvVar14 = operator_new(0xe);
            local_4._0_1_ = 6;
            if (pvVar14 == (void *)0x0) {
              local_44 = (int *)0x0;
            }
            else {
              local_44 = (int *)FUN_00473ab0(iVar17,0,piVar4);
            }
            local_3c = iVar13 + 1;
            local_40 = local_44;
            if (iVar13 != 0) {
              piVar4[1] = (int)local_44;
              local_40 = piVar8;
            }
          }
          goto LAB_0046ac84;
        }
        if ((*(int *)(*DAT_00d12b40 + 0x38a) == 0) || (DAT_00dc1913 == '\0')) {
          pvStack_54 = operator_new(0xe);
          local_4 = CONCAT31(local_4._1_3_,10);
          goto LAB_0046ab62;
        }
        puVar11 = operator_new(0xc);
        local_4._0_1_ = 9;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          FUN_004736e0(0x147,&DAT_0088f230);
          iVar10 = puVar11[1];
          *puVar11 = &PTR_FUN_007e6040;
          *(undefined4 *)(iVar10 + 0xe) = *(undefined4 *)(iVar17 + 0xc);
          *(undefined2 *)(iVar10 + 0x12) = *(undefined2 *)(iVar17 + 0x10);
          *(undefined4 *)(puVar11[1] + 0x14) = 0;
        }
        local_4._0_1_ = 2;
        FUN_00565cc0(puVar11);
      }
      else {
        FUN_004d31d0();
        cVar9 = FUN_004d2fd0();
        if ((cVar9 == '\0') && (cVar9 = FUN_004d3080(), cVar9 == '\0')) {
          pvStack_54 = operator_new(0xe);
          local_4 = CONCAT31(local_4._1_3_,5);
          goto LAB_0046ab62;
        }
        FUN_004d37b0();
        FUN_004d3fe0();
        pvVar14 = operator_new(0xe);
        local_4._0_1_ = 4;
        if (pvVar14 == (void *)0x0) {
          local_44 = (int *)0x0;
        }
        else {
          local_44 = (int *)FUN_00473ab0(iVar17,0,piVar4);
        }
        local_40 = local_44;
        if (iVar13 != 0) {
          piVar4[1] = (int)local_44;
          local_40 = piVar8;
        }
        iVar17 = *(int *)(iVar17 + 0xf0) - *(int *)(iVar17 + 0x12e);
        local_3c = iVar13 + 1;
        if (0 < iVar17) {
          local_68 = local_68 + iVar17;
        }
LAB_0046ac84:
        local_4._0_1_ = 2;
        piVar5 = local_1c;
        piVar3 = local_18;
        piVar4 = local_44;
        piVar8 = local_40;
        iVar13 = local_3c;
      }
    }
  }
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)piVar1[2];
    iVar17 = *piVar1;
    if (*(int *)(iVar17 + 0x12e) != 0) {
      local_70 = local_70 + *(int *)(iVar17 + 0x12e);
      puVar11 = operator_new(0xc);
      local_4._0_1_ = 0xb;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar15 = *(undefined4 *)(iVar17 + 0x12e);
        FUN_004736e0(0xee,&DAT_0088f230);
        iVar10 = puVar11[1];
        *puVar11 = &PTR_FUN_007e6040;
        *(undefined4 *)(iVar10 + 0xe) = *(undefined4 *)(iVar17 + 0xc);
        *(undefined2 *)(iVar10 + 0x12) = *(undefined2 *)(iVar17 + 0x10);
        *(undefined4 *)(puVar11[1] + 0x14) = uVar15;
      }
      local_4._0_1_ = 2;
      FUN_00565bf0(puVar11);
    }
    piVar1 = piVar2;
    if (*(int *)(iVar17 + 0x132) != 0) {
      local_60 = local_60 + *(int *)(iVar17 + 0x132);
      puVar11 = operator_new(0xc);
      local_4._0_1_ = 0xc;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar15 = *(undefined4 *)(iVar17 + 0x132);
        FUN_004736e0(0xed,&DAT_0088f230);
        iVar10 = puVar11[1];
        *puVar11 = &PTR_FUN_007e6040;
        *(undefined4 *)(iVar10 + 0xe) = *(undefined4 *)(iVar17 + 0xc);
        *(undefined2 *)(iVar10 + 0x12) = *(undefined2 *)(iVar17 + 0x10);
        *(undefined4 *)(puVar11[1] + 0x14) = uVar15;
      }
      local_4._0_1_ = 2;
      FUN_00565bf0(puVar11);
    }
  }
  local_68 = local_68 - local_70;
  piVar2 = piVar5;
  while (piVar3 = piVar4, piVar2 != (int *)0x0) {
    piVar3 = (int *)piVar2[2];
    iVar17 = *piVar2;
    iVar10 = *(int *)(iVar17 + 0x12e);
    iVar18 = iVar10 - *(int *)(iVar17 + 0xf0);
    if ((0 < local_68) || (iVar12 = FUN_004d5b00(), iVar10 < iVar12)) {
      iVar18 = *(int *)(iVar17 + 0x12e);
    }
    if (0 < iVar18) {
      local_68 = local_68 - iVar18;
      local_70 = local_70 + iVar18;
      puVar11 = operator_new(0xc);
      local_4._0_1_ = 0xd;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        FUN_004736e0(0xee,&DAT_0088f230);
        iVar10 = puVar11[1];
        *puVar11 = &PTR_FUN_007e6040;
        *(undefined4 *)(iVar10 + 0xe) = *(undefined4 *)(iVar17 + 0xc);
        *(undefined2 *)(iVar10 + 0x12) = *(undefined2 *)(iVar17 + 0x10);
        *(int *)(puVar11[1] + 0x14) = iVar18;
      }
      local_4._0_1_ = 2;
      FUN_00565bf0(puVar11);
    }
    piVar2 = piVar3;
    if (0xe < (((((int)*(short *)(DAT_00893530 + 0x18) - (int)*(short *)(iVar17 + 0x128)) * 0xc -
                (int)*(char *)(iVar17 + 0x126)) + (int)*(char *)(DAT_00893530 + 0x16)) * 0x1e -
              (int)*(char *)(iVar17 + 0x125)) + (int)*(char *)(DAT_00893530 + 0x15)) {
      local_60 = local_60 + *(int *)(iVar17 + 0x132);
      puVar11 = operator_new(0xc);
      local_4._0_1_ = 0xe;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar15 = *(undefined4 *)(iVar17 + 0x132);
        FUN_004736e0(0xed,&DAT_0088f230);
        iVar10 = puVar11[1];
        *puVar11 = &PTR_FUN_007e6040;
        *(undefined4 *)(iVar10 + 0xe) = *(undefined4 *)(iVar17 + 0xc);
        *(undefined2 *)(iVar10 + 0x12) = *(undefined2 *)(iVar17 + 0x10);
        *(undefined4 *)(puVar11[1] + 0x14) = uVar15;
      }
      local_4._0_1_ = 2;
      FUN_00565bf0(puVar11);
    }
  }
  while (piVar3 != (int *)0x0) {
    piVar2 = (int *)piVar3[2];
    iVar17 = *piVar3;
    iVar10 = *(int *)(iVar17 + 0x12e) - *(int *)(iVar17 + 0xf0);
    if (0 < iVar10) {
      local_70 = local_70 + iVar10;
      puVar11 = operator_new(0xc);
      local_4._0_1_ = 0xf;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        FUN_004736e0(0xee,&DAT_0088f230);
        iVar18 = puVar11[1];
        *puVar11 = &PTR_FUN_007e6040;
        *(undefined4 *)(iVar18 + 0xe) = *(undefined4 *)(iVar17 + 0xc);
        *(undefined2 *)(iVar18 + 0x12) = *(undefined2 *)(iVar17 + 0x10);
        *(int *)(puVar11[1] + 0x14) = iVar10;
      }
      local_4._0_1_ = 2;
      FUN_00565bf0(puVar11);
    }
    iVar10 = *(int *)(iVar17 + 0x12e);
    piVar3 = piVar2;
    if ((iVar10 != 0) && (iVar18 = FUN_004d5b00(), iVar10 < iVar18)) {
      local_70 = local_70 + *(int *)(iVar17 + 0x12e);
      puVar11 = operator_new(0xc);
      local_4._0_1_ = 0x10;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        uVar15 = *(undefined4 *)(iVar17 + 0x12e);
        FUN_004736e0(0xee,&DAT_0088f230);
        iVar10 = puVar11[1];
        *puVar11 = &PTR_FUN_007e6040;
        *(undefined4 *)(iVar10 + 0xe) = *(undefined4 *)(iVar17 + 0xc);
        *(undefined2 *)(iVar10 + 0x12) = *(undefined2 *)(iVar17 + 0x10);
        *(undefined4 *)(puVar11[1] + 0x14) = uVar15;
      }
      local_4._0_1_ = 2;
      FUN_00565bf0(puVar11);
    }
  }
  iVar17 = local_70;
  piVar2 = piVar4;
  if (iVar13 != 0) {
    while (piVar2 != (int *)0x0) {
      piVar3 = (int *)piVar2[2];
      iVar13 = *piVar2;
      *(int *)(param_1 + 0x3902) = *(int *)(param_1 + 0x3902) + *(int *)(iVar13 + 0xf0);
      iVar10 = *(int *)(iVar13 + 0xf0) - *(int *)(iVar13 + 0x12e);
      if (iVar17 < iVar10) {
        iVar10 = iVar17;
      }
      piVar2 = piVar3;
      if (0 < iVar10) {
        iVar17 = local_70 - iVar10;
        puVar11 = operator_new(0xc);
        local_4._0_1_ = 0x11;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          FUN_004736e0(0xec,&DAT_0088f230);
          iVar18 = puVar11[1];
          *puVar11 = &PTR_FUN_007e6040;
          *(undefined4 *)(iVar18 + 0xe) = *(undefined4 *)(iVar13 + 0xc);
          *(undefined2 *)(iVar18 + 0x12) = *(undefined2 *)(iVar13 + 0x10);
          *(int *)(puVar11[1] + 0x14) = iVar10;
        }
        local_4._0_1_ = 2;
        FUN_00565bf0(puVar11);
        local_70 = iVar17;
      }
    }
  }
  iVar13 = local_70;
  piVar2 = piVar5;
  if (local_14 != 0) {
    while (piVar2 != (int *)0x0) {
      piVar3 = (int *)piVar2[2];
      iVar17 = *piVar2;
      *(int *)(param_1 + 0x3902) = *(int *)(param_1 + 0x3902) + *(int *)(iVar17 + 0xf0);
      iVar10 = *(int *)(iVar17 + 0xf0) - *(int *)(iVar17 + 0x12e);
      if (local_70 < iVar10) {
        iVar10 = local_70;
      }
      piVar2 = piVar3;
      if (0 < iVar10) {
        local_70 = iVar13 - iVar10;
        puVar11 = operator_new(0xc);
        local_4._0_1_ = 0x12;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          FUN_004736e0(0xec,&DAT_0088f230);
          iVar13 = puVar11[1];
          *puVar11 = &PTR_FUN_007e6040;
          *(undefined4 *)(iVar13 + 0xe) = *(undefined4 *)(iVar17 + 0xc);
          *(undefined2 *)(iVar13 + 0x12) = *(undefined2 *)(iVar17 + 0x10);
          *(int *)(puVar11[1] + 0x14) = iVar10;
        }
        local_4._0_1_ = 2;
        FUN_00565bf0(puVar11);
        iVar13 = local_70;
      }
    }
  }
  iVar13 = (**(code **)(*(int *)(param_1 + 0x3b68) + 4))();
  if (iVar13 != 0) {
    piVar2 = *(int **)(param_1 + 0x3b6c);
    iVar13 = DAT_00893530;
joined_r0x0046b249:
    while (piVar2 != (int *)0x0) {
      iVar17 = *piVar2;
      piVar2 = (int *)piVar2[2];
      iVar10 = *(int *)(iVar17 + 0x132);
      iVar18 = __ftol();
      if (*(int *)(iVar17 + 0x12e) < 0) {
        iVar18 = -iVar10;
      }
      if ((iVar18 < 1) ||
         (99 < (((((int)*(short *)(iVar13 + 0x18) - (int)*(short *)(iVar17 + 0x128)) * 0xc -
                 (int)*(char *)(iVar17 + 0x126)) + (int)*(char *)(iVar13 + 0x16)) * 0x1e -
               (int)*(char *)(iVar17 + 0x125)) + (int)*(char *)(iVar13 + 0x15))) goto LAB_0046b3c6;
      if (local_60 < iVar18) {
        iVar18 = local_60;
      }
      if (0 < iVar18) {
        local_60 = local_60 - iVar18;
        puVar11 = operator_new(0xc);
        local_4._0_1_ = 0x13;
        if (puVar11 == (undefined4 *)0x0) goto LAB_0046b495;
        pvVar14 = operator_new(0x18);
        local_4._0_1_ = 0x14;
        if (pvVar14 == (void *)0x0) {
          uVar15 = 0;
        }
        else {
          uVar15 = FUN_00473890();
        }
        local_4._0_1_ = 0x13;
        FUN_0042d320(uVar15);
        *puVar11 = &PTR_FUN_007e6060;
        *(undefined1 *)((int)puVar11 + 10) = 0;
        *(undefined2 *)puVar11[1] = 0xeb;
        iVar13 = puVar11[1];
        *(undefined4 *)(iVar13 + 8) = DAT_0088f230;
        local_4._0_1_ = 0x15;
        *(undefined2 *)(iVar13 + 0xc) = DAT_0088f234;
        puVar16 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar13 = puVar11[1];
        *(undefined4 *)(iVar13 + 2) = *puVar16;
        *(undefined2 *)(iVar13 + 6) = *(undefined2 *)(puVar16 + 1);
        iVar13 = puVar11[1];
        *puVar11 = &PTR_FUN_007e6040;
        *(undefined4 *)(iVar13 + 0xe) = *(undefined4 *)(iVar17 + 0xc);
        *(undefined2 *)(iVar13 + 0x12) = *(undefined2 *)(iVar17 + 0x10);
        *(int *)(puVar11[1] + 0x14) = iVar18;
        goto LAB_0046b497;
      }
    }
  }
  (*(code *)PTR_LAB_007e4b14)();
  (*(code *)PTR_LAB_007e4b14)();
  (*(code *)PTR_LAB_007e4b14)();
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    FUN_00796cd8(piVar4);
    piVar4 = piVar2;
  }
  while (piVar5 != (int *)0x0) {
    piVar4 = (int *)piVar5[2];
    FUN_00796cd8(piVar5);
    piVar5 = piVar4;
  }
  while (piVar6 != (int *)0x0) {
    piVar4 = (int *)piVar6[2];
    FUN_00796cd8(piVar6);
    piVar6 = piVar4;
  }
  ExceptionList = pvStack_c;
  return;
LAB_0046b3c6:
  if (iVar18 < 0) {
    puVar11 = operator_new(0xc);
    local_4._0_1_ = 0x16;
    if (puVar11 == (undefined4 *)0x0) {
LAB_0046b495:
      puVar11 = (undefined4 *)0x0;
    }
    else {
      pvVar14 = operator_new(0x18);
      local_4._0_1_ = 0x17;
      if (pvVar14 == (void *)0x0) {
        uVar15 = 0;
      }
      else {
        uVar15 = FUN_00473890();
      }
      local_4._0_1_ = 0x16;
      FUN_0042d320(uVar15);
      *puVar11 = &PTR_FUN_007e6060;
      *(undefined1 *)((int)puVar11 + 10) = 0;
      *(undefined2 *)puVar11[1] = 0xed;
      iVar13 = puVar11[1];
      *(undefined4 *)(iVar13 + 8) = DAT_0088f230;
      local_4._0_1_ = 0x18;
      *(undefined2 *)(iVar13 + 0xc) = DAT_0088f234;
      puVar16 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar13 = puVar11[1];
      *(undefined4 *)(iVar13 + 2) = *puVar16;
      *(undefined2 *)(iVar13 + 6) = *(undefined2 *)(puVar16 + 1);
      iVar13 = puVar11[1];
      *puVar11 = &PTR_FUN_007e6040;
      *(undefined4 *)(iVar13 + 0xe) = *(undefined4 *)(iVar17 + 0xc);
      *(undefined2 *)(iVar13 + 0x12) = *(undefined2 *)(iVar17 + 0x10);
      *(int *)(puVar11[1] + 0x14) = -iVar18;
    }
LAB_0046b497:
    local_4._0_1_ = 2;
    FUN_00565bf0(puVar11);
    iVar13 = DAT_00893530;
  }
  goto joined_r0x0046b249;
}


