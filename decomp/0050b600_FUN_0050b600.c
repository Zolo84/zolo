// FUN_0050b600 @ 50b600 size=1363

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0050b600(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined4 in_stack_0000001c;
  undefined2 in_stack_00000020;
  int in_stack_00000024;
  undefined1 in_stack_0000002c;
  int iVar10;
  undefined2 local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c1770;
  pvStack_c = ExceptionList;
  iVar6 = *(int *)(param_1 + 4);
  local_1c = (undefined2)param_4;
  iVar2 = *(int *)(param_1 + 8);
  ExceptionList = &pvStack_c;
  if ((DAT_00dc1718 == 2) &&
     (ExceptionList = &pvStack_c, cVar3 = (**(code **)(**(int **)(param_2 + 0x248) + 0x1c))(),
     cVar3 != '\0')) {
    switch(param_3) {
    case 0x10:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1d:
    }
  }
  pvVar4 = operator_new(0xc);
  uStack_4 = 0;
  if (pvVar4 != (void *)0x0) {
    uVar5 = FUN_00447250();
    FUN_00449290(uVar5);
    iVar10 = param_3;
    uVar5 = FUN_00447250(param_3);
    FUN_00516560(uVar5,iVar10);
  }
  uStack_4 = 0xffffffff;
  FUN_00565bc0();
  switch(param_3) {
  case 1:
    cVar3 = FUN_0042dd70();
    if (cVar3 == '\0') goto switchD_0050b75a_caseD_2;
  case 0:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1d:
  case 0x20:
  case 0x21:
    cVar3 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))();
    if (((cVar3 == '\0') && (param_3 != 0)) && ((param_3 != iVar6 || (iVar2 != param_4)))) {
      puVar7 = operator_new(0xc);
      uStack_4 = 1;
      if (puVar7 != (undefined4 *)0x0) {
        uVar5 = *(undefined4 *)(param_2 + 0xc);
        in_stack_00000024 = (uint)in_stack_00000024._3_1_ << 0x18;
        FUN_004c0990();
        iVar6 = puVar7[1];
        *puVar7 = &PTR_FUN_007e7804;
        *(short *)(iVar6 + 0x14) = (short)uVar5;
        *(undefined4 *)(iVar6 + 0xe) = *(undefined4 *)(param_2 + 0x18);
        uVar1 = *(undefined2 *)(param_2 + 0x1c);
        *(undefined1 *)(iVar6 + 0x16) = 1;
        *(undefined2 *)(iVar6 + 0x12) = uVar1;
        *(int *)(iVar6 + 0x18) = in_stack_00000024;
        *(undefined2 *)(iVar6 + 0x1c) = 0;
      }
    }
    else {
      cVar3 = (**(code **)(*(int *)(param_2 + 0x22e) + 8))();
      if (cVar3 != '\0') {
        ExceptionList = pvStack_c;
        return;
      }
      if (param_3 != 0) {
        ExceptionList = pvStack_c;
        return;
      }
      puVar7 = operator_new(0xc);
      uStack_4 = 2;
      if (puVar7 != (undefined4 *)0x0) {
        uVar5 = *(undefined4 *)(param_2 + 0xc);
        in_stack_00000024 = (uint)in_stack_00000024._3_1_ << 0x18;
        pvVar4 = operator_new(0x1e);
        uStack_4._0_1_ = 3;
        if (pvVar4 != (void *)0x0) {
          FUN_0042d6c0();
          *(undefined2 *)((int)pvVar4 + 0xe) = 0;
          *(undefined4 *)((int)pvVar4 + 0x10) = 0;
          FUN_0042d2d0();
        }
        uStack_4._0_1_ = 2;
        FUN_0042d320();
        *puVar7 = &PTR_FUN_007e77e4;
        *(undefined1 *)((int)puVar7 + 10) = 0;
        *(undefined2 *)puVar7[1] = 0x34;
        iVar6 = puVar7[1];
        *(undefined4 *)(iVar6 + 8) = _DAT_0088f24c;
        uStack_4 = CONCAT31(uStack_4._1_3_,4);
        *(undefined2 *)(iVar6 + 0xc) = DAT_0088f24e._2_2_;
        puVar8 = (undefined4 *)FUN_0042d2f0();
        iVar6 = puVar7[1];
        *(undefined4 *)(iVar6 + 2) = *puVar8;
        _in_stack_0000002c = (undefined2)uVar5;
        *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar8 + 1);
        iVar6 = puVar7[1];
        *puVar7 = &PTR_FUN_007e7804;
        *(undefined2 *)(iVar6 + 0x14) = _in_stack_0000002c;
        *(undefined4 *)(iVar6 + 0xe) = *(undefined4 *)(param_2 + 0x18);
        uVar1 = *(undefined2 *)(param_2 + 0x1c);
        *(undefined1 *)(iVar6 + 0x16) = 1;
        *(undefined2 *)(iVar6 + 0x12) = uVar1;
        *(int *)(iVar6 + 0x18) = in_stack_00000024;
        *(undefined2 *)(iVar6 + 0x1c) = 0;
      }
    }
    break;
  case 0x1b:
    iVar6 = FUN_004e9370();
    local_1c = (undefined2)*(undefined4 *)(iVar6 + 0x3dc);
  default:
switchD_0050b75a_caseD_2:
    puVar7 = operator_new(0xc);
    uStack_4 = 5;
    if (puVar7 != (undefined4 *)0x0) {
      pvVar4 = operator_new(0x12);
      uStack_4._0_1_ = 6;
      if (pvVar4 != (void *)0x0) {
        FUN_0042d6c0();
      }
      uStack_4._0_1_ = 5;
      FUN_0042d320();
      *puVar7 = &PTR_FUN_007e877c;
      *(undefined1 *)((int)puVar7 + 10) = 0;
      *(undefined2 *)puVar7[1] = 0x85;
      iVar6 = puVar7[1];
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(param_2 + 0x18);
      uStack_4 = CONCAT31(uStack_4._1_3_,7);
      *(undefined2 *)(iVar6 + 0xc) = *(undefined2 *)(param_2 + 0x1c);
      puVar8 = (undefined4 *)FUN_0042d2f0();
      iVar6 = puVar7[1];
      *(undefined4 *)(iVar6 + 2) = *puVar8;
      *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar8 + 1);
      *puVar7 = &PTR_FUN_007e875c;
      *(undefined2 *)(puVar7[1] + 0xe) = 1;
      *(undefined2 *)(puVar7[1] + 0x10) = local_1c;
    }
    uStack_4 = 0xffffffff;
    FUN_00565bc0();
    puVar7 = operator_new(0xc);
    uStack_4 = 8;
    if (puVar7 != (undefined4 *)0x0) {
      puVar9 = operator_new(0x1e);
      uStack_4._0_1_ = 9;
      if (puVar9 == (undefined2 *)0x0) {
        puVar9 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d6c0();
        puVar9[7] = 0;
        *(undefined4 *)(puVar9 + 8) = 0;
        FUN_0042d2d0();
      }
      puVar7[1] = puVar9;
      *(undefined1 *)(puVar7 + 2) = 0;
      *(undefined1 *)((int)puVar7 + 9) = 1;
      *puVar7 = &PTR_FUN_007e77e4;
      *(undefined1 *)((int)puVar7 + 10) = 0;
      *puVar9 = 0x34;
      iVar6 = puVar7[1];
      *(undefined4 *)(iVar6 + 8) = _DAT_0088f24c;
      *(undefined2 *)(iVar6 + 0xc) = DAT_0088f24e._2_2_;
      uStack_4 = CONCAT31(uStack_4._1_3_,10);
      puVar8 = (undefined4 *)FUN_0042d2f0();
      iVar6 = puVar7[1];
      *(undefined4 *)(iVar6 + 2) = *puVar8;
      *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar8 + 1);
      iVar6 = puVar7[1];
      *puVar7 = &PTR_FUN_007e7804;
      *(undefined2 *)(iVar6 + 0x14) = local_1c;
      *(undefined4 *)(iVar6 + 0xe) = *(undefined4 *)(param_2 + 0x18);
      *(undefined2 *)(iVar6 + 0x12) = *(undefined2 *)(param_2 + 0x1c);
      *(undefined1 *)(iVar6 + 0x16) = in_stack_0000002c;
      *(undefined4 *)(iVar6 + 0x18) = in_stack_0000001c;
      *(undefined2 *)(iVar6 + 0x1c) = in_stack_00000020;
    }
  }
  uStack_4 = 0xffffffff;
  FUN_00565bf0();
  ExceptionList = pvStack_c;
  return;
}


