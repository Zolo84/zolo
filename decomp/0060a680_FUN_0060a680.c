// FUN_0060a680 @ 60a680 size=737

void __fastcall FUN_0060a680(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  int local_18;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d013e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00436060();
  iVar1 = *(int *)(param_1 + 0xc0);
  piVar2 = *(int **)(iVar1 + 4);
  while (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)*piVar2;
    piVar2 = (int *)piVar2[2];
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)();
    }
    FUN_00796cd8();
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  local_18 = 0;
  local_14 = 0;
  local_4 = 0;
  piVar2 = *(int **)(DAT_00d0ca90 + 0x221a6);
  iVar1 = 0;
joined_r0x0060a715:
  do {
    do {
      while( true ) {
        iVar8 = local_18;
        iVar7 = iVar1;
        if (piVar2 == (int *)0x0) {
          FUN_004353e0();
          FUN_00436130();
          iVar1 = iVar7;
          while (iVar1 != 0) {
            iVar1 = *(int *)(iVar1 + 8);
            (**(code **)(*(int *)(DAT_00d0ca90 + 0x221a2) + 0x18))();
          }
          while (iVar7 != 0) {
            iVar7 = *(int *)(iVar7 + 8);
            FUN_00796cd8();
          }
          ExceptionList = pvStack_c;
          return;
        }
        iVar10 = *piVar2;
        piVar2 = (int *)piVar2[2];
        iVar1 = iVar7;
        if ((*(char *)(iVar10 + 0x1235) == '\0') && (cVar5 = FUN_0042ddd0(), cVar5 != '\0')) break;
        pvVar6 = operator_new(0xe);
        local_4._0_1_ = 1;
        if (pvVar6 == (void *)0x0) {
          local_18 = 0;
        }
        else {
          local_18 = FUN_0049a870(iVar10,iVar8);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        iVar10 = local_14 + 1;
        bVar11 = local_14 != 0;
        iVar1 = local_18;
        local_14 = iVar10;
        if (bVar11) {
          *(int *)(iVar8 + 8) = local_18;
          iVar1 = iVar7;
        }
      }
      *(int *)(iVar10 + 0x24) = DAT_00d0ca90;
      cVar5 = FUN_0072a260();
      local_18 = iVar8;
    } while (cVar5 == '\0');
    pvVar6 = operator_new(0x40);
    local_4._0_1_ = 2;
    if (pvVar6 == (void *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_006098c0();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    for (piVar9 = *(int **)(*(int *)(param_1 + 0xc0) + 4); piVar9 != (int *)0x0;
        piVar9 = (int *)piVar9[2]) {
      iVar8 = *(int *)(*piVar9 + 0x2e);
      iVar4 = *(int *)(param_1 + 0xbc);
      if (iVar4 == 0) {
        iVar8 = FUN_007a8730(iVar10 + 0x1028);
        if (iVar8 < 0) goto LAB_0060a83f;
      }
      else if (iVar4 == 1) {
        if ((int)*(char *)(iVar10 + 0x1241) +
            ((int)*(char *)(iVar10 + 0x1242) + *(short *)(iVar10 + 0x1244) * 0xc) * 0x1e <
            (int)*(char *)(iVar8 + 0x1241) +
            ((int)*(char *)(iVar8 + 0x1242) + *(short *)(iVar8 + 0x1244) * 0xc) * 0x1e)
        goto LAB_0060a83f;
      }
      else if ((iVar4 == 2) && (*(char *)(iVar7 + 0x32) != '\0')) {
LAB_0060a83f:
        FUN_00592460(iVar7);
        goto joined_r0x0060a715;
      }
    }
    iVar8 = *(int *)(param_1 + 0xc0);
    iVar10 = *(int *)(iVar8 + 8);
    piVar9 = operator_new(0xe);
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      *piVar9 = iVar7;
      piVar9[1] = iVar10;
      piVar9[2] = 0;
      *(undefined1 *)(piVar9 + 3) = 0;
    }
    iVar7 = *(int *)(iVar8 + 0xc);
    *(int **)(iVar8 + 8) = piVar9;
    *(int *)(iVar8 + 0xc) = iVar7 + 1;
    if (iVar7 == 0) {
      *(int **)(iVar8 + 4) = piVar9;
    }
    else {
      *(int **)(iVar10 + 8) = piVar9;
    }
  } while( true );
}


