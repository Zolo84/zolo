// FUN_004403f0 @ 4403f0 size=465

undefined4 * __thiscall
FUN_004403f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bb01f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00414c80(param_9);
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e4130;
  param_1[0x28] = param_4;
  local_4 = 0;
  param_1[0x2a] = param_5;
  param_1[0x2b] = param_2;
  param_1[0x2c] = param_3;
  *param_1 = &PTR_FUN_007e4834;
  param_1[2] = &PTR_LAB_007e4830;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007e482c;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(param_6,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x21] = uVar2;
  pvVar1 = operator_new(0xaa);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00433570(param_7,0,0xffffffff);
  }
  local_4._0_1_ = 0;
  param_1[0x22] = uVar2;
  puVar3 = operator_new(0xba);
  local_4._0_1_ = 3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00433570(param_8,0,0xffffffff);
    *puVar3 = &PTR_FUN_007e47c8;
    puVar3[2] = &PTR_LAB_007e47c4;
    *(undefined ***)((int)puVar3 + 0x7e) = &PTR_LAB_007e47c0;
  }
  local_4._0_1_ = 0;
  param_1[0x23] = puVar3;
  *(undefined1 *)((int)param_1 + 0xb5) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x3f800000;
  pvVar1 = operator_new(0x7e);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_mincap_bmp_0083bf84);
  }
  local_4._0_1_ = 0;
  param_1[0x24] = uVar2;
  pvVar1 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_maxcap_bmp_0083bf68);
  }
  param_1[0x25] = uVar2;
  *(undefined1 *)((int)param_1 + 0x82) = 1;
  *(undefined1 *)((int)param_1 + 0x83) = 0;
  *(undefined1 *)((int)param_1 + 0xb6) = 0;
  ExceptionList = local_c;
  return param_1;
}


