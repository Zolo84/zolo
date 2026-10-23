// FUN_00642820 @ 642820 size=858

undefined4 * __thiscall
FUN_00642820(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d22fc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007eff08;
  param_1[4] = param_3;
  param_1[5] = param_4;
  iVar1 = FUN_005841a0();
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  pvVar2 = operator_new(0x72);
  piVar7 = (int *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar13 = 0;
    uVar12 = 0;
    uVar3 = FUN_005841b0(0,0);
    piVar7 = (int *)FUN_00434930(0x120,uVar3,uVar12,uVar13);
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_00584270(0xff,0xff,0xff);
  FUN_004361c0(param_2,uVar3);
  iVar4 = FUN_00436110();
  iVar8 = iVar4 + 0x78;
  pvVar2 = operator_new(0x58);
  local_4 = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00441b30(0,0x140,iVar8,0x10);
  }
  param_1[3] = uVar3;
  local_4 = -1;
  (**(code **)(*piVar7 + 0x34))(0x10,0x32);
  FUN_00434f70(*(undefined4 *)(param_1[3] + 0x10));
  pvVar2 = (void *)0x0;
  (**(code **)(*(int *)((int)piVar7 + 0x12) + 0x10))();
  if (piVar7 != (int *)0x0) {
    (**(code **)*piVar7)(1);
  }
  iVar5 = FUN_005841b0();
  param_1[1] = iVar1 / 2 + -0xa0;
  uVar11 = 0;
  iVar5 = iVar5 / 2 - iVar8 / 2;
  param_1[2] = iVar5;
  uVar10 = 0xffff;
  uVar3 = *(undefined4 *)(param_1[3] + 0x10);
  uVar9 = 0x12;
  uVar13 = 0xa0;
  uVar12 = FUN_0042b6c9(s_DWMLORD_0085de10);
  FUN_004136a0(s_eurostilecond24bold_bmp_00848100);
  FUN_00413509(uVar12,uVar13,uVar9,uVar3,uVar10,uVar11);
  uVar10 = 0;
  uVar9 = 0xffff;
  iVar1 = iVar4 + 0x46;
  uVar3 = *(undefined4 *)(param_1[3] + 0x10);
  uVar13 = 0xa0;
  uVar12 = FUN_0042b6c9(s_DWAREYOUSURE1_0085de00);
  FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_00413509(uVar12,uVar13,iVar1,uVar3,uVar9,uVar10);
  uVar10 = 0;
  uVar9 = 0xffff;
  iVar4 = iVar4 + 0x54;
  uVar3 = *(undefined4 *)(param_1[3] + 0x10);
  uVar13 = 0xa0;
  uVar12 = FUN_0042b6c9(s_DWAREYOUSURE2_0085ddf0);
  FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_00413509(uVar12,uVar13,iVar4,uVar3,uVar9,uVar10);
  puVar6 = operator_new(0x1aa);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar13 = 0x40;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar12 = FUN_0042b6c9(&DAT_00839384);
    FUN_0043acc0(uVar12,uVar3,uVar13);
    *puVar6 = &PTR_FUN_007e452c;
    puVar6[2] = &PTR_LAB_007e4528;
    *(undefined ***)((int)puVar6 + 0x7e) = &PTR_LAB_007e4524;
    puVar6[0x22] = 0xd;
  }
  param_1[6] = puVar6;
  puVar6 = operator_new(0x1aa);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar13 = 0x40;
    uVar3 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar12 = FUN_0042b6c9(s_CANCEL_0083bafc);
    FUN_0043acc0(uVar12,uVar3,uVar13);
    *puVar6 = &PTR_FUN_007ec6b8;
    puVar6[2] = &PTR_LAB_007ec6b4;
    *(undefined ***)((int)puVar6 + 0x7e) = &PTR_LAB_007ec6b0;
    puVar6[0x22] = 0xe;
  }
  iVar8 = iVar5 + -0x1e + iVar8;
  param_1[7] = puVar6;
  iVar1 = *(int *)param_1[6];
  iVar5 = FUN_00415bd0(iVar8);
  iVar4 = local_4;
  (**(code **)(iVar1 + 0x18))((local_4 - iVar5 / 2) + 0xf0);
  iVar1 = *(int *)param_1[7];
  iVar8 = FUN_00415bd0(iVar8);
  (**(code **)(iVar1 + 0x18))((iVar4 - iVar8 / 2) + 0x50);
  ExceptionList = pvVar2;
  return param_1;
}


