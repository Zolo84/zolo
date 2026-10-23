// FUN_00697fe0 @ 697fe0 size=676

void __fastcall FUN_00697fe0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  void *pvVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  bool bVar15;
  int *local_1c;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d55b6;
  local_c = ExceptionList;
  if (*(char *)(*(int *)(*(int *)(param_1 + 10) + 0x12da) + 0x3b38) != '\0') {
    piVar14 = (int *)0x0;
    local_1c = (int *)0x0;
    local_14 = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_006a9d50();
    piVar1 = *(int **)(*(int *)(param_1 + 10) + 0xe880);
joined_r0x0069804a:
    piVar3 = local_1c;
    if (piVar1 != (int *)0x0) {
      iVar13 = *piVar1;
      piVar1 = (int *)piVar1[2];
      iVar2 = *(int *)(iVar13 + 4);
      while (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 8);
        cVar7 = FUN_004ca33c();
        if (cVar7 != '\0') goto joined_r0x0069804a;
      }
      piVar3 = *(int **)(iVar13 + 4);
      while (piVar3 != (int *)0x0) {
        iVar13 = *piVar3;
        piVar3 = (int *)piVar3[2];
        iVar2 = *(int *)(param_1 + 10);
        iVar8 = FUN_004c9f81();
        if (iVar8 == iVar2) {
          piVar5 = *(int **)(iVar13 + 0x2c);
          piVar9 = piVar14;
          piVar6 = local_1c;
          while (local_1c = piVar6, piVar14 = piVar9, piVar5 != (int *)0x0) {
            piVar9 = (int *)piVar5[2];
            iVar13 = *piVar5;
            iVar2 = *(int *)(iVar13 + 0x3d4);
            piVar5 = piVar9;
            piVar9 = piVar14;
            piVar6 = local_1c;
            if ((((*(int *)(iVar13 + 0x3d8) == *(int *)(param_1 + 10)) && (iVar2 != 0)) &&
                (iVar2 != *(int *)(param_1 + 10))) &&
               (cVar7 = FUN_00586230(*(undefined4 *)(iVar2 + 6)), cVar7 != '\0')) {
              piVar9 = operator_new(0xe);
              if (piVar9 == (int *)0x0) {
                piVar9 = (int *)0x0;
              }
              else {
                *piVar9 = iVar13;
                piVar9[1] = (int)piVar14;
                piVar9[2] = 0;
                *(undefined1 *)(piVar9 + 3) = 0;
              }
              iVar13 = local_14 + 1;
              bVar15 = local_14 != 0;
              piVar6 = piVar9;
              local_14 = iVar13;
              if (bVar15) {
                piVar14[2] = (int)piVar9;
                piVar6 = local_1c;
              }
            }
          }
        }
      }
      goto joined_r0x0069804a;
    }
    while (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[2];
      iVar13 = *piVar3;
      puVar10 = operator_new(0xc);
      local_4._0_1_ = 1;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar13 + 0x12);
        iVar13 = *(int *)(iVar13 + 0x3d4);
        pvVar11 = operator_new(0x14);
        local_4._0_1_ = 2;
        if (pvVar11 == (void *)0x0) {
          pvVar11 = (void *)0x0;
        }
        else {
          FUN_0042d6c0();
        }
        local_4._0_1_ = 1;
        FUN_0042d320(pvVar11);
        *puVar10 = &PTR_FUN_007e6b6c;
        *(undefined1 *)((int)puVar10 + 10) = 0;
        *(undefined2 *)puVar10[1] = 0x7c;
        iVar2 = puVar10[1];
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar13 + 4);
        local_4._0_1_ = 3;
        *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(iVar13 + 8);
        puVar12 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar13 = puVar10[1];
        *(undefined4 *)(iVar13 + 2) = *puVar12;
        *(undefined2 *)(iVar13 + 6) = *(undefined2 *)(puVar12 + 1);
        *puVar10 = &PTR_FUN_007e6b4c;
        *(undefined4 *)(puVar10[1] + 0xe) = uVar4;
        *(undefined1 *)(puVar10[1] + 0x12) = 0;
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00565bc0(puVar10);
      piVar3 = piVar1;
    }
    if (local_14 != 0) {
      FUN_004cc729();
    }
    while (local_1c != (int *)0x0) {
      piVar1 = (int *)local_1c[2];
      FUN_00796cd8(local_1c);
      local_1c = piVar1;
    }
  }
  ExceptionList = local_c;
  return;
}


