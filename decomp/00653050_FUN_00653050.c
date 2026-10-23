// FUN_00653050 @ 653050 size=5797

/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_00653050(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  void *pvVar15;
  int iVar16;
  uint *puVar17;
  int *piVar18;
  void *pvVar19;
  int unaff_ESI;
  bool bVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  ushort uVar24;
  char *pcVar25;
  ushort uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined1 *puVar29;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_228;
  uint uStack_224;
  uint uStack_220;
  undefined1 auStack_21c [8];
  undefined1 auStack_214 [8];
  undefined1 auStack_20c [256];
  undefined1 auStack_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d2edc;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x13da4) != 0) {
    return 0;
  }
  ExceptionList = &local_c;
  iVar12 = (**(code **)(**(int **)(param_1 + 0x21e5a) + 4))();
  if (iVar12 < 1) {
    ExceptionList = local_c;
    return 0;
  }
  cVar10 = FUN_00529cc0();
  if (cVar10 == '\0') {
    bVar21 = false;
    cVar10 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4) + 0x2c))();
    if ((cVar10 == '\0') && (iVar12 = (**(code **)(*param_2 + 8))(), iVar12 == 0xf)) {
      puVar13 = (undefined4 *)FUN_00581e60();
      uVar14 = puVar13[1];
      uVar28 = *puVar13;
      cVar10 = FUN_00657690(uVar28,uVar14);
      if (cVar10 == '\0') {
        iVar12 = FUN_00652570(uVar28,uVar14);
        if (iVar12 == 9) {
          iVar12 = *(int *)(DAT_00ab27b4 + 0x46a + *(int *)(param_1 + 0x21e6e) * 0x4b2);
          iVar16 = (**(code **)(*(int *)(iVar12 + 0x30) + 4))();
          if ((0 < iVar16) && (iVar12 = **(int **)(iVar12 + 0x34), iVar12 != 0)) {
            *(int *)(param_1 + 0x21e6a) = iVar12;
LAB_006534e7:
            cVar10 = (**(code **)(**(int **)(param_1 + 0x21e6a) + 0x2c))();
            if (cVar10 == '\x01') {
              iVar12 = FUN_0051b230();
              iVar16 = FUN_00527980();
              if (iVar16 == 0) {
                ExceptionList = local_c;
                return 3;
              }
              if ((*(int *)(iVar16 + 0x46a) == 0) && (*(int *)(iVar16 + 0x182) == 0)) {
                ExceptionList = local_c;
                return 3;
              }
              if ((*(int *)(iVar12 + 0x254) != 8) && (*(int *)(iVar12 + 0x254) != 9)) {
                ExceptionList = local_c;
                return 3;
              }
              uVar23 = *(uint *)(param_1 + 0x21e5a);
              uVar22 = 0x653558;
              cVar10 = FUN_0052b100(uVar23);
              if (cVar10 == '\0') {
                ExceptionList = local_c;
                return 3;
              }
              puVar17 = *(uint **)(*(int *)(param_1 + 0x21e5a) + 4);
              while (puVar17 != (uint *)0x0) {
                puVar4 = (uint *)puVar17[2];
                uVar27 = *puVar17;
                puVar17 = puVar4;
                if (*(char *)(uVar27 + 0x17b) == '\0') {
                  uVar22 = 0x65358a;
                  FUN_0050bca0(uVar27);
                  uVar23 = uVar27;
                }
              }
              if (DAT_00bd13ee == '\0') {
                uStack_238 = (uint)uStack_238._3_1_ << 0x18;
                FUN_0052aed0(*(undefined4 *)(iVar12 + 0x12),uStack_238,uVar23 & 0xffff0000);
                ExceptionList = local_c;
                return 3;
              }
              uStack_238 = (uint)uStack_238._3_1_ << 0x18;
              FUN_0052af00(*(undefined4 *)(iVar12 + 0x12),uStack_238,uVar22 & 0xffff0000,0);
              ExceptionList = local_c;
              return 3;
            }
          }
        }
        else if (iVar12 == 1) goto LAB_006534e7;
      }
    }
    iVar12 = (**(code **)(*param_2 + 8))();
    if (iVar12 != 0xf) {
      ExceptionList = local_c;
      return 0;
    }
    uVar14 = *(undefined4 *)(param_2[1] + 0x1a);
    uVar28 = *(undefined4 *)(param_2[1] + 0x16);
    cVar10 = FUN_00657690(uVar28,uVar14);
    if ((cVar10 != '\0') && (cVar10 = FUN_004e2240(uVar28,uVar14), cVar10 != '\x01')) {
      ExceptionList = local_c;
      return 0;
    }
    FUN_004d89d0(&uStack_224,uVar28,uVar14);
    cVar10 = FUN_004e2240(uVar28,uVar14);
    if (cVar10 == '\x01') {
      puVar17 = (uint *)FUN_004d8820(auStack_214,uVar28,uVar14);
      uStack_224 = *puVar17;
      uStack_220 = puVar17[1];
    }
    uStack_238 = FUN_00652570(*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a))
    ;
    if ((uStack_238 == 1) &&
       (cVar10 = (**(code **)(**(int **)(param_1 + 0x21e6a) + 0x2c))(), cVar10 != '\0')) {
      (**(code **)(**(int **)(param_1 + 0x21e6a) + 0x14))();
      iVar12 = FUN_0051b230();
      if ((*(int *)(iVar12 + 0x254) != 8) && (*(int *)(iVar12 + 0x254) != 9)) {
        uStack_238 = 9;
        *(undefined4 *)(param_1 + 0x21e6e) = *(undefined4 *)(*(int *)(param_1 + 0x21e6a) + 0xc);
      }
    }
    iVar12 = *(int *)(param_1 + 0x21e6e);
    bVar20 = false;
    if ((0 < iVar12) && (iVar12 < DAT_00877690)) {
      cVar10 = FUN_00522bc0(iVar12);
      bVar20 = cVar10 == '\x01';
      cVar10 = FUN_00529c90();
      if ((cVar10 == '\0') ||
         ((*(int *)(**(int **)(*(int *)(param_1 + 0x21e5a) + 4) + 0xc) != 0 ||
          (iVar12 = FUN_004e9370(*(undefined4 *)(param_1 + 0x21e6e)), *(int *)(iVar12 + 0x3d8) == 0)
          ))) {
LAB_0065377e:
        if (!bVar20) goto LAB_00653786;
      }
      else {
        uVar14 = *(undefined4 *)(*(int *)(**(int **)(*(int *)(param_1 + 0x21e5a) + 4) + 0x248) + 6);
        FUN_004e9370(*(undefined4 *)(param_1 + 0x21e6e));
        cVar10 = FUN_0044b280(uVar14);
        if (cVar10 == '\0') goto LAB_0065377e;
        bVar20 = false;
LAB_00653786:
        cVar10 = FUN_00529cf0();
        if ((cVar10 != '\0') &&
           (iVar12 = FUN_004e9370(*(undefined4 *)(param_1 + 0x21e6e)),
           *(char *)(iVar12 + 0x470) != '\0')) {
          cVar10 = FUN_00512b20(**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4),0x1a,
                                *(undefined4 *)(param_1 + 0x21e6e));
          if (cVar10 != '\0') {
            bVar20 = true;
          }
          cVar10 = FUN_00512b20(**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4),0x1b,
                                *(undefined4 *)(param_1 + 0x21e6e));
          if (cVar10 != '\0') {
            bVar20 = true;
          }
          cVar10 = FUN_00512b20(**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4),0x1e,
                                *(undefined4 *)(param_1 + 0x21e6e));
          if (cVar10 != '\0') {
            bVar20 = true;
          }
          cVar10 = FUN_00512b20(**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4),0x1f,
                                *(undefined4 *)(param_1 + 0x21e6e));
          if (cVar10 != '\0') {
            bVar20 = true;
          }
        }
      }
      if (*(char *)(**(int **)(*(int *)(param_1 + 0x21e5a) + 4) + 0x17b) != '\0') {
        bVar20 = false;
      }
    }
    cVar10 = FUN_00525660();
    if (cVar10 == '\0') {
      if (bVar20) goto LAB_00653918;
LAB_006538d9:
      (**(code **)(*DAT_00bd0e18 + 0x20))(0x15);
      uStack_230 = operator_new(0x94);
      uStack_4 = 8;
      if (uStack_230 == (void *)0x0) {
        piVar18 = (int *)0x0;
      }
      else {
        piVar18 = (int *)FUN_00416810(s_gfx_interface_illegalmoveorder_b_008668bc);
      }
      iVar12 = *piVar18;
      uVar14 = 10;
    }
    else {
      if (!bVar20) {
        if (*(char *)(*(int *)(**(int **)(*(int *)(param_1 + 0x21e5a) + 4) + 0x248) + 0x37a3) ==
            '\0') {
          pvVar15 = operator_new(0x68);
          uStack_4 = 6;
          if (pvVar15 != (void *)0x0) {
            uVar28 = 0x29a;
            uVar14 = FUN_0042b6c9(s_NOSTRATREDEP_008668e0);
            FUN_0043da60(uVar14,uVar28);
          }
          uStack_4 = 0xffffffff;
        }
        goto LAB_006538d9;
      }
LAB_00653918:
      uStack_230 = operator_new(0x94);
      uStack_4 = 7;
      if (uStack_230 == (void *)0x0) {
        piVar18 = (int *)0x0;
      }
      else {
        piVar18 = (int *)FUN_00416810(s_gfx_interface_moveorderanim_bmp_0086689c);
      }
      iVar12 = *piVar18;
      uVar14 = 0x15;
    }
    uStack_4 = 0xffffffff;
    (**(code **)(iVar12 + 0x34))(uVar14);
    uVar14 = FUN_00413d60(s_armypalette_3_bmp_00866888);
    FUN_00415f20(uVar14);
    uVar22 = uStack_224;
    (**(code **)(*piVar18 + 0x18))(uStack_228,uStack_224);
    *(undefined4 *)((int)piVar18 + 0x22) = 0;
    *(undefined4 *)((int)piVar18 + 0x26) = 4;
    *(undefined1 *)((int)piVar18 + 0x67) = 0;
    uVar23 = 0;
    (**(code **)(*piVar18 + 0x38))(0);
    *(undefined1 *)((int)piVar18 + 0x66) = 1;
    FUN_0040fd60(piVar18,0x191,0);
    if (bVar20) {
      iVar12 = FUN_004d8580(uStack_234,uStack_230);
      cVar10 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4) + 0x2c))();
      if ((cVar10 == '\x01') && (unaff_ESI == 9)) {
        iVar12 = *(int *)(param_1 + 0x21e6e);
        uStack_230 = *(void **)(DAT_00ab27b4 + 0x3fe + iVar12 * 0x4b2);
      }
      pvVar15 = uStack_230;
      cVar10 = FUN_00529c90();
      if ((cVar10 != '\0') && (unaff_ESI == 9)) {
        iVar12 = *(int *)(param_1 + 0x21e6e);
      }
      iVar16 = FUN_004e9370(iVar12);
      cVar10 = (**(code **)(*(int *)(**(int **)(*(int *)(param_1 + 0x21e5a) + 4) + 0x22e) + 8))();
      if (((cVar10 != '\0') && (cVar10 = FUN_0051a430(), cVar10 != '\0')) &&
         (iVar12 == *(int *)(**(int **)(*(int *)(param_1 + 0x21e5a) + 4) + 0xc))) {
        uVar22 = 0x653b44;
        cVar10 = FUN_0052ae10(**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4));
        if (cVar10 != '\0') {
          cVar10 = FUN_00524000();
          if (cVar10 != '\0') {
            FUN_00657a60(1);
            ExceptionList = local_c;
            return 3;
          }
          pvVar15 = operator_new(0x68);
          uStack_4 = 10;
          if (pvVar15 == (void *)0x0) {
            ExceptionList = local_c;
            return 3;
          }
          pcVar25 = s_PARANOTSUPPLY_0085be3c;
          goto LAB_00653dbc;
        }
      }
      bVar20 = true;
      bVar8 = true;
      bVar7 = false;
      bVar6 = false;
      cVar10 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4) + 0x30))();
      if (cVar10 != '\0') {
        puVar13 = *(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4);
        while (puVar13 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)puVar13[2];
          piVar18 = (int *)*puVar13;
          cVar10 = (**(code **)(*piVar18 + 0x30))();
          if (cVar10 != '\0') {
            iVar12 = iVar16;
            (**(code **)(*piVar18 + 0x18))(iVar16);
            uVar22 = 0x653bf2;
            cVar10 = FUN_004f0300(iVar12);
            if (cVar10 == '\0') {
              bVar20 = false;
            }
          }
          cVar10 = (**(code **)(*piVar18 + 0x30))();
          puVar13 = puVar3;
          if (cVar10 != '\0') {
            iVar12 = iVar16;
            (**(code **)(*piVar18 + 0x18))(iVar16);
            uVar22 = 0x653c14;
            cVar10 = FUN_004f03a0(iVar12);
            if (cVar10 == '\0') {
              bVar8 = false;
            }
          }
        }
      }
      cVar10 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4) + 0x2c))();
      if (cVar10 != '\0') {
        puVar13 = *(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4);
joined_r0x00653c43:
        do {
          if (puVar13 == (undefined4 *)0x0) break;
          puVar3 = (undefined4 *)puVar13[2];
          piVar18 = (int *)*puVar13;
          cVar10 = (**(code **)(*piVar18 + 0x2c))();
          puVar13 = puVar3;
          if (cVar10 != '\0') {
            uVar22 = 0;
            uVar23 = 0x653c63;
            cVar10 = FUN_00512b20(piVar18,0x1c,*(undefined4 *)(iVar16 + 0x12));
            if (cVar10 == '\0') {
              uVar14 = 1;
              iVar12 = iVar16;
              (**(code **)(*piVar18 + 0x14))(iVar16,1);
              cVar10 = FUN_00518d60(iVar12,uVar14);
              if (cVar10 == '\0') {
                uVar22 = 0;
                uVar23 = 0x653c8b;
                cVar10 = FUN_00512b20(piVar18,0x17,*(undefined4 *)(iVar16 + 0x12));
                if (cVar10 == '\0') {
                  bVar20 = false;
                }
              }
              else {
                uVar22 = 0;
                uVar23 = 0x653ca5;
                cVar10 = FUN_00512a20(piVar18,1,uStack_230);
                if (cVar10 != '\0') goto joined_r0x00653c43;
              }
            }
            bVar21 = true;
            bVar6 = true;
          }
        } while( true );
      }
      if (bVar8) {
        if (!bVar20) {
          bVar20 = true;
          if (DAT_00bd13ee == '\0') {
            puVar13 = *(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4);
            if (puVar13 == (undefined4 *)0x0) goto LAB_00653d7a;
            do {
              puVar3 = (undefined4 *)puVar13[2];
              uVar22 = 0;
              uVar23 = 0x653d27;
              cVar10 = FUN_00512a20(*puVar13,2,uStack_230);
              if (cVar10 == '\0') {
                bVar20 = false;
              }
              puVar13 = puVar3;
            } while (puVar3 != (undefined4 *)0x0);
          }
          else {
            piVar18 = *(int **)(*(int *)(param_1 + 0x21e5a) + 4);
            while (piVar18 != (int *)0x0) {
              piVar1 = piVar18 + 2;
              iVar12 = *piVar18;
              piVar18 = (int *)*piVar1;
              if (*(int *)(iVar12 + 0x264) != 2) {
                bVar20 = false;
              }
            }
            bVar7 = true;
          }
          goto LAB_00653d36;
        }
      }
      else {
LAB_00653d36:
        if (!bVar20) {
          (**(code **)(*DAT_00bd0e18 + 0x20))(0x15);
          pvVar15 = operator_new(0x68);
          uStack_4 = 0xb;
          goto LAB_00653d66;
        }
      }
LAB_00653d7a:
      if (uStack_230 != (void *)0x0) {
        bVar8 = false;
        piVar18 = *(int **)(*(int *)(param_1 + 0x21e5a) + 4);
        piVar1 = (int *)*piVar18;
        cVar10 = DAT_00bd13ee;
joined_r0x00653de7:
        DAT_00bd13ee = cVar10;
        if (piVar18 != (int *)0x0) {
          piVar2 = (int *)piVar18[2];
          piVar5 = (int *)*piVar18;
          cVar10 = (**(code **)(*piVar5 + 0x30))();
          if ((cVar10 != '\0') && (cVar10 = FUN_00523990(), cVar10 != '\0')) {
            uVar14 = FUN_004e9370(uStack_230);
            uVar22 = 0x653e1f;
            cVar10 = FUN_00522b60(uVar14);
            if (cVar10 != '\0') {
              bVar8 = true;
            }
          }
          cVar11 = (**(code **)(*piVar5 + 0x9c))();
          piVar18 = piVar2;
          cVar10 = DAT_00bd13ee;
          if (cVar11 != '\0') goto joined_r0x00653de7;
          cVar10 = (**(code **)(*(int *)((int)piVar5 + 0x22e) + 8))();
          if (cVar10 == '\0') {
            cVar10 = DAT_00bd13ee;
            if (uStack_230 == (void *)piVar5[3]) goto joined_r0x00653de7;
            pvVar19 = (void *)FUN_00523f70();
          }
          else {
            pvVar19 = (void *)piVar5[3];
          }
          cVar10 = DAT_00bd13ee;
          if ((uStack_230 != pvVar19) && (cVar10 = '\0', DAT_00bd13ee != '\0')) {
            FUN_00525da0(auStack_21c);
            FUN_0079168d(auStack_20c,auStack_21c);
            puVar29 = auStack_20c;
            uVar14 = FUN_0042b6c9(s_MAYNOTATTACK_0085ab58);
            FUN_007a630a(auStack_10c,uVar14,puVar29);
            pvVar15 = operator_new(0x68);
            uStack_4 = 0xd;
            if (pvVar15 != (void *)0x0) {
              FUN_0043da60(auStack_10c,0x29a);
              ExceptionList = local_c;
              return 3;
            }
            ExceptionList = local_c;
            return 3;
          }
          goto joined_r0x00653de7;
        }
        if ((void *)piVar1[3] == uStack_230) {
          cVar10 = (**(code **)(*(int *)((int)piVar1 + 0x22e) + 8))();
          bVar21 = cVar10 != '\0';
        }
        else {
          bVar9 = false;
          piVar18 = *(int **)(*(int *)(uStack_238 + 0x1c2) + 4);
          while (piVar18 != (int *)0x0) {
            piVar2 = (int *)piVar18[2];
            piVar5 = (int *)*piVar18;
            piVar18 = piVar2;
            if (*(char *)((int)piVar5 + 0x17b) == '\0') {
              uVar22 = 0x653ed3;
              cVar10 = FUN_0044b280(*(undefined4 *)(piVar5[0x92] + 6));
              if ((cVar10 != '\0') &&
                 ((cVar10 = (**(code **)(*piVar1 + 0x28))(), cVar10 == '\0' ||
                  (cVar10 = (**(code **)(*piVar5 + 0x28))(), cVar10 != '\0')))) {
                bVar9 = true;
              }
            }
          }
          cVar10 = (**(code **)(*piVar1 + 0x2c))();
          if (cVar10 == '\0') {
            cVar10 = (**(code **)(*piVar1 + 0x30))();
            if (cVar10 != '\0') {
              if (*(int *)(uStack_238 + 0x3d8) != 0) {
                uVar22 = 0x653fee;
                cVar10 = FUN_0044b280(*(undefined4 *)(piVar1[0x92] + 6));
                if (cVar10 == '\0') {
                  uVar22 = 0x653ffa;
                  cVar10 = FUN_005216c0(uStack_238);
                  if (cVar10 == '\x01') {
                    bVar21 = false;
                    goto LAB_0065402b;
                  }
                }
              }
              if (((*(int *)(uStack_238 + 0x254) != 8) && (*(int *)(uStack_238 + 0x254) != 9)) &&
                 ((*(int *)(uStack_238 + 0x3d8) != param_1 ||
                  (cVar10 = FUN_004e46e0(), cVar10 != '\0')))) goto LAB_00654026;
            }
          }
          else {
            iVar12 = *(int *)(uStack_238 + 0x254);
            if (((iVar12 == 8) || (iVar12 == 9)) || (*(int *)(uStack_238 + 0x3d8) == param_1)) {
              if (((iVar12 != 8) && (iVar12 != 9)) && (*(int *)(uStack_238 + 0x3d8) == param_1)) {
                bVar21 = false;
              }
            }
            else {
LAB_00654026:
              bVar21 = true;
            }
          }
LAB_0065402b:
          if ((bVar9) && (cVar10 = (**(code **)(*piVar1 + 0x2c))(), cVar10 == '\0')) {
            bVar21 = true;
          }
        }
        if ((*(char *)(uStack_238 + 0x46e) == '\0') && (!bVar6)) {
          bVar21 = false;
        }
        cVar10 = FUN_00527530();
        if ((cVar10 != '\0') && (*(int *)(uStack_238 + 0x254) != 8)) {
          piVar18 = *(int **)(*(int *)(param_1 + 0x21e5a) + 4);
          do {
            if (piVar18 == (int *)0x0) goto LAB_006540b6;
            iVar12 = *piVar18;
            piVar18 = (int *)piVar18[2];
          } while (*(int *)(iVar12 + 0xc) == 0);
          bVar21 = true;
        }
LAB_006540b6:
        cVar10 = FUN_00527600();
        if ((cVar10 != '\0') && (iVar12 = (**(code **)(*param_2 + 8))(), iVar12 == 0xf)) {
          pvVar15 = operator_new(0x68);
          uStack_4 = 0xe;
          if (pvVar15 == (void *)0x0) {
            ExceptionList = local_c;
            return 3;
          }
          pcVar25 = s_UNITISLOCKED_0085ab48;
          goto LAB_00653dbc;
        }
        cVar10 = FUN_00529cf0();
        if ((cVar10 == '\0') || ((DAT_00bd13ef == '\0' && (!bVar21)))) {
          if ((DAT_00bd13ee != '\0') && (!bVar7)) {
            cVar10 = FUN_00529c90();
            if (cVar10 != '\0') {
LAB_00654229:
              bVar21 = false;
              uStack_238 = (uint)uStack_238._3_1_ << 0x18;
              uStack_230 = (void *)((uint)uStack_230._3_1_ << 0x18);
              uVar22 = uVar22 & 0xffff0000;
              goto LAB_0065460a;
            }
            if (bVar20) {
              uVar22 = 0x654212;
              iVar12 = FUN_004e9370(uStack_230);
              if ((*(int *)(iVar12 + 0x254) == 8) || (*(int *)(iVar12 + 0x254) == 9))
              goto LAB_00654229;
            }
          }
          if (((DAT_00bd13ef == '\0') && (!bVar21)) && (!bVar8)) {
            iVar12 = (**(code **)(**(int **)(param_1 + 0x21e5a) + 4))();
            if (0 < iVar12) {
              cVar10 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4) +
                                   0x28))();
              if (cVar10 == '\x01') {
                uVar14 = 0x1c;
                iVar12 = *DAT_00bd0e18;
              }
              else {
                cVar10 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4) +
                                     0x30))();
                if (cVar10 == '\x01') {
                  uVar22 = 0x6542db;
                  (**(code **)(*DAT_00bd0e18 + 0x20))(0x1a);
                  goto LAB_006542e4;
                }
                iVar12 = *DAT_00bd0e18;
                uVar14 = 0x1e;
              }
              uVar22 = 0x6542e4;
              (**(code **)(iVar12 + 0x20))(uVar14);
            }
LAB_006542e4:
            cVar10 = FUN_00529cf0();
            if (cVar10 == '\0') {
              cVar10 = FUN_00529c90();
              if (((cVar10 != '\0') &&
                  (iVar12 = **(int **)(*(int *)(param_1 + 0x21e5a) + 4), *(int *)(iVar12 + 0xc) == 0
                  )) && ((*(int *)(uStack_238 + 0x254) == 8 || (*(int *)(uStack_238 + 0x254) == 9)))
                 ) {
                FUN_0050bca0(iVar12);
                ExceptionList = local_c;
                return 3;
              }
              bVar21 = true;
              uStack_238 = (uint)uStack_238._3_1_ << 0x18;
              uStack_230 = (void *)((uint)uStack_230._3_1_ << 0x18);
              uVar22 = uVar22 & 0xffff0000;
            }
            else if ((*(int *)(uStack_238 + 0x254) == 8) || (*(int *)(uStack_238 + 0x254) == 9)) {
              bVar21 = true;
              uStack_238 = (uint)uStack_238._3_1_ << 0x18;
              uStack_230 = (void *)((uint)uStack_230._3_1_ << 0x18);
              uVar22 = uVar22 & 0xffff0000;
            }
            else {
              cVar10 = FUN_0044b280(*(undefined4 *)(param_1 + 6));
              uVar14 = **(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4);
              if (cVar10 != '\0') {
                uVar26 = 0;
                uVar24 = 0x65;
                cVar10 = FUN_00512b20(uVar14,0x1b,*(undefined4 *)(param_1 + 0x21e6e));
                if (cVar10 == '\0') {
                  uStack_238 = (uint)uStack_238._3_1_ << 0x18;
                  uStack_230 = (void *)((uint)uStack_230._3_1_ << 0x18);
                  FUN_00527400(0x1a,pvVar15,0,1,1,uStack_230,(uint)uVar24 << 0x10,uStack_238,
                               (uint)uVar26 << 0x10,DAT_00bd13ee == '\0');
                  ExceptionList = local_c;
                  return 3;
                }
                uStack_238 = (uint)uStack_238._3_1_ << 0x18;
                uStack_230 = (void *)((uint)uStack_230._3_1_ << 0x18);
                FUN_00527400(0x1b,pvVar15,0,1,1,uStack_230,(uint)uVar24 << 0x10,uStack_238,
                             (uint)uVar26 << 0x10,DAT_00bd13ee == '\0');
                ExceptionList = local_c;
                return 3;
              }
              uVar23 = 0;
              uVar22 = 0x65440f;
              cVar10 = FUN_00512b20(uVar14,0x1c,*(undefined4 *)(param_1 + 0x21e6e));
              if (cVar10 != '\0') {
                uStack_238 = (uint)uStack_238._3_1_ << 0x18;
                uStack_230 = (void *)((uint)uStack_230._3_1_ << 0x18);
                FUN_00527400(0x1c,pvVar15,0,1,1,uStack_230,uVar22 & 0xffff0000,uStack_238,
                             uVar23 & 0xffff0000,DAT_00bd13ee == '\0');
                ExceptionList = local_c;
                return 3;
              }
              uVar22 = 0;
              uVar23 = 0x654491;
              cVar10 = FUN_00512b20(**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4),1,
                                    *(undefined4 *)(param_1 + 0x21e6e));
              if (cVar10 == '\0') {
                uVar26 = 0;
                uVar24 = 0x65;
                cVar10 = FUN_00512b20(**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4),2,
                                      *(undefined4 *)(param_1 + 0x21e6e));
                if (cVar10 != '\0') {
                  uStack_238 = (uint)uStack_238._3_1_ << 0x18;
                  uStack_230 = (void *)((uint)uStack_230._3_1_ << 0x18);
                  FUN_00527400(2,pvVar15,0,1,1,uStack_230,(uint)uVar24 << 0x10,uStack_238,
                               (uint)uVar26 << 0x10,DAT_00bd13ee == '\0');
                  ExceptionList = local_c;
                  return 3;
                }
                iVar12 = **(int **)(*(int *)(param_1 + 0x21e5a) + 4);
                if (uStack_230 == *(void **)(iVar12 + 0xc)) {
                  uStack_238 = (uint)uStack_238._3_1_ << 0x18;
                  uStack_230 = (void *)((uint)uStack_230._3_1_ << 0x18);
                  FUN_00527400(1,pvVar15,0,1,1,uStack_230,(uint)uVar24 << 0x10,uStack_238,
                               (uint)uVar26 << 0x10,
                               CONCAT31((int3)((uint)iVar12 >> 8),DAT_00bd13ee == '\0'));
                  ExceptionList = local_c;
                  return 3;
                }
                ExceptionList = local_c;
                return 3;
              }
              bVar21 = DAT_00bd13ee == '\0';
              uStack_238 = (uint)uStack_238._3_1_ << 0x18;
              uStack_230 = (void *)((uint)uStack_230._3_1_ << 0x18);
              uVar22 = uVar22 & 0xffff0000;
            }
LAB_0065460a:
            FUN_00527400(1,pvVar15,0,1,1,uStack_230,uVar23 & 0xffff0000,uStack_238,uVar22,bVar21);
            ExceptionList = local_c;
            return 3;
          }
          pvVar15 = operator_new(0xa2);
          uStack_4 = 0x11;
          if (pvVar15 != (void *)0x0) {
            uVar14 = FUN_005e3fa0(uStack_230);
            goto LAB_006546cf;
          }
        }
        else {
          iVar12 = (**(code **)(*param_2 + 8))();
          if (iVar12 == 0xf) {
            if (*(int *)(param_1 + 0x21e62) == 5) {
              puVar13 = (undefined4 *)FUN_00581e60();
              FUN_00652570(*puVar13,puVar13[1]);
              FUN_005e1f60(*(undefined4 *)(param_1 + 0x21e6e));
              ExceptionList = local_c;
              return 3;
            }
            pvVar15 = operator_new(0x68);
            uStack_4 = 0xf;
            if (pvVar15 == (void *)0x0) {
              ExceptionList = local_c;
              return 3;
            }
            pcVar25 = s_SINGLEUNITN_00866864;
            goto LAB_00653dbc;
          }
          pvVar15 = operator_new(0xa2);
          uStack_4 = 0x10;
          if (pvVar15 != (void *)0x0) {
            uVar14 = FUN_005e3fa0(uStack_230);
            goto LAB_006546cf;
          }
        }
        uVar14 = 0;
LAB_006546cf:
        *(undefined4 *)(param_1 + 0x13da4) = uVar14;
        ExceptionList = local_c;
        return 3;
      }
      (**(code **)(*DAT_00bd0e18 + 0x20))(0x15);
      pvVar15 = operator_new(0x68);
      uStack_4 = 0xc;
      if (pvVar15 == (void *)0x0) {
        ExceptionList = local_c;
        return 3;
      }
      pcVar25 = s_RIKTIGTERRA_00866870;
      goto LAB_00653dbc;
    }
    cVar10 = (**(code **)(*(int *)**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4) + 0x2c))();
    if (cVar10 != '\x01') {
      ExceptionList = local_c;
      return 3;
    }
    iVar12 = DAT_00ab27b4 + *(int *)(param_1 + 0x21e6e) * 0x4b2;
    if (*(char *)(DAT_00ab27b4 + 0x470 + *(int *)(param_1 + 0x21e6e) * 0x4b2) == '\0') {
      ExceptionList = local_c;
      return 3;
    }
    uVar14 = 1;
    (**(code **)(*(int *)**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4) + 0x14))(iVar12,1);
    cVar10 = FUN_00518d60(iVar12,uVar14);
    if (cVar10 != '\0') {
      ExceptionList = local_c;
      return 3;
    }
    pvVar15 = operator_new(0x68);
    uStack_4 = 9;
  }
  else {
    iVar12 = (**(code **)(*param_2 + 8))();
    if (iVar12 != 0xf) {
      ExceptionList = local_c;
      return 0;
    }
    puVar13 = (undefined4 *)FUN_00581e60();
    uVar14 = *puVar13;
    bVar20 = false;
    bVar21 = false;
    uVar23 = puVar13[1];
    piVar18 = *(int **)(*(int *)(param_1 + 0x21e5a) + 4);
    while (uStack_220 = uVar23, piVar18 != (int *)0x0) {
      piVar1 = (int *)piVar18[2];
      piVar2 = (int *)*piVar18;
      cVar10 = (**(code **)(*piVar2 + 0x30))();
      uVar23 = uStack_220;
      piVar18 = piVar1;
      if (cVar10 != '\0') {
        iVar12 = (**(code **)(piVar2[0x47] + 4))();
        if ((iVar12 != 0) || (*(int *)((int)piVar2 + 0x176) != 0)) {
          bVar20 = true;
        }
        iVar12 = (**(code **)(*piVar2 + 0x18))();
        iVar12 = (**(code **)(**(int **)(iVar12 + 0x294) + 4))();
        uVar23 = uStack_220;
        if (0 < iVar12) {
          bVar21 = true;
        }
      }
    }
    cVar10 = FUN_00657690(uVar14,uVar23);
    if (cVar10 != '\0') {
      ExceptionList = local_c;
      return 0;
    }
    if (*(int *)(param_1 + 0x21e62) != 5) {
      if (*(int *)(param_1 + 0x21e6e) < DAT_00877690) {
        FUN_004e9370(*(int *)(param_1 + 0x21e6e));
        iVar12 = FUN_004ece80();
        if (iVar12 != 0) {
          if (!bVar20) {
            if (!bVar21) {
              uVar23 = 0;
              uVar22 = 0x653397;
              cVar10 = FUN_00512b20(**(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4),2,
                                    *(undefined4 *)(param_1 + 0x21e6e));
              if (cVar10 != '\0') {
                uStack_238 = (uint)uStack_238._3_1_ << 0x18;
                uStack_230 = (void *)((uint)uStack_230 & 0xff000000);
                FUN_00527400(2,*(undefined4 *)(param_1 + 0x21e6e),0,1,1,uStack_230,
                             uVar22 & 0xffff0000,uStack_238,uVar23 & 0xffff0000,1);
                ExceptionList = local_c;
                return 3;
              }
              ExceptionList = local_c;
              return 3;
            }
            (**(code **)(*DAT_00bd0e18 + 0x20))(0x15);
            pvVar15 = operator_new(0x68);
            uStack_4 = 4;
            if (pvVar15 == (void *)0x0) {
              ExceptionList = local_c;
              return 3;
            }
            pcVar25 = s_TPLOADPARANOREBASE_008668fc;
            goto LAB_00653dbc;
          }
          (**(code **)(*DAT_00bd0e18 + 0x20))(0x15);
          pvVar15 = operator_new(0x68);
          uStack_4 = 3;
          goto LAB_0065331f;
        }
      }
      pvVar15 = operator_new(0x68);
      uStack_4 = 5;
      if (pvVar15 == (void *)0x0) {
        ExceptionList = local_c;
        return 3;
      }
      pcVar25 = s_SINGLEUNIT_008668f0;
      goto LAB_00653dbc;
    }
    FUN_00652570(uVar14,uVar23);
    if (DAT_00877690 <= *(int *)(param_1 + 0x21e6e)) {
      ExceptionList = local_c;
      return 3;
    }
    bVar21 = true;
    puVar13 = *(undefined4 **)(*(int *)(param_1 + 0x21e5a) + 4);
    while (puVar13 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar13[2];
      piVar18 = (int *)*puVar13;
      cVar10 = (**(code **)(*piVar18 + 0x30))();
      puVar13 = puVar3;
      if (cVar10 != '\0') {
        uVar14 = FUN_004e9370(*(undefined4 *)(param_1 + 0x21e6e));
        (**(code **)(*piVar18 + 0x18))(uVar14);
        cVar10 = FUN_004f0300(uVar14);
        if (cVar10 == '\0') {
          bVar21 = false;
        }
      }
    }
    FUN_004e9370(*(undefined4 *)(param_1 + 0x21e6e));
    iVar12 = FUN_004ece80();
    if ((iVar12 != 0) || (bVar21)) {
      if (!bVar20) {
        uVar14 = FUN_004e9370(*(undefined4 *)(param_1 + 0x21e6e));
        cVar10 = FUN_0050c570(uVar14);
        if (cVar10 == '\0') {
          FUN_005e1f60(*(undefined4 *)(param_1 + 0x21e6e));
          ExceptionList = local_c;
          return 3;
        }
        pvVar15 = operator_new(0x68);
        uStack_4 = 2;
        if (pvVar15 == (void *)0x0) {
          ExceptionList = local_c;
          return 3;
        }
        pcVar25 = s_BADWEATHER_MSG_00866924;
        goto LAB_00653dbc;
      }
      (**(code **)(*DAT_00bd0e18 + 0x20))(0x15);
      pvVar15 = operator_new(0x68);
      uStack_4 = 1;
LAB_0065331f:
      if (pvVar15 == (void *)0x0) {
        ExceptionList = local_c;
        return 3;
      }
      pcVar25 = s_AIRCOMBATNOORDERS_00866910;
      goto LAB_00653dbc;
    }
    (**(code **)(*DAT_00bd0e18 + 0x20))(0x15);
    pvVar15 = operator_new(0x68);
    uStack_4 = 0;
  }
LAB_00653d66:
  if (pvVar15 == (void *)0x0) {
    ExceptionList = local_c;
    return 3;
  }
  pcVar25 = s_OUTOFRANGE_0086687c;
LAB_00653dbc:
  uVar28 = 0x29a;
  uVar14 = FUN_0042b6c9(pcVar25);
  FUN_0043da60(uVar14,uVar28);
  ExceptionList = local_c;
  return 3;
}


