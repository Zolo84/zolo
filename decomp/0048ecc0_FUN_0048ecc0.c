// FUN_0048ecc0 @ 48ecc0 size=1454

undefined4 __thiscall FUN_0048ecc0(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  char cVar5;
  void *pvVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined2 *puVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  bool bVar16;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined1 local_28 [8];
  undefined **local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bda1a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar5 = FUN_0042e980();
  if (cVar5 == '\0') {
LAB_0048f234:
    FUN_004cc729();
  }
  else {
    iVar15 = *(int *)(*(int *)(param_2 + 4) + 0xe);
    if (iVar15 == 0) {
      iVar15 = 0;
      piVar14 = &DAT_0089cad8;
      while ((*piVar14 != 0 || (cVar5 = FUN_0049ed40(), cVar5 == '\0'))) {
        piVar14 = piVar14 + 1;
        iVar15 = iVar15 + 1;
        if (0x89d037 < (int)piVar14) {
          ExceptionList = local_c;
          return 3;
        }
      }
    }
    else {
      if ((&DAT_0089cad8)[iVar15] != 0) {
        ExceptionList = local_c;
        return 3;
      }
      cVar5 = FUN_0049ed40();
      if (cVar5 == '\0') {
        ExceptionList = local_c;
        return 3;
      }
    }
    if (iVar15 == 0) {
      ExceptionList = local_c;
      return 3;
    }
    local_1c = (undefined4 *)0x0;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_20 = &PTR_LAB_007e378c;
    local_4 = 0;
    piVar14 = (int *)(&DAT_00d685be)[iVar15 * 0x2a];
    if ((int *)(&DAT_00d685be)[iVar15 * 0x2a] != (int *)0x0) {
      do {
        puVar8 = local_18;
        piVar1 = (int *)piVar14[2];
        iVar13 = DAT_00ab27b4 + *piVar14 * 0x4b2;
        piVar14 = *(int **)(iVar13 + 0x3d8);
        puVar10 = local_1c;
        if (((piVar14 != (int *)0x0) && (*(int **)(iVar13 + 0x3d4) == param_1)) &&
           ((piVar14 == param_1 || (*(int *)((int)piVar14 + 6) == 0x157)))) {
          uVar9 = *(undefined4 *)(iVar13 + 0x12);
          local_18 = operator_new(0xe);
          if (local_18 == (undefined4 *)0x0) {
            local_18 = (undefined4 *)0x0;
          }
          else {
            *local_18 = uVar9;
            local_18[1] = puVar8;
            local_18[2] = 0;
            *(undefined1 *)(local_18 + 3) = 0;
          }
          iVar13 = local_14 + 1;
          bVar16 = local_14 != 0;
          puVar10 = local_18;
          local_14 = iVar13;
          if (bVar16) {
            puVar8[2] = local_18;
            puVar10 = local_1c;
          }
        }
        local_1c = puVar10;
        piVar14 = piVar1;
      } while (piVar1 != (int *)0x0);
      if (0 < local_14) {
        pvVar6 = operator_new(0xc);
        local_4._0_1_ = 1;
        if (pvVar6 != (void *)0x0) {
          FUN_0045fec0();
          FUN_00446d10();
          FUN_0048f270();
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00565bc0();
        FUN_00428eb0();
        FUN_00428eb0();
        FUN_00428eb0();
        cVar5 = (**(code **)(*param_1 + 0x1c))();
        if (cVar5 != '\0') {
          *(undefined1 *)((int)param_1 + 0x13c89) = 1;
        }
        piVar14 = (int *)param_1[0x1142];
        while (piVar14 != (int *)0x0) {
          piVar1 = (int *)piVar14[2];
          piVar2 = (int *)*piVar14;
          piVar7 = (int *)FUN_00522770();
          piVar14 = piVar1;
          if (((piVar7 == param_1) && (cVar5 = (**(code **)(*piVar2 + 0x30))(), cVar5 == '\0')) &&
             (iVar13 = _rand(), iVar13 % 10 < 5)) {
            puVar8 = operator_new(0xc);
            uVar4 = DAT_0088f28c;
            local_4._0_1_ = 2;
            if (puVar8 != (undefined4 *)0x0) {
              uStack_3e = (undefined2)DAT_0088f28e;
              uStack_3c = (undefined2)((uint)DAT_0088f28e >> 0x10);
              FUN_00458490();
              iVar13 = puVar8[1];
              *puVar8 = &PTR_FUN_007e5370;
              *(int *)(iVar13 + 0xe) = piVar2[6];
              *(short *)(iVar13 + 0x12) = (short)piVar2[7];
              *(undefined1 *)(puVar8[1] + 0x14) = 0;
              *(undefined1 *)(puVar8[1] + 0x15) = 1;
              *(undefined4 *)(puVar8[1] + 0x16) = 0;
              iVar13 = puVar8[1];
              *(uint *)(iVar13 + 0x1a) = CONCAT22(uStack_3e,uVar4);
              *(undefined2 *)(iVar13 + 0x1e) = uStack_3c;
            }
            local_4 = (uint)local_4._1_3_ << 8;
            cVar5 = (**(code **)(*param_1 + 0x1c))();
            if (cVar5 == '\0') {
              (**(code **)(*param_1 + 0x48c))();
            }
            FUN_00565bc0();
          }
        }
        pvVar6 = operator_new(0xc);
        local_4._0_1_ = 3;
        if (pvVar6 != (void *)0x0) {
          FUN_00449290();
          FUN_00449290();
          FUN_00449290(local_28);
          uVar9 = FUN_0045fec0();
          FUN_00464b70(0xe1,uVar9);
        }
        local_4._0_1_ = 0;
        FUN_00565bc0();
        puVar8 = operator_new(0xc);
        local_4._0_1_ = 4;
        if (puVar8 != (undefined4 *)0x0) {
          pvVar6 = operator_new(0x12);
          local_4._0_1_ = 5;
          if (pvVar6 != (void *)0x0) {
            FUN_0042d6c0();
          }
          FUN_0042d320();
          *puVar8 = &PTR_FUN_007e6d48;
          *(undefined1 *)((int)puVar8 + 10) = 0;
          *(undefined2 *)puVar8[1] = 0x153;
          iVar13 = puVar8[1];
          *(int *)(iVar13 + 8) = param_1[1];
          *(short *)(iVar13 + 0xc) = (short)param_1[2];
          puVar10 = (undefined4 *)FUN_0042d2f0();
          iVar13 = puVar8[1];
          *(undefined4 *)(iVar13 + 2) = *puVar10;
          *(undefined2 *)(iVar13 + 6) = *(undefined2 *)(puVar10 + 1);
          *puVar8 = &PTR_FUN_007e6d28;
          *(int *)(puVar8[1] + 0xe) = iVar15;
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00565bc0();
        piVar14 = (int *)param_1[0x1147];
        while (piVar14 != (int *)0x0) {
          piVar1 = (int *)piVar14[2];
          iVar13 = *piVar14;
          uVar11 = _rand();
          uVar11 = uVar11 & 0x80000001;
          bVar16 = uVar11 == 0;
          if ((int)uVar11 < 0) {
            bVar16 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
          }
          piVar14 = piVar1;
          if (!bVar16) {
            puVar8 = operator_new(0xc);
            local_4._0_1_ = 6;
            if (puVar8 != (undefined4 *)0x0) {
              puVar12 = operator_new(0x18);
              if (puVar12 == (undefined2 *)0x0) {
                puVar12 = (undefined2 *)0x0;
              }
              else {
                FUN_0042d2d0();
                puVar12[4] = 0;
                *(undefined4 *)(puVar12 + 5) = 0;
                puVar12[7] = 0;
                *(undefined4 *)(puVar12 + 8) = 0;
              }
              puVar8[1] = puVar12;
              *(undefined1 *)(puVar8 + 2) = 0;
              *(undefined1 *)((int)puVar8 + 9) = 1;
              *puVar8 = &PTR_FUN_007e6d08;
              *(undefined1 *)((int)puVar8 + 10) = 0;
              *puVar12 = 0x154;
              iVar3 = puVar8[1];
              *(int *)(iVar3 + 8) = param_1[1];
              *(short *)(iVar3 + 0xc) = (short)param_1[2];
              puVar10 = (undefined4 *)FUN_0042d2f0();
              iVar3 = puVar8[1];
              *(undefined4 *)(iVar3 + 2) = *puVar10;
              *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(puVar10 + 1);
              iVar3 = puVar8[1];
              *puVar8 = &PTR_FUN_007e6ce8;
              *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(iVar13 + 0xc);
              *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar13 + 0x10);
              *(int *)(puVar8[1] + 0x14) = iVar15;
            }
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00565bc0();
          }
        }
        local_4 = 0xffffffff;
        local_20 = &PTR_LAB_007e378c;
        puVar8 = local_1c;
        while (puVar8 != (undefined4 *)0x0) {
          puVar8 = (undefined4 *)puVar8[2];
          FUN_00796cd8();
        }
        local_1c = (undefined4 *)0x0;
        local_18 = (undefined4 *)0x0;
        local_14 = 0;
        goto LAB_0048f234;
      }
    }
    local_4 = 0xffffffff;
    local_20 = &PTR_LAB_007e378c;
    FUN_004174b0();
  }
  ExceptionList = local_c;
  return 3;
}


