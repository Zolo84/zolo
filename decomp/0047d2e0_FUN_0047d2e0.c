// FUN_0047d2e0 @ 47d2e0 size=774

undefined4 FUN_0047d2e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  bool bVar9;
  void *extraout_var;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bd2b7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar6 = FUN_00428ee0(*(int *)(param_1 + 4) + 0x12);
  pvVar8 = extraout_var;
  if ((iVar6 == 0) || (piVar1 = (int *)(iVar6 + -8), piVar1 == (int *)0x0)) goto LAB_0047d5b4;
  piVar3 = *(int **)(*(int *)(iVar6 + 0x1a) + 4);
  while (piVar3 != (int *)0x0) {
    piVar2 = (int *)piVar3[2];
    iVar6 = *piVar3;
    piVar3 = piVar2;
    if ((&DAT_0089cad8)[iVar6] != 0) {
      FUN_00463240();
      FUN_004512f0(0);
    }
  }
  cVar5 = (**(code **)(*piVar1 + 0x14))();
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*piVar1 + 0x18))();
    if (cVar5 != '\0') {
      puVar7 = operator_new(0x52a);
      uStack_4 = 4;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
        DAT_00d615c6 = (undefined4 *)0x0;
      }
      else {
        FUN_00430620(0);
        uStack_4 = CONCAT31(uStack_4._1_3_,5);
        *puVar7 = &PTR_FUN_007e3f38;
        *(undefined ***)((int)puVar7 + 0x12) = &PTR_FUN_007e3f30;
        puVar7[2] = &PTR_LAB_007e3f1c;
        FUN_00428d30();
        FUN_00584950();
        *(undefined1 *)((int)puVar7 + 0x16) = 0;
        DAT_00d615c6 = puVar7;
      }
      goto LAB_0047d401;
    }
    cVar5 = (**(code **)(*piVar1 + 0x1c))();
    puVar7 = DAT_00d615d2;
    if (cVar5 != '\0') {
      puVar7 = operator_new(0x52a);
      uStack_4 = 6;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        FUN_00430620(0);
        uStack_4 = CONCAT31(uStack_4._1_3_,7);
        *puVar7 = &PTR_FUN_007e3f74;
        *(undefined ***)((int)puVar7 + 0x12) = &PTR_FUN_007e3f6c;
        puVar7[2] = &PTR_LAB_007e3f58;
        FUN_00428d30();
        FUN_00584a60();
        *(undefined1 *)((int)puVar7 + 0x16) = 0;
      }
      puVar4 = DAT_00d615d6;
      uStack_4 = 0xffffffff;
      DAT_00d615ca = puVar7;
      pvVar8 = operator_new(0xe);
      uStack_4 = 8;
      if (pvVar8 == (void *)0x0) {
        DAT_00d615d6 = (undefined4 *)0x0;
      }
      else {
        DAT_00d615d6 = (undefined4 *)FUN_0045ba90(puVar7,puVar4,0);
      }
      uStack_4 = 0xffffffff;
      iVar6 = DAT_00d615da + 1;
      bVar9 = DAT_00d615da != 0;
      puVar7 = DAT_00d615d6;
      DAT_00d615da = iVar6;
      if (bVar9) {
        puVar4[2] = DAT_00d615d6;
        puVar7 = DAT_00d615d2;
      }
    }
  }
  else {
    puVar7 = operator_new(0x52a);
    uStack_4 = 0;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
      DAT_00d615c2 = puVar7;
    }
    else {
      FUN_00425b20();
      uStack_4._0_1_ = 1;
      FUN_00428b00();
      *(undefined ***)((int)puVar7 + 0x12) = &PTR_LAB_007e4068;
      uStack_4._0_1_ = 2;
      *puVar7 = &PTR_FUN_007e4048;
      puVar7[2] = &PTR_LAB_007e4034;
      *(undefined ***)((int)puVar7 + 0x12) = &PTR_FUN_007e402c;
      FUN_00428d30();
      FUN_005847c0();
      *(undefined1 *)((int)puVar7 + 0x16) = 0;
      uStack_4 = CONCAT31(uStack_4._1_3_,3);
      *puVar7 = &PTR_FUN_007e3fb0;
      puVar7[2] = &PTR_LAB_007e3f94;
      *(undefined ***)((int)puVar7 + 0x12) = &PTR_FUN_007e3fa8;
      FUN_00428d30();
      FUN_00584840();
      *(undefined1 *)((int)puVar7 + 0x16) = 0;
      DAT_00d615c2 = puVar7;
    }
LAB_0047d401:
    puVar4 = DAT_00d615d6;
    uStack_4 = 0xffffffff;
    DAT_00d615d6 = operator_new(0xe);
    if (DAT_00d615d6 == (undefined4 *)0x0) {
      DAT_00d615d6 = (undefined4 *)0x0;
    }
    else {
      *DAT_00d615d6 = puVar7;
      DAT_00d615d6[1] = puVar4;
      DAT_00d615d6[2] = 0;
      *(undefined1 *)(DAT_00d615d6 + 3) = 0;
    }
    iVar6 = DAT_00d615da + 1;
    bVar9 = DAT_00d615da != 0;
    puVar7 = DAT_00d615d6;
    DAT_00d615da = iVar6;
    if (bVar9) {
      puVar4[2] = DAT_00d615d6;
      puVar7 = DAT_00d615d2;
    }
  }
  DAT_00d615d2 = puVar7;
  FUN_00425cb0(piVar1);
  FUN_005886c0();
  FUN_004cc729();
LAB_0047d5b4:
  if (DAT_00a98440 == 3) {
    FUN_004dcb20(DAT_00a98448,3,pvVar8);
  }
  ExceptionList = pvStack_c;
  return 3;
}


