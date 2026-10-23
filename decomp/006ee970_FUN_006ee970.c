// FUN_006ee970 @ 6ee970 size=967

undefined4 * __thiscall FUN_006ee970(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int local_28;
  undefined4 uStack_24;
  int local_20;
  int *piStack_1c;
  undefined4 *local_18;
  void *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_007da59f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_18 = param_1;
  FUN_006ee230(param_2);
  *param_1 = &PTR_FUN_007f80f8;
  param_1[2] = &PTR_LAB_007f80f4;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  local_28 = 3;
  param_2 = *(int *)(DAT_00bd1bac + 8) + -0x300 >> 1;
  uVar13 = 0xffffffff;
  iVar15 = *(int *)(DAT_00bd1bac + 4) + -0x400 >> 1;
  local_20 = param_2 + 0x32;
  pcVar16 = (char *)(*DAT_00d12b40 + 0x301);
  do {
    pcVar17 = pcVar16;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar17 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar17;
  } while (cVar1 != '\0');
  uVar13 = ~uVar13;
  pcVar16 = pcVar17 + -uVar13;
  pcVar17 = (char *)((int)param_1 + 0x2e);
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar17 = pcVar17 + 4;
  }
  param_2 = param_2 + 400;
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar17 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar17 = pcVar17 + 1;
  }
  puVar10 = (undefined4 *)((int)param_1 + 0x16);
  do {
    local_14 = operator_new(0xaa);
    local_4._0_1_ = 1;
    if (local_14 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00433570(s_GFX_interface_frontend_btn_front_0086b5f8,0,0xffffffff);
    }
    local_4._0_1_ = 0;
    *puVar10 = uVar2;
    FUN_00415d40();
    iVar7 = *(int *)*puVar10;
    iVar3 = FUN_00415bd0(param_2);
    (**(code **)(iVar7 + 0x18))((iVar15 - iVar3 / 2) + 0x200);
    param_2 = param_2 + 0x28;
    puVar10 = puVar10 + 1;
    local_28 = local_28 + -1;
  } while (local_28 != 0);
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FECONNBTN_IPX_0086f4c0,*(undefined4 *)((int)param_1 + 0x16),uVar2);
  *(undefined4 *)(*(int *)((int)param_1 + 0x16) + 0x88) = 0x6c;
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FECONNBTN_TCPIP_0086f4b0,*(undefined4 *)((int)param_1 + 0x1a),uVar2);
  *(undefined4 *)(*(int *)((int)param_1 + 0x1a) + 0x88) = 0x69;
  uVar2 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_006ee850(s_FEBTN_BACK_0086f4a4,*(undefined4 *)((int)param_1 + 0x1e),uVar2);
  *(undefined4 *)(*(int *)((int)param_1 + 0x1e) + 0x88) = 0xe;
  pvVar4 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00414c80(s_GFX_interface_frontend_box_doubl_0086f478);
  }
  iVar3 = local_20;
  *(int **)((int)param_1 + 0x22) = piVar5;
  iVar7 = *piVar5;
  local_4 = (undefined4 *)((uint)local_4._1_3_ << 8);
  iVar6 = FUN_00415bd0(local_20 + 0x1d6);
  (**(code **)(iVar7 + 0x18))((iVar15 - iVar6 / 2) + 0x200);
  FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  uVar19 = 0;
  uVar18 = 0;
  uVar2 = *(undefined4 *)(*(int *)((int)param_1 + 0x22) + 0x62);
  iVar3 = iVar3 + 0xb;
  iVar7 = FUN_00415bd0(iVar3,uVar2,0,0);
  iVar15 = iVar7 / 2 + iVar15;
  uVar8 = FUN_0042b6c9(s_FECONN_ENTERNAME_0086f464);
  FUN_004132d0(uVar8,iVar15,iVar3,uVar2,uVar18,uVar19);
  local_4 = operator_new(0x56);
  pvStack_c._0_1_ = 3;
  if (local_4 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    piVar9 = *(int **)((int)param_1 + 0x22);
    iVar15 = (int)param_1 + 0x2e;
    iVar7 = DAT_00bd1bac;
    piStack_1c = piVar9;
    uVar2 = FUN_004136a0(s_eurostilecond18bold_bmp_0085b444);
    uVar18 = 0x10;
    piVar5 = &local_28;
    uVar8 = 0x73;
    iVar3 = (**(code **)(*piVar9 + 0x28))(piVar5,0x73,0x10,uVar2,iVar7,iVar15);
    piVar9 = (int *)(**(code **)(*piVar9 + 0x28))(&stack0xffffffcc,*(int *)(iVar3 + 4) + 0x26);
    uVar2 = FUN_00437e60(*piVar9 + 0x1e,piVar5,uVar8,uVar18,uVar2,iVar7,iVar15);
  }
  pvStack_c._0_1_ = 0;
  *(undefined4 *)((int)param_1 + 0x26) = uVar2;
  FUN_00438950(&DAT_0083bf04);
  puVar10 = operator_new(0xc);
  pvStack_c._0_1_ = 4;
  local_4 = puVar10;
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar11 = (undefined4 *)FUN_00581e60();
    uVar2 = *puVar11;
    uStack_24 = puVar11[1];
    puVar12 = operator_new(0x1e);
    pvStack_c._0_1_ = 5;
    piStack_1c = (int *)puVar12;
    if (puVar12 == (undefined2 *)0x0) {
      puVar12 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar12[4] = 0;
      *(undefined4 *)(puVar12 + 5) = 0;
    }
    puVar10[1] = puVar12;
    *(undefined1 *)(puVar10 + 2) = 0;
    *(undefined1 *)((int)puVar10 + 9) = 1;
    *puVar10 = &PTR_FUN_007eae68;
    *(undefined1 *)((int)puVar10 + 10) = 0;
    *puVar12 = 0xd;
    iVar15 = puVar10[1];
    *(undefined4 *)(iVar15 + 8) = DAT_0088f29c;
    *(undefined2 *)(iVar15 + 0xc) = DAT_0088f2a0;
    iVar15 = puVar10[1];
    piStack_1c = (int *)((uint)piStack_1c & 0xff000000);
    *(int **)(iVar15 + 2) = piStack_1c;
    *(undefined2 *)(iVar15 + 6) = 0;
    *puVar10 = &PTR_FUN_007eae48;
    *(undefined4 *)(puVar10[1] + 0xe) = 0;
    *(undefined4 *)(puVar10[1] + 0x12) = 0;
    iVar15 = puVar10[1];
    *(undefined4 *)(iVar15 + 0x16) = uVar2;
    *(undefined4 *)(iVar15 + 0x1a) = uStack_24;
  }
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  FUN_00565c50(puVar10);
  ExceptionList = local_14;
  return param_1;
}


