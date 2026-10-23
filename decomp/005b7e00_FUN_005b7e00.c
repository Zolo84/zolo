// FUN_005b7e00 @ 5b7e00 size=4210

undefined4 FUN_005b7e00(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  uint uStack_94;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cc29e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar8 = FUN_0042e980();
  if (cVar8 == '\0') {
    ExceptionList = local_c;
    return 0;
  }
  FUN_0042dc20();
  uVar9 = (**(code **)(*param_1 + 8))();
  switch(uVar9) {
  case 0x1c2:
    iVar5 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar12 = operator_new(0xc);
    uStack_4 = 4;
    if (puVar12 != (undefined4 *)0x0) {
      iVar6 = param_1[1];
      uVar9 = *(undefined4 *)(iVar5 + 6);
      uVar1 = *(undefined1 *)(iVar6 + 0x18);
      uVar2 = *(undefined1 *)(iVar6 + 0x17);
      uVar3 = *(undefined1 *)(iVar6 + 0x16);
      uVar7 = *(undefined4 *)(iVar6 + 0x12);
      FUN_00465510();
      *puVar12 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar12[1] + 0xe) = uVar9;
      *(undefined4 *)(puVar12[1] + 0x12) = uVar7;
      *(undefined1 *)(puVar12[1] + 0x16) = uVar3;
      *(undefined1 *)(puVar12[1] + 0x17) = uVar2;
      *(undefined1 *)(puVar12[1] + 0x18) = uVar1;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    __ftol();
    FUN_0042dc20();
    pvVar10 = operator_new(0xc);
    uStack_4 = 5;
    if (pvVar10 == (void *)0x0) {
LAB_005b8d2c:
      uStack_4 = 0xffffffff;
      FUN_00565ca0();
      ExceptionList = local_c;
      return 0;
    }
    FUN_005b4af0();
    uVar9 = FUN_0047ea00();
    break;
  case 0x1c3:
    iVar5 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar12 = operator_new(0xc);
    uStack_4 = 10;
    if (puVar12 != (undefined4 *)0x0) {
      iVar6 = param_1[1];
      uVar9 = *(undefined4 *)(iVar5 + 6);
      uVar1 = *(undefined1 *)(iVar6 + 0x17);
      uVar2 = *(undefined1 *)(iVar6 + 0x18);
      uVar3 = *(undefined1 *)(iVar6 + 0x16);
      uVar7 = *(undefined4 *)(iVar6 + 0x12);
      FUN_00465510();
      *puVar12 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar12[1] + 0xe) = uVar9;
      *(undefined4 *)(puVar12[1] + 0x12) = uVar7;
      *(undefined1 *)(puVar12[1] + 0x16) = uVar3;
      *(undefined1 *)(puVar12[1] + 0x17) = uVar1;
      *(undefined1 *)(puVar12[1] + 0x18) = uVar2;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    pvVar10 = operator_new(0xc);
    uStack_4 = 0xb;
    if (pvVar10 == (void *)0x0) goto LAB_005b8d2c;
    FUN_005b4af0();
    uVar9 = FUN_0047ea00();
    break;
  case 0x1c4:
    iVar5 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar12 = operator_new(0xc);
    uStack_4 = 6;
    if (puVar12 != (undefined4 *)0x0) {
      iVar6 = param_1[1];
      uVar9 = *(undefined4 *)(iVar5 + 6);
      uVar1 = *(undefined1 *)(iVar6 + 0x17);
      uVar2 = *(undefined1 *)(iVar6 + 0x18);
      uVar3 = *(undefined1 *)(iVar6 + 0x16);
      uVar7 = *(undefined4 *)(iVar6 + 0x12);
      FUN_00465510();
      *puVar12 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar12[1] + 0xe) = uVar9;
      *(undefined4 *)(puVar12[1] + 0x12) = uVar7;
      *(undefined1 *)(puVar12[1] + 0x16) = uVar3;
      *(undefined1 *)(puVar12[1] + 0x17) = uVar1;
      *(undefined1 *)(puVar12[1] + 0x18) = uVar2;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    pvVar10 = operator_new(0xc);
    uStack_4 = 7;
    if (pvVar10 == (void *)0x0) goto LAB_005b8d2c;
    FUN_005b4af0();
    uVar9 = FUN_0047ea00();
    break;
  case 0x1c5:
    iVar5 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar12 = operator_new(0xc);
    uStack_4 = 0x10;
    if (puVar12 != (undefined4 *)0x0) {
      iVar6 = param_1[1];
      uVar9 = *(undefined4 *)(iVar5 + 6);
      uVar1 = *(undefined1 *)(iVar6 + 0x18);
      uVar2 = *(undefined1 *)(iVar6 + 0x17);
      uVar3 = *(undefined1 *)(iVar6 + 0x16);
      uVar7 = *(undefined4 *)(iVar6 + 0x1a);
      uVar4 = *(undefined4 *)(iVar6 + 0x12);
      FUN_005b8eb0();
      *puVar12 = &PTR_FUN_007e6924;
      *(undefined4 *)(puVar12[1] + 0xe) = uVar9;
      *(undefined4 *)(puVar12[1] + 0x12) = uVar4;
      *(undefined1 *)(puVar12[1] + 0x16) = uVar3;
      *(undefined1 *)(puVar12[1] + 0x17) = uVar2;
      *(undefined1 *)(puVar12[1] + 0x18) = uVar1;
      *(undefined4 *)(puVar12[1] + 0x1a) = uVar7;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    pvVar10 = operator_new(0xc);
    uStack_4 = 0x11;
    if (pvVar10 == (void *)0x0) goto LAB_005b8d2c;
    FUN_005b8f40();
    uVar9 = FUN_0047ea00();
    break;
  case 0x1c6:
    iVar5 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar12 = operator_new(0xc);
    uStack_4 = 8;
    if (puVar12 != (undefined4 *)0x0) {
      iVar6 = param_1[1];
      uVar9 = *(undefined4 *)(iVar5 + 6);
      uVar1 = *(undefined1 *)(iVar6 + 0x18);
      uVar2 = *(undefined1 *)(iVar6 + 0x17);
      uVar3 = *(undefined1 *)(iVar6 + 0x16);
      uVar7 = *(undefined4 *)(iVar6 + 0x12);
      FUN_00465510();
      *puVar12 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar12[1] + 0xe) = uVar9;
      *(undefined4 *)(puVar12[1] + 0x12) = uVar7;
      *(undefined1 *)(puVar12[1] + 0x16) = uVar3;
      *(undefined1 *)(puVar12[1] + 0x17) = uVar2;
      *(undefined1 *)(puVar12[1] + 0x18) = uVar1;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    pvVar10 = operator_new(0xc);
    uStack_4 = 9;
    if (pvVar10 == (void *)0x0) goto LAB_005b8d2c;
    FUN_005b4af0();
    uVar9 = FUN_0047ea00();
    break;
  case 0x1c7:
    iVar5 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar12 = operator_new(0xc);
    uStack_4 = 0x12;
    if (puVar12 != (undefined4 *)0x0) {
      iVar6 = param_1[1];
      uVar9 = *(undefined4 *)(iVar5 + 6);
      uVar1 = *(undefined1 *)(iVar6 + 0x17);
      uVar2 = *(undefined1 *)(iVar6 + 0x18);
      uVar3 = *(undefined1 *)(iVar6 + 0x16);
      uVar7 = *(undefined4 *)(iVar6 + 0x12);
      FUN_00465510();
      *puVar12 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar12[1] + 0xe) = uVar9;
      *(undefined4 *)(puVar12[1] + 0x12) = uVar7;
      *(undefined1 *)(puVar12[1] + 0x16) = uVar3;
      *(undefined1 *)(puVar12[1] + 0x17) = uVar1;
      *(undefined1 *)(puVar12[1] + 0x18) = uVar2;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    FUN_0042e060();
    if (*(char *)(param_1[1] + 0x18) == '\0') {
      pvVar10 = operator_new(0xc);
      uStack_4 = 0x14;
      if (pvVar10 == (void *)0x0) goto LAB_005b8d2c;
      FUN_005b4af0();
      uVar9 = FUN_0047ea00();
    }
    else {
      pvVar10 = operator_new(0xc);
      uStack_4 = 0x13;
      if (pvVar10 == (void *)0x0) goto LAB_005b8d2c;
      FUN_005b4af0();
      uVar9 = FUN_0047ea00();
    }
    break;
  case 0x1c8:
    iVar5 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar12 = operator_new(0xc);
    uStack_4 = 0xc;
    if (puVar12 != (undefined4 *)0x0) {
      iVar6 = param_1[1];
      uVar9 = *(undefined4 *)(iVar5 + 6);
      uVar1 = *(undefined1 *)(iVar6 + 0x18);
      uVar2 = *(undefined1 *)(iVar6 + 0x17);
      uVar3 = *(undefined1 *)(iVar6 + 0x16);
      uVar7 = *(undefined4 *)(iVar6 + 0x12);
      FUN_00465510();
      *puVar12 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar12[1] + 0xe) = uVar9;
      *(undefined4 *)(puVar12[1] + 0x12) = uVar7;
      *(undefined1 *)(puVar12[1] + 0x16) = uVar3;
      *(undefined1 *)(puVar12[1] + 0x17) = uVar2;
      *(undefined1 *)(puVar12[1] + 0x18) = uVar1;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    pvVar10 = operator_new(0xc);
    uStack_4 = 0xd;
    if (pvVar10 == (void *)0x0) goto LAB_005b8d2c;
    FUN_005b4af0();
    uVar9 = FUN_0047ea00();
    break;
  case 0x1c9:
    iVar5 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar12 = operator_new(0xc);
    uStack_4 = 0xe;
    if (puVar12 != (undefined4 *)0x0) {
      iVar6 = param_1[1];
      uVar9 = *(undefined4 *)(iVar5 + 6);
      uVar1 = *(undefined1 *)(iVar6 + 0x17);
      uVar2 = *(undefined1 *)(iVar6 + 0x18);
      uVar3 = *(undefined1 *)(iVar6 + 0x16);
      uVar7 = *(undefined4 *)(iVar6 + 0x12);
      FUN_00465510();
      *puVar12 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar12[1] + 0xe) = uVar9;
      *(undefined4 *)(puVar12[1] + 0x12) = uVar7;
      *(undefined1 *)(puVar12[1] + 0x16) = uVar3;
      *(undefined1 *)(puVar12[1] + 0x17) = uVar1;
      *(undefined1 *)(puVar12[1] + 0x18) = uVar2;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    pvVar10 = operator_new(0xc);
    uStack_4 = 0xf;
    if (pvVar10 == (void *)0x0) goto LAB_005b8d2c;
    FUN_005b4af0();
    uVar9 = FUN_0047ea00();
    break;
  case 0x1ca:
    iVar5 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar12 = operator_new(0xc);
    uStack_4 = 0x15;
    if (puVar12 != (undefined4 *)0x0) {
      iVar6 = param_1[1];
      uVar9 = *(undefined4 *)(iVar5 + 6);
      uVar1 = *(undefined1 *)(iVar6 + 0x18);
      uVar2 = *(undefined1 *)(iVar6 + 0x17);
      uVar3 = *(undefined1 *)(iVar6 + 0x16);
      uVar7 = *(undefined4 *)(iVar6 + 0x12);
      pvVar10 = operator_new(0x1a);
      uStack_4._0_1_ = 0x16;
      if (pvVar10 != (void *)0x0) {
        FUN_0042d6c0();
      }
      uStack_4._0_1_ = 0x15;
      FUN_0042d320();
      *puVar12 = &PTR_FUN_007e62c0;
      *(undefined1 *)((int)puVar12 + 10) = 0;
      *(undefined2 *)puVar12[1] = 0x1ca;
      iVar6 = puVar12[1];
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar5 + 4);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x17);
      *(undefined2 *)(iVar6 + 0xc) = *(undefined2 *)(iVar5 + 8);
      puVar11 = (undefined4 *)FUN_0042d2f0();
      iVar5 = puVar12[1];
      *(undefined4 *)(iVar5 + 2) = *puVar11;
      *(undefined2 *)(iVar5 + 6) = *(undefined2 *)(puVar11 + 1);
      *puVar12 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar12[1] + 0xe) = uVar9;
      *(undefined4 *)(puVar12[1] + 0x12) = uVar7;
      *(undefined1 *)(puVar12[1] + 0x16) = uVar3;
      *(undefined1 *)(puVar12[1] + 0x17) = uVar2;
      *(undefined1 *)(puVar12[1] + 0x18) = uVar1;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    pvVar10 = operator_new(0xc);
    uStack_4 = 0x18;
    if (pvVar10 == (void *)0x0) goto LAB_005b8d2c;
    FUN_005b4af0();
    uVar9 = FUN_0047ea00();
    break;
  case 0x1cb:
    iVar5 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar12 = operator_new(0xc);
    uStack_4 = 0x19;
    if (puVar12 != (undefined4 *)0x0) {
      iVar6 = param_1[1];
      uVar9 = *(undefined4 *)(iVar5 + 6);
      uVar1 = *(undefined1 *)(iVar6 + 0x18);
      uVar2 = *(undefined1 *)(iVar6 + 0x17);
      uVar3 = *(undefined1 *)(iVar6 + 0x16);
      uVar7 = *(undefined4 *)(iVar6 + 0x12);
      pvVar10 = operator_new(0x1a);
      uStack_4._0_1_ = 0x1a;
      if (pvVar10 != (void *)0x0) {
        FUN_0042d6c0();
      }
      uStack_4._0_1_ = 0x19;
      FUN_0042d320();
      *puVar12 = &PTR_FUN_007e62c0;
      *(undefined1 *)((int)puVar12 + 10) = 0;
      *(undefined2 *)puVar12[1] = 0x1cb;
      iVar6 = puVar12[1];
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar5 + 4);
      *(undefined2 *)(iVar6 + 0xc) = *(undefined2 *)(iVar5 + 8);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x1b);
      puVar11 = (undefined4 *)FUN_0042d2f0();
      iVar5 = puVar12[1];
      *(undefined4 *)(iVar5 + 2) = *puVar11;
      *(undefined2 *)(iVar5 + 6) = *(undefined2 *)(puVar11 + 1);
      *puVar12 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar12[1] + 0xe) = uVar9;
      *(undefined4 *)(puVar12[1] + 0x12) = uVar7;
      *(undefined1 *)(puVar12[1] + 0x16) = uVar3;
      *(undefined1 *)(puVar12[1] + 0x17) = uVar2;
      *(undefined1 *)(puVar12[1] + 0x18) = uVar1;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    pvVar10 = operator_new(0xc);
    uStack_4 = 0x1c;
    if (pvVar10 == (void *)0x0) goto LAB_005b8d2c;
    FUN_005b4af0();
    uVar9 = FUN_0047ea00();
    break;
  default:
    goto switchD_005b7e6e_caseD_1cc;
  case 0x1cd:
    iVar5 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar12 = operator_new(0xc);
    uStack_4 = 2;
    if (puVar12 != (undefined4 *)0x0) {
      iVar6 = param_1[1];
      uVar9 = *(undefined4 *)(iVar5 + 6);
      uVar1 = *(undefined1 *)(iVar6 + 0x17);
      uVar2 = *(undefined1 *)(iVar6 + 0x18);
      uVar3 = *(undefined1 *)(iVar6 + 0x16);
      uVar7 = *(undefined4 *)(iVar6 + 0x12);
      FUN_00465510();
      *puVar12 = &PTR_FUN_007e6020;
      *(undefined4 *)(puVar12[1] + 0xe) = uVar9;
      *(undefined4 *)(puVar12[1] + 0x12) = uVar7;
      *(undefined1 *)(puVar12[1] + 0x16) = uVar3;
      *(undefined1 *)(puVar12[1] + 0x17) = uVar1;
      *(undefined1 *)(puVar12[1] + 0x18) = uVar2;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    pvVar10 = operator_new(0xc);
    uStack_4 = 3;
    if (pvVar10 == (void *)0x0) goto LAB_005b8d2c;
    FUN_005b4af0();
    uVar9 = FUN_0047ea00();
    break;
  case 0x1ce:
    iVar5 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    puVar12 = operator_new(0xc);
    uStack_4 = 0;
    if (puVar12 != (undefined4 *)0x0) {
      iVar6 = param_1[1];
      uVar9 = *(undefined4 *)(iVar5 + 6);
      uVar7 = *(undefined4 *)(iVar6 + 0x18);
      uVar1 = *(undefined1 *)(iVar6 + 0x17);
      uVar2 = *(undefined1 *)(iVar6 + 0x16);
      uVar4 = *(undefined4 *)(iVar6 + 0x12);
      FUN_005b8f50();
      *puVar12 = &PTR_FUN_007e68e4;
      *(undefined4 *)(puVar12[1] + 0xe) = uVar9;
      *(undefined4 *)(puVar12[1] + 0x12) = uVar4;
      *(undefined1 *)(puVar12[1] + 0x16) = uVar2;
      *(undefined1 *)(puVar12[1] + 0x17) = uVar1;
      *(undefined4 *)(puVar12[1] + 0x18) = uVar7;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    pvVar10 = operator_new(0xc);
    uStack_4 = 1;
    if (pvVar10 == (void *)0x0) goto LAB_005b8d2c;
    FUN_005b8fe0();
    uVar9 = FUN_0047ea00();
    break;
  case 0x1cf:
    iVar5 = (&DAT_0089cad8)[*(int *)(param_1[1] + 0xe)];
    if (iVar5 != 0) {
      puVar12 = operator_new(0xc);
      uStack_4 = 0x1d;
      if (puVar12 != (undefined4 *)0x0) {
        iVar6 = param_1[1];
        uVar9 = *(undefined4 *)(iVar5 + 6);
        uVar1 = *(undefined1 *)(iVar6 + 0x18);
        uVar2 = *(undefined1 *)(iVar6 + 0x17);
        uVar3 = *(undefined1 *)(iVar6 + 0x16);
        uVar7 = *(undefined4 *)(iVar6 + 0x12);
        puVar13 = operator_new(0x1a);
        if (puVar13 == (undefined2 *)0x0) {
          puVar13 = (undefined2 *)0x0;
        }
        else {
          puVar13[3] = 0;
          *(undefined1 *)(puVar13 + 2) = 0;
          *(undefined1 *)((int)puVar13 + 3) = 0;
          *(undefined1 *)(puVar13 + 1) = 0;
          puVar13[4] = 0;
          *(undefined4 *)(puVar13 + 5) = 0;
        }
        puVar12[1] = puVar13;
        *(undefined1 *)(puVar12 + 2) = 0;
        *(undefined1 *)((int)puVar12 + 9) = 1;
        *puVar12 = &PTR_FUN_007e62c0;
        *(undefined1 *)((int)puVar12 + 10) = 0;
        *puVar13 = 0x1cf;
        iVar6 = puVar12[1];
        *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar5 + 4);
        *(undefined2 *)(iVar6 + 0xc) = *(undefined2 *)(iVar5 + 8);
        iVar5 = puVar12[1];
        uStack_94 = (uint)puVar12 & 0xff000000;
        *(uint *)(iVar5 + 2) = uStack_94;
        *(undefined2 *)(iVar5 + 6) = 0;
        *puVar12 = &PTR_FUN_007e6020;
        *(undefined4 *)(puVar12[1] + 0xe) = uVar9;
        *(undefined4 *)(puVar12[1] + 0x12) = uVar7;
        *(undefined1 *)(puVar12[1] + 0x16) = uVar3;
        *(undefined1 *)(puVar12[1] + 0x17) = uVar2;
        *(undefined1 *)(puVar12[1] + 0x18) = uVar1;
      }
      uStack_4 = 0xffffffff;
      FUN_00565bc0();
    }
    goto switchD_005b7e6e_caseD_1cc;
  }
  FUN_00446d10(uVar9);
  FUN_00465280(0x1cc);
  uStack_4 = 0xffffffff;
  FUN_00565ca0();
switchD_005b7e6e_caseD_1cc:
  ExceptionList = local_c;
  return 0;
}


