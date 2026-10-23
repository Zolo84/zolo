// FUN_0058bcc0 @ 58bcc0 size=1346

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0058bcc0(int param_1,int *param_2,float param_3,float param_4,char param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  char cVar8;
  void *pvVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  float10 fVar14;
  int *local_5c;
  int *local_58;
  int local_54;
  int *local_48;
  int *local_44;
  int local_40;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007c991c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004734e0();
  local_8 = 0;
  FUN_004734e0();
  local_8._0_1_ = 1;
  if (param_3 == 0.0) {
    cVar8 = FUN_00584e20(param_2);
    if (cVar8 == '\0') {
      puVar7 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x26) + 0x22) + 4);
    }
    else {
      puVar7 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x22) + 0x22) + 4);
    }
    while (piVar1 = local_58, piVar10 = local_5c, puVar7 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar7[2];
      uVar2 = *puVar7;
      pvVar9 = operator_new(0xe);
      local_8._0_1_ = 3;
      if (pvVar9 == (void *)0x0) {
        local_58 = (int *)0x0;
      }
      else {
        local_58 = (int *)FUN_00473a90(uVar2,piVar1,0);
      }
      local_8._0_1_ = 1;
      iVar12 = local_54 + 1;
      bVar13 = local_54 != 0;
      puVar7 = puVar3;
      local_5c = local_58;
      local_54 = iVar12;
      if (bVar13) {
        piVar1[2] = (int)local_58;
        local_5c = piVar10;
      }
    }
  }
  else {
    pvVar9 = operator_new(0xe);
    local_8._0_1_ = 2;
    if (pvVar9 == (void *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = (int *)FUN_00473a90(param_3,local_58,0);
    }
    local_8._0_1_ = 1;
    if (local_54 != 0) {
      local_58[2] = (int)piVar10;
      piVar10 = local_5c;
    }
  }
  local_5c = piVar10;
  if (param_4 == 0.0) {
    cVar8 = FUN_00584e20(param_2);
    if (cVar8 == '\0') {
      puVar7 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x22) + 0x22) + 4);
    }
    else {
      puVar7 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x26) + 0x22) + 4);
    }
    while (piVar1 = local_44, piVar10 = local_48, puVar7 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar7[2];
      uVar2 = *puVar7;
      pvVar9 = operator_new(0xe);
      local_8._0_1_ = 5;
      if (pvVar9 == (void *)0x0) {
        local_44 = (int *)0x0;
      }
      else {
        local_44 = (int *)FUN_00473a90(uVar2,piVar1,0);
      }
      local_8._0_1_ = 1;
      iVar12 = local_40 + 1;
      bVar13 = local_40 != 0;
      puVar7 = puVar3;
      local_48 = local_44;
      local_40 = iVar12;
      if (bVar13) {
        piVar1[2] = (int)local_44;
        local_48 = piVar10;
      }
    }
  }
  else {
    pvVar9 = operator_new(0xe);
    local_8._0_1_ = 4;
    if (pvVar9 == (void *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = (int *)FUN_00473a90(param_4,local_44,0);
    }
    local_8._0_1_ = 1;
    if (local_40 != 0) {
      local_44[2] = (int)piVar10;
      piVar10 = local_48;
    }
  }
  local_48 = piVar10;
  param_3 = 0.0;
  local_18 = 0.0;
  param_4 = 0.0;
  local_1c = 0.0;
  local_20 = 0;
  local_14 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  param_2 = local_48;
  if (local_48 == (int *)0x0) {
LAB_0058bfa6:
    param_3 = 1.0;
  }
  else {
    do {
      iVar12 = *param_2;
      param_2 = (int *)param_2[2];
      iVar12 = (&DAT_0089cad8)[iVar12];
      if ((iVar12 != 0) && ((&DAT_0089cad8)[*local_5c] != 0)) {
        puVar7 = *(undefined4 **)(iVar12 + 0xe892);
joined_r0x0058bf18:
        if (puVar7 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)puVar7[2];
          iVar11 = FUN_004e9370(*puVar7);
          fVar14 = (float10)FUN_004e4600(iVar12);
          local_14 = local_14 + 1;
          param_3 = (float)(fVar14 + (float10)param_3);
          puVar7 = puVar3;
          if (local_5c != (int *)0x0) {
            piVar10 = local_5c;
            do {
              piVar1 = piVar10 + 2;
              if (*(int *)(iVar11 + 0x3d8) == (&DAT_0089cad8)[*piVar10]) {
                local_18 = (float)fVar14 + local_18;
                local_20 = local_20 + 1;
                if (*(int *)(iVar12 + 0x117de) == *(int *)(iVar11 + 0x12)) {
                  local_2c = local_2c + 1;
                }
                break;
              }
              piVar10 = (int *)*piVar1;
            } while ((int *)*piVar1 != (int *)0x0);
          }
          goto joined_r0x0058bf18;
        }
      }
    } while (param_2 != (int *)0x0);
    if (param_3 < _DAT_007e3374) goto LAB_0058bfa6;
  }
  if (local_14 < 1) {
    local_14 = 1;
  }
  param_2 = local_5c;
  if (local_5c != (int *)0x0) {
    do {
      iVar12 = *param_2;
      param_2 = (int *)param_2[2];
      iVar12 = (&DAT_0089cad8)[iVar12];
      if ((iVar12 != 0) && ((&DAT_0089cad8)[*local_48] != 0)) {
        puVar7 = *(undefined4 **)(iVar12 + 0xe892);
joined_r0x0058bffc:
        if (puVar7 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)puVar7[2];
          iVar11 = FUN_004e9370(*puVar7);
          fVar14 = (float10)FUN_004e4600(iVar12);
          local_28 = local_28 + 1;
          param_4 = (float)(fVar14 + (float10)param_4);
          puVar7 = puVar3;
          if (local_48 != (int *)0x0) {
            piVar10 = local_48;
            do {
              piVar1 = piVar10 + 2;
              if (*(int *)(iVar11 + 0x3d8) == (&DAT_0089cad8)[*piVar10]) {
                local_1c = (float)fVar14 + local_1c;
                local_24 = local_24 + 1;
                if (*(int *)(iVar12 + 0x117de) == *(int *)(iVar11 + 0x12)) {
                  local_30 = local_30 + 1;
                }
                break;
              }
              piVar10 = (int *)*piVar1;
            } while ((int *)*piVar1 != (int *)0x0);
          }
          goto joined_r0x0058bffc;
        }
      }
    } while (param_2 != (int *)0x0);
    if (_DAT_007e3374 <= param_4) goto LAB_0058c091;
  }
  param_4 = 1.0;
LAB_0058c091:
  if (local_28 < 1) {
    local_28 = 1;
  }
  fVar4 = (float)local_20 - (float)local_24;
  fVar5 = (local_18 * _DAT_007e4088) / param_3;
  if (fVar4 < fVar5) {
    fVar4 = fVar5;
  }
  fVar5 = (float)local_24 - (float)local_20;
  fVar6 = (local_1c * _DAT_007e4088) / param_4;
  if (fVar5 < fVar6) {
    fVar5 = fVar6;
  }
  param_2 = (int *)((fVar4 - fVar5) + (float)(local_2c - local_30) * _DAT_007e682c);
  if (param_5 != '\0') {
    *(float *)(param_1 + 0x3a78c) = local_18;
    *(float *)(param_1 + 0x3a790) = param_3;
    *(float *)(param_1 + 0x3a794) = local_1c;
    *(float *)(param_1 + 0x3a798) = param_4;
    *(int *)(param_1 + 0x3a79c) = local_20;
    *(int *)(param_1 + 0x3a7a0) = local_14;
    *(int *)(param_1 + 0x3a7a4) = local_24;
    *(int *)(param_1 + 0x3a7a8) = local_28;
    *(int *)(param_1 + 0x3a7ac) = local_30;
    *(int *)(param_1 + 0x3a7b0) = local_2c;
  }
  if ((float)param_2 <= _DAT_007e4088) {
    if ((float)param_2 < _DAT_007e5e7c) {
      param_2 = (int *)0xc2c80000;
    }
  }
  else {
    param_2 = (int *)0x42c80000;
  }
  while (local_48 != (int *)0x0) {
    piVar10 = (int *)local_48[2];
    FUN_00796cd8(local_48);
    local_48 = piVar10;
  }
  while (local_5c != (int *)0x0) {
    piVar10 = (int *)local_5c[2];
    FUN_00796cd8(local_5c);
    local_5c = piVar10;
  }
  ExceptionList = local_10;
  return (int)ROUND((float)param_2);
}


