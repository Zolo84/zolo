// FUN_006672e0 @ 6672e0 size=572

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006672e0(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  piVar3 = *(int **)((int)param_2 + 0x26);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    piVar3 = piVar1;
    if (*(int *)(iVar2 + 0x134) != 0x1e) {
      iVar2 = FUN_004fccd0();
      if (iVar2 == 0) {
        local_c = local_c + 1;
      }
      else if (iVar2 == 2) {
        local_8 = local_8 + 1;
      }
    }
  }
  if (((DAT_00dc1743 != '\0') && (0 < local_8)) &&
     (local_8 = (int)ROUND((float)local_8 * _DAT_00877348), local_8 == 0)) {
    local_8 = 1;
  }
  iVar2 = (**(code **)(*(int *)((int)param_3 + 0x22) + 4))();
  while (0 < iVar2) {
    FUN_006a9d50();
    piVar3 = (int *)FUN_00666510(param_3,0,local_8 <= local_c,0);
    if (piVar3 == (int *)0x0) break;
    iVar2 = FUN_004fccd0();
    if (iVar2 == 0) {
      local_c = local_c + 1;
    }
    else {
      iVar2 = FUN_004fccd0();
      if (iVar2 == 2) {
        local_8 = local_8 + 1;
      }
    }
    iVar2 = *(int *)(param_1 + 10);
    uVar4 = (**(code **)(*param_2 + 0xc))();
    uVar4 = (**(code **)(*param_3 + 0xc))(uVar4);
    uVar4 = (**(code **)(*piVar3 + 0xc))(uVar4);
    uVar4 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar4);
    FUN_00458570(s_NAVAL___s_transfers__s_from_base_0086729c,uVar4);
    FUN_0045e6c0(param_2,piVar3);
    iVar2 = (**(code **)(*(int *)((int)param_3 + 0x22) + 4))();
  }
  FUN_006a9d50();
  local_10 = local_c + 1;
  if (0 < local_c) {
    iVar2 = local_c;
    if (DAT_00dc1743 != '\0') {
      iVar2 = (int)ROUND((float)local_c / _DAT_00877348);
    }
    local_10 = local_10 + iVar2;
  }
  if (*(int *)(param_1 + 0xca) < local_10) {
    local_10 = *(int *)(param_1 + 0xca);
  }
  iVar2 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
  while ((local_10 < iVar2 &&
         (piVar3 = (int *)FUN_00666510(param_2,1,local_c < local_8,0), piVar3 != (int *)0x0))) {
    iVar2 = FUN_004fccd0();
    if (iVar2 == 0) {
      local_c = local_c + -1;
    }
    else {
      iVar2 = FUN_004fccd0();
      if (iVar2 == 2) {
        local_8 = local_8 + -1;
      }
    }
    iVar2 = *(int *)(param_1 + 10);
    uVar4 = (**(code **)(*param_2 + 0xc))();
    uVar4 = (**(code **)(*param_3 + 0xc))(uVar4);
    uVar4 = (**(code **)(*piVar3 + 0xc))(uVar4);
    uVar4 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar4);
    FUN_00458570(s_NAVAL___s_transfers__s_TO_basefl_0086725c,uVar4);
    FUN_0045e6c0(param_3,piVar3);
    iVar2 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
  }
  return;
}


