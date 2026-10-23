// FUN_0065fab0 @ 65fab0 size=1659

undefined4 __thiscall FUN_0065fab0(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  int *piVar9;
  undefined2 uVar10;
  char *pcVar11;
  undefined4 uStack_48;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined2 uStack_24;
  undefined4 uStack_22;
  void *pvStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_007d38a6;
  local_c = ExceptionList;
  iVar4 = param_2[1];
  if (*(int *)(iVar4 + 0xe) == 0x10) {
    ExceptionList = &local_c;
    FUN_0044e1b0();
    uStack_48._0_2_ = 0xfae6;
    uStack_48._2_2_ = 0x65;
    iVar4 = FUN_004e9370();
    uStack_48._0_2_ = (undefined2)*(undefined4 *)(iVar4 + 0x3f6);
    uStack_48._2_2_ = (undefined2)((uint)*(undefined4 *)(iVar4 + 0x3f6) >> 0x10);
    FUN_004d8cf0(*(undefined4 *)(iVar4 + 0x3f2));
    FUN_004d87c0();
    ExceptionList = local_c;
    return 3;
  }
  ExceptionList = &local_c;
  iVar5 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
  if (0 < iVar5) {
    uStack_48 = &param_2;
    (**(code **)(param_1[0x1141] + 0x28))();
    if (param_2 != (int *)0x0) {
      if ((*(int *)(iVar4 + 0xe) == 0x104) &&
         ((param_2 = (int *)param_2[2], param_2 != (int *)0x0 ||
          (param_2 = (int *)param_1[0x1142], param_2 != (int *)0x0)))) {
        FUN_0052ac00();
        uStack_48._0_2_ = 0xfb98;
        uStack_48._2_2_ = 0x65;
        (**(code **)(*param_1 + 0x49c))();
        uStack_48._0_2_ = 0xfbad;
        uStack_48._2_2_ = 0x65;
        FUN_00419460();
        uStack_48._0_2_ = SUB42(puStack_2c,0);
        uStack_48._2_2_ = (undefined2)((uint)puStack_2c >> 0x10);
        FUN_004d8cf0();
        FUN_004d87c0();
        FUN_00652f50();
      }
      if ((*(int *)(iVar4 + 0xe) == 0x105) &&
         ((param_2 = (int *)param_2[1], param_2 != (int *)0x0 ||
          (param_2 = (int *)param_1[0x1143], param_2 != (int *)0x0)))) {
        FUN_0052ac00();
        uStack_48._0_2_ = 0xfc0d;
        uStack_48._2_2_ = 0x65;
        (**(code **)(*param_1 + 0x49c))();
        uStack_48._0_2_ = 0xfc22;
        uStack_48._2_2_ = 0x65;
        FUN_00419460();
        uStack_48._0_2_ = SUB42(puStack_2c,0);
        uStack_48._2_2_ = (undefined2)((uint)puStack_2c >> 0x10);
        FUN_004d8cf0();
        FUN_004d87c0();
        FUN_00652f50();
      }
    }
  }
  iVar5 = DAT_00d37ed0;
  iVar4 = *(int *)(iVar4 + 0xe);
  if (((iVar4 == 0x10b) && (DAT_00bd1500 != 0)) && (*(char *)(DAT_00bd1500 + 0x37b) != '\0')) {
    iVar4 = param_1[0x4f64];
    if (iVar4 != 0) {
      *(undefined1 *)(iVar4 + 0x39) = 1;
      *(undefined1 *)(iVar4 + 0x3a) = 1;
      ExceptionList = local_c;
      return 3;
    }
    uVar10 = 0x108;
    uVar1 = *(undefined1 *)(DAT_00d37ed0 + 0x32);
    *(undefined1 *)(DAT_00d37ed0 + 0x32) = 0;
    *(undefined1 *)(iVar5 + 0x33) = uVar1;
    cVar3 = FUN_006523c0();
    if (cVar3 == '\0') {
      uVar10 = 8;
    }
    uStack_48._0_2_ = 0xfca6;
    uStack_48._2_2_ = 0x65;
    param_2 = operator_new(0x17a);
    iStack_4 = 0;
    if (param_2 == (void *)0x0) {
      param_1[0x4f64] = 0;
      ExceptionList = local_c;
      return 3;
    }
    uStack_48._2_2_ = 0;
    uStack_48._0_2_ = uVar10;
    iVar4 = FUN_006cf150();
    param_1[0x4f64] = iVar4;
    ExceptionList = local_c;
    return 3;
  }
  if (iVar4 == 5) {
    *(bool *)((int)param_1 + 0x21e4e) = *(char *)((int)param_1 + 0x21e4e) == '\0';
    ExceptionList = local_c;
    return 3;
  }
  if (iVar4 == 0xff) {
    uStack_48 = &param_2;
    (**(code **)(*(int *)(DAT_00d13360 + 0x12) + 0x28))();
    if (iStack_4 == 0) {
      pvVar6 = operator_new(300);
      local_c = (void *)0x1;
      if (pvVar6 == (void *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_006de2e0(*(undefined4 *)((int)param_1 + 6));
      }
      local_c = (void *)0xffffffff;
      if (*(char *)(DAT_00d685a6 + 0x57c) == '\0') {
        pcVar11 = s_STANDARDGAME_INFO_00867038;
      }
      else {
        pcVar11 = s_SCENARIOMISS_INFO_0083b454;
      }
      FUN_006df530(pcVar11);
      FUN_006df8e0();
      *(undefined4 *)((int)param_1 + 0x13d0a) = uVar7;
    }
    ExceptionList = pvStack_14;
    return 3;
  }
  if (iVar4 == 0x10a) {
    uStack_48._0_2_ = 0xfe1e;
    uStack_48._2_2_ = 0x65;
    FUN_00584400();
    ExceptionList = local_c;
    return 3;
  }
  if (((((byte)DAT_00a98444 & 1) == 0) || (iVar4 < 0x30)) || (0x39 < iVar4)) {
    ExceptionList = local_c;
    return 0;
  }
  iVar4 = iVar4 + -0x30;
  iStack_30 = iVar4;
  if (DAT_00bd13ee == '\x01') {
    iVar5 = *(int *)(*(int *)((int)param_1 + 0x21e5a) + 4);
    if (iVar5 != 0) {
      do {
        iVar5 = *(int *)(iVar5 + 8);
        puVar8 = (undefined2 *)FUN_00447250();
        uStack_48._0_2_ = *puVar8;
        param_2 = &uStack_48;
        uStack_48._2_2_ = (undefined2)*(undefined4 *)(puVar8 + 1);
        piVar9 = (int *)(**(code **)(*(int *)((int)param_1 + iVar4 * 0x12 + 0x21ec2) + 0x28))
                                  (&iStack_30);
        if (*piVar9 != 0) {
          uStack_48._0_2_ = 0xfec2;
          uStack_48._2_2_ = 0x65;
          (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 0x18))();
        }
      } while (iVar5 != 0);
    }
    FUN_00652f50();
    ExceptionList = local_c;
    return 3;
  }
  if (DAT_00bd13ef == '\x01') {
    (**(code **)(*(int *)((int)param_1 + iVar4 * 0x12 + 0x21ec2) + 0x14))();
    iVar4 = *(int *)(*(int *)((int)param_1 + 0x21e5a) + 4);
    while (iVar4 != 0) {
      iVar4 = *(int *)(iVar4 + 8);
      puVar8 = (undefined2 *)FUN_00447250();
      uStack_48._0_2_ = *puVar8;
      param_2 = &uStack_48;
      uStack_48._2_2_ = (undefined2)*(undefined4 *)(puVar8 + 1);
      FUN_0049a190();
    }
    uStack_48._0_2_ = 0xff4e;
    uStack_48._2_2_ = 0x65;
    (**(code **)(*DAT_00bd0e18 + 0x20))();
    ExceptionList = pvStack_10;
    return 3;
  }
  if (*(int *)((int)param_1 + 0x21f76) == iVar4) {
    iVar5 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
    if (0 < iVar5) {
      iVar4 = 0;
      piVar9 = *(int **)(*(int *)((int)param_1 + 0x21e5a) + 4);
      while (piVar9 != (int *)0x0) {
        piVar2 = (int *)*piVar9;
        param_2 = (int *)piVar9[2];
        if (*(int *)(piVar2[0x92] + 6) == *(int *)((int)param_1 + 6)) {
          cVar3 = (**(code **)(*piVar2 + 0x28))();
          if (cVar3 != '\0') {
            iVar5 = (**(code **)(*piVar2 + 0x10))();
            if (*(int *)(iVar5 + 0x2ae) != 0) {
              (**(code **)(*piVar2 + 0x10))();
            }
          }
          uStack_48._0_2_ = 0x34;
          uStack_48._2_2_ = 0x66;
          piVar9 = (int *)FUN_00419460();
          iVar4 = iVar4 + *piVar9;
        }
        else {
          puVar8 = (undefined2 *)FUN_00447250();
          uStack_48._0_2_ = *puVar8;
          puStack_2c = (undefined1 *)&uStack_48;
          uStack_48._2_2_ = (undefined2)*(undefined4 *)(puVar8 + 1);
          (**(code **)(*(int *)((int)param_1 + iStack_30 * 0x12 + 0x21ec2) + 0x18))();
        }
        piVar9 = param_2;
      }
      iVar5 = (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
      (**(code **)(**(int **)((int)param_1 + 0x21e5a) + 4))();
      uStack_48 = (undefined4 *)(iVar4 / iVar5);
      FUN_004d8cf0();
      FUN_004d87c0();
      iVar4 = iStack_30;
    }
  }
  FUN_0052ac00();
  for (puVar8 = *(undefined2 **)((int)param_1 + iVar4 * 0x12 + 0x21ec6); puVar8 != (undefined2 *)0x0
      ; puVar8 = *(undefined2 **)(puVar8 + 5)) {
    uStack_24 = *puVar8;
    uStack_22 = *(undefined4 *)(puVar8 + 1);
    uStack_48._0_2_ = 0xb6;
    uStack_48._2_2_ = 0x66;
    iVar5 = FUN_00428ee0();
    if (((iVar5 != 0) && (iVar5 != 0x14)) && (*(char *)(iVar5 + 0x169) == '\0')) {
      uStack_48._0_2_ = 0xd9;
      uStack_48._2_2_ = 0x66;
      (**(code **)(*param_1 + 0x49c))();
    }
  }
  uStack_48._0_2_ = 0xed;
  uStack_48._2_2_ = 0x66;
  (**(code **)(*DAT_00bd0e18 + 0x20))();
  uStack_48._0_2_ = 0xf4;
  uStack_48._2_2_ = 0x66;
  FUN_00652f50();
  *(int *)((int)param_1 + 0x21f76) = iVar4;
  ExceptionList = pvStack_10;
  return 3;
}


