// FUN_005c05d0 @ 5c05d0 size=633

undefined4 * __thiscall FUN_005c05d0(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cc65c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00441b30(0,0x140,0xb0,0x10);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x18] = &PTR_LAB_007e378c;
  *param_1 = &PTR_FUN_007ec5f0;
  param_1[2] = &PTR_LAB_007ec5ec;
  local_4 = 1;
  cVar1 = FUN_0042e910();
  if (cVar1 == '\0') {
    FUN_0064a850(1);
  }
  param_1[0x16] = param_2;
  puVar2 = operator_new(0x18);
  local_4._0_1_ = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = DAT_00bd1bac;
    *puVar2 = &PTR_LAB_007e474c;
    puVar3 = operator_new(0x1e);
    local_4._0_1_ = 3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar2[1] = 0;
    }
    else {
      FUN_005c0c70();
      local_4._0_1_ = 4;
      FUN_00418f40();
      *puVar3 = &PTR_FUN_007e36fc;
      *(undefined ***)((int)puVar3 + 0x12) = &PTR_LAB_007e36e8;
      *(undefined ***)((int)puVar3 + 0x1a) = &PTR_LAB_007e36e4;
      puVar2[1] = puVar3;
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 **)((int)param_1 + 0x72) = puVar2;
  iVar4 = FUN_004e9370(param_2);
  local_18 = 0;
  if (0 < *(int *)(iVar4 + 0x290)) {
    param_2 = 0;
    do {
      iVar5 = FUN_004e9370(*(undefined4 *)(param_2 + *(int *)(iVar4 + 0x298)));
      iVar6 = FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,*(undefined4 *)(iVar5 + 0x12),0);
      *(undefined1 *)(iVar6 + 0x68) = 1;
      FUN_00415d30(param_1[4]);
      uVar7 = *(undefined4 *)(iVar5 + 0x12);
      iVar5 = param_1[0x1a];
      puVar2 = operator_new(0xe);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = uVar7;
        puVar2[1] = iVar5;
        puVar2[2] = 0;
        *(undefined1 *)(puVar2 + 3) = 0;
      }
      iVar6 = param_1[0x1b];
      param_1[0x1a] = puVar2;
      param_1[0x1b] = iVar6 + 1;
      if (iVar6 == 0) {
        param_1[0x19] = puVar2;
      }
      else {
        *(undefined4 **)(iVar5 + 8) = puVar2;
      }
      local_18 = local_18 + 1;
      param_2 = param_2 + 0xc;
    } while (local_18 < *(int *)(iVar4 + 0x290));
  }
  FUN_0043fd20();
  puVar2 = operator_new(0x1aa);
  local_4._0_1_ = 5;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar9 = 0x40;
    uVar7 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar8 = FUN_0042b6c9(&DAT_00839384);
    FUN_0043acc0(uVar8,uVar7,uVar9);
    *puVar2 = &PTR_FUN_007e452c;
    puVar2[2] = &PTR_LAB_007e4528;
    *(undefined ***)((int)puVar2 + 0x7e) = &PTR_LAB_007e4524;
    puVar2[0x22] = 0xd;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x17] = puVar2;
  FUN_00415d30(param_1[4]);
  FUN_006d4270(param_1);
  ExceptionList = local_c;
  return param_1;
}


