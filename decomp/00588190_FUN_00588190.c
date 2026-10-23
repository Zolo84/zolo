// FUN_00588190 @ 588190 size=518

undefined4 * __thiscall FUN_00588190(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  char cVar6;
  void *pvVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  int *local_1c;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c93d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004734e0();
  uVar1 = *(undefined4 *)((int)param_3 + 10);
  local_4 = 0;
  pvVar7 = operator_new(0xe);
  local_4._0_1_ = 1;
  if (pvVar7 == (void *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)FUN_00473a90(uVar1,local_18,0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_14 != 0) {
    *(int **)(local_18 + 8) = piVar8;
    piVar8 = local_1c;
  }
  local_1c = piVar8;
  param_3 = operator_new(0x12);
  piVar8 = local_1c;
  if (param_3 == (undefined4 *)0x0) {
    param_3 = (undefined4 *)0x0;
  }
  else {
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    *(undefined1 *)(param_3 + 4) = 0;
    *param_3 = &PTR_LAB_007e378c;
  }
  do {
    if (piVar8 == (int *)0x0) {
      while (local_1c != (int *)0x0) {
        piVar8 = (int *)local_1c[2];
        FUN_00796cd8(local_1c);
        local_1c = piVar8;
      }
      ExceptionList = local_c;
      return param_3;
    }
    iVar2 = *piVar8;
    piVar8 = (int *)piVar8[2];
    piVar5 = *(int **)((&DAT_0089cad8)[iVar2] + 0xe892);
joined_r0x0058826b:
  } while (piVar5 == (int *)0x0);
  piVar3 = (int *)piVar5[2];
  iVar2 = DAT_00ab27b4 + *piVar5 * 0x4b2;
  cVar6 = FUN_004e8a90();
  piVar5 = piVar3;
  if (cVar6 == '\0') {
    iVar9 = 0;
    bVar4 = true;
    piVar3 = DAT_00d61608;
    if (0 < *(int *)(param_1 + 0x2c)) {
      piVar13 = (int *)(param_1 + 0x34);
      do {
        if (!bVar4) break;
        if (*piVar13 == *(int *)(iVar2 + 0x12)) {
          bVar4 = false;
        }
        iVar9 = iVar9 + 1;
        piVar13 = piVar13 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x2c));
    }
joined_r0x005882d4:
    if (piVar3 != (int *)0x0) {
      if (!bVar4) goto joined_r0x0058826b;
      piVar13 = piVar3 + 2;
      iVar9 = *piVar3;
      iVar12 = *(int *)(iVar9 + 0x2c);
      piVar3 = (int *)*piVar13;
      if (0 < iVar12) {
        piVar10 = (int *)(iVar9 + 0x34);
        do {
          if (*piVar10 == *(int *)(iVar2 + 0x12)) {
            bVar4 = false;
          }
          piVar10 = piVar10 + 1;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      goto joined_r0x005882d4;
    }
    if (bVar4) {
      uVar1 = *(undefined4 *)(iVar2 + 0x12);
      iVar2 = param_3[2];
      puVar11 = operator_new(0xe);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        *puVar11 = uVar1;
        puVar11[1] = iVar2;
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 0;
      }
      iVar9 = param_3[3];
      param_3[2] = puVar11;
      param_3[3] = iVar9 + 1;
      if (iVar9 == 0) {
        param_3[1] = puVar11;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar11;
      }
    }
  }
  goto joined_r0x0058826b;
}


