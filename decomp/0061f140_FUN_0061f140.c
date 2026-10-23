// FUN_0061f140 @ 61f140 size=453

undefined4 * __thiscall FUN_0061f140(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d0ed4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0061e1d0(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_007ef64c;
  param_1[2] = &PTR_LAB_007ef648;
  *(undefined ***)((int)param_1 + 0x7e) = &PTR_LAB_007ef644;
  puVar1 = operator_new(0x1aa);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar5 = 0x40;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(&DAT_00839384);
    FUN_0043acc0(uVar3,uVar2,uVar5);
    *puVar1 = &PTR_FUN_007e452c;
    puVar1[2] = &PTR_LAB_007e4528;
    *(undefined ***)((int)puVar1 + 0x7e) = &PTR_LAB_007e4524;
    puVar1[0x22] = 0xd;
  }
  local_4._0_1_ = 0;
  param_1[0x2f] = puVar1;
  puVar1 = operator_new(0x1aa);
  local_4._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uVar5 = 0x40;
    uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar3 = FUN_0042b6c9(s_CANCEL_0083bafc);
    FUN_0043acc0(uVar3,uVar2,uVar5);
    *puVar1 = &PTR_FUN_007ec6b8;
    puVar1[2] = &PTR_LAB_007ec6b4;
    *(undefined ***)((int)puVar1 + 0x7e) = &PTR_LAB_007ec6b0;
    puVar1[0x22] = 0xe;
  }
  local_4._0_1_ = 0;
  param_1[0x30] = puVar1;
  puVar1 = operator_new(0x72);
  local_4._0_1_ = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00434930(0xe8,0x12a,0,0);
    *puVar1 = &PTR_FUN_007ef600;
    *(undefined ***)((int)puVar1 + 0x12) = &PTR_LAB_007ef5ec;
    *(undefined ***)((int)puVar1 + 0x1a) = &PTR_LAB_007ef5e8;
    *(undefined ***)((int)puVar1 + 0x1e) = &PTR_LAB_007ef5e4;
  }
  local_4._0_1_ = 0;
  *(undefined4 **)((int)param_1 + 0xca) = puVar1;
  pvVar4 = operator_new(0x7e);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (pvVar4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00414c80(s_gfx_interface_hr_bmp_0085b46c);
  }
  *(undefined4 *)((int)param_1 + 0xc6) = uVar2;
  *(undefined4 *)((int)param_1 + 0xce) = 0;
  ExceptionList = local_c;
  return param_1;
}


