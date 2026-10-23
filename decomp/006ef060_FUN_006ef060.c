// FUN_006ef060 @ 6ef060 size=1431

undefined4 * __thiscall FUN_006ef060(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char local_10c;
  char local_10b;
  char local_10a;
  char local_109;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007da69f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006ee230(param_2);
  *param_1 = &PTR_FUN_007f811c;
  param_1[2] = &PTR_LAB_007f8118;
  local_4 = 0;
  uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  *(undefined4 *)((int)param_1 + 0x1a) = uVar3;
  pvVar4 = operator_new(0x72);
  local_4._0_1_ = 1;
  if (pvVar4 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00434930(0x26c,0x1cc,0,0);
  }
  *(int *)((int)param_1 + 0x16) = iVar5;
  *(undefined1 *)(iVar5 + 0x5c) = 1;
  local_4._0_1_ = 0;
  uVar2 = FUN_00584270(0xd0,0xe8,0xf8);
  *(undefined2 *)(*(int *)((int)param_1 + 0x16) + 0x5a) = uVar2;
  *(undefined4 *)(*(int *)((int)param_1 + 0x16) + 0x56) = *(undefined4 *)((int)param_1 + 0x1a);
  if (DAT_00dc3a00 == '\0') {
    pvVar4 = operator_new(0x7e);
    local_4._0_1_ = 2;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_frontend_credits_b_0086f660);
    }
    local_4._0_1_ = 0;
    *(undefined4 *)((int)param_1 + 0x10e) = uVar3;
    pvVar4 = operator_new(0x7e);
    local_4._0_1_ = 3;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_frontend_credits_t_0086f638);
    }
    local_4._0_1_ = 0;
    *(undefined4 *)((int)param_1 + 0x106) = uVar3;
    pvVar4 = operator_new(0x7e);
    local_4._0_1_ = 4;
    if (pvVar4 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_frontend_credits_b_0086f60c);
    }
    *(undefined4 *)((int)param_1 + 0x10a) = uVar3;
    local_4._0_1_ = 0;
    *(undefined1 *)(*(int *)((int)param_1 + 0x16) + 0x5c) = 0;
    pvVar4 = operator_new(0x7e);
    local_4._0_1_ = 5;
    if (pvVar4 == (void *)0x0) {
      local_4 = (uint)local_4._1_3_ << 8;
      *(undefined4 *)((int)param_1 + 0x112) = 0;
    }
    else {
      uVar3 = FUN_00414c80(s_gfx_interface_frontend_bink_logo_0086f5e4);
      local_4 = (uint)local_4._1_3_ << 8;
      *(undefined4 *)((int)param_1 + 0x112) = uVar3;
    }
  }
  else {
    FUN_007a630a(&local_10c,s__s_gfx_interface_frontend_credit_0086f5bc,&DAT_00dc3a00);
    iVar5 = FUN_007a6615(&local_10c,&DAT_0082eeb4);
    if (iVar5 == 0) {
      pvVar4 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,7);
      if (pvVar4 == (void *)0x0) goto LAB_006ef2a8;
      uVar3 = FUN_00414c80(s_gfx_interface_frontend_credits_b_0086f660);
    }
    else {
      FUN_007a6429(iVar5);
      pvVar4 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,6);
      if (pvVar4 == (void *)0x0) {
LAB_006ef2a8:
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00414c80(&local_10c);
      }
    }
    local_4 = local_4 & 0xffffff00;
    *(undefined4 *)((int)param_1 + 0x10e) = uVar3;
    FUN_007a630a(&local_10c,s__s_gfx_interface_frontend_credit_0086f590,&DAT_00dc3a00);
    iVar5 = FUN_007a6615(&local_10c,&DAT_0082eeb4);
    if (iVar5 == 0) {
      pvVar4 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,9);
      if (pvVar4 == (void *)0x0) goto LAB_006ef337;
      uVar3 = FUN_00414c80(s_gfx_interface_frontend_credits_t_0086f638);
    }
    else {
      FUN_007a6429(iVar5);
      pvVar4 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,8);
      if (pvVar4 == (void *)0x0) {
LAB_006ef337:
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00414c80(&local_10c);
      }
    }
    local_4 = local_4 & 0xffffff00;
    *(undefined4 *)((int)param_1 + 0x106) = uVar3;
    FUN_007a630a(&local_10c,s__s_gfx_interface_frontend_credit_0086f560,&DAT_00dc3a00);
    iVar5 = FUN_007a6615(&local_10c,&DAT_0082eeb4);
    if (iVar5 == 0) {
      pvVar4 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,0xb);
      if (pvVar4 == (void *)0x0) goto LAB_006ef3c6;
      uVar3 = FUN_00414c80(s_gfx_interface_frontend_credits_b_0086f60c);
    }
    else {
      FUN_007a6429(iVar5);
      pvVar4 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,10);
      if (pvVar4 == (void *)0x0) {
LAB_006ef3c6:
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00414c80(&local_10c);
      }
    }
    *(undefined4 *)((int)param_1 + 0x10a) = uVar3;
    local_4 = local_4 & 0xffffff00;
    *(undefined1 *)(*(int *)((int)param_1 + 0x16) + 0x5c) = 0;
    FUN_007a630a(&local_10c,s__s_gfx_interface_frontend_bink_l_0086f538,&DAT_00dc3a00);
    iVar5 = FUN_007a6615(&local_10c,&DAT_0082eeb4);
    if (iVar5 == 0) {
      pvVar4 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,0xd);
      if (pvVar4 == (void *)0x0) goto LAB_006ef45b;
      uVar3 = FUN_00414c80(s_gfx_interface_frontend_bink_logo_0086f5e4);
    }
    else {
      FUN_007a6429(iVar5);
      pvVar4 = operator_new(0x7e);
      local_4 = CONCAT31(local_4._1_3_,0xc);
      if (pvVar4 == (void *)0x0) {
LAB_006ef45b:
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00414c80(&local_10c);
      }
    }
    local_4 = local_4 & 0xffffff00;
    *(undefined4 *)((int)param_1 + 0x112) = uVar3;
    FUN_007a630a(&local_10c,s__s_db_credits_txt_0086f524,&DAT_00dc3a00);
    iVar5 = FUN_007a6615(&local_10c,&DAT_0082eeb4);
    if (iVar5 != 0) goto LAB_006ef4aa;
  }
  iVar5 = FUN_007a6615(s_db_credits_txt_0086f514,&DAT_0082eeb4);
LAB_006ef4aa:
  bVar1 = true;
  do {
    pcVar8 = &local_10c;
    iVar6 = FUN_007a95a5(&local_10c,0xff,iVar5);
    if (iVar6 == 0) {
      bVar1 = false;
    }
    if (local_10c == '-') {
      if (((local_10b == 'E') && (local_10a == 'N')) && (local_109 == 'D')) break;
    }
    else if (local_10c == '#') {
      uVar3 = FUN_004136a0(*(undefined4 *)
                            (s_gfx_interface_frontend_btn_front_0086f400 + local_10b * 4 + 0x10));
      pcVar8 = &local_10a;
      *(undefined4 *)(*(int *)((int)param_1 + 0x16) + 0x56) = uVar3;
    }
    if (*pcVar8 != '-') {
      FUN_004361a0(pcVar8);
      *(undefined4 *)(*(int *)((int)param_1 + 0x16) + 0x56) = *(undefined4 *)((int)param_1 + 0x1a);
    }
  } while (bVar1);
  FUN_007a6429(iVar5);
  *(undefined4 *)((int)param_1 + 0xfe) = 0;
  *(undefined4 *)((int)param_1 + 0x102) = 0;
  pvVar4 = operator_new(0x23e);
  local_4 = CONCAT31(local_4._1_3_,0xe);
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
    *(undefined4 *)((int)param_1 + 0x1a) = uVar3;
    uVar3 = FUN_00433f90(uVar3,&DAT_0083bf1c,0x26c,0,0,1);
  }
  *(undefined4 *)((int)param_1 + 0xfa) = uVar3;
  puVar7 = (undefined4 *)((int)param_1 + 0x1e);
  iVar5 = 0x37;
  do {
    *puVar7 = *(undefined4 *)((int)param_1 + 0xfa);
    puVar7 = puVar7 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = *(int *)(DAT_00bd1bac + 8);
  *(int *)((int)param_1 + 0x116) = *(int *)(DAT_00bd1bac + 4) + -0x400 >> 1;
  *(int *)((int)param_1 + 0x11a) = (iVar5 + -0x300 >> 1) + 0x40;
  ExceptionList = local_c;
  return param_1;
}


