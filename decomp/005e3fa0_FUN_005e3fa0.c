// FUN_005e3fa0 @ 5e3fa0 size=2063

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005e3fa0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  char cVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  undefined4 uVar17;
  int local_38;
  undefined4 uStack_28;
  undefined **ppuStack_24;
  undefined **ppuStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ce1a1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00441b30(0,0xb0,0x110,0x10);
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  local_4 = 0;
  *param_1 = &PTR_LAB_007ed27c;
  param_1[2] = &PTR_LAB_007ed278;
  param_1[0x16] = param_2;
  pvVar6 = operator_new(0x7e);
  local_4._0_1_ = 1;
  if (pvVar6 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00414c80(s_gfx_interface_attackplatta_year__0085bf2c);
  }
  local_4._0_1_ = 0;
  param_1[0x1c] = uVar7;
  FUN_00415d30(param_1[4]);
  pvVar6 = operator_new(0x7e);
  local_4._0_1_ = 2;
  if (pvVar6 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00414c80(s_gfx_interface_day_bmp_0085bf14);
  }
  local_4._0_1_ = 0;
  param_1[0x1d] = uVar7;
  FUN_00415d30(param_1[4]);
  pvVar6 = operator_new(0x7e);
  local_4._0_1_ = 3;
  if (pvVar6 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00414c80(s_L_gfx_interface_night_bmp_0085befa + 2);
  }
  local_4._0_1_ = 0;
  param_1[0x1e] = uVar7;
  FUN_00415d30(param_1[4]);
  pvVar6 = operator_new(0xaa);
  local_4._0_1_ = 4;
  if (pvVar6 == (void *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_00433570(s_gfx_interface_btn_kryssruta_smal_00859a44,0,0xffffffff);
  }
  param_1[0x1b] = iVar8;
  *(undefined1 *)(iVar8 + 0xa2) = 0;
  local_4._0_1_ = 0;
  *(undefined1 *)(param_1[0x1b] + 0x68) = 1;
  FUN_00415d30(param_1[4]);
  pvVar6 = operator_new(0xb8);
  local_4._0_1_ = 5;
  if (pvVar6 == (void *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_004403f0(0,0x3f800000,0x3f4ccccd,0x3c23d70a,s_gfx_empty_bmp_0083ba78,
                         s_gfx_empty_bmp_0083ba78,s_gfx_interface_button_area_btn_sl_00859a6c,
                         s_gfx_interface_sprite_slider_bmp_00859a98);
  }
  param_1[0x1a] = iVar8;
  *(undefined1 *)(iVar8 + 0x82) = 0;
  fVar4 = _DAT_0085bef8;
  iVar8 = param_1[0x1a];
  local_4._0_1_ = 0;
  *(float *)(iVar8 + 0xa0) = _DAT_0085bef8;
  if (*(float *)(iVar8 + 0xb0) < fVar4) {
    *(undefined4 *)(iVar8 + 0xa0) = *(undefined4 *)(iVar8 + 0xb0);
  }
  if (*(float *)(iVar8 + 0xa0) < *(float *)(iVar8 + 0xac)) {
    *(undefined4 *)(iVar8 + 0xa0) = *(undefined4 *)(iVar8 + 0xac);
  }
  FUN_00440860(param_1[4]);
  puVar9 = operator_new(0x1aa);
  local_4._0_1_ = 6;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    uVar17 = 0x40;
    uVar7 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar10 = FUN_0042b6c9(&DAT_00839384);
    FUN_0043acc0(uVar10,uVar7,uVar17);
    *puVar9 = &PTR_FUN_007e452c;
    puVar9[2] = &PTR_LAB_007e4528;
    *(undefined ***)((int)puVar9 + 0x7e) = &PTR_LAB_007e4524;
    puVar9[0x22] = 0xd;
  }
  local_4._0_1_ = 0;
  param_1[0x17] = puVar9;
  FUN_00415d30(param_1[4]);
  puVar9 = operator_new(0x1aa);
  local_4._0_1_ = 7;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    uVar17 = 0x40;
    uVar7 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar10 = FUN_0042b6c9(s_CANCEL_0083bafc);
    FUN_0043acc0(uVar10,uVar7,uVar17);
    *puVar9 = &PTR_FUN_007ec6b8;
    puVar9[2] = &PTR_LAB_007ec6b4;
    *(undefined ***)((int)puVar9 + 0x7e) = &PTR_LAB_007ec6b0;
    puVar9[0x22] = 0xe;
  }
  local_4._0_1_ = 0;
  param_1[0x18] = puVar9;
  FUN_00415d30(param_1[4]);
  puVar9 = param_1 + 0x23;
  iVar8 = 4;
  do {
    pvVar6 = operator_new(0xaa);
    local_4._0_1_ = 8;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_00433570(s_gfx_interface_button_area_btn_pl_00859ae0,0,0xffffffff);
    }
    puVar9[-4] = uVar7;
    local_4._0_1_ = 0;
    FUN_00415d30(param_1[4]);
    pvVar6 = operator_new(0xaa);
    local_4._0_1_ = 9;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_00433570(s_gfx_interface_button_area_btn_mi_00859ab8,0,0xffffffff);
    }
    *puVar9 = uVar7;
    local_4._0_1_ = 0;
    FUN_00415d30(param_1[4]);
    iVar12 = DAT_00893530;
    puVar9 = puVar9 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (DAT_00cdb354 == 0) {
    _DAT_00cdb350 = *(undefined4 *)(DAT_00893530 + 0x14);
    DAT_00cdb354 = *(short *)(DAT_00893530 + 0x18);
  }
  param_1[0x27] = *(undefined4 *)(DAT_00893530 + 0x14);
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(iVar12 + 0x18);
  cVar5 = FUN_0042dd70(&DAT_00cdb350);
  if (cVar5 != '\0') {
    _DAT_00cdb350 = param_1[0x27];
    DAT_00cdb354 = *(short *)(param_1 + 0x28);
  }
  puVar9 = operator_new(0x18);
  local_4._0_1_ = 10;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[5] = DAT_00bd1bac;
    *puVar9 = &PTR_LAB_007e474c;
    puVar11 = operator_new(0x1e);
    local_4._0_1_ = 0xb;
    if (puVar11 == (undefined4 *)0x0) {
      puVar9[1] = 0;
    }
    else {
      FUN_005c0c70();
      local_4._0_1_ = 0xc;
      FUN_00418f40();
      *puVar11 = &PTR_FUN_007e36fc;
      *(undefined ***)((int)puVar11 + 0x12) = &PTR_LAB_007e36e8;
      *(undefined ***)((int)puVar11 + 0x1a) = &PTR_LAB_007e36e4;
      puVar9[1] = puVar11;
    }
  }
  param_1[0x19] = puVar9;
  local_4._0_1_ = 0;
  local_38 = 0;
  bVar3 = false;
  bVar2 = false;
  piVar13 = *(int **)(*(int *)(DAT_00d0ca90 + 0x21e5a) + 4);
  while (piVar13 != (int *)0x0) {
    uVar7 = param_1[0x16];
    piVar1 = (int *)piVar13[2];
    piVar13 = (int *)*piVar13;
    piVar16 = piVar13;
    FUN_00522770(piVar13,uVar7);
    cVar5 = FUN_0049f8d0(piVar16,uVar7);
    if (cVar5 == '\0') {
      bVar2 = true;
    }
    else {
      uVar7 = FUN_004e9370(piVar13[3]);
      (**(code **)piVar13[2])(0);
      ppuStack_24 = &PTR_FUN_007e8c28;
      ppuStack_20 = (undefined **)0x0;
      iStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = uStack_14 & 0xffffff00;
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0xd);
      uVar10 = FUN_004e9370(param_1[0x16]);
      cVar5 = FUN_00431220(piVar13,uVar7,uVar10);
      (**(code **)piVar13[2])(0);
      if (cVar5 == '\0') {
        bVar2 = true;
      }
      local_4._0_1_ = 0;
      ppuStack_20 = &PTR_LAB_007e518c;
      iVar8 = iStack_1c;
      while (iVar8 != 0) {
        iVar12 = *(int *)(iVar8 + 8);
        FUN_00796cd8(iVar8);
        iVar8 = iVar12;
      }
      iStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
    }
    cVar5 = (**(code **)(*piVar13 + 0x30))();
    if ((cVar5 != '\0') && (cVar5 = FUN_00523990(), cVar5 != '\0')) {
      bVar3 = true;
    }
    FUN_00525da0(&uStack_28);
    cVar5 = FUN_0042ddd0(&DAT_00cdb350);
    piVar13 = piVar1;
    if (cVar5 != '\0') {
      _DAT_00cdb350 = uStack_28;
      DAT_00cdb354 = (short)ppuStack_24;
      param_1[0x27] = uStack_28;
      *(short *)(param_1 + 0x28) = (short)ppuStack_24;
    }
  }
  iVar8 = 1;
  uVar7 = **(undefined4 **)(*(int *)(DAT_00d0ca90 + 0x21e5a) + 4);
  do {
    if ((((iVar8 != 3) || (!bVar2)) &&
        (cVar5 = FUN_00512b20(uVar7,iVar8,param_1[0x16]), cVar5 != '\0')) &&
       ((!bVar3 || (iVar8 != 2)))) {
      iVar12 = FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,iVar8,0);
      FUN_00415d30(param_1[4]);
      if (local_38 == 0) {
        local_38 = iVar8;
      }
      switch(iVar8) {
      case 1:
        *(undefined4 *)(iVar12 + 0x88) = 0x6d;
        break;
      case 3:
        *(undefined4 *)(iVar12 + 0x88) = 0x73;
        break;
      case 4:
        *(undefined4 *)(iVar12 + 0x88) = 0x61;
        break;
      case 5:
        *(undefined4 *)(iVar12 + 0x88) = 100;
        break;
      case 6:
        *(undefined4 *)(iVar12 + 0x88) = 0x72;
        break;
      case 7:
        *(undefined4 *)(iVar12 + 0x88) = 0x70;
        break;
      case 8:
        *(undefined4 *)(iVar12 + 0x88) = 0x6c;
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x22);
  bVar2 = false;
  piVar13 = *(int **)(*(int *)(DAT_00d0ca90 + 0x21e5a) + 4);
  if (piVar13 != (int *)0x0) {
    do {
      piVar1 = piVar13 + 2;
      if ((*(int *)(*piVar13 + 0x264) != 0) && (*(int *)(*piVar13 + 0xc) == param_1[0x16])) {
        bVar2 = true;
      }
      piVar13 = (int *)*piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
    if (bVar2) {
      FUN_0043fe20(s_gfx_settings_btn_radio_bmp_00859974,0,0);
      FUN_00415d30(param_1[4]);
    }
  }
  FUN_0043fcc0(local_38);
  FUN_0043ff60(param_1[4]);
  FUN_006d4270(param_1);
  iVar8 = param_1[6];
  piVar13 = (int *)FUN_00581e60();
  iVar12 = param_1[7];
  iVar15 = *piVar13 - iVar8 / 2;
  iVar8 = FUN_00581e60();
  iVar8 = *(int *)(iVar8 + 4) - iVar12 / 2;
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  else if (0x43 < iVar8) goto LAB_005e473c;
  if (iVar15 < 0x401) {
    iVar8 = 0x44;
  }
LAB_005e473c:
  iVar12 = param_1[7];
  iVar14 = FUN_005841b0();
  if (iVar14 + -1 < iVar12 + iVar8) {
    iVar8 = param_1[7];
    iVar12 = FUN_005841b0();
    iVar8 = (iVar12 - iVar8) + -1;
  }
  iVar12 = param_1[6];
  iVar14 = FUN_005841a0();
  if (iVar14 + -1 < iVar12 + iVar15) {
    iVar12 = param_1[6];
    iVar15 = FUN_005841a0();
    iVar15 = (iVar15 - iVar12) + -1;
  }
  if (iVar15 < 0) {
    iVar15 = 0;
  }
  param_1[9] = iVar8;
  param_1[8] = iVar15;
  ExceptionList = pvStack_c;
  return param_1;
}


