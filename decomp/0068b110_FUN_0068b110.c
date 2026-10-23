// FUN_0068b110 @ 68b110 size=636

void __fastcall FUN_0068b110(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  void **ppvVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  float10 fVar12;
  int local_34;
  int local_30;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d4f43;
  ppvVar4 = &local_c;
  puVar6 = *(undefined4 **)(param_1 + 0xd0);
  local_c = ExceptionList;
  while (ExceptionList = ppvVar4, puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar6[2];
    FUN_00796cd8(*puVar6);
    FUN_00796cd8(puVar6);
    ppvVar4 = ExceptionList;
    puVar6 = puVar1;
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  puVar6 = *(undefined4 **)(*(int *)(param_1 + 10) + 0xe892);
  do {
    if (puVar6 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return;
    }
    puVar1 = (undefined4 *)puVar6[2];
    iVar5 = FUN_004e9370(*puVar6);
    FUN_004734e0();
    local_4 = 0;
    local_30 = 0;
    piVar3 = local_1c;
    if (0 < *(int *)(iVar5 + 0x290)) {
      local_34 = 0;
      do {
        puVar6 = (undefined4 *)(local_34 + *(int *)(iVar5 + 0x298));
        piVar3 = local_1c;
        piVar9 = local_18;
        if (puVar6[1] != 4) {
          iVar7 = FUN_004e9370(*puVar6);
          iVar7 = *(int *)(iVar7 + 0x3d4);
          if ((iVar7 != 0) && (iVar7 != *(int *)(param_1 + 10))) {
            uVar2 = *(undefined4 *)(iVar7 + 6);
            pvVar8 = operator_new(0xe);
            local_4._0_1_ = 1;
            if (pvVar8 == (void *)0x0) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = (int *)FUN_00473a90(uVar2,local_18,0);
            }
            local_4 = (uint)local_4._1_3_ << 8;
            iVar7 = local_14 + 1;
            bVar11 = local_14 != 0;
            piVar3 = piVar9;
            local_14 = iVar7;
            if (bVar11) {
              local_18[2] = (int)piVar9;
              piVar3 = local_1c;
            }
          }
        }
        local_18 = piVar9;
        local_1c = piVar3;
        local_30 = local_30 + 1;
        local_34 = local_34 + 0xc;
        piVar3 = local_1c;
      } while (local_30 < *(int *)(iVar5 + 0x290));
    }
joined_r0x0068b264:
    if (piVar3 != (int *)0x0) {
      piVar9 = (int *)piVar3[2];
      iVar5 = *piVar3;
      bVar11 = false;
      piVar10 = *(int **)(param_1 + 0xd0);
      piVar3 = piVar9;
      if (*(int **)(param_1 + 0xd0) != (int *)0x0) break;
      goto LAB_0068b2a9;
    }
    local_4 = 0xffffffff;
    while (local_1c != (int *)0x0) {
      piVar3 = (int *)local_1c[2];
      FUN_00796cd8(local_1c);
      local_1c = piVar3;
    }
    local_1c = (int *)0x0;
    local_18 = (int *)0x0;
    local_14 = 0;
    puVar6 = puVar1;
  } while( true );
  do {
    piVar9 = (int *)piVar10[2];
    piVar10 = (int *)*piVar10;
    if (*piVar10 == iVar5) {
      piVar10[2] = piVar10[2] + 1;
      bVar11 = true;
    }
    piVar10 = piVar9;
  } while (piVar9 != (int *)0x0);
  if (!bVar11) {
LAB_0068b2a9:
    piVar9 = operator_new(0x10);
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      *piVar9 = 0;
      piVar9[1] = 0;
      piVar9[2] = 0;
      piVar9[3] = 0;
    }
    *piVar9 = iVar5;
    piVar9[3] = 0;
    piVar9[2] = piVar9[2] + 1;
    fVar12 = (float10)FUN_0068b390((&DAT_0089cad8)[iVar5]);
    piVar9[1] = (int)(float)fVar12;
    iVar5 = *(int *)(param_1 + 0xd4);
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *puVar6 = piVar9;
      puVar6[1] = iVar5;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar7 = *(int *)(param_1 + 0xd8);
    *(undefined4 **)(param_1 + 0xd4) = puVar6;
    *(int *)(param_1 + 0xd8) = iVar7 + 1;
    if (iVar7 == 0) {
      *(undefined4 **)(param_1 + 0xd0) = puVar6;
    }
    else {
      *(undefined4 **)(iVar5 + 8) = puVar6;
    }
  }
  goto joined_r0x0068b264;
}


