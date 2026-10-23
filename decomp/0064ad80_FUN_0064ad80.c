// FUN_0064ad80 @ 64ad80 size=4806

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0064ad80(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  void **ppvVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint unaff_EBP;
  undefined4 unaff_ESI;
  bool bVar16;
  float10 fVar17;
  undefined8 uVar18;
  float fVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  char *pcVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined4 *puStack_34;
  uint local_30;
  undefined4 uStack_2c;
  undefined4 *local_28;
  uint uStack_24;
  undefined **local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d2bab;
  local_c = ExceptionList;
  if (param_2 != 2) {
    if (param_2 == 5) {
      ExceptionList = &local_c;
      if (*(int *)(param_1 + 0x13d32) != 0) {
        ExceptionList = &local_c;
        (**(code **)(*(int *)(*(int *)(param_1 + 0x13d32) + 0x12) + 0x10))(0);
      }
      local_28 = (undefined4 *)FUN_004136a0(s__eurostilecond14FixNum_bmp_0083b87b + 1);
      iVar6 = FUN_004129c4(param_1 + 0x13db8);
      puStack_34 = (undefined4 *)(iVar6 + 0x17);
      if (0x124 < (int)puStack_34) {
        puStack_34 = (undefined4 *)0x124;
      }
      piVar13 = (int *)FUN_00581e60();
      local_30 = *piVar13 + 0x20;
      iVar7 = FUN_00581e60();
      iVar6 = *(int *)(param_1 + 0x13d08);
      param_2 = *(int *)(iVar7 + 4) + 0x20;
      piVar13 = *(int **)(iVar6 + 4);
      while (piVar13 != (int *)0x0) {
        piVar1 = (int *)piVar13[2];
        if ((undefined4 *)*piVar13 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar13)(1);
        }
        FUN_00796cd8(piVar13);
        piVar13 = piVar1;
      }
      *(undefined4 *)(iVar6 + 4) = 0;
      *(undefined4 *)(iVar6 + 8) = 0;
      *(undefined4 *)(iVar6 + 0xc) = 0;
      (**(code **)(**(int **)(param_1 + 0x13d08) + 0x14))();
      pcVar24 = (char *)(param_1 + 0x13db8);
      if (*(char *)(param_1 + 0x13db8) == '\0') {
        if (*(char *)(param_1 + 0x1adb8) == '\0') {
          ExceptionList = local_c;
          return 0;
        }
        if (*(int *)(DAT_00893530 + 0x20) - DAT_00bd13f4 < 0x33) {
          ExceptionList = local_c;
          return 0;
        }
      }
      uVar5 = FUN_00584270(0,0,0);
      *(undefined2 *)(*(int *)(param_1 + 0x13d08) + 0x5a) = uVar5;
      *(undefined1 *)(*(int *)(param_1 + 0x13d08) + 0x5d) = 0;
      if (*pcVar24 != '\0') {
        FUN_004361a0(pcVar24);
        if (*(int **)(param_1 + 0x13d7a) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x13d7a) + 0x10))(0);
        }
      }
      puVar8 = puStack_34;
      if ((*(char *)(param_1 + 0x1adb8) != '\0') &&
         (0x32 < *(int *)(DAT_00893530 + 0x20) - DAT_00bd13f4)) {
        iVar6 = FUN_004129c4(param_1 + 0x1adb8);
        if ((int)puStack_34 < iVar6 + 0x17) {
          puVar8 = (undefined4 *)(iVar6 + 0x17);
        }
        if (0x124 < (int)puVar8) {
          puVar8 = (undefined4 *)0x124;
        }
        if (*pcVar24 != '\0') {
          puStack_34 = operator_new(0x36);
          local_4 = 0;
          local_28 = puStack_34;
          if (puStack_34 == (undefined4 *)0x0) {
            puStack_34 = (undefined4 *)0x0;
          }
          else {
            uVar5 = FUN_00584270(0,0,0);
            FUN_00433f00();
            *(undefined4 *)((int)puStack_34 + 0x2e) = 4;
            *(int *)((int)puStack_34 + 0x32) = (int)puVar8 + -0x17;
            *puStack_34 = &PTR_FUN_007f0a14;
            puStack_34[2] = &PTR_LAB_007f0a10;
            *(undefined2 *)(puStack_34 + 3) = uVar5;
          }
          iVar6 = *(int *)(param_1 + 0x13d08);
          local_4 = 0xffffffff;
          iVar7 = *(int *)(iVar6 + 8);
          puVar15 = operator_new(0xe);
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = (undefined4 *)0x0;
          }
          else {
            puVar15[1] = iVar7;
            *puVar15 = puStack_34;
            puVar15[2] = 0;
            *(undefined1 *)(puVar15 + 3) = 0;
          }
          iVar11 = *(int *)(iVar6 + 0xc);
          *(undefined4 **)(iVar6 + 8) = puVar15;
          *(int *)(iVar6 + 0xc) = iVar11 + 1;
          if (iVar11 == 0) {
            *(undefined4 **)(iVar6 + 4) = puVar15;
          }
          else {
            *(undefined4 **)(iVar7 + 8) = puVar15;
          }
        }
        FUN_004361a0(param_1 + 0x1adb8);
        if (*(int **)(param_1 + 0x13d76) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x13d76) + 0x10))(0);
        }
      }
      iVar6 = FUN_00436110();
      iVar6 = iVar6 + 0xe;
      iVar7 = FUN_005841b0();
      if (iVar7 + -0x10 < iVar6) {
        iVar6 = FUN_005841b0();
        iVar6 = iVar6 + -0x10;
      }
      iVar7 = FUN_005841a0();
      uVar30 = local_30;
      if (iVar7 + -8 < (int)(local_30 + (int)puVar8)) {
        iVar7 = FUN_005841a0();
        uVar30 = iVar7 + (-8 - (int)puVar8);
      }
      iVar7 = FUN_005841b0();
      if (iVar7 + -8 < iVar6 + param_2) {
        param_2 = FUN_005841b0();
        param_2 = param_2 + (-8 - iVar6);
      }
      FUN_00657b60(puVar8,iVar6);
      FUN_00406270(uVar30 & 0xfffffffe,param_2,DAT_00bd1bac);
      (**(code **)(**(int **)(param_1 + 0x13d08) + 0x34))((uVar30 & 0xfffffffe) + 10,param_2 + 5);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x13d08) + 0x12) + 0x10))(0);
      ExceptionList = local_c;
      return 0;
    }
    if (param_2 == 4) {
      ExceptionList = &local_c;
      (**(code **)(**(int **)(param_1 + 0x13d7e) + 0x10))(4);
      ExceptionList = local_c;
      return 0;
    }
    if (param_2 == 3) {
      ExceptionList = &local_c;
      cVar4 = (**(code **)(**(int **)(param_1 + 0x21e4c) + 8))();
      if (cVar4 != '\0') {
        ExceptionList = local_c;
        return 0;
      }
      piVar13 = *(int **)(*(int *)(param_1 + 0x21e4c) + 4);
      while (piVar13 != (int *)0x0) {
        piVar1 = (int *)piVar13[2];
        piVar2 = (int *)*piVar13;
        FUN_00419460(&local_28);
        piVar13 = piVar1;
        if (*(int *)(*DAT_00d12b40 + 0x386) == 0) {
          cVar4 = (**(code **)(*piVar2 + 0x2c))();
          if (cVar4 == '\0') {
            (**(code **)(**(int **)(param_1 + 0x21f74) + 0x18))(local_28,uStack_24);
            (**(code **)(**(int **)(param_1 + 0x21f74) + 0x10))(3);
          }
          else {
            iVar7 = *(int *)(DAT_00ab27b4 + 0x254 + piVar2[3] * 0x4b2);
            iVar6 = DAT_00ab27b4 + piVar2[3] * 0x4b2;
            if ((iVar7 == 8) || (iVar7 == 9)) {
              (**(code **)(**(int **)(param_1 + 0x21f70) + 0x18))(local_28,uStack_24);
              (**(code **)(**(int **)(param_1 + 0x21f70) + 0x10))(3);
            }
            else {
              local_28 = *(undefined4 **)(iVar6 + 0x3e0);
              uStack_24 = *(uint *)(iVar6 + 0x3e4);
              (**(code **)(**(int **)(param_1 + 0x21f78) + 0x18))(local_28,uStack_24);
              (**(code **)(**(int **)(param_1 + 0x21f78) + 0x10))(3);
            }
          }
        }
        else {
          puVar8 = (undefined4 *)(**(code **)(**(int **)((int)piVar2 + 0x15e) + 0x28))(&local_30);
          uStack_2c = *puVar8;
          local_28 = (undefined4 *)puVar8[1];
          (**(code **)(**(int **)(param_1 + 0x21f7c) + 0x18))(uStack_2c,local_28);
          (**(code **)(**(int **)(param_1 + 0x21f7c) + 0x10))(3);
        }
      }
      ExceptionList = local_c;
      return 0;
    }
    if (param_2 == 1) {
      if (((byte)DAT_00a98444 & 1) == 0) {
        return 0;
      }
      local_20 = &PTR_FUN_007ecebc;
      local_1c = (int *)0x0;
      local_18 = (int *)0x0;
      local_14 = 0;
      local_10 = 0;
      local_4 = 1;
      ppvVar3 = &local_c;
      for (puVar8 = *(undefined4 **)(param_1 + 0x44fa); ExceptionList = ppvVar3,
          puVar8 != (undefined4 *)0x0; puVar8 = (undefined4 *)puVar8[2]) {
        cVar4 = (**(code **)(*(int *)*puVar8 + 0x28))();
        piVar13 = local_1c;
        if ((cVar4 != '\0') &&
           (iVar6 = (**(code **)(*(int *)*puVar8 + 0x10))(), piVar1 = local_18, piVar13 = local_1c,
           *(int *)(iVar6 + 0x2ae) != 0)) {
          if ((*(int *)(param_1 + 0x21e54) == 5) && (*(char *)(iVar6 + 0x17e) != '\0')) {
            local_18 = operator_new(0xe);
            if (local_18 == (int *)0x0) {
              local_18 = (int *)0x0;
            }
            else {
              *local_18 = iVar6;
              local_18[1] = (int)piVar1;
              local_18[2] = 0;
              *(undefined1 *)(local_18 + 3) = 0;
            }
            iVar6 = local_14 + 1;
            bVar16 = local_14 != 0;
            piVar13 = local_18;
            local_14 = iVar6;
            if (bVar16) {
              piVar1[2] = (int)local_18;
              piVar13 = local_1c;
            }
          }
          else {
            cVar4 = (**(code **)(*(int *)(iVar6 + 0x22e) + 8))();
            piVar1 = local_18;
            piVar13 = local_1c;
            if (cVar4 == '\0') {
              local_18 = operator_new(0xe);
              if (local_18 == (int *)0x0) {
                local_18 = (int *)0x0;
              }
              else {
                *local_18 = iVar6;
                local_18[1] = (int)piVar1;
                local_18[2] = 0;
                *(undefined1 *)(local_18 + 3) = 0;
              }
              iVar6 = local_14 + 1;
              bVar16 = local_14 != 0;
              piVar13 = local_18;
              local_14 = iVar6;
              if (bVar16) {
                piVar1[2] = (int)local_18;
                piVar13 = local_1c;
              }
            }
          }
        }
        local_1c = piVar13;
        cVar4 = (**(code **)(*(int *)*puVar8 + 0x30))();
        piVar13 = local_1c;
        if ((cVar4 != '\0') &&
           (iVar6 = (**(code **)(*(int *)*puVar8 + 0x18))(), piVar1 = local_18, piVar13 = local_1c,
           *(int *)(iVar6 + 0x2a6) != 0)) {
          if ((*(int *)(param_1 + 0x21e54) == 5) && (*(char *)(iVar6 + 0x17e) != '\0')) {
            local_18 = operator_new(0xe);
            if (local_18 == (int *)0x0) {
              local_18 = (int *)0x0;
            }
            else {
              *local_18 = iVar6;
              local_18[1] = (int)piVar1;
              local_18[2] = 0;
              *(undefined1 *)(local_18 + 3) = 0;
            }
            iVar6 = local_14 + 1;
            bVar16 = local_14 != 0;
            piVar13 = local_18;
            local_14 = iVar6;
            if (bVar16) {
              piVar1[2] = (int)local_18;
              piVar13 = local_1c;
            }
          }
          else {
            cVar4 = (**(code **)(*(int *)(iVar6 + 0x22e) + 8))();
            piVar1 = local_18;
            piVar13 = local_1c;
            if (cVar4 == '\0') {
              local_18 = operator_new(0xe);
              if (local_18 == (int *)0x0) {
                local_18 = (int *)0x0;
              }
              else {
                *local_18 = iVar6;
                local_18[1] = (int)piVar1;
                local_18[2] = 0;
                *(undefined1 *)(local_18 + 3) = 0;
              }
              iVar6 = local_14 + 1;
              bVar16 = local_14 != 0;
              piVar13 = local_18;
              local_14 = iVar6;
              if (bVar16) {
                piVar1[2] = (int)local_18;
                piVar13 = local_1c;
              }
            }
          }
        }
        local_1c = piVar13;
        ppvVar3 = ExceptionList;
      }
      cVar4 = FUN_006523c0();
      if (cVar4 != '\0') {
        FUN_0052ab00(1,0);
        (*(code *)local_20[4])();
      }
      cVar4 = FUN_00581e70();
      if ((cVar4 != '\0') && (cVar4 = FUN_00652050(), cVar4 != '\0')) {
        iVar6 = FUN_00581e60();
        uVar28 = *(undefined4 *)(iVar6 + 4);
        puVar8 = (undefined4 *)FUN_00581e60();
        uVar29 = *puVar8;
        *(undefined2 *)(DAT_00bd1bac + 0x25a) = 0xffff;
        FUN_004012e0(*(undefined4 *)(param_1 + 0x21e84),*(undefined4 *)(param_1 + 0x21e88),uVar29,
                     *(undefined4 *)(param_1 + 0x21e88));
        FUN_004012e0(*(undefined4 *)(param_1 + 0x21e84),*(undefined4 *)(param_1 + 0x21e88),
                     *(undefined4 *)(param_1 + 0x21e84),uVar28);
        FUN_004012e0(uVar29,*(undefined4 *)(param_1 + 0x21e88),uVar29,uVar28);
        FUN_004012e0(*(undefined4 *)(param_1 + 0x21e84),uVar28,uVar29,uVar28);
      }
      local_20 = &PTR_FUN_007ecebc;
      local_4 = 2;
      FUN_0052ac00();
      local_4 = 0xffffffff;
      FUN_00527230();
      ExceptionList = local_c;
      return 0;
    }
    ExceptionList = &local_c;
    (**(code **)(**(int **)(param_1 + 0x13d8e) + 0x10))(0);
    (**(code **)(**(int **)(param_1 + 0x21dd6 + *(int *)(param_1 + 0x21e54) * 4) + 0x10))(0);
    cVar4 = (**(code **)(**(int **)(param_1 + 0x21dd6 + *(int *)(param_1 + 0x21e54) * 4) + 0x5c))();
    if (cVar4 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x21dd6 + *(int *)(param_1 + 0x21e54) * 4) + 0x6c))(0,0x280)
      ;
    }
    if (*(int **)(param_1 + 0x13d82) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x13d82) + 0x10))(param_2);
    }
    if (*(int **)(param_1 + 0x13d86) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x13d86) + 0x10))(param_2);
    }
    if (*(int **)(param_1 + 0x13d5c) == (int *)0x0) {
      ExceptionList = local_c;
      return 0;
    }
    (**(code **)(**(int **)(param_1 + 0x13d5c) + 4))(param_2);
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = &local_c;
  iVar6 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  if (DAT_00d610e8 != '\0') {
    iVar7 = FUN_00581e60();
    uVar28 = *(undefined4 *)(iVar7 + 4);
    puVar8 = (undefined4 *)FUN_00581e60();
    FUN_00652bb0(*puVar8,uVar28);
    FUN_007a630a(&DAT_00d0b68c,s_PROV___d_008666c8,*(undefined4 *)(param_1 + 0x21e60));
    iVar7 = *(int *)(iVar6 + 0x10);
    uVar29 = 0;
    uVar28 = 0xffff;
    iVar11 = DAT_00bd1bac;
    iVar9 = FUN_005841b0(DAT_00bd1bac,0xffff,0);
    iVar7 = (iVar9 - iVar7) + -1;
    iVar9 = FUN_004129c4(&DAT_00d0b68c);
    iVar10 = FUN_005841a0(iVar7);
    FUN_00413483(&DAT_00d0b68c,(-4 - iVar9) + iVar10,iVar7,iVar11,uVar28,uVar29);
  }
  if ((DAT_00d610e9 != '\0') && (DAT_00bd13ee == '\0')) {
    iVar7 = FUN_00581e50();
    puVar8 = (undefined4 *)FUN_00581e50(*(undefined4 *)(iVar7 + 4));
    FUN_007a630a(&DAT_00d0b68c,s_ScrX__d_ScrY__d_008666b8,*puVar8);
    iVar7 = *(int *)(iVar6 + 0x10);
    uVar29 = 0;
    uVar28 = 0xffff;
    iVar11 = DAT_00bd1bac;
    iVar9 = FUN_005841b0(DAT_00bd1bac,0xffff,0);
    iVar9 = iVar9 + iVar7 * -2 + -1;
    iVar7 = FUN_004129c4(&DAT_00d0b68c);
    iVar10 = FUN_005841a0(iVar9);
    FUN_00413483(&DAT_00d0b68c,(-4 - iVar7) + iVar10,iVar9,iVar11,uVar28,uVar29);
    puVar8 = (undefined4 *)FUN_00581e50();
    iVar7 = FUN_004d89d0(&local_28,*puVar8,puVar8[1]);
    puVar8 = (undefined4 *)FUN_00581e50(*(undefined4 *)(iVar7 + 4));
    puVar8 = (undefined4 *)FUN_004d89d0(&local_30,*puVar8,puVar8[1]);
    FUN_007a630a(&DAT_00d0b68c,s_Wx__d_Wy__d_008666ac,*puVar8);
    iVar6 = *(int *)(iVar6 + 0x10);
    uVar29 = 0;
    uVar28 = 0xffff;
    iVar7 = DAT_00bd1bac;
    iVar11 = FUN_005841b0(DAT_00bd1bac,0xffff,0);
    iVar11 = iVar11 + iVar6 * -3 + -1;
    iVar6 = FUN_004129c4(&DAT_00d0b68c);
    iVar9 = FUN_005841a0(iVar11);
    FUN_00413483(&DAT_00d0b68c,(-4 - iVar6) + iVar9,iVar11,iVar7,uVar28,uVar29);
  }
  FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  iVar6 = FUN_005841a0();
  *(int *)(param_1 + 0x13d54) = iVar6 + -0x30;
  *(undefined4 *)(param_1 + 0x13d58) = 0x34;
  uVar30 = 0;
  (**(code **)(*(int *)(param_1 + 0x13d48) + 0x10))(0);
  iVar6 = (*(int *)(DAT_00bd1bac + 4) + -0x100) / 2 + 0x100;
  FUN_004136a0(s_eurostilecond24bold_bmp_00848100);
  if (*(char *)(param_1 + 0x2218c) == '\0') {
    if (*(char *)(param_1 + 0x2218d) == '\0') {
      if (*(char *)(param_1 + 0x2218e) == '\0') {
        if (*(char *)(DAT_00893750 + 0x11f) == '\0') goto LAB_0064b0a6;
        pcVar24 = s_NORMALSAVE_0086667c;
      }
      else {
        pcVar24 = s_QUICKSAVE_00866688;
      }
    }
    else {
      pcVar24 = s_QUICKLOAD_00866694;
    }
  }
  else {
    pcVar24 = s_AUTOSAVE_008666a0;
  }
  uVar22 = 0;
  uVar12 = 0xffff;
  uVar29 = 0x4c;
  iVar7 = DAT_00bd1bac;
  uVar28 = FUN_0042b6c9(pcVar24);
  FUN_00413509(uVar28,iVar6,uVar29,iVar7,uVar12,uVar22);
LAB_0064b0a6:
  *(undefined1 *)(param_1 + 0x2218c) = 0;
  *(undefined1 *)(param_1 + 0x2218d) = 0;
  *(undefined1 *)(param_1 + 0x2218e) = 0;
  FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  FUN_004136a0(s_eurostilecond18bold_bmp_0085b444);
  FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  uStack_2c = FUN_00584270(0xff,0xff,0xff);
  FUN_00584270(0xff,100,100);
  FUN_00584270(100,0xff,100);
  uVar29 = FUN_00584270(0,0,0);
  uVar28 = FUN_00584270(0x80,0x80,0x80);
  FUN_0079168d(&DAT_00d0b68c,DAT_00893530 + 0x14);
  uVar12 = FUN_004129c4(&DAT_00d0b68c);
  *(undefined4 *)(param_1 + 0x21e42) = uVar12;
  piVar13 = (int *)FUN_006436d0(0x39);
  uVar27 = 0x310;
  (**(code **)(*piVar13 + 0x18))(0x310,0x30);
  piVar13 = (int *)FUN_006436d0(0x39);
  uVar26 = 0;
  (**(code **)(*piVar13 + 0x10))(0);
  if (*(char *)(DAT_00893530 + 0x1e) != '\0') {
    unaff_ESI = uVar29;
  }
  FUN_004132d0(&DAT_00d0b68c,0x360,0x33,DAT_00bd1bac,unaff_ESI,0);
  (**(code **)(**(int **)(param_1 + 0x13ca2) + 0x18))(0xba,4);
  uVar25 = 0;
  (**(code **)(**(int **)(param_1 + 0x13ca2) + 0x10))(0);
  fVar19 = *(float *)(param_1 + 0x3b16);
  fVar17 = (float10)FUN_0049b530(1);
  fVar19 = (float)(fVar17 + (float10)fVar19);
  fVar17 = (float10)FUN_0049b4b0(1);
  if (fVar17 < (float10)fVar19) {
    local_18 = (int *)uVar27;
  }
  uVar23 = 0;
  uVar22 = 8;
  uVar12 = 0xd0;
  iVar6 = DAT_00bd1bac;
  uVar29 = __ftol(0xd0,8,DAT_00bd1bac,local_18,0);
  uVar29 = FUN_00658330(uVar29);
  FUN_00413483(uVar29,uVar12,uVar22,iVar6,local_18,uVar23);
  (**(code **)(**(int **)(param_1 + 0x13c92) + 0x18))(0x102,4);
  (**(code **)(**(int **)(param_1 + 0x13c92) + 0x10))(0);
  fVar19 = *(float *)(param_1 + 0x3b1a);
  fVar17 = (float10)FUN_0049b530(2);
  fVar19 = (float)(fVar17 + (float10)fVar19);
  fVar17 = (float10)FUN_0049b4b0(2);
  uVar14 = uVar27;
  if ((float10)fVar19 <= fVar17) {
    uVar14 = uStack_24;
  }
  uVar23 = 0;
  uVar22 = 8;
  uVar12 = 0x118;
  iVar6 = DAT_00bd1bac;
  uVar29 = __ftol(0x118,8,DAT_00bd1bac,uVar14,0);
  uVar29 = FUN_00658330(uVar29);
  FUN_00413483(uVar29,uVar12,uVar22,iVar6,uVar14,uVar23);
  (**(code **)(**(int **)(param_1 + 0x13c96) + 0x18))(0x14a,4);
  uVar21 = 0;
  (**(code **)(**(int **)(param_1 + 0x13c96) + 0x10))(0);
  fVar19 = *(float *)(param_1 + 0x3b1e);
  fVar17 = (float10)FUN_0049b530(3);
  fVar19 = (float)(fVar17 + (float10)fVar19);
  fVar17 = (float10)FUN_0049b4b0(3);
  uVar14 = uVar27;
  if ((float10)fVar19 <= fVar17) {
    uVar14 = local_30;
  }
  uVar23 = 0;
  uVar22 = 8;
  uVar12 = 0x160;
  iVar6 = DAT_00bd1bac;
  uVar29 = __ftol(0x160,8,DAT_00bd1bac,uVar14,0);
  uVar29 = FUN_00658330(uVar29);
  FUN_00413483(uVar29,uVar12,uVar22,iVar6,uVar14,uVar23);
  (**(code **)(**(int **)(param_1 + 0x13c8e) + 0x18))(0x192,4);
  uVar20 = 0;
  (**(code **)(**(int **)(param_1 + 0x13c8e) + 0x10))(0);
  fVar19 = *(float *)(param_1 + 0x3b12);
  fVar17 = (float10)FUN_0049b530(0);
  fVar19 = (float)(fVar17 + (float10)fVar19);
  fVar17 = (float10)FUN_0049b4b0(0);
  uVar14 = uVar27;
  if ((float10)fVar19 <= fVar17) {
    uVar14 = unaff_EBP;
  }
  uVar23 = 0;
  uVar22 = 8;
  uVar12 = 0x1a8;
  iVar6 = DAT_00bd1bac;
  uVar29 = __ftol(0x1a8,8,DAT_00bd1bac,uVar14,0);
  uVar29 = FUN_00658330(uVar29);
  FUN_00413483(uVar29,uVar12,uVar22,iVar6,uVar14,uVar23);
  (**(code **)(**(int **)(param_1 + 0x13caa) + 0x18))(0x1da,4);
  (**(code **)(**(int **)(param_1 + 0x13caa) + 0x10))(0);
  fVar19 = *(float *)(param_1 + 0x3b26);
  fVar17 = (float10)FUN_0049b530(5);
  fVar19 = (float)(fVar17 + (float10)fVar19);
  fVar17 = (float10)FUN_0049b4b0(5);
  uVar14 = uVar27;
  if ((float10)fVar19 <= fVar17) {
    uVar14 = uVar30;
  }
  uVar12 = 0;
  uVar18 = 0x8000001f0;
  iVar6 = DAT_00bd1bac;
  uVar29 = __ftol(0x1f0,8,DAT_00bd1bac,uVar14,0);
  uVar29 = FUN_00658330(uVar29);
  FUN_00413483(uVar29,uVar18,iVar6,uVar14,uVar12);
  uVar29 = 0x222;
  (**(code **)(**(int **)(param_1 + 0x13c9a) + 0x18))(0x222,4);
  (**(code **)(**(int **)(param_1 + 0x13c9a) + 0x10))(0);
  FUN_007a630a();
  fVar17 = (float10)FUN_0049b530();
  fVar19 = (float)fVar17;
  fVar17 = (float10)FUN_0049b4b0();
  uVar30 = uVar27;
  if ((float10)fVar19 <= fVar17) {
    uVar30 = uVar26;
  }
  FUN_00413483(&DAT_00d0b68c,0x238,8,DAT_00bd1bac,uVar30,0);
  (**(code **)(**(int **)(param_1 + 0x13c9e) + 0x18))(0x278,4);
  (**(code **)(**(int **)(param_1 + 0x13c9e) + 0x10))(0);
  FUN_007a630a(&DAT_00d0b68c,&DAT_00858140,(double)*(float *)(param_1 + 0x39be));
  uVar30 = uVar27;
  if (*(float *)(param_1 + 0x39de) <= *(float *)(param_1 + 0x39be)) {
    uVar30 = uVar25;
  }
  FUN_00413483(&DAT_00d0b68c,0x28e,8,DAT_00bd1bac,uVar30,0);
  (**(code **)(**(int **)(param_1 + 0x21e36) + 0x18))(0x2c0,4);
  (**(code **)(**(int **)(param_1 + 0x21e36) + 0x10))(0);
  FUN_007a630a(&DAT_00d0b68c,&DAT_008390a0,*(undefined4 *)(param_1 + 0x4644));
  FUN_00413483(&DAT_00d0b68c,0x2d8,8,DAT_00bd1bac,uVar29,0);
  (**(code **)(**(int **)(param_1 + 0x13cae) + 0x18))(0x2f0,4);
  (**(code **)(**(int **)(param_1 + 0x13cae) + 0x10))(0);
  FUN_007a630a(&DAT_00d0b68c,s___2f____0085d104,(double)*(float *)(param_1 + 0x226));
  fVar17 = (float10)FUN_0049dd50();
  uVar30 = uVar27;
  if (fVar17 <= (float10)_DAT_007e3380) {
    uVar30 = uVar21;
  }
  FUN_00413483(&DAT_00d0b68c,0x306,8,DAT_00bd1bac,uVar30,0);
  (**(code **)(**(int **)(param_1 + 0x13cb2) + 0x18))(0x338,4);
  (**(code **)(**(int **)(param_1 + 0x13cb2) + 0x10))(0);
  FUN_007a630a(&DAT_00d0b68c,s__d__d_0085b024,*(undefined4 *)(param_1 + 0x395e),
               *(undefined4 *)(param_1 + 0x395a));
  uVar30 = uVar27;
  if (*(int *)(param_1 + 0x395e) <= *(int *)(param_1 + 0x395a)) {
    uVar30 = uVar20;
  }
  FUN_00413483(&DAT_00d0b68c,0x34e,8,DAT_00bd1bac,uVar30,0);
  (**(code **)(**(int **)(param_1 + 0x13ca6) + 0x18))(0x38c,4);
  (**(code **)(**(int **)(param_1 + 0x13ca6) + 0x10))(0);
  uVar29 = FUN_0044aba0();
  FUN_007a630a(&DAT_00d0b68c,&DAT_008390a0,uVar29);
  iVar6 = FUN_0044aba0();
  if (iVar6 < 1) {
    uVar27 = 2;
  }
  FUN_00413483(&DAT_00d0b68c,0x3a2,8,DAT_00bd1bac,uVar27,0);
  iVar6 = FUN_004129c4(&DAT_00d0b68c);
  uVar29 = FUN_0044ab40(*(undefined4 *)(param_1 + 0x3946));
  FUN_007a630a(&DAT_00d0b68c,s___d__d_00866674,uVar29);
  local_28 = *(undefined4 **)(param_1 + 0x3946);
  iVar7 = FUN_0044ab40();
  if ((int)local_28 <= iVar7) {
    uVar28 = 2;
  }
  FUN_00413483(&DAT_00d0b68c,iVar6 + 0x3a2,8,DAT_00bd1bac,uVar28,0);
  cVar4 = FUN_006523c0();
  if (cVar4 != '\0') {
    if ((DAT_00dc1960 == '\0') || (*(int *)(param_1 + 0x21e54) != 0x15)) {
      (**(code **)(**(int **)(param_1 + 0x13da6) + 0x14))(0xf8,0x44);
      piVar13 = *(int **)(param_1 + 0x13daa);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x13daa) + 0x14))(0xf8,0x44);
      piVar13 = *(int **)(param_1 + 0x13da6);
    }
    (**(code **)(*piVar13 + 0x14))(0xffffff9c,0xffffff9c);
    (**(code **)(**(int **)(param_1 + 0x13dae) + 0x14))(8,0x294);
  }
  ExceptionList = local_c;
  return 0;
}


