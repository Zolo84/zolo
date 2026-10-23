// FUN_006a1950 @ 6a1950 size=659

int __thiscall FUN_006a1950(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  void *pvVar10;
  int *piVar11;
  bool bVar12;
  int local_28;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d5853;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar6 = FUN_0044e1d0();
  iVar1 = *(int *)(iVar6 + 0x52);
  local_28 = 99999999;
  iVar6 = *(int *)(param_2 + 0xc);
  iVar7 = FUN_004e9370(iVar6);
  if ((*(int *)(iVar7 + 0x254) != 8) && (*(int *)(iVar7 + 0x254) != 9)) {
    if (*(int *)(iVar7 + 0x3d8) == *(int *)(param_1 + 10)) {
      ExceptionList = local_c;
      return iVar6;
    }
    uVar8 = FUN_006a9d50();
    cVar5 = FUN_0044b300(uVar8);
    if (cVar5 != '\0') {
      ExceptionList = local_c;
      return iVar6;
    }
  }
  if ((*(int *)(iVar7 + 0x254) != 8) && (*(int *)(iVar7 + 0x254) != 9)) {
    if (0 < iVar6) {
      iVar6 = FUN_004e9370(iVar6);
      cVar5 = FUN_004e8f30();
      if ((cVar5 != '\0') && (iVar6 = *(int *)(iVar6 + 0x3dc), 0 < iVar6)) goto LAB_006a1a05;
    }
    iVar6 = 0;
  }
LAB_006a1a05:
  FUN_004734e0();
  local_4 = 0;
  iVar7 = 1;
  do {
    iVar9 = FUN_006a9d50();
    if ((iVar7 == iVar9) ||
       (cVar5 = FUN_004a33e0(iVar7), piVar2 = local_1c, piVar11 = local_18, cVar5 != '\0')) {
      pvVar10 = operator_new(0xe);
      local_4._0_1_ = 1;
      if (pvVar10 == (void *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)FUN_00473a90(iVar7,local_18,0);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      iVar9 = local_14 + 1;
      bVar12 = local_14 != 0;
      piVar2 = piVar11;
      local_14 = iVar9;
      if (bVar12) {
        local_18[2] = (int)piVar11;
        piVar2 = local_1c;
      }
    }
    local_18 = piVar11;
    local_1c = piVar2;
    iVar7 = iVar7 + 1;
    piVar2 = local_1c;
  } while (iVar7 < 0x158);
  while (piVar2 != (int *)0x0) {
    iVar7 = *piVar2;
    piVar2 = (int *)piVar2[2];
    if ((&DAT_0089cad8)[iVar7] != 0) {
      puVar4 = *(undefined4 **)((&DAT_0089cad8)[iVar7] + 0xe8a4);
      while (puVar4 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)puVar4[2];
        iVar7 = FUN_004e9370(*puVar4);
        puVar4 = puVar3;
        if (((*(int *)(iVar7 + 0x46a) != 0) && (iVar9 = FUN_004ece90(), iVar9 != 0)) &&
           (cVar5 = FUN_0049ee30(iVar7), cVar5 != '\0')) {
          if (0 < *(int *)(iVar7 + 0x12)) {
            FUN_004e9370(*(int *)(iVar7 + 0x12));
          }
          cVar5 = FUN_004ed600(*(undefined4 *)(param_1 + 10),iVar6);
          if ((cVar5 != '\0') &&
             ((iVar9 = FUN_006a9d50(), iVar9 != 6 || (*(int *)(iVar7 + 0x28c) != 0x1f)))) {
            FUN_004ed6d0(iVar6);
            iVar9 = __ftol();
            if (iVar9 < local_28) {
              iVar1 = *(int *)(iVar7 + 0x12);
              local_28 = iVar9;
            }
          }
        }
      }
    }
  }
  while (local_1c != (int *)0x0) {
    piVar2 = (int *)local_1c[2];
    FUN_00796cd8(local_1c);
    local_1c = piVar2;
  }
  ExceptionList = local_c;
  return iVar1;
}


