// FUN_004bb6b0 @ 4bb6b0 size=2632

/* WARNING: Removing unreachable block (ram,0x004bc098) */
/* WARNING: Removing unreachable block (ram,0x004bbfa8) */
/* WARNING: Removing unreachable block (ram,0x004bbfab) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004bb6b0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  undefined2 uVar6;
  uint uVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float10 fVar14;
  undefined2 uStack_cc;
  undefined2 uStack_ca;
  undefined4 local_b4;
  bool local_ae;
  bool local_ad;
  undefined4 *local_94;
  int local_84;
  int local_80;
  uint local_74;
  undefined2 local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 *local_60;
  undefined2 local_5c;
  undefined4 local_5a;
  undefined4 local_54;
  undefined **local_50;
  int *local_4c;
  int *local_48;
  int local_44;
  undefined **local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined2 local_24;
  int local_20;
  undefined2 local_1c;
  undefined4 local_1a;
  undefined2 local_14;
  undefined4 local_12;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bebac;
  local_c = ExceptionList;
  local_b4 = 0;
  local_70 = 0;
  local_74 = local_74 & 0xff000000;
  ExceptionList = &local_c;
  FUN_00457e10();
  local_3c = &PTR_FUN_007e4c84;
  local_4 = 0;
  FUN_00457e10();
  local_50 = &PTR_FUN_007e4c84;
  local_54 = 0;
  local_64 = 1.0;
  local_68 = 0.5;
  local_6c = 0.5;
  local_24 = 0;
  local_26 = 0;
  local_27 = 0;
  local_28 = 0;
  local_84 = 0;
  local_20 = 0;
  local_ae = false;
  local_ad = false;
  local_80 = 0;
  local_94 = (undefined4 *)0x0;
  local_4 = CONCAT31(local_4._1_3_,3);
  piVar9 = (int *)FUN_00534391();
  iVar10 = *piVar9;
  while (iVar10 != 4) {
    iVar10 = FUN_00535490();
    if (iVar10 != 1) goto LAB_004bbe0e;
    iVar10 = param_1[1];
    if (iVar10 < 0x1c4) {
      if (iVar10 == 0x1c3) {
        uStack_cc = 0xbac7;
        uStack_ca = 0x4b;
        fVar14 = (float10)FUN_00429d80();
        local_68 = (float)fVar14;
      }
      else if (iVar10 < 0x142) {
        if (iVar10 == 0x141) {
          switch(param_1[0x103]) {
          case 0x4e:
            local_b4 = 7;
            break;
          case 0x4f:
            local_b4 = 8;
            break;
          case 0x94:
            local_b4 = 6;
            break;
          case 0x95:
            local_b4 = 4;
            break;
          case 0x98:
            local_b4 = 5;
            break;
          case 0x144:
            local_b4 = 3;
            break;
          case 0x145:
            local_b4 = 1;
            break;
          case 0x146:
            local_b4 = 2;
          }
        }
        else if (iVar10 == 0x30) {
          uStack_cc = 0xb879;
          uStack_ca = 0x4b;
          local_80 = FUN_007a7b3c();
        }
        else if (iVar10 == 0x32) {
          local_1c = 0;
          local_1a = 0;
          uStack_cc = 0xb849;
          uStack_ca = 0x4b;
          FUN_00427ed0();
          local_60 = (undefined4 *)&uStack_cc;
          FUN_00446d10(&local_1c);
          FUN_0049a190();
        }
        else {
          if (iVar10 == 0xfd) {
            uStack_cc = 0xb820;
            uStack_ca = 0x4b;
            iVar10 = FUN_0054f130();
            goto joined_r0x004bbc00;
          }
LAB_004bbbba:
          uStack_cc = 0xbbc0;
          uStack_ca = 0x4b;
          iVar10 = FUN_005058b0();
          if (iVar10 == 0x25) {
            uStack_cc = 0xbe0e;
            uStack_ca = 0x4b;
            FUN_005349b0();
LAB_004bbe0e:
            local_4._0_1_ = 2;
            FUN_004c10e0();
            local_4._0_1_ = 1;
            FUN_0049a150();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00527230();
            local_4 = 0xffffffff;
            FUN_00527230();
            ExceptionList = local_c;
            return (int *)0x0;
          }
          if (param_1[0x103] == 3) {
            uStack_cc = (undefined2)iVar10;
            uStack_ca = (undefined2)((uint)iVar10 >> 0x10);
            FUN_004bc510(param_1);
          }
          else {
            uStack_cc = 0xbbf2;
            uStack_ca = 0x4b;
            FUN_005349b0();
          }
        }
      }
      else if (iVar10 == 400) {
        uStack_cc = 0xbaaf;
        uStack_ca = 0x4b;
        fVar14 = (float10)FUN_00429d80();
        local_64 = (float)fVar14;
      }
      else if (iVar10 == 0x1a2) {
        FUN_005343dc();
        iVar10 = *param_1;
        iVar4 = *(int *)(iVar10 + 0xc);
        while (iVar4 != 4) {
          if (*(int *)(iVar10 + 0xc) != 3) goto LAB_004bbda2;
          local_5c = 0;
          local_5a = 0;
          uStack_cc = 0xba15;
          uStack_ca = 0x4b;
          iVar10 = FUN_00427ed0();
          if (iVar10 != 0) goto LAB_004bbda2;
          uStack_cc = 0xba27;
          uStack_ca = 0x4b;
          iVar10 = FUN_00428ee0();
          piVar9 = local_34;
          if (iVar10 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = iVar10 + -0x14;
          }
          uStack_cc = 0xba43;
          uStack_ca = 0x4b;
          local_34 = operator_new(0xe);
          if (local_34 == (int *)0x0) {
            local_34 = (int *)0x0;
          }
          else {
            *local_34 = iVar10;
            local_34[1] = (int)piVar9;
            local_34[2] = 0;
            *(undefined1 *)(local_34 + 3) = 0;
          }
          piVar11 = local_34;
          if (local_30 != 0) {
            piVar9[2] = (int)local_34;
            piVar11 = local_38;
          }
          local_38 = piVar11;
          local_30 = local_30 + 1;
          FUN_005343dc();
          iVar10 = *param_1;
          iVar4 = *(int *)(iVar10 + 0xc);
        }
      }
      else {
        if (iVar10 != 0x1a3) goto LAB_004bbbba;
        FUN_005343dc();
        iVar10 = *param_1;
        iVar4 = *(int *)(iVar10 + 0xc);
        while (iVar4 != 4) {
          if (*(int *)(iVar10 + 0xc) != 3) {
LAB_004bbda2:
            local_4._0_1_ = 2;
            FUN_004c10e0();
            local_4._0_1_ = 1;
            FUN_0049a150();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00527230();
            local_4 = 0xffffffff;
            FUN_00527230();
            ExceptionList = local_c;
            return (int *)0x0;
          }
          local_14 = 0;
          local_12 = 0;
          uStack_cc = 0xb95f;
          uStack_ca = 0x4b;
          iVar10 = FUN_00427ed0();
          if (iVar10 != 0) goto LAB_004bbda2;
          uStack_cc = 0xb974;
          uStack_ca = 0x4b;
          iVar10 = FUN_00428ee0();
          piVar9 = local_48;
          if (iVar10 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = iVar10 + -0x14;
          }
          uStack_cc = 0xb98d;
          uStack_ca = 0x4b;
          local_48 = operator_new(0xe);
          if (local_48 == (int *)0x0) {
            local_48 = (int *)0x0;
          }
          else {
            *local_48 = iVar10;
            local_48[1] = (int)piVar9;
            local_48[2] = 0;
            *(undefined1 *)(local_48 + 3) = 0;
          }
          piVar11 = local_48;
          if (local_44 != 0) {
            piVar9[2] = (int)local_48;
            piVar11 = local_4c;
          }
          local_4c = piVar11;
          local_44 = local_44 + 1;
          FUN_005343dc();
          iVar10 = *param_1;
          iVar4 = *(int *)(iVar10 + 0xc);
        }
      }
    }
    else if (iVar10 < 0x1f8) {
      if (iVar10 == 0x1f7) {
        uStack_cc = 0xbb75;
        uStack_ca = 0x4b;
        local_60 = operator_new(10);
        local_4._0_1_ = 4;
        if (local_60 == (undefined4 *)0x0) {
          local_84 = 0;
        }
        else {
          local_84 = FUN_004c1290();
        }
        local_4 = CONCAT31(local_4._1_3_,3);
        uStack_cc = 0xbba7;
        uStack_ca = 0x4b;
        FUN_004c1300();
      }
      else if (iVar10 == 0x1c4) {
        uStack_cc = 0xbb62;
        uStack_ca = 0x4b;
        fVar14 = (float10)FUN_00429d80();
        local_6c = (float)fVar14;
      }
      else if (iVar10 == 0x1dd) {
        FUN_005343dc();
        uStack_cc = 0xbb23;
        uStack_ca = 0x4b;
        FUN_00429d80();
        FUN_005343dc();
        uStack_cc = 0xbb3a;
        uStack_ca = 0x4b;
        FUN_00429d80();
        FUN_005343dc();
        if (*(int *)(*param_1 + 0xc) != 4) goto LAB_004bbe0e;
      }
      else {
        if (iVar10 != 0x1f1) goto LAB_004bbbba;
        uStack_cc = 0xbb05;
        uStack_ca = 0x4b;
        local_54 = FUN_007a7b3c();
      }
    }
    else if (iVar10 == 0x370) {
      local_20 = local_20 + 1;
      if (local_20 == 1) {
        local_ae = param_1[0x103] == 0x111;
      }
      else if (local_20 == 2) {
        local_ad = param_1[0x103] == 0x111;
      }
    }
    else {
      if (iVar10 != 0x523) goto LAB_004bbbba;
      uStack_cc = 0xbbfe;
      uStack_ca = 0x4b;
      iVar10 = FUN_00427ed0();
joined_r0x004bbc00:
      if (iVar10 != 0) goto LAB_004bbe0e;
    }
    piVar9 = (int *)FUN_00534391();
    iVar10 = *piVar9;
  }
  FUN_005343dc();
  uStack_cc = 0xbc66;
  uStack_ca = 0x4b;
  FUN_004e9370();
  uStack_cc = (undefined2)local_b4;
  uVar6 = uStack_cc;
  uStack_ca = 0;
  piVar9 = (int *)FUN_004e4840(&local_74);
  if (piVar9 == (int *)0x0) goto joined_r0x004bc068;
  cVar8 = FUN_0042e980();
  if (cVar8 == '\0') {
LAB_004bbe7d:
    if (local_84 != 0) {
      uStack_cc = 0xbe8e;
      uStack_ca = 0x4b;
      FUN_00796cd8();
      *(int *)((int)piVar9 + 0x5e) = local_84;
    }
    piVar9[0x19] = local_80;
    *(bool *)(piVar9[0x20] + 0x4f) = local_ae;
    *(bool *)(piVar9[0x21] + 0x4f) = local_ad;
    if (piVar9[0x1d] == 2) {
      fVar5 = _DAT_007e3374;
      if ((local_64 <= _DAT_007e3374) && (fVar5 = local_64, local_64 < _DAT_007e3380)) {
        fVar5 = _DAT_007e3380;
      }
      piVar9[0x2d] = (int)fVar5;
      fVar5 = _DAT_007e3374;
      if ((local_68 <= _DAT_007e3374) && (fVar5 = local_68, local_68 < _DAT_007e3380)) {
        fVar5 = _DAT_007e3380;
      }
      *(float *)(piVar9[0x20] + 100) = fVar5;
      fVar5 = _DAT_007e3374;
      if ((local_6c <= _DAT_007e3374) && (fVar5 = local_6c, local_6c < _DAT_007e3380)) {
        fVar5 = _DAT_007e3380;
      }
      *(float *)(piVar9[0x21] + 100) = fVar5;
    }
    (*(code *)PTR_FUN_007e6eec)();
    puVar12 = local_94;
    while (puVar12 != (undefined4 *)0x0) {
      iVar10 = *(int *)((int)piVar9 + 0xa6);
      puVar2 = (undefined4 *)puVar12[2];
      uVar3 = *puVar12;
      uStack_cc = 0xc009;
      uStack_ca = 0x4b;
      puVar13 = operator_new(0xe);
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        *puVar13 = uVar3;
        puVar13[1] = iVar10;
        puVar13[2] = 0;
        *(undefined1 *)(puVar13 + 3) = 0;
      }
      iVar4 = *(int *)((int)piVar9 + 0xaa);
      *(undefined4 **)((int)piVar9 + 0xa6) = puVar13;
      *(int *)((int)piVar9 + 0xaa) = iVar4 + 1;
      puVar12 = puVar2;
      if (iVar4 == 0) {
        *(undefined4 **)((int)piVar9 + 0xa2) = puVar13;
      }
      else {
        *(undefined4 **)(iVar10 + 8) = puVar13;
      }
    }
    (*(code *)PTR_FUN_007e75f8)();
  }
  else {
    if ((local_30 != 0) && ((piVar11 = local_38, local_44 != 0 || (piVar9[0x1d] == 6)))) {
      while (piVar1 = local_4c, piVar11 != (int *)0x0) {
        piVar11 = (int *)piVar11[2];
        uStack_cc = 0xbcd2;
        uStack_ca = 0x4b;
        (**(code **)(*piVar9 + 0x4c))();
      }
      while (piVar1 != (int *)0x0) {
        piVar1 = (int *)piVar1[2];
        uStack_cc = 0xbced;
        uStack_ca = 0x4b;
        (**(code **)(*piVar9 + 0x50))();
      }
      piVar11 = (int *)(**(code **)(*(int *)piVar9[0x20] + 0xc))();
      iVar10 = (**(code **)(*piVar11 + 4))();
      if (0 < iVar10) {
        piVar11 = (int *)(**(code **)(*(int *)piVar9[0x21] + 0xc))();
        iVar10 = (**(code **)(*piVar11 + 4))();
        if ((0 < iVar10) || (piVar9[0x1d] == 6)) {
          uStack_cc = 0xbd32;
          uStack_ca = 0x4b;
          puVar12 = operator_new(0xc);
          uVar7 = local_74;
          local_4._0_1_ = 5;
          local_60 = puVar12;
          if (puVar12 != (undefined4 *)0x0) {
            local_5a = CONCAT22(local_70,(undefined2)local_5a);
            uStack_cc = 0x23;
            uStack_ca = 0;
            FUN_004c06e0();
            *puVar12 = &PTR_FUN_007e7618;
            *(undefined4 *)(puVar12[1] + 0xe) = local_b4;
            iVar10 = puVar12[1];
            *(undefined4 *)(iVar10 + 0x12) = 0;
            *(undefined2 *)(iVar10 + 0x16) = 0;
            iVar10 = puVar12[1];
            *(uint *)(iVar10 + 0x18) = uVar7;
            *(undefined2 *)(iVar10 + 0x1c) = local_5a._2_2_;
          }
          local_4 = CONCAT31(local_4._1_3_,3);
          uStack_cc = 0xbe7a;
          uStack_ca = 0x4b;
          FUN_00565bc0();
          goto LAB_004bbe7d;
        }
      }
    }
    uStack_cc = uVar6;
    uStack_ca = 0;
    FUN_004e4af0(&local_74);
  }
joined_r0x004bc068:
  while (local_94 != (undefined4 *)0x0) {
    local_94 = (undefined4 *)local_94[2];
    uStack_cc = 0xc073;
    uStack_ca = 0x4b;
    FUN_00796cd8();
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00527230();
  local_4 = 0xffffffff;
  FUN_00527230();
  ExceptionList = local_c;
  return piVar9;
}


