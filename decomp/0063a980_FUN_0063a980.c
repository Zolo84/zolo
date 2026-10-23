// FUN_0063a980 @ 63a980 size=475

undefined4 * __thiscall FUN_0063a980(undefined4 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined2 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d1f67;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00415020();
  *(undefined2 *)((int)param_1 + 0x7e) = 0;
  param_1[0x20] = 0;
  *param_1 = &PTR_FUN_007efb10;
  param_1[2] = &PTR_LAB_007efb0c;
  uStack_10 = (undefined2)((uint)*(undefined4 *)((int)param_2 + 0xe) >> 0x10);
  *(undefined4 *)((int)param_1 + 0x7e) = *(undefined4 *)((int)param_2 + 0xc);
  *(undefined2 *)((int)param_1 + 0x82) = uStack_10;
  local_4 = 0;
  if (DAT_00dc1780 == '\0') {
    pvVar1 = operator_new(0x72);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_00434930(0xe8,0x50,0,0);
      goto LAB_0063aa46;
    }
  }
  else {
    pvVar1 = operator_new(0x72);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (pvVar1 != (void *)0x0) {
      iVar2 = FUN_00434930(0x14c,0x50,0,0);
      goto LAB_0063aa46;
    }
  }
  iVar2 = 0;
LAB_0063aa46:
  param_1[0x21] = iVar2;
  local_4 = local_4 & 0xffffff00;
  *(undefined2 *)(iVar2 + 0x5a) = 0xffff;
  uVar3 = FUN_0075a210();
  FUN_004361a0(uVar3);
  param_2 = param_1 + 0x22;
  iVar2 = 0;
  do {
    puVar4 = operator_new(0x84);
    local_4._0_1_ = 3;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_00414c80(s_gfx_interface_tc_icons_bmp_008612e0);
      local_4._0_1_ = 4;
      *puVar4 = &PTR_FUN_007ef9d0;
      puVar4[2] = &PTR_LAB_007ef9cc;
      FUN_00415b90(0x6d);
      FUN_00415b50(iVar2);
      *(undefined1 *)((int)puVar4 + 0x82) = 0;
      pvVar1 = operator_new(0x7e);
      local_4._0_1_ = 5;
      if (pvVar1 == (void *)0x0) {
        *(undefined4 *)((int)puVar4 + 0x7e) = 0;
      }
      else {
        uVar3 = FUN_00414c80(s_gfx_interface_tc_icon_overlay_bm_008612bc);
        *(undefined4 *)((int)puVar4 + 0x7e) = uVar3;
      }
    }
    iVar2 = iVar2 + 1;
    local_4 = (uint)local_4._1_3_ << 8;
    *param_2 = puVar4;
    param_2 = param_2 + 1;
  } while (iVar2 < 7);
  pvVar1 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (pvVar1 == (void *)0x0) {
    param_1[0x29] = 0;
  }
  else {
    uVar3 = FUN_00414c80(s_gfx_interface_blueprints_bmp_0086140c);
    param_1[0x29] = uVar3;
  }
  ExceptionList = local_c;
  return param_1;
}


