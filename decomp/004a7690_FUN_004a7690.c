// FUN_004a7690 @ 4a7690 size=722

void __thiscall FUN_004a7690(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  undefined **local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = -1;
  puStack_8 = &LAB_007bdf5e;
  local_c = ExceptionList;
  piVar10 = param_2;
  ExceptionList = &local_c;
  for (iVar9 = 0x25; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  if (DAT_00dc191a != '\0') {
    local_1c = (undefined4 *)0x0;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_20 = &PTR_LAB_007e4b94;
    local_4 = 0;
    FUN_00468710(&local_20,0);
    piVar10 = *(int **)(param_1 + 0x4508);
    while (piVar10 != (int *)0x0) {
      piVar1 = (int *)piVar10[2];
      iVar9 = *piVar10;
      iVar7 = FUN_00522770();
      piVar10 = piVar1;
      if (iVar7 == param_1) {
        puVar5 = *(undefined4 **)(iVar9 + 0x26);
        puVar4 = local_1c;
        iVar9 = local_14;
joined_r0x004a7725:
        local_1c = puVar4;
        local_14 = iVar9;
        if (puVar5 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)puVar5[2];
          uVar3 = *puVar5;
          for (; puVar5 = puVar2, puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)puVar4[2]) {
            cVar6 = (*(code *)local_20[3])(*puVar4,uVar3);
            if (cVar6 != '\0') {
              bVar11 = puVar4 != (undefined4 *)0x0;
              puVar4 = local_1c;
              iVar9 = local_14;
              if (bVar11) goto joined_r0x004a7725;
              break;
            }
          }
          puVar2 = local_18;
          pvVar8 = operator_new(0xe);
          local_4._0_1_ = 1;
          if (pvVar8 == (void *)0x0) {
            local_18 = (undefined4 *)0x0;
          }
          else {
            local_18 = (undefined4 *)FUN_0045baf0(uVar3,puVar2,0);
          }
          local_4 = (uint)local_4._1_3_ << 8;
          iVar9 = local_14 + 1;
          puVar4 = local_18;
          if (local_14 != 0) {
            puVar2[2] = local_18;
            puVar4 = local_1c;
          }
          goto joined_r0x004a7725;
        }
      }
    }
    piVar10 = *(int **)(param_1 + 0x451c);
    puVar4 = local_1c;
    iVar9 = local_14;
joined_r0x004a77bb:
    local_1c = puVar4;
    local_14 = iVar9;
    if (piVar10 != (int *)0x0) {
      piVar1 = (int *)piVar10[2];
      iVar7 = *piVar10;
      piVar10 = piVar1;
      if (*(char *)(iVar7 + 0x154) == '\0') {
        for (; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)puVar4[2]) {
          cVar6 = (*(code *)local_20[3])(*puVar4,iVar7);
          if (cVar6 != '\0') {
            bVar11 = puVar4 != (undefined4 *)0x0;
            puVar4 = local_1c;
            iVar9 = local_14;
            if (bVar11) goto joined_r0x004a77bb;
            break;
          }
        }
        puVar5 = local_18;
        pvVar8 = operator_new(0xe);
        local_4._0_1_ = 2;
        if (pvVar8 == (void *)0x0) {
          local_18 = (undefined4 *)0x0;
        }
        else {
          local_18 = (undefined4 *)FUN_0045baf0(iVar7,puVar5,0);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        iVar9 = local_14 + 1;
        puVar4 = local_18;
        if (local_14 != 0) {
          puVar5[2] = local_18;
          puVar4 = local_1c;
        }
      }
      goto joined_r0x004a77bb;
    }
    while (puVar4 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)puVar4[2];
      iVar9 = 0;
      piVar10 = param_2;
      do {
        if (param_3 == 0) {
          iVar7 = FUN_00506330(iVar9);
LAB_004a7890:
          *piVar10 = *piVar10 + iVar7;
        }
        else {
          if (param_3 == 1) {
            iVar7 = FUN_005063e0(iVar9);
            goto LAB_004a7890;
          }
          if (param_3 == 2) {
            iVar7 = FUN_00506370(iVar9);
            goto LAB_004a7890;
          }
        }
        iVar9 = iVar9 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar9 < 0x25);
    }
    local_20 = &PTR_LAB_007e4b94;
    puVar4 = local_1c;
    while (puVar4 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)puVar4[2];
      FUN_00796cd8(puVar4);
      puVar4 = puVar5;
    }
  }
  iVar9 = (&DAT_0089cad8)[*(int *)(param_1 + 6)];
  if (iVar9 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = __ftol();
    for (piVar10 = *(int **)(iVar9 + 0x3b6c); piVar10 != (int *)0x0; piVar10 = (int *)piVar10[2]) {
      iVar7 = iVar7 + *(int *)(*piVar10 + 0x12e);
    }
  }
  param_2[0x19] = param_2[0x19] + iVar7;
  iVar9 = (&DAT_0089cad8)[*(int *)(param_1 + 6)];
  if (iVar9 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = __ftol();
    for (piVar10 = *(int **)(iVar9 + 0x3b6c); piVar10 != (int *)0x0; piVar10 = (int *)piVar10[2]) {
      iVar7 = iVar7 + *(int *)(*piVar10 + 0x132);
    }
  }
  param_2[0x1a] = param_2[0x1a] + iVar7;
  ExceptionList = local_c;
  return;
}


