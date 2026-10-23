// FUN_0048ea70 @ 48ea70 size=527

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0048ea70(float param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  float10 fVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar4 = (int)param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bd9c1;
  local_c = ExceptionList;
  iVar3 = *(int *)((int)param_1 + 4);
  iVar1 = DAT_00ab27b4 + *(int *)(iVar3 + 0x16) * 0x4b2;
  param_1 = *(float *)(iVar3 + 0x12);
  if (*(int *)(iVar3 + 0xe) == 5) {
    param_1 = param_1 * _DAT_007e46cc;
  }
  puVar6 = *(undefined4 **)(iVar1 + 0x1c6 + *(int *)(iVar3 + 0xe) * 4);
  ExceptionList = &local_c;
  if ((puVar6[6] != 0) || (ExceptionList = &local_c, param_1 <= _DAT_007e3380)) goto LAB_0048eb97;
  if (*(int *)(iVar3 + 0xe) == 6) {
    ExceptionList = &local_c;
    pvVar5 = operator_new(0x9c86);
    local_4 = 0;
    if (pvVar5 == (void *)0x0) goto LAB_0048eb68;
    puVar6 = (undefined4 *)FUN_004d1040();
  }
  else if (*(int *)(iVar3 + 0xe) == 7) {
    ExceptionList = &local_c;
    pvVar5 = operator_new(0x2e);
    local_4 = 1;
    if (pvVar5 == (void *)0x0) {
LAB_0048eb68:
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)FUN_004d1390();
    }
  }
  else {
    ExceptionList = &local_c;
    pvVar5 = operator_new(0x1c);
    local_4 = 2;
    if (pvVar5 == (void *)0x0) goto LAB_0048eb68;
    puVar6 = (undefined4 *)FUN_004d0520();
  }
  local_4 = 0xffffffff;
  FUN_004d1010(*(undefined4 *)(*(int *)(iVar4 + 4) + 0xe));
  FUN_004ece60(*(undefined4 *)(*(int *)(iVar4 + 4) + 0xe),puVar6);
  puVar6[3] = *(undefined4 *)(iVar1 + 0x12);
LAB_0048eb97:
  if (puVar6[6] != 0) {
    fVar2 = (float)puVar6[4];
    fVar7 = (float10)FUN_004d0d40(puVar6[6]);
    if ((float10)(fVar2 + param_1) <= fVar7) {
      fVar7 = (float10)(fVar2 + param_1);
    }
    else {
      fVar7 = (float10)FUN_004d0d40(puVar6[6]);
    }
    puVar6[4] = (float)fVar7;
    if (fVar7 < (float10)_DAT_007e3380) {
      puVar6[4] = 0;
    }
    fVar2 = (float)puVar6[5];
    fVar7 = (float10)FUN_004d0d40(puVar6[6]);
    if ((float10)(fVar2 + param_1) <= fVar7) {
      fVar7 = (float10)(fVar2 + param_1);
    }
    else {
      fVar7 = (float10)FUN_004d0d40(puVar6[6]);
    }
    puVar6[5] = (float)fVar7;
    if (fVar7 < (float10)_DAT_007e3380) {
      puVar6[5] = 0;
    }
    if (((float)puVar6[4] <= _DAT_007e3380) && (puVar6[6] != 5)) {
      FUN_004ece60(puVar6[6],&DAT_008eff90);
      if (puVar6 != (undefined4 *)0x0) {
        (**(code **)*puVar6)(1);
      }
    }
  }
  ExceptionList = local_c;
  return 3;
}


