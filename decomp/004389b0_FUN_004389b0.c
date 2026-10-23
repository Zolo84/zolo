// FUN_004389b0 @ 4389b0 size=865

undefined4 * __thiscall
FUN_004389b0(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char *param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  char *pcVar9;
  int unaff_EDI;
  char *pcVar10;
  undefined1 *puVar11;
  int *piVar12;
  int local_11c [2];
  void *local_114;
  undefined4 *local_110;
  undefined1 local_10c [236];
  void *pvStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  char *local_4;
  
  local_4 = (char *)0xffffffff;
  puStack_8 = &LAB_007baaa0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_110 = param_1;
  FUN_00425a80(&DAT_0082eeb0);
  local_4 = (char *)0x0;
  FUN_00583720();
  param_1[2] = &PTR_LAB_007e434c;
  param_1[3] = param_3;
  uVar7 = 0xffffffff;
  *param_1 = &PTR_FUN_007e4338;
  *(undefined1 *)((int)param_1 + 0x132) = 1;
  pcVar3 = param_2;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_4 = (char *)0x1;
  pcVar3 = operator_new(~uVar7);
  uVar7 = 0xffffffff;
  *(char **)((int)param_1 + 0x2a) = pcVar3;
  do {
    pcVar9 = param_2;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar9 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar9;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar9 + -uVar7;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar3 = param_6;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = operator_new(~uVar7);
  uVar7 = 0xffffffff;
  *(char **)((int)param_1 + 0x2e) = pcVar3;
  do {
    pcVar9 = param_6;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar9 = param_6 + 1;
    cVar1 = *param_6;
    param_6 = pcVar9;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar9 + -uVar7;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar3 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uVar4 = FUN_004136a0(s_eurostilecond20bold_bmp_0082f024);
  local_114 = operator_new(0xaa);
  local_4._0_1_ = 2;
  if (local_114 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00433570(s_gfx_interface_btn_saveload_bmp_0083bb04,0,0xffffffff);
  }
  local_4._0_1_ = 1;
  param_1[4] = uVar5;
  FUN_00415d40();
  FUN_006ee850(s_CANCEL_0083bafc,param_1[4],uVar4);
  local_114 = operator_new(0xaa);
  local_4._0_1_ = 3;
  if (local_114 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00433570(s_gfx_interface_btn_saveload_bmp_0083bb04,0,0xffffffff);
  }
  local_4._0_1_ = 1;
  param_1[5] = uVar5;
  FUN_00415d40();
  FUN_006ee850(&DAT_00839384,param_1[5],uVar4);
  FUN_00429d20(param_4,local_10c);
  local_114 = operator_new(0x56);
  local_4._0_1_ = 4;
  if (local_114 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar11 = local_10c;
    uVar5 = FUN_00415640(puVar11);
    uVar4 = FUN_00437e60(0,0x104,0x104,0x80,uVar4,uVar5,puVar11);
  }
  local_4 = (char *)CONCAT31(local_4._1_3_,1);
  param_1[7] = uVar4;
  FUN_00438950(&DAT_0083baf4);
  *(undefined1 *)(param_1[7] + 0x53) = 1;
  FUN_00439520();
  piVar12 = local_11c;
  (**(code **)(*(int *)param_1[3] + 0x28))(piVar12);
  iVar2 = *(int *)param_1[5];
  iVar6 = FUN_00415bd0(local_11c[0] + 0x17c);
  (**(code **)(iVar2 + 0x18))((unaff_EBX - iVar6 / 2) + 0xf0);
  iVar2 = *(int *)param_1[4];
  iVar6 = FUN_00415bd0(unaff_EBP + 0x17c);
  (**(code **)(iVar2 + 0x18))((unaff_ESI - iVar6 / 2) + 0x72);
  FUN_00438050((int)piVar12 + 0x2a,unaff_EDI + 0x14f);
  pcVar3 = operator_new(0x400);
  *(char **)((int)param_1 + 0x26) = pcVar3;
  if (local_4 == (char *)0x0) {
    GetCurrentDirectoryA(0x400,pcVar3);
  }
  else {
    uVar7 = 0xffffffff;
    pcVar9 = local_4;
    do {
      pcVar10 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar10 + -uVar7;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar3 = pcVar3 + 1;
    }
  }
  uVar7 = 0xffffffff;
  pcVar3 = *(char **)((int)param_1 + 0x26);
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  do {
    uVar7 = uVar7 - 1;
    if ((int)uVar7 < 1) goto LAB_00438cc7;
  } while ((*(char **)((int)param_1 + 0x26))[uVar7] != '\\');
  FUN_00436a00(s__070________0083bae8,0x20000,1,&DAT_0088f28c);
LAB_00438cc7:
  FUN_004396a0(*(undefined4 *)((int)param_1 + 0x26),*(undefined4 *)((int)param_1 + 0x2e),1);
  FUN_004396a0(*(undefined4 *)((int)param_1 + 0x26),*(undefined4 *)((int)param_1 + 0x2e),0);
  FUN_004353e0();
  *(undefined1 *)(param_1 + 9) = 0;
  ExceptionList = pvStack_20;
  return param_1;
}


