// FUN_00670540 @ 670540 size=975

void __fastcall FUN_00670540(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined **local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 local_48;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d449f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = FUN_00669ff0();
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_58 = &PTR_LAB_007f317c;
  iVar1 = *(int *)(iVar3 + 0x26);
  local_4._1_3_ = 0;
  iVar6 = local_50;
  for (; local_50 = iVar6, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    local_4._0_1_ = 0;
    pvVar4 = operator_new(0xe);
    local_4._0_1_ = 1;
    if (pvVar4 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_00676ea0();
    }
    iVar2 = iVar5;
    if (local_4c != 0) {
      *(int *)(iVar6 + 8) = iVar5;
      iVar2 = local_54;
    }
    local_54 = iVar2;
    iVar6 = iVar5;
    local_4c = local_4c + 1;
  }
  local_4._0_1_ = 0;
  iVar1 = local_54;
  do {
    if (iVar1 == 0) {
      iVar6 = (**(code **)(*(int *)(iVar3 + 0x22) + 4))();
      iVar1 = local_54;
      if (iVar6 == 0) {
        FUN_00460000();
        iVar1 = local_54;
      }
      while (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 8);
        FUN_00796cd8();
      }
      ExceptionList = pvStack_c;
      return;
    }
    FUN_00500d50();
    iVar6 = FUN_00500d50();
    if (iVar6 != 0) {
      iVar6 = FUN_0066a180();
      if (iVar6 == 0) {
        FUN_00428eb0();
        FUN_00446d10();
        FUN_00516300();
        FUN_00449290(local_68);
        FUN_00667670();
        FUN_00461fb0();
        FUN_00428ee0();
        FUN_0045e6c0();
        piVar7 = operator_new(0xc4);
        local_4._0_1_ = 2;
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          (**(code **)(*param_1 + 0xe0))();
          FUN_0066ec80();
          *piVar7 = (int)&PTR_FUN_007f2b28;
        }
        local_4._0_1_ = 0;
        piVar7[0x30] = 4;
        FUN_004f0a80();
        FUN_00669770();
        local_4._0_1_ = 3;
        (**(code **)(*piVar7 + 0x210))();
        pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
        FUN_00669740();
        FUN_004ef7f0();
        iVar6 = **(int **)((int)param_1 + 0x12);
      }
      else {
        if (*(int *)(iVar6 + 0xc) == *(int *)(iVar3 + 0xc)) {
          FUN_0045e6c0();
          goto LAB_006708b9;
        }
        FUN_00428eb0();
        FUN_00446d10();
        FUN_00516300();
        FUN_00449290(local_60);
        FUN_00667670();
        FUN_00461fb0();
        FUN_00428ee0();
        FUN_0045e6c0();
        piVar7 = operator_new(0xc4);
        local_4._0_1_ = 4;
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          (**(code **)(*param_1 + 0xe0))();
          FUN_006a2880();
          local_4._0_1_ = 5;
          piVar7[0x23] = 0;
          FUN_00669770();
          local_4._0_1_ = 6;
          FUN_00457e10();
          piVar7[0x2b] = (int)&PTR_FUN_007e7084;
          *piVar7 = (int)&PTR_FUN_007f2b28;
        }
        local_4._0_1_ = 0;
        FUN_004f0a80();
        FUN_00669770();
        local_4._0_1_ = 7;
        (**(code **)(*piVar7 + 0x210))();
        pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
        FUN_00669740();
        FUN_004ef7f0();
        iVar6 = **(int **)((int)param_1 + 0x12);
      }
      (**(code **)(iVar6 + 0x1b8))();
    }
LAB_006708b9:
    iVar1 = *(int *)(iVar1 + 8);
  } while( true );
}


