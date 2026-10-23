// FUN_005dc4d0 @ 5dc4d0 size=1304

void __fastcall FUN_005dc4d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  bool bVar12;
  int iStack_4c;
  int local_44;
  int local_40;
  int *piStack_30;
  int *piStack_2c;
  int iStack_28;
  int *piStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cdcfc;
  pvStack_c = ExceptionList;
  local_44 = 0;
  local_40 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(*(int *)(param_1 + 0xbc) + 0x3e) != 0) {
    ExceptionList = &pvStack_c;
    local_44 = FUN_005dd1e0();
  }
  if (*(int *)(*(int *)(param_1 + 0xc0) + 0x3e) != 0) {
    local_40 = FUN_005dd1e0();
  }
  iVar5 = *(int *)(param_1 + 0xbc);
  piVar1 = *(int **)(iVar5 + 4);
  while (piVar1 != (int *)0x0) {
    puVar10 = (undefined4 *)*piVar1;
    piVar1 = (int *)piVar1[2];
    if (puVar10 != (undefined4 *)0x0) {
      (**(code **)*puVar10)();
    }
    FUN_00796cd8();
  }
  *(undefined4 *)(iVar5 + 4) = 0;
  *(undefined4 *)(iVar5 + 8) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  iVar5 = *(int *)(param_1 + 0xc0);
  piVar1 = *(int **)(iVar5 + 4);
  while (piVar1 != (int *)0x0) {
    puVar10 = (undefined4 *)*piVar1;
    piVar1 = (int *)piVar1[2];
    if (puVar10 != (undefined4 *)0x0) {
      (**(code **)*puVar10)();
    }
    FUN_00796cd8();
  }
  *(undefined4 *)(iVar5 + 4) = 0;
  *(undefined4 *)(iVar5 + 8) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  iVar5 = FUN_00428ee0();
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + -0x14;
  }
  iStack_4c = FUN_00428ee0();
  if (iStack_4c == 0) {
    iStack_4c = 0;
  }
  else {
    iStack_4c = iStack_4c + -0x14;
  }
  if ((iVar5 != 0) && (iStack_4c != 0)) {
    piStack_18 = (int *)0x0;
    iStack_14 = 0;
    uStack_4._0_1_ = 0;
    uStack_4._1_3_ = 0;
    piVar6 = (int *)0x0;
    piVar1 = *(int **)(iVar5 + 0x26);
joined_r0x005dc613:
    piVar9 = piStack_18;
    piVar4 = piVar6;
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[2];
      if (piVar4 != (int *)0x0) {
        piVar6 = piVar4;
        do {
          if (*(int *)(&DAT_00dbe78e + *(int *)(*piVar6 + 0x130) * 4) <
              *(int *)(&DAT_00dbe78e + *(int *)(*piVar1 + 0x130) * 4)) {
            FUN_00473950();
            piVar6 = piVar4;
            piVar1 = piVar2;
            piStack_18 = piVar9;
            goto joined_r0x005dc613;
          }
          piVar6 = (int *)piVar6[2];
        } while (piVar6 != (int *)0x0);
      }
      pvVar7 = operator_new(0xe);
      uStack_4._0_1_ = 1;
      if (pvVar7 == (void *)0x0) {
        piStack_18 = (int *)0x0;
      }
      else {
        piStack_18 = (int *)FUN_0045baf0();
      }
      uStack_4._0_1_ = 0;
      iVar5 = iStack_14 + 1;
      bVar12 = iStack_14 != 0;
      piVar6 = piStack_18;
      piVar1 = piVar2;
      iStack_14 = iVar5;
      if (bVar12) {
        piVar9[2] = (int)piStack_18;
        piVar6 = piVar4;
      }
      goto joined_r0x005dc613;
    }
    while (piVar4 != (int *)0x0) {
      piVar1 = (int *)piVar4[2];
      iVar5 = *piVar4;
      pvVar7 = operator_new(0x90);
      uStack_4._0_1_ = 2;
      if (pvVar7 != (void *)0x0) {
        uVar8 = FUN_00447250();
        FUN_00449290(uVar8);
        FUN_005dbc20(iVar5);
      }
      uStack_4._0_1_ = 0;
      iVar5 = *(int *)(param_1 + 0xbc);
      iVar11 = *(int *)(iVar5 + 8);
      pvVar7 = operator_new(0xe);
      uStack_4._0_1_ = 3;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_005926a0();
      }
      iVar3 = *(int *)(iVar5 + 0xc);
      uStack_4._0_1_ = 0;
      *(undefined4 *)(iVar5 + 8) = uVar8;
      *(int *)(iVar5 + 0xc) = iVar3 + 1;
      piVar4 = piVar1;
      if (iVar3 == 0) {
        *(undefined4 *)(iVar5 + 4) = uVar8;
      }
      else {
        *(undefined4 *)(iVar11 + 8) = uVar8;
      }
    }
    uStack_4 = 0xffffffff;
    FUN_0045a530();
    piStack_2c = (int *)0x0;
    piStack_30 = (int *)0x0;
    iStack_28 = 0;
    uStack_4 = 4;
    piVar1 = *(int **)(iStack_4c + 0x26);
joined_r0x005dc7c0:
    piVar6 = piStack_30;
    piVar4 = piStack_2c;
    piVar9 = piVar6;
    if (piVar1 != (int *)0x0) {
      piVar9 = (int *)piVar1[2];
      iVar5 = *piVar1;
      piVar1 = piVar9;
      if (piVar6 != (int *)0x0) {
        piVar9 = piVar6;
        do {
          if (*(int *)(&DAT_00dbe78e + *(int *)(*piVar9 + 0x130) * 4) <
              *(int *)(&DAT_00dbe78e + *(int *)(iVar5 + 0x130) * 4)) {
            FUN_00473950();
            piStack_2c = piVar4;
            piStack_30 = piVar6;
            goto joined_r0x005dc7c0;
          }
          piVar9 = (int *)piVar9[2];
        } while (piVar9 != (int *)0x0);
      }
      piStack_2c = operator_new(0xe);
      if (piStack_2c == (int *)0x0) {
        piStack_2c = (int *)0x0;
      }
      else {
        *piStack_2c = iVar5;
        piStack_2c[1] = (int)piVar4;
        piStack_2c[2] = 0;
        *(undefined1 *)(piStack_2c + 3) = 0;
      }
      iVar5 = iStack_28 + 1;
      bVar12 = iStack_28 != 0;
      piStack_30 = piStack_2c;
      iStack_28 = iVar5;
      if (bVar12) {
        piVar4[2] = (int)piStack_2c;
        piStack_30 = piVar6;
      }
      goto joined_r0x005dc7c0;
    }
    while (piVar9 != (int *)0x0) {
      uVar8 = 0;
      piVar1 = (int *)piVar9[2];
      iVar5 = *piVar9;
      pvVar7 = operator_new(0x90);
      uStack_4._0_1_ = 5;
      if (pvVar7 != (void *)0x0) {
        uVar8 = FUN_00447250();
        FUN_00449290(uVar8);
        uVar8 = FUN_005dbc20(iVar5);
      }
      uStack_4 = CONCAT31(uStack_4._1_3_,4);
      iVar5 = *(int *)(param_1 + 0xc0);
      iVar11 = *(int *)(iVar5 + 8);
      puVar10 = operator_new(0xe);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        *puVar10 = uVar8;
        puVar10[1] = iVar11;
        puVar10[2] = 0;
        *(undefined1 *)(puVar10 + 3) = 0;
      }
      iVar3 = *(int *)(iVar5 + 0xc);
      *(undefined4 **)(iVar5 + 8) = puVar10;
      *(int *)(iVar5 + 0xc) = iVar3 + 1;
      piVar9 = piVar1;
      if (iVar3 == 0) {
        *(undefined4 **)(iVar5 + 4) = puVar10;
      }
      else {
        *(undefined4 **)(iVar11 + 8) = puVar10;
      }
    }
    uStack_4 = 0xffffffff;
    while (piVar6 != (int *)0x0) {
      piVar6 = (int *)piVar6[2];
      FUN_00796cd8();
    }
  }
  FUN_004353e0();
  FUN_004353e0();
  if (local_44 != 0) {
    for (iVar5 = *(int *)(*(int *)(param_1 + 0xbc) + 4); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
      iVar11 = FUN_005dd1e0();
      if (iVar11 == local_44) {
        FUN_005918b0();
      }
    }
  }
  if (local_40 != 0) {
    for (iVar5 = *(int *)(*(int *)(param_1 + 0xc0) + 4); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
      iVar11 = FUN_005dd1e0();
      if (iVar11 == local_40) {
        FUN_005918b0();
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}


