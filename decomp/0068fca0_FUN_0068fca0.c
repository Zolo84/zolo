// FUN_0068fca0 @ 68fca0 size=1557

void __fastcall FUN_0068fca0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  int *piVar11;
  int *piVar12;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d52b2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar5 = operator_new(0xfe);
  local_4 = 0;
  if (pvVar5 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_0069d180(param_1);
  }
  *(int **)((int)param_1 + 0x7e) = piVar6;
  local_4 = 0xffffffff;
  (**(code **)(*piVar6 + 0xb4))(param_1);
  (**(code **)(*param_1 + 0x108))(*(undefined4 *)((int)param_1 + 0x7e));
  (**(code **)(**(int **)((int)param_1 + 0x7e) + 0xc4))();
  piVar6 = operator_new(0x106);
  pvStack_c = (void *)0x1;
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    FUN_006a96f0(*(undefined4 *)((int)param_1 + 10));
    piVar6[0xf] = (int)param_1;
    *piVar6 = (int)&PTR_FUN_007f4474;
    pvStack_c._0_1_ = 2;
    FUN_005b4c60();
    pvStack_c._0_1_ = 3;
    FUN_006904d0();
    pvStack_c._0_1_ = 4;
    FUN_006904d0();
    pvStack_c._0_1_ = 5;
    FUN_006904d0();
    pvStack_c._0_1_ = 6;
    FUN_006904d0();
    pvStack_c._0_1_ = 7;
    FUN_006904d0();
    pvStack_c._0_1_ = 8;
    FUN_006904d0();
    pvStack_c._0_1_ = 9;
    FUN_005b4c60();
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,10);
    FUN_0069a0e0();
    *piVar6 = (int)&PTR_FUN_007f427c;
  }
  param_1[0x9a] = (int)piVar6;
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar6 + 0xb4))(param_1);
  (**(code **)(*param_1 + 0x108))(param_1[0x9a]);
  (**(code **)(*(int *)param_1[0x9a] + 0xc4))();
  puVar3 = *(undefined4 **)(*(int *)((int)param_1 + 10) + 0x4508);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    piVar6 = (int *)*puVar3;
    cVar4 = (**(code **)(*piVar6 + 0x28))();
    puVar3 = puVar1;
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*piVar6 + 0x2c))();
      if (cVar4 == '\0') {
        iVar9 = *param_1;
        uVar7 = (**(code **)(*piVar6 + 0x18))();
        (**(code **)(iVar9 + 0x1b8))(uVar7);
      }
      else {
        (**(code **)(*piVar6 + 0x14))();
        iVar9 = FUN_00516cc0();
        if (iVar9 < 1) {
          iVar9 = *(int *)param_1[0x9a];
          uVar7 = (**(code **)(*piVar6 + 0x14))();
          (**(code **)(iVar9 + 0x1c8))(uVar7);
        }
        else {
          iVar9 = **(int **)((int)param_1 + 0x7e);
          uVar7 = (**(code **)(*piVar6 + 0x14))();
          (**(code **)(iVar9 + 0x1c8))(uVar7);
        }
      }
    }
    else {
      iVar9 = *param_1;
      uVar7 = (**(code **)(*piVar6 + 0x10))();
      (**(code **)(iVar9 + 0x1a8))(uVar7);
    }
  }
  puVar3 = *(undefined4 **)(*(int *)((int)param_1 + 10) + 0xe892);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    iVar8 = FUN_004e9370(*puVar3);
    iVar9 = param_1[0x93];
    piVar6 = operator_new(0xe);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      *piVar6 = iVar8;
      piVar6[1] = iVar9;
      piVar6[2] = 0;
      *(undefined1 *)(piVar6 + 3) = 0;
    }
    iVar2 = param_1[0x94];
    param_1[0x93] = (int)piVar6;
    param_1[0x94] = iVar2 + 1;
    if (iVar2 == 0) {
      param_1[0x92] = (int)piVar6;
    }
    else {
      *(int **)(iVar9 + 8) = piVar6;
    }
    *(int **)(iVar8 + 0x486) = param_1;
    puVar3 = puVar1;
  }
  FUN_006a9cd0();
  pvVar5 = operator_new(0x52);
  if (pvVar5 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_0069c520(param_1);
  }
  *(int **)((int)param_1 + 0x82) = piVar6;
  (**(code **)(*piVar6 + 0xb4))(param_1);
  (**(code **)(*param_1 + 0x108))(*(undefined4 *)((int)param_1 + 0x82));
  (**(code **)(**(int **)((int)param_1 + 0x82) + 0xc4))();
  pvVar5 = operator_new(0x30dd0);
  if (pvVar5 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_0066c210(param_1);
  }
  *(int **)((int)param_1 + 0x6a) = piVar6;
  (**(code **)(*piVar6 + 0xb4))(param_1);
  (**(code **)(*param_1 + 0x108))(*(undefined4 *)((int)param_1 + 0x6a));
  (**(code **)(**(int **)((int)param_1 + 0x6a) + 0xc4))();
  pvVar5 = operator_new(0x186);
  if (pvVar5 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_0067a8a0(param_1);
  }
  *(int **)((int)param_1 + 0x72) = piVar6;
  piVar12 = param_1;
  (**(code **)(*piVar6 + 0xb4))(param_1);
  (**(code **)(*param_1 + 0x108))(*(undefined4 *)((int)param_1 + 0x72));
  (**(code **)(**(int **)((int)param_1 + 0x72) + 0xc4))();
  pvVar5 = operator_new(0x90a);
  if (pvVar5 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_00676f60(param_1);
  }
  *(int **)((int)param_1 + 0x76) = piVar6;
  piVar11 = param_1;
  (**(code **)(*piVar6 + 0xb4))();
  (**(code **)(*param_1 + 0x108))(*(undefined4 *)((int)param_1 + 0x76));
  (**(code **)(**(int **)((int)param_1 + 0x76) + 0xc4))();
  pvVar5 = operator_new(0x40);
  if (pvVar5 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_0069d040(param_1);
  }
  *(int **)((int)param_1 + 0x6e) = piVar6;
  (**(code **)(*piVar6 + 0xb4))(param_1);
  (**(code **)(*param_1 + 0x108))(*(undefined4 *)((int)param_1 + 0x6e));
  (**(code **)(**(int **)((int)param_1 + 0x6e) + 0xc4))();
  puVar3 = *(undefined4 **)(*(int *)((int)param_1 + 10) + 0xe86e);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    uVar7 = *puVar3;
    puVar3 = puVar1;
    if (*(char *)((int)param_1 + 0xe) != '\0') {
      iVar9 = FUN_00690af0(uVar7);
      if (iVar9 == 0) {
        piVar6 = operator_new(0x7a);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          FUN_0069ae50(param_1);
          FUN_00690400();
          *piVar6 = (int)&PTR_FUN_007f405c;
        }
        (**(code **)(*piVar6 + 0xb4))(param_1);
        (**(code **)(*param_1 + 0x108))(piVar6);
        cVar4 = FUN_004ca41f();
        if (cVar4 == '\0') {
          FUN_0069aa50(piVar6);
        }
        else {
          FUN_0069aa00(piVar6);
        }
        (**(code **)(*piVar6 + 0x218))(uVar7);
      }
      pvVar10 = operator_new(0xc);
      if (pvVar10 == (void *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_006902c0(0x123,param_1 + 1);
      }
      FUN_00565c50(uVar7);
    }
  }
  pvVar10 = operator_new(0xde);
  if (pvVar10 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_0068ad40(param_1);
  }
  *(int **)((int)param_1 + 0x7a) = piVar6;
  (**(code **)(*piVar6 + 0xb4))(param_1,piVar11,pvVar10,piVar12,pvVar5,0xffffffff);
  (**(code **)(*param_1 + 0x108))(*(undefined4 *)((int)param_1 + 0x7a));
  (**(code **)(**(int **)((int)param_1 + 0x7a) + 0xc4))();
  uVar7 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x17,uVar7);
  uVar7 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x16,uVar7);
  uVar7 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x1a,uVar7);
  uVar7 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x19,uVar7);
  FUN_006ae0d0(1,0);
  ExceptionList = piVar11;
  return;
}


