// FUN_00691e70 @ 691e70 size=668

void __fastcall FUN_00691e70(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  char cVar8;
  void *pvVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  bool bVar13;
  int local_2c;
  int *local_28;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007d5413;
  local_10 = ExceptionList;
  if (DAT_0083ccc8 == '\0') {
    fVar2 = *(float *)(*(int *)(*(int *)(param_1 + 10) + 0x120) + 0xb86);
    iVar1 = *(int *)(param_1 + 0x50);
    ExceptionList = &local_10;
    FUN_00457e10();
    local_8._0_1_ = 0;
    local_8._1_3_ = 0;
    while (local_2c != 0) {
      iVar12 = *(int *)(local_2c + 8);
      FUN_00796cd8(local_2c);
      local_2c = iVar12;
    }
    local_28 = (int *)0x0;
    local_24 = 0;
    puVar6 = *(undefined4 **)(param_1 + 0x40);
    piVar4 = (int *)0x0;
    while (piVar7 = local_28, piVar5 = piVar4, puVar6 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar6[2];
      uVar11 = *puVar6;
      pvVar9 = operator_new(0xe);
      local_8._0_1_ = 1;
      if (pvVar9 == (void *)0x0) {
        local_28 = (int *)0x0;
      }
      else {
        local_28 = (int *)FUN_0045bab0(uVar11,piVar7,0);
      }
      local_8._0_1_ = 0;
      iVar12 = local_24 + 1;
      bVar13 = local_24 != 0;
      puVar6 = puVar3;
      piVar4 = local_28;
      local_24 = iVar12;
      if (bVar13) {
        piVar7[2] = (int)local_28;
        piVar4 = piVar5;
      }
    }
joined_r0x00691f54:
    if (piVar5 != (int *)0x0) {
      piVar4 = (int *)*piVar5;
      piVar5 = (int *)piVar5[2];
      if (((((piVar4[3] != 0) && (iVar12 = (**(code **)(piVar4[0x47] + 4))(), iVar12 == 0)) &&
           (*(int *)((int)piVar4 + 0x176) == 0)) &&
          ((*(char *)((int)piVar4 + 0x17b) == '\0' && (iVar12 = piVar4[0x92], iVar12 != 0)))) &&
         (iVar10 = *(int *)(param_1 + 10), iVar12 != iVar10)) {
        if ((((*(int *)(*(int *)(iVar12 + 0x12da) + 0x3b30) == *(int *)(iVar10 + 6)) ||
             (*(int *)(*(int *)(iVar10 + 0x12da) + 0x3b30) == *(int *)(iVar12 + 6))) ||
            ((cVar8 = FUN_0044beb0(), cVar8 != '\0' &&
             (cVar8 = FUN_0044b300(*(undefined4 *)(iVar12 + 6)), cVar8 != '\0')))) &&
           (iVar10 = (**(code **)(*(int *)((int)piVar4 + 0x22) + 4))(),
           *(int *)(param_1 + 0x54) - iVar10 <= (int)ROUND((float)iVar1 * fVar2))) {
          iVar10 = FUN_0051b230();
          if (*(int *)(*(int *)(iVar10 + 0x482) + 0x6c) == 0) goto joined_r0x00691f54;
          iVar10 = FUN_004ccb2c(*(undefined4 *)(param_1 + 10));
          if (((&DAT_0089cad8)[iVar10] == 0) || ((&DAT_0089cad8)[iVar10] == iVar12))
          goto joined_r0x00691f54;
        }
        iVar10 = *(int *)(param_1 + 10);
        uVar11 = (**(code **)(*(int *)(iVar12 + 0xe) + 0xc))();
        uVar11 = (**(code **)(*piVar4 + 0xc))(uVar11);
        uVar11 = (**(code **)(*(int *)(iVar10 + 0xe) + 0xc))(uVar11);
        FUN_00458570(s__s_takes_back___s__from__s_00867eb0,uVar11);
        cVar8 = (**(code **)(*(int *)((int)piVar4 + 0x22e) + 8))();
        if (cVar8 == '\0') {
          (**(code **)(*piVar4 + 0x74))();
        }
        FUN_0050bca0(piVar4);
        FUN_0045c780(piVar4);
        (**(code **)(*(int *)(param_1 + 0x3c) + 0x18))(piVar4);
        iVar12 = (**(code **)(*(int *)((int)piVar4 + 0x22) + 4))();
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar12;
      }
      goto joined_r0x00691f54;
    }
    local_8 = 0xffffffff;
    FUN_00527230();
  }
  ExceptionList = local_10;
  return;
}


