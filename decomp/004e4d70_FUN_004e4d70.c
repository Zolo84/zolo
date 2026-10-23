// FUN_004e4d70 @ 4e4d70 size=2744

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004e4d70(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  uint3 uVar7;
  char cVar8;
  int iVar9;
  undefined4 unaff_EBX;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 unaff_retaddr;
  undefined4 uVar13;
  undefined4 uStack_41c;
  void *pvStack_418;
  undefined1 auStack_40c [1024];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar7 = (uint3)uStack_41c;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c009e;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x180) != '\0') {
    return 0;
  }
  uVar10 = (uint)(*(char *)(param_1 + 0x46e) == '\0');
  if (*(char *)(param_1 + 0x3b0) != '\x01') {
    return 0;
  }
  ExceptionList = &local_c;
  if ((DAT_00a98444 & 2) != 0) {
    iVar11 = 0;
    ExceptionList = &local_c;
    if (0 < *(int *)(param_1 + 0x3a8)) {
      iVar12 = 0;
      ExceptionList = &local_c;
      do {
        *(uint *)(iVar12 + *(int *)(param_1 + 0x2c) + 0x6a) = uVar10;
        iVar9 = *(int *)(param_1 + 0x3ac);
        if (((iVar9 == 1) || (iVar9 == 3)) || (iVar9 == 5)) {
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
        FUN_00417690(uVar6);
        iVar11 = iVar11 + 1;
        iVar12 = iVar12 + 0x98;
      } while (iVar11 < *(int *)(param_1 + 0x3a8));
    }
    if (*(int *)(param_1 + 0x182) != 0) {
      iVar11 = 0;
      *(uint *)(*(int *)(param_1 + 0x45a) + 0x6a) = uVar10;
      switch(*(undefined4 *)(param_1 + 0x254)) {
      case 1:
      case 4:
      case 6:
        iVar11 = 0x10;
        break;
      case 2:
        iVar11 = 0x20;
      }
      (**(code **)(**(int **)(param_1 + 0x45a) + 0x38))(*(int *)(param_1 + 0x13a) + iVar11);
      (**(code **)(**(int **)(param_1 + 0x45a) + 0x18))
                (*(undefined4 *)(param_1 + 0x40a),*(undefined4 *)(param_1 + 0x40e));
      (**(code **)(**(int **)(param_1 + 0x45a) + 0x10))(puStack_8);
    }
  }
  if ((DAT_00a98444 & 0x1000) != 0) {
    iVar11 = (&DAT_0089cad8)[DAT_00a98448];
    if (iVar11 != 0) {
      cVar8 = (**(code **)(*(int *)(iVar11 + 0xe8b2) + 0x24))(*(undefined4 *)(param_1 + 0x12));
      if (cVar8 == '\0') {
        cVar8 = (**(code **)(*(int *)(iVar11 + 0xe8c4) + 0x24))(*(undefined4 *)(param_1 + 0x12));
        if (cVar8 == '\0') goto LAB_004e4f42;
        iVar11 = *(int *)(param_1 + 0x3f2);
        iVar12 = *(int *)(param_1 + 0x3f6);
        uVar13 = 1;
        iVar9 = **(int **)(param_1 + 0x1a2);
      }
      else {
        iVar11 = *(int *)(param_1 + 0x3f2);
        iVar12 = *(int *)(param_1 + 0x3f6);
        uVar13 = 0;
        iVar9 = **(int **)(param_1 + 0x1a2);
      }
      (**(code **)(iVar9 + 0x38))(uVar13);
      *(uint *)(*(int *)(param_1 + 0x1a2) + 0x6a) = uVar10;
      (**(code **)(**(int **)(param_1 + 0x1a2) + 0x18))(iVar11 + 4,iVar12 + -4);
      (**(code **)(**(int **)(param_1 + 0x1a2) + 0x10))(0);
    }
LAB_004e4f42:
    if (*(int *)(*DAT_00d12b40 + 0x40e) == 0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  if (((*(int *)(param_1 + 0x254) != 8) && (*(int *)(param_1 + 0x254) != 9)) &&
     (((DAT_00a98444 & 0x80000) != 0 && (DAT_00a98440 == 1)))) {
    uVar13 = *(undefined4 *)(param_1 + 0x3f2);
    uVar1 = *(undefined4 *)(param_1 + 0x3f6);
    *(uint *)(*(int *)(param_1 + 0x1a6) + 0x6a) = uVar10;
    (**(code **)(**(int **)(param_1 + 0x1a6) + 0x18))(uVar13,uVar1);
    if (*(int *)(param_1 + 0x3ac) == 1) {
      uVar13 = 1;
      iVar11 = **(int **)(param_1 + 0x1a6);
LAB_004e4fca:
      (**(code **)(iVar11 + 0x38))(uVar13);
    }
    else {
      if (*(int *)(param_1 + 0x3ac) != 6) {
        iVar11 = **(int **)(param_1 + 0x1a6);
        uVar13 = 0;
        goto LAB_004e4fca;
      }
      (**(code **)(**(int **)(param_1 + 0x1a6) + 0x38))(2);
    }
    (**(code **)(**(int **)(param_1 + 0x1a6) + 0x10))(0);
  }
  uStack_41c = (uint)(uint3)uStack_41c;
  uVar13 = param_2;
  if ((*(int *)(param_1 + 0x3d8) == 0) ||
     (iVar11 = *(int *)(param_1 + 0x12), iVar12 = FUN_0044e1b0(), iVar12 != iVar11)) {
    if ((2 < *(int *)(param_1 + 0x19e)) && (DAT_00a98440 == 10)) {
      (**(code **)(**(int **)(param_1 + 0x446) + 0x18))
                (*(undefined4 *)(param_1 + 0x3f2),*(undefined4 *)(param_1 + 0x3f6));
      uVar13 = uStack_4;
      *(uint *)(*(int *)(param_1 + 0x446) + 0x6a) = uVar10;
      (**(code **)(**(int **)(param_1 + 0x446) + 0x10))(uStack_4);
    }
    goto LAB_004e5235;
  }
  uStack_41c = CONCAT13(1,uVar7);
  if (*(char *)(param_1 + 0x4b0) == '\0') {
    if (DAT_00dc3a00 == '\0') {
      if (DAT_00dc2ca4 == '\0') {
        FUN_007a630a(auStack_40c,s_gfx_map_city__d_bmp_00848200,*(undefined4 *)(param_1 + 0x1be));
      }
      else {
        FUN_007a630a(auStack_40c,s__s_gfx_city__d_bmp_00848214,&DAT_00dc1970,
                     *(undefined4 *)(param_1 + 0x1be));
      }
      iVar11 = FUN_007a6615(auStack_40c,&DAT_0082eeb4);
      if (iVar11 != 0) goto LAB_004e5144;
LAB_004e5130:
      FUN_007a630a(auStack_40c,s_gfx_map_city_bmp_008481ec);
    }
    else {
      if (DAT_00dc2ca4 == '\0') {
        FUN_007a630a(auStack_40c,s__s_gfx_map_city__d_bmp_00848228,&DAT_00dc3a00,
                     *(undefined4 *)(param_1 + 0x1be));
      }
      else {
        FUN_007a630a(auStack_40c,s__s__s_gfx_city__d_bmp_00848240,&DAT_00dc3a00,&DAT_00dc1970,
                     *(undefined4 *)(param_1 + 0x1be));
      }
      iVar11 = FUN_007a6615(auStack_40c,&DAT_0082eeb4);
      if (iVar11 == 0) {
        if (DAT_00dc2ca4 == '\0') {
          FUN_007a630a(auStack_40c,s_gfx_map_city__d_bmp_00848200,*(undefined4 *)(param_1 + 0x1be));
        }
        else {
          FUN_007a630a(auStack_40c,s__s_gfx_city__d_bmp_00848214,&DAT_00dc1970,
                       *(undefined4 *)(param_1 + 0x1be));
        }
        iVar11 = FUN_007a6615(auStack_40c,&DAT_0082eeb4);
        if (iVar11 == 0) goto LAB_004e5130;
      }
LAB_004e5144:
      FUN_007a6429(iVar11);
    }
    pvStack_418 = operator_new(0x94);
    uStack_4 = 0;
    if (pvStack_418 == (void *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = FUN_00416810(auStack_40c);
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x432) = uVar13;
    uVar13 = FUN_00413d60(s_buildings_palette_bmp_00848048);
    FUN_00415f20(uVar13);
    *(undefined1 *)(param_1 + 0x4b0) = 1;
  }
  (**(code **)(**(int **)(param_1 + 0x432) + 0x18))
            (*(undefined4 *)(param_1 + 0x3f2),*(undefined4 *)(param_1 + 0x3f6));
  uVar13 = uStack_4;
  *(uint *)(*(int *)(param_1 + 0x432) + 0x6a) = uVar10;
  (**(code **)(**(int **)(param_1 + 0x432) + 0x10))(uStack_4);
LAB_004e5235:
  if (*(int *)(param_1 + 0x46a) != 0) {
    (**(code **)(**(int **)(param_1 + 0x436) + 0x18))
              (*(undefined4 *)(param_1 + 0x3e0),*(undefined4 *)(param_1 + 0x3e4));
    iVar11 = 0;
    *(uint *)(*(int *)(param_1 + 0x436) + 0x6a) = uVar10;
    if ((*(int *)(*(int *)(param_1 + 0x1e2) + 0x18) != 0) && (*(int *)(param_1 + 0x1e2) != 0)) {
      iVar11 = 2;
    }
    iVar12 = (**(code **)(*(int *)(*(int *)(param_1 + 0x46a) + 0x30) + 4))();
    if ((iVar12 < 1) || (*(char *)(param_1 + 0x46e) == '\0')) {
      (**(code **)(**(int **)(param_1 + 0x436) + 0x38))(iVar11);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x436) + 0x38))(iVar11 + 1);
    }
    (**(code **)(**(int **)(param_1 + 0x436) + 0x10))(uVar13);
  }
  if (_DAT_007e3380 < *(float *)(*(int *)(param_1 + 0x1ce) + 0x14)) {
    (**(code **)(**(int **)(param_1 + 0x43e) + 0x18))
              (*(int *)(param_1 + 0x412) + -8,*(int *)(param_1 + 0x416) + -8);
    *(uint *)(*(int *)(param_1 + 0x43e) + 0x6a) = uVar10;
    (**(code **)(**(int **)(param_1 + 0x43e) + 0x10))(uVar13);
  }
  if (_DAT_007e3380 < *(float *)(*(int *)(param_1 + 0x1d2) + 0x14)) {
    (**(code **)(**(int **)(param_1 + 0x442) + 0x18))
              (*(int *)(param_1 + 0x412) + 8,*(int *)(param_1 + 0x416) + 8);
    *(uint *)(*(int *)(param_1 + 0x442) + 0x6a) = uVar10;
    (**(code **)(**(int **)(param_1 + 0x442) + 0x10))(uVar13);
  }
  if ((((DAT_00a98444 & 0x200) != 0) && (_DAT_007e3380 < *(float *)(param_1 + 0x270))) &&
     (*(int *)(param_1 + 0x3d8) == DAT_00d0ca90)) {
    (**(code **)(**(int **)(param_1 + 0x45e) + 0x18))
              (*(int *)(param_1 + 0x3f2) + -8,*(int *)(param_1 + 0x3f6) + 8);
    *(uint *)(*(int *)(param_1 + 0x45e) + 0x6a) = uVar10;
    (**(code **)(**(int **)(param_1 + 0x45e) + 0x10))(uVar13);
  }
  if ((DAT_00a98444 & 0x800) != 0) {
    piVar2 = *(int **)(DAT_00d0ca90 + 0x13cf0);
    *(uint *)((int)piVar2 + 0x6a) = uVar10;
    if (_DAT_007e3380 < *(float *)(param_1 + 0x1fe)) {
      iVar11 = *(int *)(param_1 + 0x3fa);
      iVar12 = *(int *)(param_1 + 0x3fe);
      (**(code **)(*piVar2 + 0x38))(0);
      *(undefined4 *)((int)piVar2 + 0xe) = 1;
      (**(code **)(*piVar2 + 0x18))
                (DAT_00847dd4 + DAT_00847ddc + iVar11,DAT_00847dd8 + DAT_00847ddc + iVar12);
      (**(code **)(*piVar2 + 0x10))(puStack_8);
      uVar13 = param_2;
    }
    if (_DAT_007e3380 < *(float *)(param_1 + 0x20a)) {
      pvStack_418 = *(void **)(param_1 + 0x3fa);
      (**(code **)(*piVar2 + 0x38))(1);
      *(undefined4 *)((int)piVar2 + 0xe) = 1;
      (**(code **)(*piVar2 + 0x18))
                (DAT_00847dd4 + DAT_00847ddc + uStack_41c,
                 (DAT_00847dd8 - DAT_00847ddc) + (int)pvStack_418);
      (**(code **)(*piVar2 + 0x10))(uVar13);
    }
    if (_DAT_007e3380 < *(float *)(param_1 + 0x206)) {
      iVar11 = *(int *)(param_1 + 0x3fa);
      (**(code **)(*piVar2 + 0x38))(5);
      *(undefined4 *)((int)piVar2 + 0xe) = 1;
      (**(code **)(*piVar2 + 0x18))
                ((iVar11 - DAT_00847ddc) + DAT_00847dd4,
                 (int)pvStack_418 + DAT_00847ddc + DAT_00847dd8);
      (**(code **)(*piVar2 + 0x10))(puStack_8);
      uVar13 = param_2;
    }
    if (_DAT_007e3380 < *(float *)(param_1 + 0x202)) {
      iVar11 = *(int *)(param_1 + 0x3fa);
      iVar12 = *(int *)(param_1 + 0x3fe);
      (**(code **)(*piVar2 + 0x38))(2);
      *(undefined4 *)((int)piVar2 + 0xe) = 1;
      (**(code **)(*piVar2 + 0x18))
                ((iVar11 - DAT_00847ddc) + DAT_00847dd4,(iVar12 - DAT_00847ddc) + DAT_00847dd8);
      (**(code **)(*piVar2 + 0x10))(puStack_8);
      uVar13 = param_2;
    }
    if (_DAT_007e3380 < *(float *)(*(int *)(param_1 + 0x1ca) + 0x14)) {
      iVar11 = *(int *)(param_1 + 0x3fa);
      iVar12 = *(int *)(param_1 + 0x3fe);
      (**(code **)(*piVar2 + 0x38))(6);
      *(undefined4 *)((int)piVar2 + 0xe) = 1;
      (**(code **)(*piVar2 + 0x18))(iVar11 + DAT_00847dd4,iVar12 + DAT_00847dd8);
      (**(code **)(*piVar2 + 0x10))(puStack_8);
      uVar13 = param_2;
    }
  }
  if ((DAT_00a98444 & 1) != 0) {
    if ((*(int *)(*(int *)(param_1 + 0x1de) + 0x18) != 0) && (*(int *)(param_1 + 0x1de) != 0)) {
      iVar11 = *(int *)(param_1 + 0x3f2);
      (**(code **)(**(int **)(param_1 + 0x43a) + 0x38))(0);
      if (*(char *)(param_1 + 0x46e) != '\0') {
        piVar2 = *(int **)(*(int *)(param_1 + 0x1c2) + 4);
        do {
          if (piVar2 == (int *)0x0) goto LAB_004e568e;
          piVar3 = (int *)piVar2[2];
          piVar4 = (int *)*piVar2;
          piVar2 = piVar3;
          uVar13 = unaff_retaddr;
        } while (((*(int *)((int)piVar4 + 0x212) != *(int *)(param_1 + 0x12)) ||
                 (cVar8 = (**(code **)(*(int *)((int)piVar4 + 0x22e) + 8))(), cVar8 == '\0')) ||
                (cVar8 = (**(code **)(*piVar4 + 0x30))(), cVar8 == '\0'));
        (**(code **)(**(int **)(param_1 + 0x43a) + 0x38))(1);
      }
LAB_004e568e:
      *(uint *)(*(int *)(param_1 + 0x43a) + 0x6a) = uVar10;
      if ((char)((uint)unaff_EBX >> 0x18) == '\0') {
        iVar11 = iVar11 + 8;
        iVar12 = uStack_41c + 8;
      }
      else {
        iVar11 = iVar11 + 0x10;
        iVar12 = uStack_41c + 0x10;
      }
      (**(code **)(**(int **)(param_1 + 0x43a) + 0x18))(iVar12,iVar11);
      (**(code **)(**(int **)(param_1 + 0x43a) + 0x10))(uVar13);
    }
    if ((*(int *)(*(int *)(param_1 + 0x1ee) + 0x18) != 0) && (*(char *)(param_1 + 0x46e) != '\0')) {
      iVar11 = *(int *)(param_1 + 0x3f2);
      iVar12 = *(int *)(param_1 + 0x3f6);
      *(uint *)(*(int *)(param_1 + 0x456) + 0x6a) = uVar10;
      (**(code **)(**(int **)(param_1 + 0x456) + 0x18))(iVar11 + 8,iVar12 + -8);
      (**(code **)(**(int **)(param_1 + 0x456) + 0x10))(uVar13);
    }
    if ((*(int *)(*(int *)(param_1 + 0x1ea) + 0x18) != 0) && (*(char *)(param_1 + 0x46e) != '\0')) {
      iVar11 = *(int *)(param_1 + 0x3f2);
      iVar12 = *(int *)(param_1 + 0x3f6);
      *(uint *)(*(int *)(param_1 + 0x44e) + 0x6a) = uVar10;
      (**(code **)(**(int **)(param_1 + 0x44e) + 0x18))(iVar11 + -8,iVar12 + -8);
      (**(code **)(**(int **)(param_1 + 0x44e) + 0x10))(uVar13);
    }
    if (*(int *)(*(int *)(param_1 + 0x1d6) + 0x18) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x41a);
      uVar5 = *(undefined4 *)(param_1 + 0x41e);
      *(uint *)(*(int *)(param_1 + 0x44a) + 0x6a) = uVar10;
      (**(code **)(**(int **)(param_1 + 0x44a) + 0x18))(uVar1,uVar5);
      (**(code **)(**(int **)(param_1 + 0x44a) + 0x10))(uVar13);
    }
    if (*(int *)(*(int *)(param_1 + 0x1e6) + 0x18) != 0) {
      if (*(char *)(param_1 + 0x46e) == '\0') {
        ExceptionList = local_c;
        return 0;
      }
      iVar11 = *(int *)(param_1 + 0x41a);
      iVar12 = *(int *)(param_1 + 0x41e);
      *(uint *)(*(int *)(param_1 + 0x452) + 0x6a) = uVar10;
      (**(code **)(**(int **)(param_1 + 0x452) + 0x18))(iVar11 + 8,iVar12 + 8);
      (**(code **)(**(int **)(param_1 + 0x452) + 0x10))(uVar13);
    }
  }
  if ((*(char *)(param_1 + 0x46e) != '\0') && (DAT_00a98440 != 0)) {
    FUN_004d2ad0(uVar13);
  }
  ExceptionList = local_c;
  return 0;
}


