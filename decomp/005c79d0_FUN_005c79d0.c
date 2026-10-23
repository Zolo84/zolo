// FUN_005c79d0 @ 5c79d0 size=7677

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005c79d0(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int *piVar9;
  int aiStack_2cc [4];
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int iStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  int iStack_280;
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  int iStack_270;
  int iStack_26c;
  int iStack_268;
  int iStack_264;
  int iStack_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  undefined4 *local_250;
  undefined1 auStack_24c [560];
  void *pvStack_1c;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cd1a7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_250 = param_1;
  FUN_00433f00();
  piVar9 = param_1 + 0x12;
  *(undefined2 *)((int)param_1 + 0x3e) = 0;
  param_1[0x10] = 0;
  *piVar9 = 0;
  *param_1 = &PTR_FUN_007ec9b4;
  param_1[2] = &PTR_LAB_007ec9b0;
  *(int *)((int)param_1 + 0x3e) = param_2[6];
  local_4 = 0;
  *(short *)((int)param_1 + 0x42) = (short)param_2[7];
  *(undefined4 *)((int)param_1 + 0x3a) = param_3;
  uVar5 = FUN_0051c480();
  FUN_0061e4e0(piVar9,uVar5);
  *(undefined4 *)(*piVar9 + 0xe) = 1;
  iVar6 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
  if (iVar6 < 1) {
    pvVar8 = operator_new(0xaa);
    local_4._0_1_ = 0x5e;
    if (pvVar8 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00433570(s_gfx_interface_plate_unit_bmp_00859ec4,0,0xffffffff);
    }
    local_4._0_1_ = 0;
    param_1[0x11] = uVar5;
    pvVar8 = operator_new(0x7e);
    local_4._0_1_ = 0x5f;
    if (pvVar8 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_none_bmp_0085a4d8);
    }
    local_4._0_1_ = 0;
    param_1[0x20] = uVar5;
    pvVar8 = operator_new(0x7e);
    local_4._0_1_ = 0x60;
    if (pvVar8 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_none_bmp_0085a4d8);
    }
    local_4._0_1_ = 0;
    param_1[0x1e] = uVar5;
    pvVar8 = operator_new(0x7e);
    local_4._0_1_ = 0x61;
    if (pvVar8 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_no_engin_00859ee4);
    }
    local_4._0_1_ = 0;
    param_1[0x22] = uVar5;
    param_1[0x1f] = 0;
    param_1[0x21] = 0;
    param_1[0x23] = 0;
    pvVar8 = operator_new(0x7e);
    local_4._0_1_ = 0x62;
    if (pvVar8 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_own_bmp_0085a960);
    }
    local_4._0_1_ = 0;
    param_1[0x24] = uVar5;
    pvVar8 = operator_new(0x7e);
    local_4._0_1_ = 99;
    if (pvVar8 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_own_bmp_0085a960);
    }
    param_1[0x25] = uVar5;
    goto LAB_005c94f9;
  }
  iVar6 = param_2[0x92];
  iVar7 = FUN_00522770();
  if (iVar6 == iVar7) {
    if (param_2[0x92] == DAT_00d0ca90) {
      param_1[0x23] = 0;
      pvVar8 = operator_new(0x7e);
      local_4._0_1_ = 9;
      if (pvVar8 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_own_bmp_0085a960);
      }
      local_4._0_1_ = 0;
      param_1[0x24] = uVar5;
      pvVar8 = operator_new(0x7e);
      local_4._0_1_ = 10;
      if (pvVar8 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_own_bmp_0085a960);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      param_1[0x25] = uVar5;
    }
    else {
      param_1[0x23] = 1;
      iVar6 = FUN_00522770();
      uVar5 = FUN_0044b220(*(undefined4 *)(iVar6 + 6));
      FUN_007a630a(auStack_24c,uVar5);
      FUN_00426f50(auStack_24c);
      local_4._0_1_ = 5;
      cVar4 = FUN_00427570();
      if (cVar4 == '\0') {
        pvVar8 = operator_new(0x7e);
        local_4 = CONCAT31(local_4._1_3_,7);
        if (pvVar8 == (void *)0x0) goto LAB_005c7c66;
        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_MC_shade_0085a8f0);
      }
      else {
        FUN_007a630a(auStack_24c,s_gfx_interface_icon_unit_MC_bmp_0085a918);
        pvVar8 = operator_new(0x7e);
        local_4 = CONCAT31(local_4._1_3_,6);
        if (pvVar8 == (void *)0x0) {
LAB_005c7c66:
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_own_bmp_0085a960);
        }
      }
      local_4._0_1_ = 5;
      param_1[0x25] = uVar5;
      pvVar8 = operator_new(0x7e);
      local_4._0_1_ = 8;
      if (pvVar8 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00414c80(auStack_24c);
      }
      param_1[0x24] = uVar5;
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00426f80();
    }
  }
  else {
    param_1[0x23] = 2;
    iVar6 = FUN_00522770();
    uVar5 = FUN_0044b220(*(undefined4 *)(iVar6 + 6));
    FUN_007a630a(auStack_24c,uVar5);
    FUN_00426f50(auStack_24c);
    local_4._0_1_ = 1;
    cVar4 = FUN_00427570();
    if (cVar4 == '\0') {
      pvVar8 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,3);
      if (pvVar8 == (void *)0x0) goto LAB_005c7b3b;
      uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_EF_shade_0085a938);
    }
    else {
      FUN_007a630a(auStack_24c,s_gfx_interface_icon_unit_EF_bmp_0085a980);
      pvVar8 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (pvVar8 == (void *)0x0) {
LAB_005c7b3b:
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_own_bmp_0085a960);
      }
    }
    local_4._0_1_ = 1;
    param_1[0x25] = uVar5;
    pvVar8 = operator_new(0x7e);
    local_4._0_1_ = 4;
    if (pvVar8 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00414c80(auStack_24c);
    }
    param_1[0x24] = uVar5;
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00426f80();
  }
  bVar2 = false;
  bVar1 = false;
  iVar6 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))();
  piVar9 = aiStack_2cc;
  for (iVar7 = 0x1f; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  for (piVar9 = *(int **)((int)param_2 + 0x26); piVar9 != (int *)0x0; piVar9 = (int *)piVar9[2]) {
    iVar7 = *piVar9;
    aiStack_2cc[*(int *)(iVar7 + 0x134)] = aiStack_2cc[*(int *)(iVar7 + 0x134)] + 1;
    if ((*(char *)(iVar7 + 0x160) != '\0') && (_DAT_007e3380 < *(float *)(iVar7 + 0x2f8))) {
      bVar1 = true;
    }
    if ((*(char *)(iVar7 + 0x15f) != '\0') && (_DAT_007e3380 < *(float *)(iVar7 + 0x2fc))) {
      bVar2 = true;
    }
  }
  cVar4 = (**(code **)(*param_2 + 0x28))();
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(*param_2 + 0x30))();
    if (cVar4 == '\0') {
      if (iStack_264 < 1) {
        if (iStack_260 + iStack_270 + iStack_26c + iStack_278 < 1) {
          if (iStack_254 == iVar6) {
            iVar7 = FUN_00516f50();
            if (iVar7 < 1) {
              pvVar8 = operator_new(0x7e);
              local_4._0_1_ = 0x51;
              if (pvVar8 == (void *)0x0) {
                uVar5 = 0;
              }
              else {
                uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_sea_tra__0085a020);
              }
              param_1[0x20] = uVar5;
              param_1[0x21] = 3;
            }
            else {
              pvVar8 = operator_new(0x7e);
              local_4._0_1_ = 0x50;
              if (pvVar8 == (void *)0x0) {
                uVar5 = 0;
              }
              else {
                uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_sea_tra__0085a048);
              }
              param_1[0x20] = uVar5;
              param_1[0x21] = 4;
            }
            local_4._0_1_ = 0;
            pvVar8 = operator_new(0xaa);
            local_4._0_1_ = 0x52;
            if (pvVar8 == (void *)0x0) {
              local_4 = (uint)local_4._1_3_ << 8;
              param_1[0x11] = 0;
            }
            else {
              uVar5 = FUN_00433570(s_gfx_interface_plate_unit_sea_tra_00859ff8,0,0xffffffff);
              local_4 = (uint)local_4._1_3_ << 8;
              param_1[0x11] = uVar5;
            }
          }
          else {
            if (iStack_258 + iStack_25c == iVar6) {
              pvVar8 = operator_new(0xaa);
              local_4._0_1_ = 0x53;
              if (pvVar8 == (void *)0x0) {
                uVar5 = 0;
              }
              else {
                uVar5 = FUN_00433570(s_gfx_interface_plate_unit_sea_sub_00859fd0,0,0xffffffff);
              }
              local_4._0_1_ = 0;
              param_1[0x11] = uVar5;
              pvVar8 = operator_new(0x7e);
              local_4 = CONCAT31(local_4._1_3_,0x54);
              if (pvVar8 == (void *)0x0) {
LAB_005c9228:
                uVar5 = 0;
              }
              else {
                uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_sea_sub__00859fac);
              }
            }
            else {
              if (iStack_268 + iStack_274 == iVar6) {
                pvVar8 = operator_new(0xaa);
                local_4 = CONCAT31(local_4._1_3_,0x55);
                if (pvVar8 == (void *)0x0) {
LAB_005c91af:
                  uVar5 = 0;
                }
                else {
                  uVar5 = FUN_00433570(s_gfx_interface_plate_unit_sea_scr_00859f84,0,0xffffffff);
                }
              }
              else {
                pvVar8 = operator_new(0xaa);
                local_4 = CONCAT31(local_4._1_3_,0x56);
                if (pvVar8 == (void *)0x0) goto LAB_005c91af;
                uVar5 = FUN_00433570(s_gfx_interface_plate_unit_sea_mix_00859f5c,0,0xffffffff);
              }
              local_4 = local_4 & 0xffffff00;
              param_1[0x11] = uVar5;
              if (0 < iStack_268 + iStack_274) {
                pvVar8 = operator_new(0x7e);
                local_4._0_1_ = 0x57;
                if (pvVar8 == (void *)0x0) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_sea_scre_00859f34);
                }
                local_4 = (uint)local_4._1_3_ << 8;
                param_1[0x20] = uVar5;
                param_1[0x21] = 0x20;
                goto LAB_005c9241;
              }
              pvVar8 = operator_new(0x7e);
              local_4 = CONCAT31(local_4._1_3_,0x58);
              if (pvVar8 == (void *)0x0) goto LAB_005c9228;
              uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_sea_sub__00859fac);
            }
            local_4 = local_4 & 0xffffff00;
            param_1[0x20] = uVar5;
            param_1[0x21] = 0x1f;
          }
        }
        else {
          if (iStack_254 < 1) {
            pvVar8 = operator_new(0xaa);
            local_4 = CONCAT31(local_4._1_3_,0x4b);
            if (pvVar8 == (void *)0x0) goto LAB_005c8ea6;
            uVar5 = FUN_00433570(s_gfx_interface_plate_unit_sea_sag_0085a100,0,0xffffffff);
          }
          else {
            pvVar8 = operator_new(0xaa);
            local_4 = CONCAT31(local_4._1_3_,0x4a);
            if (pvVar8 == (void *)0x0) {
LAB_005c8ea6:
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_00433570(s_gfx_interface_plate_unit_sea_sag_0085a128,0,0xffffffff);
            }
          }
          local_4 = local_4 & 0xffffff00;
          param_1[0x11] = uVar5;
          if (iStack_278 < 1) {
            if (iStack_26c < 1) {
              if (iStack_270 < 1) {
                pvVar8 = operator_new(0x7e);
                local_4._0_1_ = 0x4f;
                if (pvVar8 == (void *)0x0) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_sea_cvl__0085a070);
                }
                local_4 = (uint)local_4._1_3_ << 8;
                param_1[0x20] = uVar5;
                param_1[0x21] = 0x1e;
              }
              else {
                pvVar8 = operator_new(0x7e);
                local_4._0_1_ = 0x4e;
                if (pvVar8 == (void *)0x0) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_sea_ca_b_0085a094);
                }
                local_4 = (uint)local_4._1_3_ << 8;
                param_1[0x20] = uVar5;
                param_1[0x21] = 0x1b;
              }
            }
            else {
              pvVar8 = operator_new(0x7e);
              local_4._0_1_ = 0x4d;
              if (pvVar8 == (void *)0x0) {
                uVar5 = 0;
              }
              else {
                uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_sea_bc_b_0085a0b8);
              }
              local_4 = (uint)local_4._1_3_ << 8;
              param_1[0x20] = uVar5;
              param_1[0x21] = 0x1c;
            }
          }
          else {
            pvVar8 = operator_new(0x7e);
            local_4._0_1_ = 0x4c;
            if (pvVar8 == (void *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_sea_bb_b_0085a0dc);
            }
            local_4 = (uint)local_4._1_3_ << 8;
            param_1[0x20] = uVar5;
            param_1[0x21] = 0x1a;
          }
        }
      }
      else {
        if (iStack_254 < 1) {
          pvVar8 = operator_new(0xaa);
          local_4 = CONCAT31(local_4._1_3_,0x48);
          if (pvVar8 == (void *)0x0) goto LAB_005c8dd1;
          uVar5 = FUN_00433570(s_gfx_interface_plate_unit_sea_ctf_0085a174,0,0xffffffff);
        }
        else {
          pvVar8 = operator_new(0xaa);
          local_4 = CONCAT31(local_4._1_3_,0x47);
          if (pvVar8 == (void *)0x0) {
LAB_005c8dd1:
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_00433570(s_gfx_interface_plate_unit_sea_ctf_0085a19c,0,0xffffffff);
          }
        }
        local_4 = local_4 & 0xffffff00;
        param_1[0x11] = uVar5;
        pvVar8 = operator_new(0x7e);
        local_4._0_1_ = 0x49;
        if (pvVar8 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_sea_cv_b_0085a150);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        param_1[0x20] = uVar5;
        param_1[0x21] = 0x1d;
      }
LAB_005c9241:
      if ((iStack_254 < 1) || (iVar6 <= iStack_254)) {
        pvVar8 = operator_new(0x7e);
        local_4 = CONCAT31(local_4._1_3_,0x5b);
        if (pvVar8 == (void *)0x0) goto LAB_005c930a;
        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_none_bmp_0085a4d8);
        goto LAB_005c930c;
      }
      iVar6 = FUN_00516f50();
      if (iVar6 < 1) {
        pvVar8 = operator_new(0x7e);
        local_4._0_1_ = 0x5a;
        if (pvVar8 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_sea_tra__0085a020);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        param_1[0x1e] = uVar5;
        param_1[0x1f] = 3;
      }
      else {
        pvVar8 = operator_new(0x7e);
        local_4._0_1_ = 0x59;
        if (pvVar8 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_sea_tra__0085a048);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        param_1[0x1e] = uVar5;
        param_1[0x1f] = 4;
      }
      goto LAB_005c9316;
    }
    if (iStack_29c == iVar6) {
      pvVar8 = operator_new(0xaa);
      local_4._0_1_ = 0x27;
      if (pvVar8 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00433570(s_gfx_interface_plate_unit_air_ftr_0085a4b0,0,0xffffffff);
      }
      local_4._0_1_ = 0;
      param_1[0x11] = uVar5;
      pvVar8 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,0x28);
      if (pvVar8 == (void *)0x0) {
LAB_005c8539:
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_ftr__0085a48c);
      }
LAB_005c853b:
      local_4 = local_4 & 0xffffff00;
      param_1[0x20] = uVar5;
      param_1[0x21] = 0x12;
    }
    else if (iStack_298 + iStack_29c == iVar6) {
      pvVar8 = operator_new(0xaa);
      local_4._0_1_ = 0x29;
      if (pvVar8 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00433570(s_gfx_interface_plate_unit_air_int_0085a464,0,0xffffffff);
      }
      local_4._0_1_ = 0;
      param_1[0x11] = uVar5;
      pvVar8 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,0x2a);
      if (pvVar8 == (void *)0x0) {
LAB_005c8b41:
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_int__0085a440);
      }
LAB_005c8b43:
      local_4 = local_4 & 0xffffff00;
      param_1[0x20] = uVar5;
      param_1[0x21] = 0x13;
    }
    else if (iStack_290 == iVar6) {
      pvVar8 = operator_new(0xaa);
      local_4._0_1_ = 0x2b;
      if (pvVar8 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00433570(s_gfx_interface_plate_unit_air_tac_0085a418,0,0xffffffff);
      }
      local_4._0_1_ = 0;
      param_1[0x11] = uVar5;
      pvVar8 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,0x2c);
      if (pvVar8 == (void *)0x0) {
LAB_005c8636:
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_tac__0085a3f4);
      }
LAB_005c8638:
      local_4 = local_4 & 0xffffff00;
      param_1[0x20] = uVar5;
      param_1[0x21] = 0x15;
    }
    else if (iStack_28c == iVar6) {
      pvVar8 = operator_new(0xaa);
      local_4._0_1_ = 0x2d;
      if (pvVar8 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00433570(s_gfx_interface_plate_unit_air_nav_0085a3cc,0,0xffffffff);
      }
      local_4._0_1_ = 0;
      param_1[0x11] = uVar5;
      pvVar8 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,0x2e);
      if (pvVar8 == (void *)0x0) {
LAB_005c86c0:
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_nav__0085a3a8);
      }
LAB_005c86c2:
      local_4 = local_4 & 0xffffff00;
      param_1[0x20] = uVar5;
      param_1[0x21] = 0x16;
    }
    else if (iStack_294 == iVar6) {
      pvVar8 = operator_new(0xaa);
      local_4._0_1_ = 0x2f;
      if (pvVar8 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00433570(s_gfx_interface_plate_unit_air_str_0085a380,0,0xffffffff);
      }
      local_4._0_1_ = 0;
      param_1[0x11] = uVar5;
      pvVar8 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,0x30);
      if (pvVar8 == (void *)0x0) {
LAB_005c8750:
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_str__0085a35c);
      }
LAB_005c8752:
      local_4 = local_4 & 0xffffff00;
      param_1[0x20] = uVar5;
      param_1[0x21] = 0x14;
    }
    else {
      if (iStack_288 == iVar6) {
        pvVar8 = operator_new(0xaa);
        local_4._0_1_ = 0x31;
        if (pvVar8 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00433570(s_gfx_interface_plate_unit_air_cas_0085a334,0,0xffffffff);
        }
        local_4._0_1_ = 0;
        param_1[0x11] = uVar5;
        pvVar8 = operator_new(0x7e);
        local_4 = CONCAT31(local_4._1_3_,0x32);
        if (pvVar8 == (void *)0x0) {
LAB_005c87da:
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_cas__0085a310);
        }
      }
      else {
        if (iStack_284 == iVar6) {
          iVar7 = (**(code **)(*param_2 + 0x18))();
          if (*(int *)(iVar7 + 0x294) == 0) {
LAB_005c8871:
            pvVar8 = operator_new(0x7e);
            local_4._0_1_ = 0x34;
            if (pvVar8 == (void *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_tra__0085a2c0);
            }
            param_1[0x20] = uVar5;
            param_1[0x21] = 5;
          }
          else {
            iVar7 = (**(code **)(*param_2 + 0x18))();
            iVar7 = (**(code **)(**(int **)(iVar7 + 0x294) + 4))();
            if (iVar7 < 1) goto LAB_005c8871;
            pvVar8 = operator_new(0x7e);
            local_4._0_1_ = 0x33;
            if (pvVar8 == (void *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_tra__0085a2e8);
            }
            param_1[0x20] = uVar5;
            param_1[0x21] = 6;
          }
          local_4._0_1_ = 0;
          pvVar8 = operator_new(0xaa);
          local_4._0_1_ = 0x35;
          if (pvVar8 == (void *)0x0) {
            local_4 = (uint)local_4._1_3_ << 8;
            param_1[0x11] = 0;
          }
          else {
            uVar5 = FUN_00433570(s_gfx_interface_plate_unit_air_tra_0085a298,0,0xffffffff);
            local_4 = (uint)local_4._1_3_ << 8;
            param_1[0x11] = uVar5;
          }
          goto LAB_005c8b5a;
        }
        if (iStack_27c + iStack_280 == iVar6) {
          pvVar8 = operator_new(0xaa);
          local_4._0_1_ = 0x36;
          if (pvVar8 == (void *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_00433570(s_gfx_interface_plate_unit_air_roc_0085a270,0,0xffffffff);
          }
          local_4._0_1_ = 0;
          uVar3 = (undefined1)local_4;
          local_4._0_1_ = 0;
          param_1[0x11] = uVar5;
          if (iStack_27c < 1) {
            local_4._0_1_ = uVar3;
            pvVar8 = operator_new(0x7e);
            local_4._0_1_ = 0x38;
            if (pvVar8 == (void *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_flyi_0085a214);
            }
            local_4 = (uint)local_4._1_3_ << 8;
            param_1[0x20] = uVar5;
            param_1[0x21] = 0x18;
          }
          else {
            pvVar8 = operator_new(0x7e);
            local_4._0_1_ = 0x37;
            if (pvVar8 == (void *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_flyi_0085a240);
            }
            local_4 = (uint)local_4._1_3_ << 8;
            param_1[0x20] = uVar5;
            param_1[0x21] = 0x19;
          }
          goto LAB_005c8b5a;
        }
        pvVar8 = operator_new(0xaa);
        local_4._0_1_ = 0x39;
        if (pvVar8 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00433570(s_gfx_interface_plate_unit_air_mix_0085a1ec,0,0xffffffff);
        }
        local_4._0_1_ = 0;
        uVar3 = (undefined1)local_4;
        local_4._0_1_ = 0;
        param_1[0x11] = uVar5;
        if (0 < iStack_294) {
          pvVar8 = operator_new(0x7e);
          local_4 = CONCAT31(local_4._1_3_,0x3a);
          if (pvVar8 == (void *)0x0) goto LAB_005c8750;
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_str__0085a35c);
          goto LAB_005c8752;
        }
        local_4._0_1_ = uVar3;
        if (0 < iStack_28c) {
          pvVar8 = operator_new(0x7e);
          local_4 = CONCAT31(local_4._1_3_,0x3b);
          if (pvVar8 == (void *)0x0) goto LAB_005c86c0;
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_nav__0085a3a8);
          goto LAB_005c86c2;
        }
        if (0 < iStack_290) {
          pvVar8 = operator_new(0x7e);
          local_4 = CONCAT31(local_4._1_3_,0x3c);
          if (pvVar8 == (void *)0x0) goto LAB_005c8636;
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_tac__0085a3f4);
          goto LAB_005c8638;
        }
        if (iStack_288 < 1) {
          if (0 < iStack_29c) {
            pvVar8 = operator_new(0x7e);
            local_4 = CONCAT31(local_4._1_3_,0x3e);
            if (pvVar8 == (void *)0x0) goto LAB_005c8539;
            uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_ftr__0085a48c);
            goto LAB_005c853b;
          }
          pvVar8 = operator_new(0x7e);
          local_4 = CONCAT31(local_4._1_3_,0x3f);
          if (pvVar8 == (void *)0x0) goto LAB_005c8b41;
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_int__0085a440);
          goto LAB_005c8b43;
        }
        pvVar8 = operator_new(0x7e);
        local_4 = CONCAT31(local_4._1_3_,0x3d);
        if (pvVar8 == (void *)0x0) goto LAB_005c87da;
        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_cas__0085a310);
      }
      local_4 = local_4 & 0xffffff00;
      param_1[0x20] = uVar5;
      param_1[0x21] = 0x17;
    }
LAB_005c8b5a:
    if ((iStack_284 < 1) || (iStack_284 == iVar6)) {
      if ((bVar1) || ((iVar7 = iStack_298 + iStack_29c, 0 < iVar7 && (iVar7 != iVar6)))) {
        if (iStack_29c < 1) {
          if (iStack_298 < 1) {
            pvVar8 = operator_new(0x7e);
            local_4._0_1_ = 0x44;
            if (pvVar8 == (void *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_esco_0085a1c4);
            }
            local_4 = (uint)local_4._1_3_ << 8;
            param_1[0x1e] = uVar5;
            param_1[0x1f] = 9;
          }
          else {
            pvVar8 = operator_new(0x7e);
            local_4._0_1_ = 0x43;
            if (pvVar8 == (void *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_int__0085a440);
            }
            local_4 = (uint)local_4._1_3_ << 8;
            param_1[0x1e] = uVar5;
            param_1[0x1f] = 8;
          }
          goto LAB_005c9316;
        }
        pvVar8 = operator_new(0x7e);
        local_4 = CONCAT31(local_4._1_3_,0x42);
        if (pvVar8 == (void *)0x0) goto LAB_005c8cc8;
        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_ftr__0085a48c);
      }
      else {
        if (((iStack_29c < 1) || (iStack_298 < 1)) || (iVar7 != iVar6)) {
          pvVar8 = operator_new(0x7e);
          local_4 = CONCAT31(local_4._1_3_,0x46);
          if (pvVar8 == (void *)0x0) goto LAB_005c930a;
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_none_bmp_0085a4d8);
          goto LAB_005c930c;
        }
        pvVar8 = operator_new(0x7e);
        local_4 = CONCAT31(local_4._1_3_,0x45);
        if (pvVar8 == (void *)0x0) {
LAB_005c8cc8:
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_ftr__0085a48c);
        }
      }
      local_4 = local_4 & 0xffffff00;
      param_1[0x1e] = uVar5;
      param_1[0x1f] = 7;
    }
    else {
      iVar6 = (**(code **)(*param_2 + 0x18))();
      if (*(int *)(iVar6 + 0x294) != 0) {
        iVar6 = (**(code **)(*param_2 + 0x18))();
        iVar6 = (**(code **)(**(int **)(iVar6 + 0x294) + 4))();
        if (0 < iVar6) {
          pvVar8 = operator_new(0x7e);
          local_4._0_1_ = 0x40;
          if (pvVar8 == (void *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_tra__0085a2e8);
          }
          local_4 = (uint)local_4._1_3_ << 8;
          param_1[0x1e] = uVar5;
          param_1[0x1f] = 6;
          goto LAB_005c9316;
        }
      }
      pvVar8 = operator_new(0x7e);
      local_4._0_1_ = 0x41;
      if (pvVar8 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_air_tra__0085a2c0);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      param_1[0x1e] = uVar5;
      param_1[0x1f] = 5;
    }
  }
  else {
    if (iStack_2a8 < 1) {
      iVar7 = iStack_2b8 + iStack_2bc + iStack_2a4 + aiStack_2cc[3];
      if (aiStack_2cc[2] + iVar7 + aiStack_2cc[1] == iVar6) {
        if (iVar7 == iVar6) {
          pvVar8 = operator_new(0xaa);
          local_4 = CONCAT31(local_4._1_3_,0xc);
          if (pvVar8 == (void *)0x0) goto LAB_005c80a5;
          uVar5 = FUN_00433570(s_gfx_interface_plate_unit_land_mo_0085a898,0,0xffffffff);
        }
        else if (iStack_2a4 + aiStack_2cc[2] + aiStack_2cc[1] == iVar6) {
          pvVar8 = operator_new(0xaa);
          local_4 = CONCAT31(local_4._1_3_,0xd);
          if (pvVar8 == (void *)0x0) {
LAB_005c80a5:
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_00433570(s_gfx_interface_plate_unit_land_mo_0085a868,0,0xffffffff);
          }
        }
        else {
          pvVar8 = operator_new(0xaa);
          local_4 = CONCAT31(local_4._1_3_,0xe);
          if (pvVar8 == (void *)0x0) goto LAB_005c80a5;
          uVar5 = FUN_00433570(s_gfx_interface_plate_unit_land_mo_0085a838,0,0xffffffff);
        }
      }
      else if (iStack_2b8 + iStack_2bc + aiStack_2cc[3] + aiStack_2cc[2] + aiStack_2cc[1] < 1) {
        iVar7 = iStack_2b4 + iStack_2b0 + iStack_2ac;
        if (iVar7 + iStack_2a4 == iVar6) {
          if (iStack_2ac + iStack_2a4 == iVar6) {
            pvVar8 = operator_new(0xaa);
            local_4 = CONCAT31(local_4._1_3_,0x10);
            if (pvVar8 == (void *)0x0) goto LAB_005c80a5;
            uVar5 = FUN_00433570(s_gfx_interface_plate_unit_land_mt_0085a7e8,0,0xffffffff);
          }
          else if (iStack_2b0 + iStack_2a4 == iVar6) {
            pvVar8 = operator_new(0xaa);
            local_4 = CONCAT31(local_4._1_3_,0x11);
            if (pvVar8 == (void *)0x0) goto LAB_005c80a5;
            uVar5 = FUN_00433570(s_gfx_interface_plate_unit_land_ma_0085a7c0,0,0xffffffff);
          }
          else if (iStack_2b4 + iStack_2a4 == iVar6) {
            pvVar8 = operator_new(0xaa);
            local_4 = CONCAT31(local_4._1_3_,0x12);
            if (pvVar8 == (void *)0x0) goto LAB_005c80a5;
            uVar5 = FUN_00433570(s_gfx_interface_plate_unit_land_pa_0085a798,0,0xffffffff);
          }
          else {
            pvVar8 = operator_new(0xaa);
            local_4 = CONCAT31(local_4._1_3_,0x13);
            if (pvVar8 == (void *)0x0) goto LAB_005c80a5;
            uVar5 = FUN_00433570(s_gfx_interface_plate_unit_land_co_0085a76c,0,0xffffffff);
          }
        }
        else if (iVar7 < 1) {
          pvVar8 = operator_new(0xaa);
          local_4 = CONCAT31(local_4._1_3_,0x15);
          if (pvVar8 == (void *)0x0) goto LAB_005c80a5;
          uVar5 = FUN_00433570(s_gfx_interface_plate_unit_land_fo_0085a710,0,0xffffffff);
        }
        else {
          pvVar8 = operator_new(0xaa);
          local_4 = CONCAT31(local_4._1_3_,0x14);
          if (pvVar8 == (void *)0x0) goto LAB_005c80a5;
          uVar5 = FUN_00433570(s_gfx_interface_plate_unit_land_co_0085a738,0,0xffffffff);
        }
      }
      else {
        pvVar8 = operator_new(0xaa);
        local_4 = CONCAT31(local_4._1_3_,0xf);
        if (pvVar8 == (void *)0x0) goto LAB_005c80a5;
        uVar5 = FUN_00433570(s_gfx_interface_plate_unit_land_mi_0085a810,0,0xffffffff);
      }
    }
    else {
      pvVar8 = operator_new(0xaa);
      local_4 = CONCAT31(local_4._1_3_,0xb);
      if (pvVar8 == (void *)0x0) goto LAB_005c80a5;
      uVar5 = FUN_00433570(s_gfx_interface_plate_unit_land_ga_0085a8c8,0,0xffffffff);
    }
    local_4 = local_4 & 0xffffff00;
    param_1[0x11] = uVar5;
    if (iStack_2a4 == iVar6) {
      cVar4 = FUN_0051cc30();
      if (cVar4 == '\0') {
        pvVar8 = operator_new(0x7e);
        local_4._0_1_ = 0x17;
        if (pvVar8 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_HQ_inact_0085a6c0);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        param_1[0x20] = uVar5;
        param_1[0x21] = 1;
      }
      else {
        pvVar8 = operator_new(0x7e);
        local_4._0_1_ = 0x16;
        if (pvVar8 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_HQ_activ_0085a6e8);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        param_1[0x20] = uVar5;
        param_1[0x21] = 2;
      }
    }
    else {
      if (iStack_2bc + iStack_2b8 + aiStack_2cc[3] < 1) {
        if (iStack_2b4 < 1) {
          if (iStack_2b0 < 1) {
            if (iStack_2ac < 1) {
              if (aiStack_2cc[2] < 1) {
                if (aiStack_2cc[1] < 1) {
                  if (aiStack_2cc[0] < 1) {
                    if (iStack_2a8 < 1) {
                      if (iStack_2a0 < 1) {
                        pvVar8 = operator_new(0x7e);
                        local_4 = CONCAT31(local_4._1_3_,0x23);
                        if (pvVar8 == (void *)0x0) goto LAB_005c83d1;
                        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_none_bmp_0085a4d8);
                      }
                      else {
                        pvVar8 = operator_new(0x7e);
                        local_4 = CONCAT31(local_4._1_3_,0x22);
                        if (pvVar8 == (void *)0x0) goto LAB_005c83d1;
                        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_land_mil_0085a4fc);
                      }
                    }
                    else {
                      pvVar8 = operator_new(0x7e);
                      local_4 = CONCAT31(local_4._1_3_,0x21);
                      if (pvVar8 == (void *)0x0) goto LAB_005c83d1;
                      uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_land_gar_0085a524);
                    }
                  }
                  else {
                    pvVar8 = operator_new(0x7e);
                    local_4 = CONCAT31(local_4._1_3_,0x20);
                    if (pvVar8 == (void *)0x0) goto LAB_005c83d1;
                    uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_land_inf_0085a54c);
                  }
                }
                else {
                  pvVar8 = operator_new(0x7e);
                  local_4 = CONCAT31(local_4._1_3_,0x1f);
                  if (pvVar8 == (void *)0x0) goto LAB_005c83d1;
                  uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_land_cav_0085a574);
                }
              }
              else {
                pvVar8 = operator_new(0x7e);
                local_4 = CONCAT31(local_4._1_3_,0x1e);
                if (pvVar8 == (void *)0x0) goto LAB_005c83d1;
                uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_land_mot_0085a59c);
              }
            }
            else {
              pvVar8 = operator_new(0x7e);
              local_4 = CONCAT31(local_4._1_3_,0x1d);
              if (pvVar8 == (void *)0x0) goto LAB_005c83d1;
              uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_land_mtn_0085a5c4);
            }
          }
          else {
            pvVar8 = operator_new(0x7e);
            local_4 = CONCAT31(local_4._1_3_,0x1c);
            if (pvVar8 == (void *)0x0) goto LAB_005c83d1;
            uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_land_mar_0085a5ec);
          }
        }
        else {
          pvVar8 = operator_new(0x7e);
          local_4 = CONCAT31(local_4._1_3_,0x1b);
          if (pvVar8 == (void *)0x0) goto LAB_005c83d1;
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_land_par_0085a614);
        }
      }
      else {
        iVar7 = iStack_2bc + iStack_2b8 + iStack_2a4;
        if (iVar7 == iVar6) {
          pvVar8 = operator_new(0x7e);
          local_4 = CONCAT31(local_4._1_3_,0x18);
          if (pvVar8 == (void *)0x0) goto LAB_005c83d1;
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_land_tan_0085a698);
        }
        else if (iVar7 + aiStack_2cc[3] + aiStack_2cc[2] + aiStack_2cc[1] == iVar6) {
          pvVar8 = operator_new(0x7e);
          local_4 = CONCAT31(local_4._1_3_,0x19);
          if (pvVar8 == (void *)0x0) {
LAB_005c83d1:
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_land_com_0085a668);
          }
        }
        else {
          pvVar8 = operator_new(0x7e);
          local_4 = CONCAT31(local_4._1_3_,0x1a);
          if (pvVar8 == (void *)0x0) goto LAB_005c83d1;
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_land_com_0085a63c);
        }
      }
      local_4 = local_4 & 0xffffff00;
      param_1[0x20] = uVar5;
    }
    if ((iStack_2a4 < 1) ||
       (iVar6 = (**(code **)(*(int *)((int)param_2 + 0x22) + 4))(), iVar6 <= iStack_2a4)) {
      pvVar8 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,0x26);
      if (pvVar8 == (void *)0x0) {
LAB_005c930a:
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_none_bmp_0085a4d8);
      }
LAB_005c930c:
      local_4 = local_4 & 0xffffff00;
      param_1[0x1e] = uVar5;
    }
    else {
      cVar4 = FUN_0051cc30();
      if (cVar4 == '\0') {
        pvVar8 = operator_new(0x7e);
        local_4._0_1_ = 0x25;
        if (pvVar8 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_HQ_inact_0085a6c0);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        param_1[0x1e] = uVar5;
        param_1[0x1f] = 1;
      }
      else {
        pvVar8 = operator_new(0x7e);
        local_4._0_1_ = 0x24;
        if (pvVar8 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_HQ_activ_0085a6e8);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        param_1[0x1e] = uVar5;
        param_1[0x1f] = 2;
      }
    }
  }
LAB_005c9316:
  if (bVar2) {
    pvVar8 = operator_new(0x7e);
    local_4._0_1_ = 0x5c;
    if (pvVar8 != (void *)0x0) {
      uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_engineer_00859f0c);
      param_1[0x22] = uVar5;
      goto LAB_005c94f9;
    }
  }
  else {
    pvVar8 = operator_new(0x7e);
    local_4._0_1_ = 0x5d;
    if (pvVar8 != (void *)0x0) {
      uVar5 = FUN_00414c80(s_gfx_interface_icon_unit_no_engin_00859ee4);
      param_1[0x22] = uVar5;
      goto LAB_005c94f9;
    }
  }
  param_1[0x22] = 0;
LAB_005c94f9:
  local_4._0_1_ = 0;
  pvVar8 = operator_new(0x7e);
  local_4._0_1_ = 100;
  if (pvVar8 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00414c80(s_gfx_interface_org_meter_bmp_00859ea8);
  }
  local_4._0_1_ = 0;
  param_1[0x13] = uVar5;
  pvVar8 = operator_new(0x7e);
  local_4._0_1_ = 0x65;
  if (pvVar8 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00414c80(s_gfx_interface_strength_meter_bmp_00859e84);
  }
  local_4._0_1_ = 0;
  param_1[0x14] = uVar5;
  pvVar8 = operator_new(0x7e);
  local_4._0_1_ = 0x66;
  if (pvVar8 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00414c80(s_gfx_interface_mor_meter_bmp_00859e68);
  }
  param_1[0x15] = uVar5;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*(int *)param_1[0x13] + 0x34))(0x1a);
  (**(code **)(*(int *)param_1[0x14] + 0x34))(0x1a);
  (**(code **)(*(int *)param_1[0x15] + 0x34))(0x1a);
  pvVar8 = operator_new(0x7e);
  uStack_10 = 0x67;
  if (pvVar8 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00414c80(s_gfx_interface_icon_combat_bmp_00859e48);
  }
  uStack_10 = 0;
  param_1[0x16] = uVar5;
  pvVar8 = operator_new(0x7e);
  uStack_10 = 0x68;
  if (pvVar8 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00414c80(s_gfx_interface_icon_disorganized__00859e24);
  }
  param_1[0x17] = iVar6;
  uStack_10 = 0;
  *(undefined1 *)(iVar6 + 0x68) = 1;
  pvVar8 = operator_new(0xaa);
  uStack_10 = 0x69;
  if (pvVar8 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00433570(s_gfx_interface_plate_mission_bmp_00859e04,0,0xffffffff);
  }
  uStack_10 = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = uVar5;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  pvVar8 = operator_new(0x7e);
  uStack_10 = 0x6a;
  if (pvVar8 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_00414c80(s_gfx_interface_icon_locked_bmp_00859de4);
  }
  param_1[0x18] = iVar6;
  uStack_10 = 0;
  *(undefined1 *)(iVar6 + 0x68) = 1;
  pvVar8 = operator_new(0x7e);
  uStack_10 = 0x6b;
  if (pvVar8 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00414c80(s_gfx_interface_offensive_symbol_b_00859dc0);
  }
  uStack_10 = 0;
  param_1[0x19] = uVar5;
  pvVar8 = operator_new(0x7e);
  uStack_10 = 0x6c;
  if (pvVar8 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00414c80(s_gfx_interface_prioritized_bmp_00859da0);
  }
  uStack_10 = 0;
  param_1[0x1a] = uVar5;
  pvVar8 = operator_new(0x7e);
  uStack_10 = 0x6d;
  if (pvVar8 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00414c80(s_gfx_interface_reinforce_bmp_00859d84);
  }
  uStack_10 = 0;
  param_1[0x1c] = uVar5;
  pvVar8 = operator_new(0x7e);
  uStack_10 = 0x6e;
  if (pvVar8 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00414c80(s_gfx_interface_upgrade_bmp_00859d68);
  }
  uStack_10 = 0;
  param_1[0x1b] = uVar5;
  uVar5 = FUN_0051c480();
  *(undefined4 *)((int)param_1 + 0x36) = uVar5;
  pvVar8 = operator_new(0x7e);
  uStack_10 = 0x6f;
  if (pvVar8 == (void *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)FUN_00414c80(s_gfx_interface_general_rank_bmp_00859d48);
  }
  param_1[0x1d] = piVar9;
  uStack_10 = 0;
  (**(code **)(*piVar9 + 0x34))(4);
  ExceptionList = pvStack_1c;
  return param_1;
}


