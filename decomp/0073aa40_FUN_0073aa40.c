// FUN_0073aa40 @ 73aa40 size=1058

/* WARNING: Type propagation algorithm not settling */

uint __thiscall FUN_0073aa40(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  char cVar13;
  int local_28;
  int *local_1c;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_007df069;
  local_c = ExceptionList;
  uVar10 = *(uint *)(param_1 + 0x16);
  uVar11 = (uint)param_2;
  if (0 < (int)uVar10) {
    uVar10 = (&DAT_0089cad8)[uVar10];
    uVar11 = uVar10;
  }
  if (uVar11 == 0) goto LAB_0073ae0f;
  local_1c = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
  uStack_3 = 0;
  switch(*(undefined4 *)(param_1 + 0x22)) {
  case 0:
    ExceptionList = &local_c;
    uVar6 = FUN_004e9370(*(undefined4 *)(param_1 + 0x12));
    pvVar7 = operator_new(0xe);
    _local_4 = CONCAT31(uStack_3,1);
    if (pvVar7 == (void *)0x0) {
LAB_0073abf6:
      param_2 = (int *)0x0;
    }
    else {
      param_2 = (int *)FUN_0049a780(uVar6,0,0);
    }
    goto LAB_0073abf8;
  case 1:
    ExceptionList = &local_c;
    FUN_004e9370(*(undefined4 *)(param_1 + 0x12));
    iVar9 = FUN_004e9370(*(undefined4 *)(param_1 + 0x12));
    param_2 = *(int **)((int)&DAT_008ea36c + *(int *)(iVar9 + 0x288) * 0x12);
    break;
  case 2:
    ExceptionList = &local_c;
    FUN_004e9370(*(undefined4 *)(param_1 + 0x12));
    iVar9 = FUN_004e9370(*(undefined4 *)(param_1 + 0x12));
    param_2 = *(int **)((int)&DAT_008e977c + *(int *)(iVar9 + 0x28c) * 0x12);
    break;
  case 3:
    ExceptionList = &local_c;
    iVar9 = FUN_004e9370(*(undefined4 *)(param_1 + 0x12));
    piVar5 = (int *)0x0;
    puVar4 = *(undefined4 **)(*(int *)(iVar9 + 0x482) + 0x2c);
    piVar2 = local_1c;
    while (param_2 = piVar2, piVar3 = piVar5, local_1c = param_2, puVar4 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar4[2];
      uVar6 = *puVar4;
      pvVar7 = operator_new(0xe);
      local_4 = 2;
      if (pvVar7 == (void *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_0049a780(uVar6,piVar3,0);
      }
      iVar9 = local_14 + 1;
      bVar12 = local_14 != 0;
      local_4 = 0;
      puVar4 = puVar1;
      piVar2 = piVar5;
      local_14 = iVar9;
      if (bVar12) {
        piVar3[2] = (int)piVar5;
        piVar2 = param_2;
      }
    }
    break;
  default:
    ExceptionList = &local_c;
    uVar6 = FUN_004e9370(*(undefined4 *)(param_1 + 0x12));
    pvVar7 = operator_new(0xe);
    _local_4 = CONCAT31(uStack_3,3);
    if (pvVar7 == (void *)0x0) goto LAB_0073abf6;
    param_2 = (int *)FUN_0049a780(uVar6,0,0);
LAB_0073abf8:
    local_4 = 0;
    local_1c = param_2;
  }
  local_28 = 0;
joined_r0x0073ac1f:
  if (param_2 != (int *)0x0) {
    iVar9 = *param_2;
    param_2 = (int *)param_2[2];
    piVar5 = *(int **)(*(int *)(iVar9 + 0x1c2) + 4);
joined_r0x0073ac41:
    do {
      if (piVar5 == (int *)0x0) goto LAB_0073acfe;
      piVar2 = (int *)piVar5[2];
      piVar3 = (int *)*piVar5;
      iVar8 = *(int *)(param_1 + 0x16);
      piVar5 = piVar2;
      if (iVar8 == -3) {
        cVar13 = FUN_0044b300(*(undefined4 *)(uVar11 + 6));
        if (cVar13 == '\0') {
          cVar13 = FUN_0044a690(*(undefined4 *)(uVar11 + 6));
          goto joined_r0x0073acbc;
        }
        break;
      }
      if (iVar8 == -2) {
        cVar13 = FUN_0044b280(*(undefined4 *)(uVar11 + 6));
      }
      else {
        if (iVar8 == 0) break;
        cVar13 = piVar3[0x92] == uVar11;
      }
joined_r0x0073acbc:
    } while (cVar13 == '\0');
    iVar8 = *(int *)(param_1 + 0x1e);
    if (iVar8 == 0) {
      cVar13 = (**(code **)(*piVar3 + 0x28))();
    }
    else if (iVar8 == 1) {
      cVar13 = (**(code **)(*piVar3 + 0x30))();
    }
    else {
      if (iVar8 != 2) goto LAB_0073acd4;
      cVar13 = (**(code **)(*piVar3 + 0x2c))();
    }
    if (cVar13 == '\0') goto joined_r0x0073ac41;
LAB_0073acd4:
    iVar8 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
    local_28 = local_28 + iVar8;
    if (*(int *)(param_1 + 0x1a) <= local_28) {
      while (local_1c != (int *)0x0) {
        piVar5 = (int *)local_1c[2];
        FUN_00796cd8(local_1c);
        local_1c = piVar5;
      }
      ExceptionList = local_c;
      return 1;
    }
    goto joined_r0x0073ac41;
  }
  while (uVar10 = 0, local_1c != (int *)0x0) {
    piVar5 = (int *)local_1c[2];
    FUN_00796cd8(local_1c);
    local_1c = piVar5;
  }
LAB_0073ae0f:
  ExceptionList = local_c;
  return uVar10 & 0xffffff00;
LAB_0073acfe:
  if ((((*(int *)(param_1 + 0x1e) != 2) && (*(int *)(param_1 + 0x1e) != -1)) ||
      (*(int *)(iVar9 + 0x254) == 8)) ||
     ((*(int *)(iVar9 + 0x254) == 9 || (*(int *)(iVar9 + 0x46a) == 0)))) goto joined_r0x0073ac1f;
  piVar5 = *(int **)(*(int *)(iVar9 + 0x46a) + 0x34);
joined_r0x0073ad38:
  do {
    if (piVar5 == (int *)0x0) goto joined_r0x0073ac1f;
    piVar2 = (int *)piVar5[2];
    piVar3 = (int *)*piVar5;
    iVar9 = *(int *)(param_1 + 0x16);
    piVar5 = piVar2;
    if (iVar9 == -3) {
      cVar13 = FUN_0044b300(*(undefined4 *)(uVar11 + 6));
      if (cVar13 == '\0') {
        cVar13 = FUN_0044a690(*(undefined4 *)(uVar11 + 6));
        goto joined_r0x0073adaf;
      }
      break;
    }
    if (iVar9 == -2) {
      cVar13 = FUN_0044b280(*(undefined4 *)(uVar11 + 6));
    }
    else {
      if (iVar9 == 0) break;
      cVar13 = piVar3[0x92] == uVar11;
    }
joined_r0x0073adaf:
  } while (cVar13 == '\0');
  iVar9 = *(int *)(param_1 + 0x1e);
  if (iVar9 == 0) {
    cVar13 = (**(code **)(*piVar3 + 0x28))();
  }
  else if (iVar9 == 1) {
    cVar13 = (**(code **)(*piVar3 + 0x30))();
  }
  else {
    if (iVar9 != 2) goto LAB_0073adc7;
    cVar13 = (**(code **)(*piVar3 + 0x2c))();
  }
  if (cVar13 == '\0') goto joined_r0x0073ad38;
LAB_0073adc7:
  iVar9 = (**(code **)(*(int *)((int)piVar3 + 0x22) + 4))();
  local_28 = local_28 + iVar9;
  if (*(int *)(param_1 + 0x1a) <= local_28) {
    while (local_1c != (int *)0x0) {
      piVar5 = (int *)local_1c[2];
      FUN_00796cd8(local_1c);
      local_1c = piVar5;
    }
    ExceptionList = local_c;
    return 1;
  }
  goto joined_r0x0073ad38;
}


