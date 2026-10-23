// FUN_004ea860 @ 4ea860 size=4309

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004ea860(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  void *pvVar11;
  float10 fVar12;
  char *pcVar13;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  char acStack_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c017a;
  local_c = ExceptionList;
  if (param_2 == 0) {
    DAT_00abf140 = 0;
  }
  ExceptionList = &local_c;
  FUN_00426380((int *)((int)param_1 + 0x1be));
  iVar10 = *(int *)((int)param_1 + 0x1be);
  if (DAT_00877690 <= iVar10) {
    FUN_00426330(1);
    ExceptionList = local_c;
    return 1;
  }
  (**(code **)(param_1[3] + 8))(4,iVar10);
  FUN_004265c0(acStack_10c);
  if (acStack_10c[0] != '\0') {
    uVar7 = FUN_0042b6c9(acStack_10c);
    FUN_00425ba0(uVar7);
  }
  FUN_004265c0(acStack_10c);
  iVar8 = FUN_004c7aca(acStack_10c);
  iVar4 = *(int *)(&DAT_008ea370 + iVar8 * 0x12);
  iVar10 = iVar8 * 0x12;
  puVar9 = operator_new(0xe);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    *puVar9 = param_1;
    puVar9[1] = iVar4;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 0;
  }
  iVar5 = *(int *)(&DAT_008ea374 + iVar10);
  *(undefined4 **)(&DAT_008ea370 + iVar10) = puVar9;
  *(int *)(&DAT_008ea374 + iVar10) = iVar5 + 1;
  if (iVar5 == 0) {
    *(undefined4 **)((int)&DAT_008ea36c + iVar10) = puVar9;
  }
  else {
    *(undefined4 **)(iVar4 + 8) = puVar9;
  }
  param_1[0xa2] = iVar8;
  if (((DAT_00dc4b5e != '\0') && (iVar8 == 0)) &&
     (iVar10 = FUN_007a8730(acStack_10c,&DAT_0083d364), iVar10 != 0)) {
    uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
    FUN_00429a00(s_ERROR___Invalid_area___s__define_00848c50,acStack_10c,&DAT_00dc4a5c,uVar7);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  FUN_004265c0(acStack_10c);
  iVar8 = FUN_004c7b11(acStack_10c);
  iVar4 = *(int *)(&DAT_008e9780 + iVar8 * 0x12);
  iVar10 = iVar8 * 0x12;
  puVar9 = operator_new(0xe);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    *puVar9 = param_1;
    puVar9[1] = iVar4;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 0;
  }
  iVar5 = *(int *)(&DAT_008e9784 + iVar10);
  *(undefined4 **)(&DAT_008e9780 + iVar10) = puVar9;
  *(int *)(&DAT_008e9784 + iVar10) = iVar5 + 1;
  if (iVar5 == 0) {
    *(undefined4 **)((int)&DAT_008e977c + iVar10) = puVar9;
  }
  else {
    *(undefined4 **)(iVar4 + 8) = puVar9;
  }
  param_1[0xa3] = iVar8;
  if (((DAT_00dc4b5e != '\0') && (iVar8 == 0)) &&
     (iVar10 = FUN_007a8730(acStack_10c,&DAT_0083d364), iVar10 != 0)) {
    uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
    FUN_00429a00(s_ERROR___Invalid_region___s__defi_00848be4,acStack_10c,&DAT_00dc4a5c,uVar7);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  FUN_004265c0(acStack_10c);
  iVar8 = FUN_004c7b58(acStack_10c);
  iVar4 = *(int *)(&DAT_008ea230 + iVar8 * 0x12);
  iVar10 = iVar8 * 0x12;
  puVar9 = operator_new(0xe);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    *puVar9 = param_1;
    puVar9[1] = iVar4;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 0;
  }
  iVar5 = *(int *)(&DAT_008ea234 + iVar10);
  *(undefined4 **)(&DAT_008ea230 + iVar10) = puVar9;
  *(int *)(&DAT_008ea234 + iVar10) = iVar5 + 1;
  if (iVar5 == 0) {
    *(undefined4 **)((int)&DAT_008ea22c + iVar10) = puVar9;
  }
  else {
    *(undefined4 **)(iVar4 + 8) = puVar9;
  }
  param_1[0xa1] = iVar8;
  if (((DAT_00dc4b5e != '\0') && (iVar8 == 0)) &&
     (iVar10 = FUN_007a8730(acStack_10c,&DAT_0083d364), iVar10 != 0)) {
    iVar10 = -1;
    pcVar13 = acStack_10c;
    do {
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    if (((iVar10 != -2) || ((0 < param_1[0xa3] && (param_1[0xa3] < 0x62)))) ||
       ((0 < param_1[0xa2] && (param_1[0xa2] < 0x1c5)))) {
      uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
      FUN_00429a00(s_ERROR___Invalid_continent___s__d_00848b70,acStack_10c,&DAT_00dc4a5c,uVar7);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
  }
  FUN_004265c0(acStack_10c);
  iVar8 = FUN_004c7b9c(acStack_10c);
  iVar4 = *(int *)(&DAT_008ea2b0 + iVar8 * 0x12);
  iVar10 = iVar8 * 0x12;
  puVar9 = operator_new(0xe);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    *puVar9 = param_1;
    puVar9[1] = iVar4;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 0;
  }
  iVar5 = *(int *)(&DAT_008ea2b4 + iVar10);
  *(undefined4 **)(&DAT_008ea2b0 + iVar10) = puVar9;
  *(int *)(&DAT_008ea2b4 + iVar10) = iVar5 + 1;
  if (iVar5 == 0) {
    *(undefined4 **)(&DAT_008ea2ac + iVar10) = puVar9;
  }
  else {
    *(undefined4 **)(iVar4 + 8) = puVar9;
  }
  param_1[0x94] = iVar8;
  if (((DAT_00dc4b5e != '\0') && (iVar8 == 0)) &&
     (iVar10 = FUN_007a8730(acStack_10c,&DAT_0083d364), iVar10 != 0)) {
    uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
    FUN_00429a00(s_ERROR___Invalid_climate___s__def_00848b00,acStack_10c,&DAT_00dc4a5c,uVar7);
    DAT_00dc4b60 = DAT_00dc4b60 + 1;
  }
  FUN_004265c0(acStack_10c);
  iVar10 = FUN_007a8730(acStack_10c,s_clear_008479f0);
  if (iVar10 == 0) {
    if (DAT_00dc4b5f != '\0') {
      uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
      FUN_00429a00(s_INFO___Obsolete_terrain_type___s_00848a94,acStack_10c,&DAT_00dc4a5c,uVar7);
    }
LAB_004eae8d:
    param_1[0x95] = 0;
  }
  else {
    iVar10 = FUN_007a8730(acStack_10c,s_forest_008479e8);
    if (iVar10 == 0) {
      param_1[0x95] = 1;
    }
    else {
      iVar10 = FUN_007a8730(acStack_10c,s_mountain_008479dc);
      if (iVar10 == 0) {
        param_1[0x95] = 2;
      }
      else {
        iVar10 = FUN_007a8730(acStack_10c,s_hills_00848a8c);
        if (iVar10 == 0) {
          param_1[0x95] = 5;
        }
        else {
          iVar10 = FUN_007a8730(acStack_10c,&DAT_008479cc);
          if (iVar10 == 0) {
            param_1[0x95] = 9;
          }
          else {
            iVar10 = FUN_007a8730(acStack_10c,s_marsh_008479c4);
            if (iVar10 == 0) {
              param_1[0x95] = 4;
            }
            else {
              iVar10 = FUN_007a8730(acStack_10c,s_desert_008479bc);
              if (iVar10 == 0) {
                param_1[0x95] = 3;
              }
              else {
                iVar10 = FUN_007a8730(acStack_10c,s_urban_00848a84);
                if (iVar10 == 0) {
                  param_1[0x95] = 7;
                }
                else {
                  iVar10 = FUN_007a8730(acStack_10c,&DAT_008479b8);
                  if (iVar10 == 0) {
                    param_1[0x95] = 8;
                  }
                  else {
                    iVar10 = FUN_007a8730(acStack_10c,s_ocean_008479b0);
                    if (iVar10 == 0) {
                      param_1[0x95] = 8;
                    }
                    else {
                      iVar10 = FUN_007a8730(acStack_10c,s_river_008479a8);
                      if (iVar10 == 0) {
                        param_1[0x95] = 9;
                      }
                      else {
                        iVar10 = FUN_007a8730(acStack_10c,s_jungle_00848a7c);
                        if (iVar10 != 0) {
                          iVar10 = FUN_007a8730(acStack_10c,s_plains_00848a74);
                          if (iVar10 != 0) {
                            if (DAT_00dc4b5f != '\0') {
                              FUN_00429a50(s_Invalid_terrain_type___s__define_00848a44,acStack_10c,
                                           &DAT_00dc4a5c);
                            }
                            if (DAT_00dc4b5e != '\0') {
                              uVar7 = (**(code **)(*param_1 + 0xc))
                                                (*(undefined4 *)((int)param_1 + 0x1be));
                              FUN_00429a00(s_ERROR___Invalid_terrain_type___s_008489d8,acStack_10c,
                                           &DAT_00dc4a5c,uVar7);
                              DAT_00dc4b60 = DAT_00dc4b60 + 1;
                            }
                          }
                          goto LAB_004eae8d;
                        }
                        param_1[0x95] = 6;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (DAT_00dc4b5e == '\0') goto LAB_004eb221;
  if ((param_1[0x95] == 8) || (param_1[0x95] == 9)) {
    if ((param_1[0xa1] == 0) && ((param_1[0xa3] == 0 && (param_1[0xa2] == 0)))) {
      if (DAT_00dc4b5f != '\0') {
        uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be),&DAT_00dc4a5c);
        FUN_00429a00(s_INFO___Off_map_sea_province___s__008487b4,uVar7);
      }
    }
    else {
      iVar10 = param_1[0xa2];
      if (iVar10 < 0x1c5) {
        uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
        uVar7 = FUN_004c7bfa(param_1[0xa2],&DAT_00dc4a5c,uVar7);
        pcVar13 = s_ERROR___Invalid__land__area___s__00848764;
LAB_004eb0f3:
        FUN_00429a00(pcVar13,uVar7);
LAB_004eb0fb:
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      else {
        if (iVar10 == 0) {
          uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
          FUN_00429a00(s_ERROR___Invalid_or_missing_area_d_00848710,&DAT_00dc4a5c,uVar7);
          goto LAB_004eb0fb;
        }
        if ((iVar10 == 0x1c5) && (param_1[0xa3] != 0x62)) {
          uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
          uVar7 = FUN_004c7c14(param_1[0xa3],&DAT_00dc4a5c,uVar7);
          pcVar13 = s_ERROR___Invalid_region___s__defi_008486c4;
          goto LAB_004eb0f3;
        }
      }
      iVar10 = param_1[0xa3];
      if (iVar10 < 0x62) {
        uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
        uVar7 = FUN_004c7c14(param_1[0xa3],&DAT_00dc4a5c,uVar7);
        pcVar13 = s_ERROR___Invalid__land__region____00848670;
LAB_004eb198:
        FUN_00429a00(pcVar13,uVar7);
LAB_004eb1a0:
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      else {
        if (iVar10 == 0) {
          uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
          FUN_00429a00(s_ERROR___Invalid_or_missing_regio_0084861c,&DAT_00dc4a5c,uVar7);
          goto LAB_004eb1a0;
        }
        if ((iVar10 == 0x62) && (param_1[0xa2] != 0x1c5)) {
          uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
          uVar7 = FUN_004c7bfa(param_1[0xa2],&DAT_00dc4a5c,uVar7);
          pcVar13 = s_ERROR___Invalid_area___s__define_008485d0;
          goto LAB_004eb198;
        }
      }
      if (param_1[0xa1] != 0) {
        uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
        uVar7 = FUN_004c7c2e(param_1[0xa1],&DAT_00dc4a5c,uVar7);
        FUN_00429a00(s_ERROR___Invalid_continent___s__d_00848580,uVar7);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
    }
    if (param_1[0x94] != 4) goto LAB_004eb221;
    uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
    pcVar13 = s_ERROR___Invalid_climate__Muddy__d_008484f8;
  }
  else {
    if (((param_1[0xa1] == 0) && (param_1[0xa3] == 0)) && (param_1[0xa2] == 0)) {
      if (DAT_00dc4b5f != '\0') {
        uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be),&DAT_00dc4a5c);
        FUN_00429a00(s_INFO___Off_map_land_province___s_0084899c,uVar7);
      }
      goto LAB_004eb221;
    }
    if (param_1[0xa2] < 0x1c5) {
      if (param_1[0xa2] == 0) {
        uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
        FUN_00429a00(s_ERROR___Invalid_or_missing_area_d_008488f4,&DAT_00dc4a5c,uVar7);
        goto LAB_004eaf6f;
      }
    }
    else {
      uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
      uVar7 = FUN_004c7bfa(param_1[0xa2],&DAT_00dc4a5c,uVar7);
      FUN_00429a00(s_ERROR___Invalid__non_land__area___00848948,uVar7);
LAB_004eaf6f:
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
    if (param_1[0xa3] < 0x62) {
      if (param_1[0xa3] == 0) {
        uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
        FUN_00429a00(s_ERROR___Invalid_or_missing_regio_00848848,&DAT_00dc4a5c,uVar7);
        goto LAB_004eafd8;
      }
    }
    else {
      uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
      uVar7 = FUN_004c7c14(param_1[0xa3],&DAT_00dc4a5c,uVar7);
      FUN_00429a00(s_ERROR___Invalid__non_land__regio_0084889c,uVar7);
LAB_004eafd8:
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
    if (param_1[0xa1] != 0) goto LAB_004eb221;
    uVar7 = (**(code **)(*param_1 + 0xc))(*(undefined4 *)((int)param_1 + 0x1be));
    pcVar13 = s_ERROR___Invalid_or_missing_conti_008487f0;
  }
  FUN_00429a00(pcVar13,&DAT_00dc4a5c,uVar7);
  DAT_00dc4b60 = DAT_00dc4b60 + 1;
LAB_004eb221:
  FUN_00426380(param_1 + 0x96);
  FUN_00426380(param_1 + 0x97);
  FUN_00426380(&iStack_120);
  pvVar11 = operator_new(0x1c);
  uStack_4 = 0;
  if (pvVar11 == (void *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = FUN_004d0520();
  }
  uStack_4 = 0xffffffff;
  FUN_004d1010(5);
  *(int *)((int)param_1 + 0x1da) = iVar10;
  *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)((int)param_1 + 0x12);
  fVar6 = (float)iStack_120 * _DAT_007e46cc;
  fVar12 = (float10)FUN_004d0d40(*(undefined4 *)(iVar10 + 0x18));
  if ((float10)fVar6 <= fVar12) {
    fVar12 = (float10)fVar6;
  }
  else {
    fVar12 = (float10)FUN_004d0d40(*(undefined4 *)(iVar10 + 0x18));
  }
  *(float *)(iVar10 + 0x10) = (float)fVar12;
  if (fVar12 < (float10)_DAT_007e3380) {
    *(undefined4 *)(iVar10 + 0x10) = 0;
  }
  fVar6 = (float)iStack_120 * _DAT_007e46cc;
  fVar12 = (float10)FUN_004d0d40(*(undefined4 *)(iVar10 + 0x18));
  if ((float10)fVar6 <= fVar12) {
    fVar12 = (float10)fVar6;
  }
  else {
    fVar12 = (float10)FUN_004d0d40(*(undefined4 *)(iVar10 + 0x18));
  }
  *(float *)(iVar10 + 0x14) = (float)fVar12;
  if (fVar12 < (float10)_DAT_007e3380) {
    *(undefined4 *)(iVar10 + 0x14) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x24a) = *(undefined4 *)(iVar10 + 0x14);
  FUN_00426380(&iStack_120);
  FUN_00426380((int)param_1 + 0x182);
  piVar1 = (int *)((int)param_1 + 0x186);
  FUN_00426380(piVar1);
  piVar2 = param_1 + 0xf7;
  FUN_00426380(piVar2);
  FUN_00426380(&iStack_120);
  pvVar11 = operator_new(0x1c);
  uStack_4 = 1;
  if (pvVar11 == (void *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = FUN_004d0520();
  }
  uStack_4 = 0xffffffff;
  FUN_004d1010(1);
  iVar4 = iStack_120;
  *(int *)((int)param_1 + 0x1ca) = iVar10;
  *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)((int)param_1 + 0x12);
  fVar12 = (float10)FUN_004d0d40(*(undefined4 *)(iVar10 + 0x18));
  if ((float10)iVar4 <= fVar12) {
    fVar12 = (float10)iVar4;
  }
  else {
    fVar12 = (float10)FUN_004d0d40(*(undefined4 *)(iVar10 + 0x18));
  }
  iVar4 = iStack_120;
  *(float *)(iVar10 + 0x10) = (float)fVar12;
  if (fVar12 < (float10)_DAT_007e3380) {
    *(undefined4 *)(iVar10 + 0x10) = 0;
  }
  fVar12 = (float10)FUN_004d0d40(*(undefined4 *)(iVar10 + 0x18));
  if ((float10)iVar4 <= fVar12) {
    fVar12 = (float10)iVar4;
  }
  else {
    fVar12 = (float10)FUN_004d0d40(*(undefined4 *)(iVar10 + 0x18));
  }
  *(float *)(iVar10 + 0x14) = (float)fVar12;
  if (fVar12 < (float10)_DAT_007e3380) {
    *(undefined4 *)(iVar10 + 0x14) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x246) = *(undefined4 *)(iVar10 + 0x14);
  FUN_00426380((undefined4 *)((int)param_1 + 0x1f2));
  uVar7 = *(undefined4 *)((int)param_1 + 0x1f2);
  *(undefined4 *)((int)param_1 + 0x1f6) = uVar7;
  *(undefined4 *)((int)param_1 + 0x1fa) = uVar7;
  FUN_00426380(&iStack_120);
  *(float *)((int)param_1 + 0x1fe) = (float)iStack_120;
  *(float *)((int)param_1 + 0x20e) = (float)iStack_120;
  uVar7 = __ftol();
  *(undefined4 *)((int)param_1 + 0x22e) = uVar7;
  FUN_00426380(&iStack_120);
  *(float *)((int)param_1 + 0x20a) = (float)iStack_120;
  *(float *)((int)param_1 + 0x21a) = (float)iStack_120;
  uVar7 = __ftol();
  *(undefined4 *)((int)param_1 + 0x236) = uVar7;
  FUN_00426380(&iStack_120);
  *(float *)((int)param_1 + 0x206) = (float)iStack_120;
  *(float *)((int)param_1 + 0x216) = (float)iStack_120;
  uVar7 = __ftol();
  *(undefined4 *)((int)param_1 + 0x232) = uVar7;
  FUN_00426380(&iStack_120);
  *(float *)((int)param_1 + 0x202) = (float)iStack_120;
  *(float *)((int)param_1 + 0x212) = (float)iStack_120;
  uVar7 = __ftol();
  *(undefined4 *)((int)param_1 + 0x23a) = uVar7;
  FUN_004d7870(&iStack_114,*(undefined4 *)((int)param_1 + 0x1be));
  FUN_00426380(&iStack_118);
  FUN_00426380(&iStack_11c);
  if ((iStack_118 == 0) && (iStack_11c == 0)) {
    *(int *)((int)param_1 + 0x3f2) = iStack_114;
    iVar10 = iStack_110;
  }
  else {
    *(int *)((int)param_1 + 0x3f2) = iStack_118;
    iVar10 = iStack_11c;
  }
  *(int *)((int)param_1 + 0x3f6) = iVar10;
  FUN_00426380(&iStack_118);
  FUN_00426380(&iStack_11c);
  if ((iStack_118 == 0) && (iStack_11c == 0)) {
    *(int *)((int)param_1 + 0x3fa) = iStack_114;
    *(int *)((int)param_1 + 0x3fe) = iStack_110;
  }
  else {
    *(int *)((int)param_1 + 0x3fa) = iStack_118;
    *(int *)((int)param_1 + 0x3fe) = iStack_11c;
  }
  FUN_00426380(&iStack_118);
  FUN_00426380(&iStack_11c);
  if ((iStack_118 == 0) && (iStack_11c == 0)) {
    param_1[0xf8] = iStack_114;
    param_1[0xf9] = iStack_110;
  }
  else {
    param_1[0xf8] = iStack_118;
    param_1[0xf9] = iStack_11c;
  }
  FUN_00426380(&iStack_118);
  FUN_00426380(&iStack_11c);
  if ((iStack_118 == 0) && (iStack_11c == 0)) {
    *(int *)((int)param_1 + 0x40a) = iStack_114;
    iVar10 = iStack_110;
  }
  else {
    *(int *)((int)param_1 + 0x40a) = iStack_118;
    iVar10 = iStack_11c;
  }
  *(int *)((int)param_1 + 0x40e) = iVar10;
  FUN_00426380((int)param_1 + 0x13a);
  FUN_00426380(&iStack_118);
  FUN_00426380(&iStack_11c);
  if ((iStack_118 == 0) && (iStack_11c == 0)) {
    *(int *)((int)param_1 + 0x412) = iStack_114;
    *(int *)((int)param_1 + 0x416) = iStack_110;
  }
  else {
    *(int *)((int)param_1 + 0x412) = iStack_118;
    *(int *)((int)param_1 + 0x416) = iStack_11c;
  }
  FUN_00426380(&iStack_118);
  FUN_00426380(&iStack_11c);
  if ((iStack_118 == 0) && (iStack_11c == 0)) {
    *(int *)((int)param_1 + 0x41a) = iStack_114;
    iVar10 = iStack_110;
  }
  else {
    *(int *)((int)param_1 + 0x41a) = iStack_118;
    iVar10 = iStack_11c;
  }
  *(int *)((int)param_1 + 0x41e) = iVar10;
  FUN_00426380(&iStack_118);
  FUN_00426380(&iStack_11c);
  if ((iStack_118 == 0) && (iStack_11c == 0)) {
    *(int *)((int)param_1 + 0x3ea) = iStack_114;
    *(int *)((int)param_1 + 0x3ee) = iStack_110;
  }
  else {
    *(int *)((int)param_1 + 0x3ea) = iStack_118;
    *(int *)((int)param_1 + 0x3ee) = iStack_11c;
  }
  if (((*piVar2 != 0) && (iStack_118 == 0)) && (iStack_11c == 0)) {
    uVar7 = (**(code **)(*param_1 + 0xc))(*piVar2);
    FUN_00405ad0(s_Missing_coordinates_for_port_in___008484b4,*(undefined4 *)((int)param_1 + 0x1be),
                 uVar7);
  }
  *(undefined4 *)((int)param_1 + 0x402) = *(undefined4 *)((int)param_1 + 0x3fa);
  *(undefined4 *)((int)param_1 + 0x406) = *(undefined4 *)((int)param_1 + 0x3fe);
  FUN_00426330(1);
  *(undefined4 *)((int)param_1 + 0x16a) = 0xffffffff;
  if (*piVar2 < 1) {
    if (DAT_00dc4b5e != '\0') {
      if (*piVar1 != 0) {
        uVar7 = (**(code **)(*param_1 + 0xc))();
        FUN_00429a00(s_ERROR__Province__d___s__has_port_00848420,param_2,uVar7);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
      if (*(int *)((int)param_1 + 0x182) != 0) {
        uVar7 = (**(code **)(*param_1 + 0xc))();
        FUN_00429a00(s_ERROR__Province__d___s__has_beac_008483e8,param_2,uVar7);
        DAT_00dc4b60 = DAT_00dc4b60 + 1;
      }
    }
  }
  else {
    if (((DAT_00dc4b5e != '\0') && (*piVar1 == 0)) && (*(int *)((int)param_1 + 0x182) == 0)) {
      uVar7 = (**(code **)(*param_1 + 0xc))(*piVar2);
      FUN_00429a00(s_ERROR__Province__d___s__has_no_b_00848458,param_2,uVar7);
      DAT_00dc4b60 = DAT_00dc4b60 + 1;
    }
    if (*piVar1 != 0) {
      pvVar11 = operator_new(0x4e);
      uStack_4 = 2;
      if (pvVar11 == (void *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = FUN_004e2c80();
      }
      uStack_4 = 0xffffffff;
      *(int *)((int)param_1 + 0x46a) = iVar10;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x44) = *piVar2;
        FUN_00419440(param_1[0xf8],param_1[0xf9]);
      }
    }
    *(int *)((int)param_1 + 0x16a) = DAT_00abf140;
    DAT_00abf140 = DAT_00abf140 + 1;
  }
  if (0x1c5 < param_1[0xa2]) {
    *(int *)((int)param_1 + 0x16a) = DAT_00abf140;
    DAT_00abf140 = DAT_00abf140 + 1;
  }
  ExceptionList = local_c;
  return 1;
}


