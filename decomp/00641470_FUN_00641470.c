// FUN_00641470 @ 641470 size=843

undefined4 * __thiscall FUN_00641470(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  void *pvVar9;
  char *pcVar10;
  undefined4 uVar11;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d2290;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00415020();
  *(undefined ***)((int)param_1 + 0x82) = &PTR_LAB_007efed8;
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  *(undefined1 *)((int)param_1 + 0x92) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x25] = &PTR_LAB_007efea8;
  *param_1 = &PTR_LAB_007efe58;
  param_1[2] = &PTR_LAB_007efe54;
  *(int *)((int)param_1 + 0x7e) = param_2;
  local_4._1_3_ = 0;
  local_4._0_1_ = 2;
  piVar4 = *(int **)(&DAT_00d4c3e4 + param_2 * 0x54);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    iVar2 = *piVar4;
    puVar5 = operator_new(0xba);
    local_4._0_1_ = 3;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      FUN_00433570(s_gfx_interface_button_tech_secret_00861aac,0,0xffffffff);
      *puVar5 = &PTR_FUN_007efd84;
      puVar5[2] = &PTR_LAB_007efd80;
      *(undefined ***)((int)puVar5 + 0x7e) = &PTR_LAB_007efd7c;
      *(undefined4 *)((int)puVar5 + 0xaa) = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)puVar5 + 0xae) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)((int)puVar5 + 0xb2) = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)((int)puVar5 + 0xb6) = *(undefined4 *)(iVar2 + 8);
    }
    iVar2 = param_1[0x27];
    local_4._0_1_ = 2;
    puVar6 = operator_new(0xe);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *puVar6 = puVar5;
      puVar6[1] = iVar2;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
    }
    iVar3 = param_1[0x28];
    param_1[0x27] = puVar6;
    param_1[0x28] = iVar3 + 1;
    piVar4 = piVar1;
    if (iVar3 == 0) {
      param_1[0x26] = puVar6;
    }
    else {
      *(undefined4 **)(iVar2 + 8) = puVar6;
    }
  }
  piVar4 = (int *)(&DAT_00d4c3fe)[param_2 * 0x15];
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)*piVar4;
    piVar4 = (int *)piVar4[2];
    puVar5 = *(undefined4 **)((int)piVar1 + 0x1a);
    if (*(undefined4 **)((int)piVar1 + 0x1a) == (undefined4 *)0x0) {
      uVar7 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)((int)piVar1 + 0xe));
      FUN_00405ad0(s__s___d__lacks_a_graphical_positi_00861d44,uVar7);
    }
    else {
      do {
        puVar6 = (undefined4 *)puVar5[3];
        uVar7 = puVar5[1];
        uVar11 = *puVar5;
        pvVar9 = operator_new(0xbc);
        local_4._0_1_ = 4;
        if (pvVar9 == (void *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)FUN_00641000(piVar1,param_1);
        }
        local_4._0_1_ = 2;
        (**(code **)(*piVar8 + 0x18))(uVar11,uVar7);
        iVar2 = *(int *)((int)param_1 + 0x8a);
        puVar5 = operator_new(0xe);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = piVar8;
          puVar5[1] = iVar2;
          puVar5[2] = 0;
          *(undefined1 *)(puVar5 + 3) = 0;
        }
        iVar3 = *(int *)((int)param_1 + 0x8e);
        *(undefined4 **)((int)param_1 + 0x8a) = puVar5;
        *(int *)((int)param_1 + 0x8e) = iVar3 + 1;
        if (iVar3 == 0) {
          *(undefined4 **)((int)param_1 + 0x86) = puVar5;
        }
        else {
          *(undefined4 **)(iVar2 + 8) = puVar5;
        }
        puVar5 = puVar6;
      } while (puVar6 != (undefined4 *)0x0);
    }
  }
  pcVar10 = &DAT_0088ebf8;
  switch(*(undefined4 *)((int)param_1 + 0x7e)) {
  case 0:
    pcVar10 = s_gfx_interface_techtree_infantry__00861d20;
    break;
  case 1:
    pcVar10 = s_gfx_interface_techtree_armor_bmp_00861cfc;
    break;
  case 2:
    pcVar10 = s_gfx_interface_techtree_naval_bmp_00861cd8;
    break;
  case 3:
    pcVar10 = s_gfx_interface_techtree_aircraft__00861cb4;
    break;
  case 4:
    pcVar10 = s_gfx_interface_techtree_industry__00861c90;
    break;
  case 5:
    pcVar10 = s_gfx_interface_techtree_land_doct_00861c64;
    break;
  case 6:
    pcVar10 = s_gfx_interface_techtree_secret_we_00861c38;
    break;
  case 7:
    pcVar10 = s_gfx_interface_techtree_naval_doc_00861c0c;
    break;
  case 8:
    pcVar10 = s_gfx_interface_techtree_air_doctr_00861be0;
  }
  pvVar9 = operator_new(0x7e);
  local_4._0_1_ = 5;
  if (pvVar9 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00414c80(pcVar10);
  }
  local_4._0_1_ = 2;
  *(undefined4 *)((int)param_1 + 0xa6) = uVar7;
  pvVar9 = operator_new(0x1aa);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (pvVar9 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar11 = 0;
    uVar7 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    uVar7 = FUN_0043acc0(s_Hejsan_00861bd8,uVar7,uVar11);
  }
  *(undefined4 *)((int)param_1 + 0xaa) = uVar7;
  ExceptionList = pvStack_c;
  return param_1;
}


