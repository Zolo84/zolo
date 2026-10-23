// FUN_005eddd0 @ 5eddd0 size=2179

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005eddd0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *pcVar14;
  int iStack_620;
  int iStack_61c;
  int local_618;
  undefined1 auStack_60c [256];
  undefined1 auStack_50c [252];
  undefined1 auStack_410 [4];
  undefined1 auStack_40c [1020];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ce9b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)(*(int *)(param_1 + 0x90) + 0x13d22) = DAT_008477ac;
  if (DAT_008477ac == 0) {
    FUN_004d8670(*(undefined4 *)(*(int *)(param_1 + 0x90) + 0x117de));
  }
  iVar1 = DAT_00ab27b4 + DAT_008477ac * 0x4b2;
  if (*(int *)(DAT_00ab27b4 + 0x3d4 + DAT_008477ac * 0x4b2) == 0) {
    FUN_0064c090(1);
    ExceptionList = local_c;
    return;
  }
  if (*(undefined4 **)(param_1 + 0x144) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x144))(1);
  }
  pvVar5 = operator_new(0xaa);
  uStack_4 = 0;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar13 = 0xffffffff;
    uVar12 = 0;
    uVar6 = FUN_0044b160(*(undefined4 *)(*(int *)(iVar1 + 0x3d8) + 6),0,0xffffffff);
    uVar6 = FUN_00433570(uVar6,uVar12,uVar13);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x144) = uVar6;
  if (*(undefined4 **)(param_1 + 0x150) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x150))(1);
  }
  if (*(undefined4 **)(param_1 + 0x154) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x154))(1);
  }
  pvVar5 = operator_new(0xaa);
  uStack_4 = 1;
  if (pvVar5 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    uVar13 = 0xffffffff;
    uVar12 = 0;
    uVar6 = FUN_0044b160(*(undefined4 *)(*(int *)(iVar1 + 0x3d4) + 6),0,0xffffffff);
    iVar7 = FUN_00433570(uVar6,uVar12,uVar13);
  }
  *(int *)(param_1 + 0x150) = iVar7;
  uStack_4 = 0xffffffff;
  *(undefined4 *)(iVar7 + 0xe) = 1;
  pvVar5 = operator_new(0xaa);
  uStack_4 = 2;
  if (pvVar5 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    uVar13 = 0xffffffff;
    uVar12 = 0;
    uVar6 = FUN_0044b160(*(undefined4 *)(*(int *)(iVar1 + 0x3d8) + 6),0,0xffffffff);
    iVar7 = FUN_00433570(uVar6,uVar12,uVar13);
  }
  *(int *)(param_1 + 0x154) = iVar7;
  *(undefined4 *)(iVar7 + 0xe) = 1;
  uStack_4 = 0xffffffff;
  if (*(undefined4 **)(param_1 + 0x15c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x15c))(1);
  }
  uVar6 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  pvVar5 = operator_new(0x1aa);
  uStack_4 = 3;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar12 = FUN_0044e1b0();
    piVar8 = (int *)FUN_004e9370(uVar12);
    uVar13 = 0;
    uVar12 = (**(code **)(*piVar8 + 0xc))(uVar6,0);
    uVar6 = FUN_0043acc0(uVar12,uVar6,uVar13);
  }
  *(undefined4 *)(param_1 + 0x15c) = uVar6;
  uStack_4 = 0xffffffff;
  if (_DAT_00d7d1bc == _DAT_007e3374) {
    if (DAT_00dc3a00 == '\0') {
LAB_005ee0a2:
      if (DAT_00dc2ca4 == '\0') {
        FUN_007a630a(auStack_40c,s_gfx_interface_ill_prov__d_bmp_0085d2c4,
                     *(undefined4 *)(iVar1 + 0x12));
      }
      else {
        FUN_007a630a(auStack_40c,s__s_gfx_ill_prov__d_bmp_0085d2e4,&DAT_00dc1970);
      }
      iVar7 = FUN_007a6615(auStack_40c,&DAT_0082eeb4);
      if (iVar7 != 0) goto LAB_005ee37b;
      switch(*(undefined4 *)(iVar1 + 0x254)) {
      case 0:
        pcVar14 = s_gfx_interface_ill_prov_plains_bm_0085d2a0;
        break;
      case 1:
        pcVar14 = s_gfx_interface_ill_prov_forest_bm_0085d27c;
        break;
      case 2:
        pcVar14 = s_gfx_interface_ill_prov_mountains_0085d254;
        break;
      case 3:
        pcVar14 = s_gfx_interface_ill_prov_desert_bm_0085d230;
        break;
      case 4:
        pcVar14 = s_gfx_interface_ill_prov_swamp_bmp_0085d20c;
        break;
      case 5:
        pcVar14 = s_gfx_interface_ill_prov_hills_bmp_0085d1e8;
        break;
      case 6:
        pcVar14 = s_gfx_interface_ill_prov_jungle_bm_0085d1c4;
        break;
      case 7:
        pcVar14 = s_gfx_interface_ill_prov_urban_bmp_0085d1a0;
        break;
      default:
        goto switchD_005ee108_default;
      }
      FUN_007a630a(auStack_50c,pcVar14);
switchD_005ee108_default:
      if (DAT_00dc3a00 != '\0') {
        FUN_007a630a(auStack_40c,s__s__s_0083a350,&DAT_00dc3a00,auStack_50c);
        iVar7 = FUN_007a6615(auStack_40c,&DAT_0082eeb4);
        if (iVar7 != 0) goto LAB_005ee1be;
      }
      (**(code **)(**(int **)(param_1 + 200) + 0x2c))(auStack_50c);
      goto LAB_005ee3a5;
    }
    if (DAT_00dc2ca4 == '\0') {
      FUN_007a630a(auStack_40c,s__s_gfx_interface_ill_prov__d_bmp_0085d2fc,&DAT_00dc3a00,
                   *(undefined4 *)(iVar1 + 0x12));
    }
    else {
      FUN_007a630a(auStack_40c,s__s__s_gfx_ill_prov__d_bmp_0085d320,&DAT_00dc3a00,&DAT_00dc1970);
    }
    iVar7 = FUN_007a6615(auStack_40c,&DAT_0082eeb4);
    if (iVar7 == 0) goto LAB_005ee0a2;
LAB_005ee37b:
    FUN_007a6429(iVar7);
    puVar11 = auStack_40c;
    iVar7 = **(int **)(param_1 + 200);
  }
  else {
    if (*(int *)(iVar1 + 0x254) == 7) {
      if (DAT_00dc3a00 == '\0') {
LAB_005ee274:
        if (DAT_00dc2ca4 == '\0') {
          FUN_007a630a(auStack_40c,s_gfx_interface_ill_prov__d_bmp_0085d2c4,
                       *(undefined4 *)(iVar1 + 0x12));
        }
        else {
          FUN_007a630a(auStack_40c,s__s_gfx_ill_prov__d_bmp_0085d2e4,&DAT_00dc1970);
        }
        iVar7 = FUN_007a6615(auStack_40c,&DAT_0082eeb4);
        if (iVar7 == 0) goto LAB_005ee2cf;
      }
      else {
        if (DAT_00dc2ca4 == '\0') {
          FUN_007a630a(auStack_40c,s__s_gfx_interface_ill_prov__d_bmp_0085d2fc,&DAT_00dc3a00,
                       *(undefined4 *)(iVar1 + 0x12));
        }
        else {
          FUN_007a630a(auStack_40c,s__s__s_gfx_ill_prov__d_bmp_0085d320,&DAT_00dc3a00,&DAT_00dc1970)
          ;
        }
        iVar7 = FUN_007a6615(auStack_40c,&DAT_0082eeb4);
        if (iVar7 == 0) goto LAB_005ee274;
      }
LAB_005ee1be:
      FUN_007a6429(iVar7);
      (**(code **)(**(int **)(param_1 + 200) + 0x2c))(auStack_40c);
      goto LAB_005ee3a5;
    }
LAB_005ee2cf:
    switch(*(undefined4 *)(iVar1 + 0x254)) {
    case 0:
      pcVar14 = s_gfx_interface_ill_prov_plains_bm_0085d2a0;
      break;
    case 1:
      pcVar14 = s_gfx_interface_ill_prov_forest_bm_0085d27c;
      break;
    case 2:
      pcVar14 = s_gfx_interface_ill_prov_mountains_0085d254;
      break;
    case 3:
      pcVar14 = s_gfx_interface_ill_prov_desert_bm_0085d230;
      break;
    case 4:
      pcVar14 = s_gfx_interface_ill_prov_swamp_bmp_0085d20c;
      break;
    case 5:
      pcVar14 = s_gfx_interface_ill_prov_hills_bmp_0085d1e8;
      break;
    case 6:
      pcVar14 = s_gfx_interface_ill_prov_jungle_bm_0085d1c4;
      break;
    case 7:
      pcVar14 = s_gfx_interface_ill_prov_urban_bmp_0085d1a0;
      break;
    default:
      goto switchD_005ee2da_default;
    }
    FUN_007a630a(auStack_60c,pcVar14);
switchD_005ee2da_default:
    if (DAT_00dc3a00 != '\0') {
      FUN_007a630a(auStack_40c,s__s__s_0083a350,&DAT_00dc3a00,auStack_60c);
      iVar7 = FUN_007a6615(auStack_40c,&DAT_0082eeb4);
      if (iVar7 != 0) goto LAB_005ee37b;
    }
    puVar11 = auStack_60c;
    iVar7 = **(int **)(param_1 + 200);
  }
  (**(code **)(iVar7 + 0x2c))(puVar11);
LAB_005ee3a5:
  iVar7 = FUN_0044c640(0);
  if (iVar7 == 0) {
    FUN_0061e550(param_1 + 0x13c,&DAT_0088ebf8,0);
  }
  else {
    FUN_007a630a(auStack_410,s_gfx_interface_pics__s_bmp_0085d184,iVar7 + 0x2a);
    FUN_0061e550(param_1 + 0x13c,auStack_410,0);
  }
  uVar6 = FUN_00413d60(s_ministers_palette_bmp_0085d16c);
  FUN_00415f20(uVar6);
  iVar7 = FUN_0044c640(1);
  if (iVar7 == 0) {
    FUN_0061e550(param_1 + 0x140,&DAT_0088ebf8,0);
  }
  else {
    FUN_007a630a(auStack_410,s_gfx_interface_pics__s_bmp_0085d184,iVar7 + 0x2a);
    FUN_0061e550(param_1 + 0x140,auStack_410,0);
  }
  uVar6 = FUN_00413d60(s_ministers_palette_bmp_0085d16c);
  FUN_00415f20(uVar6);
  iVar7 = *(int *)(param_1 + 0x138);
  piVar8 = *(int **)(iVar7 + 4);
  while (piVar8 != (int *)0x0) {
    piVar2 = (int *)piVar8[2];
    if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar8)(1);
    }
    FUN_00796cd8(piVar8);
    piVar8 = piVar2;
    param_1 = iStack_61c;
  }
  *(undefined4 *)(iVar7 + 4) = 0;
  *(undefined4 *)(iVar7 + 8) = 0;
  *(undefined4 *)(iVar7 + 0xc) = 0;
  (**(code **)(**(int **)(param_1 + 0x138) + 0x14))();
  FUN_00435fd0();
  local_618 = 0;
  iVar7 = 0;
  if (0 < *(int *)(iVar1 + 0x290)) {
    iStack_620 = 0;
    do {
      iVar9 = FUN_004e9370(*(undefined4 *)(*(int *)(iVar1 + 0x298) + iStack_620));
      if ((((*(int *)(iVar9 + 0x254) != 8) && (*(int *)(iVar9 + 0x254) != 9)) && (local_618 < 9)) &&
         (*(char *)(iVar9 + 0x180) == '\0')) {
        pvVar5 = operator_new(0x3e);
        puStack_8 = (undefined1 *)0x4;
        if (pvVar5 == (void *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_005eac60(*(undefined4 *)(iVar9 + 0x12),
                               *(undefined4 *)(*(int *)(iVar1 + 0x298) + 4 + iStack_620));
        }
        puStack_8 = (undefined1 *)0xffffffff;
        iVar9 = *(int *)(iStack_61c + 0x138);
        iVar3 = *(int *)(iVar9 + 8);
        puVar10 = operator_new(0xe);
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          *puVar10 = uVar6;
          puVar10[1] = iVar3;
          puVar10[2] = 0;
          *(undefined1 *)(puVar10 + 3) = 0;
        }
        iVar4 = *(int *)(iVar9 + 0xc);
        *(undefined4 **)(iVar9 + 8) = puVar10;
        *(int *)(iVar9 + 0xc) = iVar4 + 1;
        if (iVar4 == 0) {
          *(undefined4 **)(iVar9 + 4) = puVar10;
        }
        else {
          *(undefined4 **)(iVar3 + 8) = puVar10;
        }
        local_618 = local_618 + 1;
        param_1 = iStack_61c;
      }
      iVar7 = iVar7 + 1;
      iStack_620 = iStack_620 + 0xc;
    } while (iVar7 < *(int *)(iVar1 + 0x290));
  }
  FUN_004353e0();
  FUN_005ee6a0();
  FUN_005ee8d0();
  if (5 < DAT_00877554) {
    FUN_005eea00(CONCAT31((int3)((uint)*(int *)(iVar1 + 0x3d8) >> 8),
                          *(int *)(param_1 + 0x158) == *(int *)(iVar1 + 0x3d8)));
  }
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(iVar1 + 0x3d8);
  ExceptionList = pvStack_10;
  return;
}


