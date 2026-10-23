// FUN_00463240 @ 463240 size=1557

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00463240(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  void *pvVar13;
  undefined4 *puVar14;
  int *local_38;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_22;
  undefined2 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bc8fc;
  pvStack_c = ExceptionList;
  local_38 = &DAT_0089cad8;
  iVar1 = *(int *)(param_1 + 6);
  ExceptionList = &pvStack_c;
  do {
    iVar2 = *local_38;
    if (iVar2 != 0) {
      piVar7 = *(int **)(iVar2 + 0x451c);
joined_r0x00463290:
      while (piVar7 != (int *)0x0) {
        piVar10 = (int *)piVar7[2];
        puVar12 = (undefined4 *)*piVar7;
        iVar3 = puVar12[0x16];
        piVar7 = piVar10;
        if (iVar3 != iVar1) goto LAB_00463403;
        if (iVar2 == param_1) goto LAB_0046340b;
        (**(code **)(*(int *)(iVar2 + 0x4518) + 0x18))();
        fVar4 = (float)puVar12[0x3b];
        fVar5 = (float)puVar12[0x3d];
        puVar12[0x17] = param_1;
        if (*(char *)((int)puVar12 + 0x162) == '\0') {
          uVar9 = FUN_0044c3d0();
          FUN_004fbc90(uVar9,0x8c,0);
        }
        if ((float)puVar12[0x3c] < fVar4) {
          fVar4 = (float)puVar12[0x3c];
        }
        puVar12[0x3b] = fVar4;
        if (fVar5 < _DAT_007e3380) {
          fVar5 = _DAT_007e3380;
        }
        puVar12[0x3d] = fVar5;
        FUN_00458210();
        puVar12[0x53] = 0;
        FUN_005033b0();
        FUN_00458230();
        iVar3 = *(int *)(param_1 + 0x4520);
        piVar10 = operator_new(0xe);
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          *piVar10 = (int)puVar12;
          piVar10[1] = iVar3;
          piVar10[2] = 0;
          *(undefined1 *)(piVar10 + 3) = 0;
        }
        iVar11 = *(int *)(param_1 + 0x4524);
        *(int **)(param_1 + 0x4520) = piVar10;
        *(int *)(param_1 + 0x4524) = iVar11 + 1;
        if (iVar11 == 0) {
          *(int **)(param_1 + 0x451c) = piVar10;
        }
        else {
          *(int **)(iVar3 + 8) = piVar10;
        }
      }
      piVar7 = *(int **)(iVar2 + 0x4508);
joined_r0x00463594:
      if (piVar7 != (int *)0x0) {
        piVar10 = (int *)piVar7[2];
        iVar3 = *piVar7;
        iVar11 = FUN_00522770();
        piVar7 = piVar10;
        if ((iVar11 == 0) || (iVar11 = FUN_00522770(), iVar11 != param_1)) goto LAB_004636dc;
        if (param_1 == iVar2) goto LAB_004636e6;
        FUN_005b0490();
        puVar12 = operator_new(0xc);
        uVar8 = DAT_0088f28c;
        uStack_4 = 0;
        if (puVar12 != (undefined4 *)0x0) {
          uStack_2a = (undefined2)DAT_0088f28e;
          uStack_28 = (undefined2)((uint)DAT_0088f28e >> 0x10);
          pvVar13 = operator_new(0x20);
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          if (pvVar13 != (void *)0x0) {
            FUN_004666c0();
          }
          FUN_0042d320();
          *puVar12 = &PTR_FUN_007e5e5c;
          *(undefined1 *)((int)puVar12 + 10) = 0;
          *(undefined2 *)puVar12[1] = 0xa8;
          iVar11 = puVar12[1];
          *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(param_1 + 4);
          *(undefined2 *)(iVar11 + 0xc) = *(undefined2 *)(param_1 + 8);
          puVar14 = (undefined4 *)FUN_0042d2f0(0,0);
          iVar11 = puVar12[1];
          *(undefined4 *)(iVar11 + 2) = *puVar14;
          *(undefined2 *)(iVar11 + 6) = *(undefined2 *)(puVar14 + 1);
          iVar11 = puVar12[1];
          *puVar12 = &PTR_FUN_007e5370;
          *(undefined4 *)(iVar11 + 0xe) = *(undefined4 *)(iVar3 + 0x18);
          *(undefined2 *)(iVar11 + 0x12) = *(undefined2 *)(iVar3 + 0x1c);
          *(undefined1 *)(puVar12[1] + 0x14) = 1;
          *(undefined1 *)(puVar12[1] + 0x15) = 1;
          *(undefined4 *)(puVar12[1] + 0x16) = 0;
          iVar3 = puVar12[1];
          *(uint *)(iVar3 + 0x1a) = CONCAT22(uStack_2a,uVar8);
          *(undefined2 *)(iVar3 + 0x1e) = uStack_28;
        }
        goto LAB_004636c6;
      }
    }
    local_38 = local_38 + 1;
    if (0x89d037 < (int)local_38) {
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
LAB_00463403:
  if (iVar2 == param_1) {
LAB_0046340b:
    if ((iVar3 != 0) && (iVar3 != iVar1)) {
      iVar3 = (&DAT_0089cad8)[iVar3];
      if (iVar3 == 0) {
        (**(code **)(*(int *)(param_1 + 0x4518) + 0x18))();
        if (puVar12 != (undefined4 *)0x0) {
          (**(code **)*puVar12)();
        }
      }
      else {
        (**(code **)(*(int *)(param_1 + 0x4518) + 0x18))();
        fVar4 = (float)puVar12[0x3b];
        fVar5 = (float)puVar12[0x3d];
        puVar12[0x17] = iVar3;
        if (*(char *)((int)puVar12 + 0x162) == '\0') {
          uVar9 = FUN_0044c3d0();
          FUN_004fbc90(uVar9,0x8c,0);
        }
        if ((float)puVar12[0x3c] < fVar4) {
          fVar4 = (float)puVar12[0x3c];
        }
        puVar12[0x3b] = fVar4;
        if (fVar5 < _DAT_007e3380) {
          fVar5 = _DAT_007e3380;
        }
        puVar12[0x3d] = fVar5;
        FUN_00458210();
        puVar12[0x53] = 0;
        FUN_005033b0();
        FUN_00458230();
        iVar11 = *(int *)(iVar3 + 0x4520);
        piVar10 = operator_new(0xe);
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          *piVar10 = (int)puVar12;
          piVar10[1] = iVar11;
          piVar10[2] = 0;
          *(undefined1 *)(piVar10 + 3) = 0;
        }
        iVar6 = *(int *)(iVar3 + 0x4524);
        *(int **)(iVar3 + 0x4520) = piVar10;
        *(int *)(iVar3 + 0x4524) = iVar6 + 1;
        if (iVar6 == 0) {
          *(int **)(iVar3 + 0x451c) = piVar10;
        }
        else {
          *(int **)(iVar11 + 8) = piVar10;
        }
      }
    }
  }
  goto joined_r0x00463290;
LAB_004636dc:
  if (iVar2 == param_1) {
LAB_004636e6:
    FUN_005b0490();
    iVar11 = FUN_00522770();
    if ((iVar11 == 0) || (iVar11 = FUN_00522770(), iVar11 == param_1)) {
      if ((&DAT_00dc0fd4)[*(int *)((int)*(int **)(iVar3 + 0x248) + 6)] != 0) {
        (**(code **)(**(int **)(iVar3 + 0x248) + 0x48c))();
      }
    }
    else {
      puVar12 = operator_new(0xc);
      uVar8 = DAT_0088f28c;
      uStack_4 = 2;
      if (puVar12 != (undefined4 *)0x0) {
        uStack_22 = (undefined2)DAT_0088f28e;
        uStack_20 = (undefined2)((uint)DAT_0088f28e >> 0x10);
        iVar11 = FUN_00522770();
        pvVar13 = operator_new(0x20);
        uStack_4 = CONCAT31(uStack_4._1_3_,3);
        if (pvVar13 != (void *)0x0) {
          FUN_004666c0();
        }
        FUN_0042d320();
        *puVar12 = &PTR_FUN_007e5e5c;
        *(undefined1 *)((int)puVar12 + 10) = 0;
        *(undefined2 *)puVar12[1] = 0xa8;
        iVar6 = puVar12[1];
        *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar11 + 4);
        *(undefined2 *)(iVar6 + 0xc) = *(undefined2 *)(iVar11 + 8);
        puVar14 = (undefined4 *)FUN_0042d2f0(0,0);
        iVar11 = puVar12[1];
        *(undefined4 *)(iVar11 + 2) = *puVar14;
        *(undefined2 *)(iVar11 + 6) = *(undefined2 *)(puVar14 + 1);
        iVar11 = puVar12[1];
        *puVar12 = &PTR_FUN_007e5370;
        *(undefined4 *)(iVar11 + 0xe) = *(undefined4 *)(iVar3 + 0x18);
        *(undefined2 *)(iVar11 + 0x12) = *(undefined2 *)(iVar3 + 0x1c);
        *(undefined1 *)(puVar12[1] + 0x14) = 1;
        *(undefined1 *)(puVar12[1] + 0x15) = 1;
        *(undefined4 *)(puVar12[1] + 0x16) = 0;
        iVar3 = puVar12[1];
        *(uint *)(iVar3 + 0x1a) = CONCAT22(uStack_22,uVar8);
        *(undefined2 *)(iVar3 + 0x1e) = uStack_20;
      }
LAB_004636c6:
      uStack_4 = 0xffffffff;
      FUN_00565c30();
    }
  }
  goto joined_r0x00463594;
}


