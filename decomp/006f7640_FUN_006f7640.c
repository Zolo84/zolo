// FUN_006f7640 @ 6f7640 size=395

undefined4 * __thiscall FUN_006f7640(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 auStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dade7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006ee230(param_2);
  *param_1 = &PTR_FUN_007f82c4;
  param_1[2] = &PTR_LAB_007f82c0;
  iVar8 = 0;
  puVar7 = (undefined4 *)((int)param_1 + 0x16);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  iVar5 = *(int *)(DAT_00bd1bac + 4);
  iVar6 = (*(int *)(DAT_00bd1bac + 8) + -0x300 >> 1) + 0xd2;
  do {
    pvVar2 = operator_new(0xaa);
    local_4._0_1_ = 1;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00433570(s_GFX_interface_frontend_btn_front_0086b5f8,0,0xffffffff);
    }
    local_4._0_1_ = 0;
    *puVar7 = uVar3;
    FUN_00415d40();
    iVar1 = *(int *)*puVar7;
    iVar4 = FUN_00415bd0(iVar6);
    (**(code **)(iVar1 + 0x18))(((iVar5 + -0x400 >> 1) - iVar4 / 2) + 0x200);
    iVar8 = iVar8 + 1;
    FUN_007a630a(auStack_10c,s_FETUTORIAL__d_0086f990,iVar8);
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    FUN_006ee850(auStack_10c,*puVar7,uVar3);
    iVar6 = iVar6 + 0x28;
    puVar7 = puVar7 + 1;
  } while (iVar8 < 7);
  FUN_005823b0();
  pvVar2 = operator_new(0xaa);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pvVar2 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  *(int *)((int)param_1 + 0x136) = iVar5;
  *(undefined1 *)(iVar5 + 0xa2) = 0;
  *(undefined1 *)(*(int *)((int)param_1 + 0x136) + 0x68) = 1;
  ExceptionList = pvStack_c;
  return param_1;
}


