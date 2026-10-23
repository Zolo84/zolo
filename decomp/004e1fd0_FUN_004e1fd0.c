// FUN_004e1fd0 @ 4e1fd0 size=389

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_004e1fd0(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bfde1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = 0;
  FUN_00583720();
  local_4 = 1;
  *param_1 = &PTR_FUN_007e7fb4;
  param_1[2] = &PTR_LAB_007e7fb0;
  pvVar1 = operator_new(0x28);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0040e950(s_gfx_interface_minimap_bmp_00847db8);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)((int)param_1 + 0x2e) = uVar2;
  pvVar1 = operator_new(0x28);
  local_4._0_1_ = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0040e950(s_gfx_interface_minimap_bmp_00847db8);
  }
  *(undefined4 *)((int)param_1 + 0x32) = uVar2;
  puVar4 = &DAT_00abc3f8;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  DAT_00abc3f8._0_1_ = 2;
  DAT_00abc3f8._1_1_ = 2;
  DAT_00abc3f8._2_1_ = 2;
  DAT_00abc3f8._3_1_ = 2;
  DAT_00abc3fc._0_1_ = 2;
  local_4._0_1_ = 1;
  *(float *)((int)param_1 + 0xe) =
       (float)*(int *)(*(int *)((int)param_1 + 0x2e) + 4) * _DAT_007e7fac;
  *(float *)((int)param_1 + 0x12) =
       (float)*(int *)(*(int *)((int)param_1 + 0x2e) + 8) * _DAT_007e7fa8;
  pvVar1 = operator_new(0x25e);
  local_4._0_1_ = 4;
  if (pvVar1 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_004010a0(*(undefined4 *)(*(int *)((int)param_1 + 0x2e) + 4),
                         *(undefined4 *)(*(int *)((int)param_1 + 0x2e) + 8),0x10,1);
  }
  *(int *)((int)param_1 + 0x2a) = iVar3;
  *(undefined1 *)(iVar3 + 0x252) = 1;
  *(undefined1 *)((int)param_1 + 0x36) = 1;
  *(undefined1 *)(param_1 + 3) = 1;
  local_4 = CONCAT31(local_4._1_3_,1);
  pvVar1 = operator_new(*(int *)(*(int *)((int)param_1 + 0x2e) + 8) *
                        *(int *)(*(int *)((int)param_1 + 0x2e) + 4) * 2);
  param_1[0xe] = pvVar1;
  param_1[0xf] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}


