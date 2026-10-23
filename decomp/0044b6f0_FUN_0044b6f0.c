// FUN_0044b6f0 @ 44b6f0 size=875

void FUN_0044b6f0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  void *unaff_EBX;
  undefined2 local_14;
  int local_12;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbb48;
  pvStack_c = ExceptionList;
  switch((&DAT_00dc0fd4)[param_1]) {
  case 0:
    ExceptionList = &pvStack_c;
    cVar4 = FUN_0042e980();
    if (cVar4 == '\x01') {
      pvVar5 = operator_new(0x13c8a);
      local_4 = 0;
      if (pvVar5 == (void *)0x0) goto LAB_0044b908;
      piVar6 = (int *)FUN_006a83b0();
    }
    else {
      pvVar5 = operator_new(0x13c84);
      local_4 = 1;
      if (pvVar5 == (void *)0x0) goto LAB_0044b908;
      piVar6 = (int *)FUN_00445090();
    }
    break;
  case 1:
    ExceptionList = &pvStack_c;
    cVar4 = FUN_0042e9a0();
    if (cVar4 != '\0') {
      pvVar5 = operator_new(0x22254);
      local_4 = 2;
      if (pvVar5 == (void *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)FUN_006d4bf0();
      }
      local_4 = 0xffffffff;
      FUN_006d6ad0(DAT_00d685a6 + 0x267d);
      goto LAB_0044b914;
    }
    pvVar5 = operator_new(0x221c4);
    local_4 = 3;
    if (pvVar5 == (void *)0x0) goto LAB_0044b908;
    piVar6 = (int *)FUN_00648fb0();
    break;
  case 2:
    ExceptionList = &pvStack_c;
    pvVar5 = operator_new(0x13c84);
    local_4 = 4;
    if (pvVar5 == (void *)0x0) {
LAB_0044b908:
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_00445090();
    }
    break;
  default:
    ExceptionList = &pvStack_c;
    pvVar5 = operator_new(0x13c84);
    local_4 = 7;
    if (pvVar5 == (void *)0x0) goto LAB_0044b908;
    piVar6 = (int *)FUN_00445090();
    break;
  case 4:
    ExceptionList = &pvStack_c;
    piVar6 = operator_new(0x13c84);
    local_4 = 5;
    if (piVar6 != (int *)0x0) {
      FUN_00445090();
      *piVar6 = (int)&PTR_FUN_007e5934;
      *(undefined ***)((int)piVar6 + 10) = &PTR_FUN_007e592c;
      *(undefined ***)((int)piVar6 + 0xe) = &PTR_LAB_007e5918;
      *(undefined ***)((int)piVar6 + 0x16) = &PTR_LAB_007e5914;
      local_4 = 0xffffffff;
      goto LAB_0044b914;
    }
    goto LAB_0044b8d6;
  case 5:
    ExceptionList = &pvStack_c;
    piVar6 = operator_new(0x13c8a);
    local_4 = 6;
    if (piVar6 != (int *)0x0) {
      FUN_006a83b0();
      *piVar6 = (int)&PTR_FUN_007e5464;
      *(undefined ***)((int)piVar6 + 10) = &PTR_FUN_007e545c;
      *(undefined ***)((int)piVar6 + 0xe) = &PTR_LAB_007e5448;
      *(undefined ***)((int)piVar6 + 0x16) = &PTR_LAB_007e5444;
      local_4 = 0xffffffff;
      goto LAB_0044b914;
    }
LAB_0044b8d6:
    piVar6 = (int *)0x0;
    local_4 = 0xffffffff;
    goto LAB_0044b914;
  }
  local_4 = 0xffffffff;
LAB_0044b914:
  (&DAT_0089cad8)[param_1] = piVar6;
  uVar7 = FUN_004af700(param_1);
  FUN_0044b330(uVar7);
  uVar7 = FUN_004af740(param_1);
  FUN_00425ba0(uVar7);
  local_14 = 3;
  local_12 = param_1;
  (**(code **)(*piVar6 + 4))(&local_14);
  FUN_005870d0(param_1);
  FUN_00586160();
  (**(code **)(*piVar6 + 0x20))();
  FUN_0044e210();
  iVar3 = DAT_0088ee04;
  uVar1 = *(uint *)(DAT_0088ee04 + 4);
  puVar8 = operator_new(0xe);
  if (puVar8 == (uint *)0x0) {
    puVar8 = (uint *)0x0;
  }
  else {
    *puVar8 = -(uint)(piVar6 != (int *)0x0) & (int)piVar6 + 0xeU;
    puVar8[1] = 0;
    puVar8[2] = uVar1;
    *(undefined1 *)(puVar8 + 3) = 0;
  }
  iVar2 = *(int *)(iVar3 + 0xc);
  *(uint **)(iVar3 + 4) = puVar8;
  *(int *)(iVar3 + 0xc) = iVar2 + 1;
  if (iVar2 == 0) {
    *(uint **)(iVar3 + 8) = puVar8;
  }
  else {
    *(uint **)(uVar1 + 4) = puVar8;
  }
  iVar3 = *(int *)((int)piVar6 + 6);
  puVar9 = &DAT_0088ebf8;
  if ((&DAT_0089cad8)[iVar3] != 0) {
    puVar9 = (undefined1 *)((&DAT_0089cad8)[iVar3] + 0x31a);
  }
  FUN_007a630a(&DAT_0089c8c8,s_gfx_map_flags_flag_xxx_s_bmp_0083c6d0,puVar9);
  puVar9 = (undefined1 *)FUN_004af700(iVar3);
  DAT_0089c8db = *puVar9;
  DAT_0089c8dc = puVar9[1];
  DAT_0089c8dd = puVar9[2];
  (**(code **)(*(int *)piVar6[0xd81] + 0x2c))(&DAT_0089c8c8);
  (**(code **)(*(int *)piVar6[0xd81] + 0x34))(0x19);
  uVar7 = FUN_00413d60(s_flag_palette_bmp_0083c738);
  FUN_00415f20(uVar7);
  ExceptionList = unaff_EBX;
  return;
}


