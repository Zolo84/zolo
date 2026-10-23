// FUN_00461390 @ 461390 size=859

void __thiscall FUN_00461390(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  bool bVar15;
  int local_48;
  undefined1 local_3c [8];
  undefined **local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  undefined1 local_24;
  undefined **local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc6ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar6 = FUN_00428ee0(param_2 + 0x1a);
  if ((iVar6 != 0) && (iVar6 != 8)) {
    FUN_00428eb0(local_3c);
    local_1c = (int *)0x0;
    local_18 = (int *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_20 = &PTR_LAB_007e378c;
    local_30 = (int *)0x0;
    local_2c = (int *)0x0;
    local_28 = 0;
    local_24 = 0;
    local_34 = &PTR_FUN_007e5258;
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    local_48 = 0;
    if (0 < *(int *)(param_2 + 0x2c)) {
      piVar14 = (int *)(param_2 + 0x9c74);
      do {
        iVar7 = FUN_004e9370(piVar14[-10000]);
        bVar15 = false;
        if ((*(int *)(iVar7 + 0x3d8) != *(int *)(iVar7 + 0x3d4)) &&
           (*(int *)(iVar7 + 0x3d8) != (&DAT_0089cad8)[*piVar14])) {
          bVar15 = true;
        }
        cVar5 = (**(code **)(*param_1 + 0x1c))();
        piVar1 = local_18;
        if ((cVar5 == '\0') || (piVar4 = local_30, !bVar15)) {
          iVar7 = piVar14[-10000];
          local_18 = operator_new(0xe);
          piVar3 = local_2c;
          if (local_18 == (int *)0x0) {
            local_18 = (int *)0x0;
          }
          else {
            *local_18 = iVar7;
            local_18[1] = (int)piVar1;
            local_18[2] = 0;
            *(undefined1 *)(local_18 + 3) = 0;
          }
          piVar4 = local_18;
          if (local_14 != 0) {
            piVar1[2] = (int)local_18;
            piVar4 = local_1c;
          }
          local_1c = piVar4;
          iVar7 = *piVar14;
          local_14 = local_14 + 1;
          local_2c = operator_new(0xe);
          if (local_2c == (int *)0x0) {
            local_2c = (int *)0x0;
          }
          else {
            *local_2c = iVar7;
            local_2c[1] = (int)piVar3;
            local_2c[2] = 0;
            *(undefined1 *)(local_2c + 3) = 0;
          }
          iVar7 = local_28 + 1;
          bVar15 = local_28 != 0;
          piVar4 = local_2c;
          local_28 = iVar7;
          if (bVar15) {
            piVar3[2] = (int)local_2c;
            piVar4 = local_30;
          }
        }
        local_30 = piVar4;
        local_48 = local_48 + 1;
        piVar14 = piVar14 + 1;
      } while (local_48 < *(int *)(param_2 + 0x2c));
    }
    pvVar8 = operator_new(0xc);
    local_4._0_1_ = 2;
    if (pvVar8 == (void *)0x0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_00566290(0xce,&DAT_0088f2a4,local_3c,iVar6 + 4,*(undefined4 *)((int)param_1 + 6)
                             ,*(undefined4 *)(param_2 + 0x24),&local_20,&local_34);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar7 = *(int *)(param_2 + 4);
    *(undefined4 *)(iVar7 + 0xe) = *(undefined4 *)((int)param_1 + 6);
    *(undefined4 *)(iVar7 + 0x26) = *(undefined4 *)(iVar2 + 0x16);
    *(undefined1 *)(iVar7 + 0x30) = *(undefined1 *)(iVar2 + 0x138c3);
    *(undefined4 *)(iVar7 + 0x3a) = *(undefined4 *)(iVar2 + 0x138c8);
    *(undefined4 *)(iVar7 + 0x2a) = *(undefined4 *)(iVar2 + 0x28);
    *(undefined1 *)(iVar7 + 0x2e) = *(undefined1 *)(iVar2 + 0x138b4);
    *(undefined1 *)(iVar7 + 0x2f) = *(undefined1 *)(iVar2 + 0x138b5);
    *(undefined1 *)(iVar7 + 0x3e) = *(undefined1 *)(iVar2 + 0x138c2);
    *(undefined1 *)(iVar7 + 0x3f) = *(undefined1 *)(iVar2 + 0x138d0);
    *(undefined1 *)(iVar7 + 0x40) = *(undefined1 *)(iVar2 + 0x138d1);
    *(undefined1 *)(iVar7 + 0x41) = *(undefined1 *)(iVar2 + 0x138d2);
    iVar9 = (**(code **)(**(int **)(*(int *)(iVar6 + 0x1a) + 0x22) + 4))();
    iVar10 = (**(code **)(**(int **)(*(int *)(iVar6 + 0x1e) + 0x22) + 4))();
    iVar11 = FUN_00584c90();
    iVar12 = FUN_00584c90();
    cVar5 = FUN_00584e20(*(undefined4 *)((int)param_1 + 6));
    iVar6 = iVar10;
    iVar13 = iVar12;
    if (cVar5 == '\0') {
      iVar6 = iVar9;
      iVar13 = iVar11;
      iVar11 = iVar12;
      iVar9 = iVar10;
    }
    if (iVar9 < 2) {
      *(undefined1 *)(iVar7 + 0x2e) = 0;
    }
    if (iVar6 < 2) {
      *(undefined1 *)(iVar7 + 0x2f) = 0;
    }
    if (iVar11 != *(int *)((int)param_1 + 6)) {
      *(undefined1 *)(iVar7 + 0x2e) = 1;
    }
    if (iVar13 != *(int *)(iVar2 + 0x24)) {
      *(undefined1 *)(iVar7 + 0x2f) = 1;
    }
    FUN_00565bf0(param_2);
    local_34 = &PTR_LAB_007e3ff0;
    piVar14 = local_30;
    while (piVar14 != (int *)0x0) {
      piVar1 = (int *)piVar14[2];
      FUN_00796cd8(piVar14);
      piVar14 = piVar1;
    }
    local_30 = (int *)0x0;
    local_2c = (int *)0x0;
    local_28 = 0;
    local_20 = &PTR_LAB_007e378c;
    piVar14 = local_1c;
    while (piVar14 != (int *)0x0) {
      piVar1 = (int *)piVar14[2];
      FUN_00796cd8(piVar14);
      piVar14 = piVar1;
    }
  }
  ExceptionList = local_c;
  return;
}


