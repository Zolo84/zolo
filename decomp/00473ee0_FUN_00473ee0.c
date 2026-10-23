// FUN_00473ee0 @ 473ee0 size=868

void __thiscall FUN_00473ee0(int param_1,int param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_1c;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bce19;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004734e0();
  uVar1 = *(undefined4 *)(param_1 + 6);
  local_4 = 0;
  pvVar5 = operator_new(0xe);
  local_4._0_1_ = 1;
  if (pvVar5 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00473a90(uVar1,local_18,0);
  }
  local_4._0_1_ = 0;
  iVar7 = iVar6;
  if (local_14 != 0) {
    *(int *)(local_18 + 8) = iVar6;
    iVar7 = local_1c;
  }
  local_1c = iVar7;
  uVar1 = *(undefined4 *)(param_2 + 6);
  pvVar5 = operator_new(0xe);
  local_4._0_1_ = 2;
  if (pvVar5 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00473a90(uVar1,iVar6,0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  iVar8 = iVar7;
  if (local_14 != -1) {
    *(int *)(iVar6 + 8) = iVar7;
    iVar8 = local_1c;
  }
  local_1c = iVar8;
  iVar6 = FUN_005862f0(*(undefined4 *)(param_2 + 6));
  if (iVar6 == 0) {
    local_4 = 0xffffffff;
    FUN_004309c0();
  }
  else {
    iVar8 = *(int *)(iVar6 + 0x26);
    iVar10 = *(int *)(iVar6 + 0x22);
    cVar4 = FUN_00584e20(*(undefined4 *)(param_1 + 6));
    if (cVar4 == '\0') {
      iVar8 = iVar10;
      iVar10 = *(int *)(iVar6 + 0x26);
    }
    iVar3 = local_1c;
    if (iVar10 == 0) {
      if (param_4 == '\0') {
        if (param_3 != '\0') {
          FUN_00461830(*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_2 + 6));
          FUN_00461830(*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_1 + 6));
        }
      }
      else {
        FUN_00461830(*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_2 + 6));
        FUN_004618a0(*(undefined4 *)(param_1 + 6),*(undefined4 *)(param_2 + 6));
      }
      FUN_006ad630(0x16,&LAB_00466b60,param_1,param_2);
      FUN_00425cb0(iVar6);
      FUN_004623c0(*(undefined4 *)(param_1 + 6));
      FUN_004623c0(*(undefined4 *)(param_2 + 6));
    }
    else {
      piVar2 = *(int **)(*(int *)(iVar8 + 0x22) + 4);
      iVar8 = local_14 + 2;
      for (; local_1c = iVar3, piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        uVar1 = (&DAT_0089cad8)[*piVar2];
        FUN_004623c0(*piVar2);
        FUN_004623c0(*(undefined4 *)(param_1 + 6));
        if (param_4 == '\0') {
          if (param_3 != '\0') {
            FUN_00461830(*(undefined4 *)(param_1 + 6),*piVar2);
            FUN_00461830(*piVar2,*(undefined4 *)(param_1 + 6));
          }
        }
        else {
          FUN_00461830(*(undefined4 *)(param_1 + 6),*piVar2);
          FUN_004618a0(*(undefined4 *)(param_1 + 6),*piVar2);
        }
        FUN_006ad630(0x16,&LAB_00466b60,param_1,uVar1);
        iVar9 = *piVar2;
        pvVar5 = operator_new(0xe);
        local_4._0_1_ = 3;
        if (pvVar5 == (void *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_00473a90(iVar9,iVar7,0);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        local_1c = iVar9;
        if (iVar8 != 0) {
          *(int *)(iVar7 + 8) = iVar9;
          local_1c = iVar3;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar9;
        iVar3 = local_1c;
      }
      (**(code **)(*(int *)(iVar6 + 0x3a77a) + 0x18))(*(undefined4 *)(param_1 + 6));
      FUN_00584c90();
      (**(code **)(**(int **)(iVar10 + 0x22) + 0x18))(*(undefined4 *)(param_1 + 6));
      param_2._0_1_ = (char)iVar10;
      if ((char)param_2 == '\x01') {
        FUN_00584cb0();
      }
      iVar7 = (**(code **)(**(int **)(iVar10 + 0x22) + 4))();
      if (iVar7 < 1) {
        FUN_00425cb0(iVar6);
      }
    }
    while (iVar3 != 0) {
      iVar3 = *(int *)(iVar3 + 8);
      FUN_0044bb10();
    }
    while (local_1c != 0) {
      iVar6 = *(int *)(local_1c + 8);
      FUN_00796cd8(local_1c);
      local_1c = iVar6;
    }
  }
  ExceptionList = local_c;
  return;
}


