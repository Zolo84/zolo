// FUN_0042efb0 @ 42efb0 size=2770

undefined4 __fastcall FUN_0042efb0(int param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  int unaff_EBX;
  int iVar8;
  char *pcVar9;
  int iVar10;
  undefined2 uStack_28;
  undefined4 uStack_26;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba3a7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00780d80();
  FUN_00780e00();
  *(undefined1 *)(param_1 + 0x11d) = 1;
  FUN_00428600(&DAT_0088f28c,*(undefined4 *)(DAT_00bd1500 + 900));
  FUN_007595a0();
  pvVar3 = operator_new(0x36);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    DAT_00893638 = (int *)0x0;
  }
  else {
    DAT_00893638 = (int *)FUN_006fe8b0(300);
  }
  local_4 = 0xffffffff;
  FUN_006feb60();
  DAT_00893638[6] = 0xc;
  if (DAT_00dc4b5e != '\0') {
    uVar4 = FUN_0042b6c9(s_INIT_PROVINCES_0083b484);
    FUN_006fed70(uVar4);
  }
  (**(code **)(*DAT_00893638 + 0x10))(0);
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x111) = 0;
  pvVar3 = operator_new(0x7e);
  puStack_8 = (undefined1 *)0x1;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00415020();
  }
  *(undefined4 *)(param_1 + 0x112) = uVar4;
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00584170(s_palette_act_0083b438);
  FUN_00444300();
  FUN_00444300();
  DAT_00d610dc = 0;
  DAT_00d610dd = 0;
  DAT_00d610de = 0;
  DAT_00d610df = 0;
  DAT_00d610e0 = 0;
  DAT_00d610e1 = 0;
  DAT_00d610e2 = 0;
  DAT_00d610e3 = 0;
  DAT_00d610e4 = 0;
  DAT_00d610e5 = 0;
  DAT_00d610e6 = 0;
  puVar5 = operator_new(0x12);
  puStack_8 = (undefined1 *)0x2;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_00425b20();
    puStack_8._0_1_ = 3;
    FUN_004289a0();
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
    *puVar5 = &PTR_FUN_007e3fe0;
    puVar5[2] = &PTR_LAB_007e3fd0;
    uStack_28 = 2;
    uStack_26 = 1;
    FUN_00428a80(&uStack_28);
    param_1 = unaff_EBX;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  DAT_00be19d0 = puVar5;
  if (DAT_00bdc100 != (undefined4 *)0x0) {
    (**(code **)*DAT_00bdc100)(1);
  }
  pvVar3 = operator_new(0x12);
  puStack_8 = (undefined1 *)0x5;
  if (pvVar3 == (void *)0x0) {
    DAT_00bdc100 = (undefined4 *)0x0;
  }
  else {
    DAT_00bdc100 = (undefined4 *)FUN_005aebb0();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  pvVar3 = operator_new(0x12);
  puStack_8 = (undefined1 *)0x6;
  if (pvVar3 == (void *)0x0) {
    DAT_00d615a6 = 0;
  }
  else {
    DAT_00d615a6 = FUN_005af010();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  pvVar3 = operator_new(10);
  puStack_8 = (undefined1 *)0x7;
  if (pvVar3 == (void *)0x0) {
    DAT_00d615aa = 0;
  }
  else {
    DAT_00d615aa = FUN_005b9229();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  DAT_00d615a2 = operator_new(1);
  pvVar3 = operator_new(10);
  puStack_8 = (undefined1 *)0x8;
  if (pvVar3 == (void *)0x0) {
    DAT_00d615ae = 0;
  }
  else {
    DAT_00d615ae = FUN_005b5aa0();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  pvVar3 = operator_new(0x1d52c);
  puStack_8 = (undefined1 *)0x9;
  if (pvVar3 == (void *)0x0) {
    DAT_00d615b2 = 0;
  }
  else {
    DAT_00d615b2 = FUN_006ffc40();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  DAT_00d615b6 = operator_new(1);
  DAT_00d615ba = operator_new(1);
  puVar5 = operator_new(0x52a);
  puStack_8 = (undefined1 *)0xa;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_00430620(0);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xb);
    *puVar5 = &PTR_FUN_007e3fb0;
    *(undefined ***)((int)puVar5 + 0x12) = &PTR_FUN_007e3fa8;
    puVar5[2] = &PTR_LAB_007e3f94;
    FUN_00428d30();
    FUN_00584840();
    *(undefined1 *)((int)puVar5 + 0x16) = 0;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  DAT_00d615c2 = puVar5;
  puVar5 = operator_new(0x52a);
  puStack_8 = (undefined1 *)0xc;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_00430620(0);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xd);
    *puVar5 = &PTR_FUN_007e3f74;
    *(undefined ***)((int)puVar5 + 0x12) = &PTR_FUN_007e3f6c;
    puVar5[2] = &PTR_LAB_007e3f58;
    FUN_00428d30();
    FUN_00584a60();
    *(undefined1 *)((int)puVar5 + 0x16) = 0;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  DAT_00d615ca = puVar5;
  puVar5 = operator_new(0x52a);
  puStack_8 = (undefined1 *)0xe;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_00430620(0);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xf);
    *puVar5 = &PTR_FUN_007e3f38;
    *(undefined ***)((int)puVar5 + 0x12) = &PTR_FUN_007e3f30;
    puVar5[2] = &PTR_LAB_007e3f1c;
    FUN_00428d30();
    FUN_00584950();
    *(undefined1 *)((int)puVar5 + 0x16) = 0;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  DAT_00d615c6 = puVar5;
  pvVar3 = operator_new(0x6d6);
  puStack_8 = (undefined1 *)0x10;
  if (pvVar3 == (void *)0x0) {
    DAT_00d13348 = 0;
  }
  else {
    DAT_00d13348 = FUN_006d0680();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_004e0600();
  DAT_00893638[6] = 0xf;
  if (DAT_00dc4b5e != '\0') {
    uVar4 = FUN_0042b6c9(s_INIT_SCENARIO_0083b474);
    FUN_006fed70(uVar4);
  }
  (**(code **)(*DAT_00893638 + 0x10))(0);
  FUN_00426070();
  pvStack_c = (void *)0x11;
  FUN_004260b0();
  FUN_0042e9b0(param_1 + 0x10);
  FUN_004260e0();
  FUN_00780ee0();
  FUN_005886c0();
  if (*(char *)(DAT_00d685a6 + 0x2ce2) == '\0') {
    if (DAT_00d61392 == 0) {
      DAT_00d6138e._1_1_ = DAT_00d61388._1_1_;
      DAT_00d6138e._0_1_ = (undefined1)DAT_00d61388;
      DAT_00d61392 = DAT_00d6138c + 4;
      DAT_00d6138e._2_1_ = DAT_00d61388._2_1_;
      FUN_0042dc20(1);
    }
    if (*(int *)(*DAT_00d12b40 + 0x3fe) != 0) {
      if (*(int *)(*DAT_00d12b40 + 0x3fe) < 0) {
        DAT_00d61392 = DAT_00d6138c + 1;
        FUN_0042dc20(1);
      }
      else {
        DAT_00d61392 = DAT_00d6138c;
        DAT_00d6138e._0_1_ = (undefined1)DAT_00d61388;
        DAT_00d6138e._2_1_ = DAT_00d61388._2_1_;
        DAT_00d6138e._1_1_ = DAT_00d61388._1_1_;
        FUN_0042dc20(1);
        DAT_00d61392 = DAT_00d6138c + (short)*(undefined4 *)(*DAT_00d12b40 + 0x3fe) * 4;
      }
    }
  }
  if (((DAT_00bd1500 == 0) || (*(char *)(DAT_00bd1500 + 0x37b) == '\0')) ||
     (*(char *)(DAT_00bd1500 + 0x37a) != '\0')) {
    puVar5 = operator_new(0xc);
    pvStack_c._0_1_ = 0x12;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      pvVar3 = operator_new(0xe);
      pvStack_c._0_1_ = 0x13;
      if (pvVar3 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0042d6c0();
      }
      pvStack_c._0_1_ = 0x12;
      FUN_0042d320(uVar4);
      *puVar5 = &PTR_FUN_007e3e5c;
      *(undefined1 *)((int)puVar5 + 10) = 0;
      *(undefined2 *)puVar5[1] = 0x4e;
      iVar10 = puVar5[1];
      *(undefined4 *)(iVar10 + 8) = DAT_0088f29c;
      pvStack_c._0_1_ = 0x14;
      *(undefined2 *)(iVar10 + 0xc) = DAT_0088f2a0;
      puVar6 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar10 = puVar5[1];
      *(undefined4 *)(iVar10 + 2) = *puVar6;
      *(undefined2 *)(iVar10 + 6) = *(undefined2 *)(puVar6 + 1);
      *puVar5 = &PTR_FUN_007e3e3c;
    }
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x11);
    FUN_00565af0(puVar5,&DAT_00d6138e);
  }
  FUN_0040fd60(DAT_00a983fc,100,0);
  FUN_0040fd60(DAT_00a983fc,0xfa,2);
  FUN_0040fd60(DAT_00a983fc,500,4);
  FUN_0040fd60(DAT_00a983fc,0x866,3);
  FUN_0040ce30();
  if (DAT_0089d034 == 0) {
    FUN_0044b6f0(0x157);
  }
  FUN_004c8de5();
  iVar10 = 0;
  do {
    if ((&DAT_00dc0fd4)[iVar10] == 1) {
      FUN_004d8390(iVar10);
    }
    iVar8 = (&DAT_0089cad8)[iVar10];
    puVar5 = DAT_00d615d2;
    if (iVar8 != 0) {
      while (puVar5 != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)puVar5[2];
        uVar4 = *puVar5;
        cVar2 = FUN_00584e20(*(undefined4 *)(iVar8 + 6));
        puVar5 = puVar6;
        if (cVar2 != '\0') {
          FUN_004512f0(uVar4);
        }
      }
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x158);
  if (DAT_00bd14fc == 0) {
    puVar5 = operator_new(0xc);
    pvStack_c._0_1_ = 0x17;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar7 = operator_new(0xe);
      pvStack_c._0_1_ = 0x18;
      if (puVar7 == (undefined2 *)0x0) {
        puVar7 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d2d0();
        puVar7[4] = 0;
        *(undefined4 *)(puVar7 + 5) = 0;
      }
      puVar5[1] = puVar7;
      *(undefined1 *)(puVar5 + 2) = 0;
      *(undefined1 *)((int)puVar5 + 9) = 1;
      *puVar5 = &PTR_FUN_007e3e5c;
      *(undefined1 *)((int)puVar5 + 10) = 0;
      *puVar7 = 0x4d;
      iVar10 = puVar5[1];
      *(undefined4 *)(iVar10 + 8) = DAT_0088f29c;
      *(undefined2 *)(iVar10 + 0xc) = DAT_0088f2a0;
      iVar10 = puVar5[1];
      *(uint *)(iVar10 + 2) = (uint)puVar5 & 0xff000000;
      *(undefined2 *)(iVar10 + 6) = 0;
      *puVar5 = &PTR_FUN_007e3e3c;
    }
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x11);
    FUN_00565c50(puVar5);
  }
  else if ((DAT_00bd1500 == 0) || (*(char *)(DAT_00bd1500 + 0x37b) == '\0')) {
    puVar5 = operator_new(0xc);
    pvStack_c._0_1_ = 0x15;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar7 = operator_new(0xe);
      pvStack_c._0_1_ = 0x16;
      if (puVar7 == (undefined2 *)0x0) {
        puVar7 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d2d0();
        puVar7[4] = 0;
        *(undefined4 *)(puVar7 + 5) = 0;
      }
      puVar5[1] = puVar7;
      *(undefined1 *)(puVar5 + 2) = 0;
      *(undefined1 *)((int)puVar5 + 9) = 1;
      *puVar5 = &PTR_FUN_007e3e5c;
      *(undefined1 *)((int)puVar5 + 10) = 0;
      *puVar7 = 0x4d;
      iVar10 = puVar5[1];
      *(undefined4 *)(iVar10 + 8) = DAT_0088f29c;
      *(undefined2 *)(iVar10 + 0xc) = DAT_0088f2a0;
      iVar10 = puVar5[1];
      *(uint *)(iVar10 + 2) = (uint)puVar5 & 0xff000000;
      *(undefined2 *)(iVar10 + 6) = 0;
      *puVar5 = &PTR_FUN_007e3e3c;
    }
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x11);
    FUN_00565c50(puVar5);
    FUN_00582360();
  }
  else {
    FUN_00582350();
  }
  FUN_004cc729();
  iVar10 = 0;
  if (0 < DAT_00877690) {
    iVar8 = 0;
    do {
      iVar1 = *(int *)(iVar8 + 0x254 + DAT_00ab27b4);
      if ((iVar1 != 8) && (iVar1 != 9)) {
        FUN_004ea310();
        FUN_004e8540();
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 0x4b2;
    } while (iVar10 < DAT_00877690);
  }
  DAT_00893638[6] = 0x5f;
  if (DAT_00dc4b5e != '\0') {
    uVar4 = FUN_0042b6c9(s_INIT_SCRIPT_0083b468);
    FUN_006fed70(uVar4);
  }
  (**(code **)(*DAT_00893638 + 0x10))(0);
  if (DAT_00893638 != (int *)0x0) {
    (**(code **)*DAT_00893638)(1);
  }
  DAT_00893638 = (int *)0x0;
  if (*(char *)(DAT_00d685a6 + 0x277d) == '\0') {
    pvVar3 = operator_new(400);
    uStack_10._0_1_ = 0x1a;
    if (pvVar3 != (void *)0x0) {
      FUN_006dbcb0(*(undefined4 *)(DAT_00d0ca90 + 6));
    }
    uStack_10 = CONCAT31(uStack_10._1_3_,0x11);
    if (*(char *)(DAT_00d685a6 + 0x57c) == '\0') {
      pcVar9 = s_STANDARDGAME_0083b444;
    }
    else {
      pcVar9 = s_SCENARIOMISS_INFO_0083b454;
    }
    FUN_006dcb10(pcVar9);
    FUN_006dcec0();
  }
  else {
    puVar5 = operator_new(0xc);
    uStack_10._0_1_ = 0x19;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar7 = operator_new(0xe);
      if (puVar7 == (undefined2 *)0x0) {
        puVar7 = (undefined2 *)0x0;
      }
      else {
        puVar7[3] = 0;
        *(undefined1 *)(puVar7 + 2) = 0;
        *(undefined1 *)((int)puVar7 + 3) = 0;
        *(undefined1 *)(puVar7 + 1) = 0;
        puVar7[4] = 0;
        *(undefined4 *)(puVar7 + 5) = 0;
      }
      puVar5[1] = puVar7;
      *(undefined1 *)(puVar5 + 2) = 0;
      *(undefined1 *)((int)puVar5 + 9) = 1;
      *puVar5 = &PTR_FUN_007e3e5c;
      *(undefined1 *)((int)puVar5 + 10) = 0;
      *puVar7 = 0x12a;
      iVar10 = puVar5[1];
      *(undefined4 *)(iVar10 + 8) = DAT_0088f29c;
      *(undefined2 *)(iVar10 + 0xc) = DAT_0088f2a0;
      iVar10 = puVar5[1];
      *(uint *)(iVar10 + 2) = (uint)puVar5 & 0xff000000;
      *(undefined2 *)(iVar10 + 6) = 0;
      *puVar5 = &PTR_FUN_007e3e3c;
    }
    uStack_10 = CONCAT31(uStack_10._1_3_,0x11);
    FUN_00565c50(puVar5);
  }
  DAT_0089374c = 1;
  FUN_004b82c0();
  uStack_10 = 0xffffffff;
  FUN_004260a0();
  ExceptionList = pvStack_18;
  return 1;
}


