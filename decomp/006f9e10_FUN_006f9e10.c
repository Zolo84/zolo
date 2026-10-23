// FUN_006f9e10 @ 6f9e10 size=906

undefined4 * __thiscall FUN_006f9e10(undefined4 *param_1,int param_2,undefined4 param_3)

{
  void *pvVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int *unaff_ESI;
  int iVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_007db16d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_007f834c;
  iVar7 = *(int *)(DAT_00bd1bac + 4);
  iVar8 = *(int *)(DAT_00bd1bac + 8);
  *(int *)((int)param_1 + 0x26) = param_2;
  *(undefined4 *)((int)param_1 + 0x2a) = param_3;
  pvVar1 = operator_new(0x72);
  local_4 = (void *)0x0;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00434930(0x180,0xd3,0,0);
  }
  iVar8 = (iVar8 + -0x300 >> 1) + 0xd8;
  param_1[1] = piVar2;
  iVar7 = (iVar7 + -0x400 >> 1) + 0x240;
  local_4 = (void *)0xffffffff;
  (**(code **)(*piVar2 + 0x34))(iVar7,iVar8);
  local_4 = operator_new(0x72);
  pvStack_c = (void *)0x1;
  if (local_4 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00434930(0x180,0xd3,0,0);
  }
  param_1[3] = piVar2;
  pvStack_c = (void *)0xffffffff;
  iVar9 = iVar7;
  (**(code **)(*piVar2 + 0x34))(iVar7,iVar8);
  *(undefined2 *)(param_1[1] + 0x5a) = 0xffff;
  *(undefined2 *)(param_1[3] + 0x5a) = 0xffff;
  pvStack_c = operator_new(0x72);
  if (pvStack_c == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00434930(0x180,0xfa,0,0);
  }
  param_1[2] = piVar2;
  iVar5 = iVar8;
  (**(code **)(*piVar2 + 0x34))(iVar7,iVar8);
  pvVar1 = operator_new(0x72);
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00434930(0x180,0xfa,0,0);
  }
  param_1[4] = piVar2;
  (**(code **)(*piVar2 + 0x34))(iVar7,iVar8);
  *(undefined2 *)(param_1[2] + 0x5a) = 0xffff;
  *(undefined2 *)(param_1[4] + 0x5a) = 0xffff;
  pvVar1 = operator_new(0x7e);
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00414c80(s_gfx_interface_prickar_bmp_0085ff0c);
  }
  param_1[7] = piVar2;
  (**(code **)(*piVar2 + 0x34))(5);
  iVar7 = *(int *)(param_2 + 0x277e + *(int *)(param_2 + 4 + (int)pvVar1 * 4) * 4);
  pvVar3 = operator_new(0x7e);
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00414c80(iVar7 + 0x1468a);
  }
  param_1[5] = piVar2;
  iVar5 = iVar5 + 0xb8;
  pvVar6 = (void *)(iVar9 + 0x128);
  (**(code **)(*piVar2 + 0x18))(pvVar6,iVar5);
  param_1[8] = unaff_ESI;
  (**(code **)(*unaff_ESI + 0x18))(0xfffffc18,0xfffffc18);
  pvVar3 = operator_new(0x7e);
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    uVar4 = FUN_0044b160(*(undefined4 *)(param_2 + 4 + (int)pvVar1 * 4));
    piVar2 = (int *)FUN_00414c80(uVar4);
  }
  param_1[6] = piVar2;
  (**(code **)(*piVar2 + 0x34))(4);
  (**(code **)(*(int *)param_1[6] + 0x38))(0);
  (**(code **)(*(int *)param_1[6] + 0x18))(iVar5 + 0x130,(int)pvVar6 + 0x48);
  uVar4 = FUN_00413d60(s_shield_palette_bmp_0083bf2c);
  FUN_00415f20(uVar4);
  iVar7 = FUN_0042b6c9(*(int *)(param_2 + 0x277e + *(int *)(param_2 + 4 + (int)pvVar1 * 4) * 4) +
                       0x13e8a);
  iVar8 = FUN_007a8730(iVar7,s_UNKNOWN_STRING_WANTED_0083c758);
  if (iVar8 == 0) {
    iVar7 = *(int *)(param_2 + 0x277e + *(int *)(param_2 + 4 + (int)pvVar1 * 4) * 4) + 0x13e8a;
  }
  FUN_004361a0(iVar7);
  iVar7 = FUN_0042b6c9(*(int *)(param_2 + 0x277e + *(int *)(param_2 + 4 + (int)pvVar1 * 4) * 4) +
                       0x1428a);
  iVar8 = FUN_007a8730(iVar7,s_UNKNOWN_STRING_WANTED_0083c758);
  if (iVar8 == 0) {
    iVar7 = *(int *)(param_2 + 0x277e + *(int *)(param_2 + 4 + (int)pvVar1 * 4) * 4) + 0x1428a;
  }
  FUN_004361a0(iVar7);
  *(undefined1 *)(param_1 + 9) = 0;
  ExceptionList = pvVar6;
  return param_1;
}


