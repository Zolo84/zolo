// FUN_0047e660 @ 47e660 size=922

undefined4 FUN_0047e660(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bd3ad;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(*(int *)((&DAT_0089cad8)[*(int *)(iVar1 + 0x20)] + 0x12da) +
               (*(int *)(iVar1 + 0x24) + 1) * 0x2c) == '\0') {
    ExceptionList = &local_c;
    pvVar4 = operator_new(0x3a7b4);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004862d0();
    }
    piVar2 = DAT_00d615e8;
    local_4 = 0xffffffff;
    DAT_00d615e8 = operator_new(0xe);
    if (DAT_00d615e8 == (int *)0x0) {
      DAT_00d615e8 = (int *)0x0;
    }
    else {
      *DAT_00d615e8 = iVar5;
      DAT_00d615e8[1] = (int)piVar2;
      DAT_00d615e8[2] = 0;
      *(undefined1 *)(DAT_00d615e8 + 3) = 0;
    }
    iVar8 = DAT_00d615ec + 1;
    bVar11 = DAT_00d615ec != 0;
    piVar3 = DAT_00d615e8;
    DAT_00d615ec = iVar8;
    if (bVar11) {
      piVar2[2] = (int)DAT_00d615e8;
      piVar3 = DAT_00d615e4;
    }
    DAT_00d615e4 = piVar3;
    puVar6 = operator_new(0x52a);
    local_4 = 1;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      FUN_00425b20();
      local_4._0_1_ = 2;
      FUN_00428b00();
      *(undefined ***)((int)puVar6 + 0x12) = &PTR_LAB_007e4068;
      local_4 = CONCAT31(local_4._1_3_,3);
      *puVar6 = &PTR_FUN_007e4048;
      puVar6[2] = &PTR_LAB_007e4034;
      *(undefined ***)((int)puVar6 + 0x12) = &PTR_FUN_007e402c;
      FUN_00428d60();
      FUN_005847c0();
      *(undefined1 *)((int)puVar6 + 0x16) = 1;
    }
    *(undefined4 **)(iVar5 + 0x22) = puVar6;
    local_4 = 0xffffffff;
    *(undefined4 **)(iVar5 + 0x1d3ce) = puVar6;
    puVar6 = operator_new(0x52a);
    local_4 = 4;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      FUN_00425b20();
      local_4._0_1_ = 5;
      FUN_00428b00();
      *(undefined ***)((int)puVar6 + 0x12) = &PTR_LAB_007e4068;
      local_4 = CONCAT31(local_4._1_3_,6);
      *puVar6 = &PTR_FUN_007e4048;
      puVar6[2] = &PTR_LAB_007e4034;
      *(undefined ***)((int)puVar6 + 0x12) = &PTR_FUN_007e402c;
      FUN_00428d60();
      FUN_005847c0();
      *(undefined1 *)((int)puVar6 + 0x16) = 1;
    }
    *(undefined4 **)(iVar5 + 0x26) = puVar6;
    *(undefined4 **)(iVar5 + 0x3a776) = puVar6;
    local_4 = 0xffffffff;
    FUN_00449290();
    FUN_00460220();
    FUN_00449290();
    FUN_00460220();
    iVar8 = DAT_00893530;
    puVar6 = (undefined4 *)(DAT_00893530 + 0x14);
    *(undefined4 *)(iVar5 + 0x16) = *puVar6;
    *(undefined2 *)(iVar5 + 0x1a) = *(undefined2 *)(iVar8 + 0x18);
    *(undefined4 *)(iVar5 + 0x1c) = *puVar6;
    iVar9 = 0x158;
    *(undefined2 *)(iVar5 + 0x20) = *(undefined2 *)(iVar8 + 0x18);
    puVar6 = (undefined4 *)(iVar5 + 0x1d3da);
    do {
      puVar10 = puVar6 + -0x74ea;
      for (iVar5 = 0x56; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      iVar9 = iVar9 + -1;
      puVar10 = puVar6;
      for (iVar5 = 0x56; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      puVar6 = puVar6 + 0x57;
    } while (iVar9 != 0);
    pvVar4 = operator_new(0xc);
    local_4 = 7;
    if (pvVar4 != (void *)0x0) {
      FUN_00449290();
      FUN_00449290();
      FUN_00449290(iVar1 + 0xe);
      uVar7 = FUN_0047ea00(3,*(undefined4 *)(iVar1 + 0x20));
      FUN_00464b70(0xbd,uVar7);
    }
    local_4 = 0xffffffff;
    FUN_00565c30();
    pvVar4 = operator_new(0xc);
    local_4 = 8;
    if (pvVar4 != (void *)0x0) {
      FUN_00449290();
      FUN_00449290();
      FUN_00449290(iVar1 + 0xe);
      uVar7 = FUN_0047ea00(3,*(undefined4 *)(iVar1 + 0x24));
      FUN_00464b70(0xbe,uVar7);
    }
    local_4 = 0xffffffff;
    FUN_00565c30();
  }
  ExceptionList = local_c;
  return 3;
}


