// FUN_00592ba0 @ 592ba0 size=351

undefined4 * __fastcall FUN_00592ba0(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_007c9f82;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[1] = &PTR_LAB_007eb42c;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007eb508;
  local_4 = 1;
  uStack_3 = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_007eb500;
  *(undefined1 *)(param_1 + 0xf) = 0;
  pvVar1 = operator_new(0xaa);
  local_4 = 2;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00433570(s_gfx_interface_eyr_eyr_btn_back_b_008583a8,0,0xffffffff);
  }
  param_1[0xd] = iVar2;
  local_4 = 1;
  *(undefined4 *)(iVar2 + 0x88) = 3;
  pvVar1 = operator_new(0xaa);
  local_4 = 3;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00433570(s_gfx_interface_eyr_eyr_btn_forwar_00858380,0,0xffffffff);
  }
  param_1[0xe] = iVar2;
  local_4 = 1;
  *(undefined4 *)(iVar2 + 0x88) = 4;
  pvVar1 = operator_new(0x3e);
  local_4 = 4;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00437040(0xb2,200,0);
  }
  local_4 = 1;
  param_1[0xb] = uVar3;
  pvVar1 = operator_new(0x7e);
  _local_4 = CONCAT31(uStack_3,5);
  if (pvVar1 != (void *)0x0) {
    uVar3 = FUN_00414c80(s_gfx_interface_eyr_eyr_bmp_00858364);
    param_1[0xc] = uVar3;
    ExceptionList = local_c;
    return param_1;
  }
  param_1[0xc] = 0;
  ExceptionList = local_c;
  return param_1;
}


