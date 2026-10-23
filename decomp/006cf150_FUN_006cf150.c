// FUN_006cf150 @ 6cf150 size=1500

undefined4 * __thiscall FUN_006cf150(undefined4 *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  void *pvVar8;
  int *piVar9;
  undefined4 *puVar10;
  char *pcVar11;
  void *unaff_ESI;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d90aa;
  pvStack_c = ExceptionList;
  uVar15 = 0;
  ExceptionList = &pvStack_c;
  uVar6 = DAT_00bd1bac;
  uVar2 = FUN_004136a0(s_eurostilecond20bold_bmp_0082f024);
  uVar14 = 0x100;
  iVar3 = FUN_005841a0(0x100,uVar2,uVar6,uVar15);
  FUN_00437e60(param_2,param_3,iVar3 - param_2,uVar14,uVar2,uVar6,uVar15);
  *param_1 = &PTR_FUN_007f7414;
  param_1[2] = &PTR_LAB_007f7410;
  param_1[3] = &PTR_LAB_007f740c;
  *(undefined1 *)((int)param_1 + 0x52) = 1;
  local_4 = 0;
  iVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  iVar7 = DAT_00bd1500;
  puVar10 = (undefined4 *)((int)param_1 + 0xd6);
  iVar12 = 0x20;
  iVar3 = *(int *)(DAT_00bd1500 + 0xb70);
  piVar5 = (int *)(DAT_00bd1500 + 0x3cc);
  do {
    puVar10[-0x20] = 0;
    *puVar10 = 0xffffffff;
    if (*piVar5 < 0) {
      *piVar5 = 0;
    }
    if ((char)piVar5[1] != '\0') {
      *piVar5 = 0;
    }
    puVar10 = puVar10 + 1;
    piVar5 = (int *)((int)piVar5 + 0x3e);
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  local_24 = 0;
  if (0 < iVar3) {
    pcVar11 = (char *)(iVar7 + 0x3d7);
    piVar5 = (int *)((int)param_1 + 0x56);
    do {
      if ((&DAT_0089cad8)[*(int *)(pcVar11 + -0xb)] == 0) {
        *pcVar11 = '\0';
      }
      else {
        uVar6 = FUN_004af740(*(int *)(pcVar11 + -0xb));
        iVar7 = FUN_004129c4(uVar6);
        uVar13 = iVar7 + 4U & 0xfffffffc;
        pvVar8 = operator_new(0xaa);
        local_4._0_1_ = 1;
        if (pvVar8 == (void *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)FUN_00432df0(uVar13 * 4,*(int *)(iVar4 + 0x10) + 1,0x10);
        }
        *piVar5 = (int)piVar9;
        local_4 = (uint)local_4._1_3_ << 8;
        (**(code **)(*piVar9 + 0x18))
                  (param_2 + 2,
                   ((param_3 - (*(int *)(iVar4 + 0x10) + 1) * local_24) - *(int *)(iVar4 + 0x10)) +
                   1);
        *(undefined1 *)(*piVar5 + 0xa2) = 0;
        *(undefined1 *)(*piVar5 + 0x68) = 1;
        *(undefined4 *)(*piVar5 + 0x88) = 0xffffffff;
        iVar7 = *(int *)(*piVar5 + 0x62);
        uVar2 = FUN_00584270(0,0xff,0);
        FUN_00407e90(uVar2);
        uVar14 = 0;
        *(undefined1 *)(iVar7 + 0x252) = 1;
        uVar2 = FUN_00584270(0x80,0x80,0x80);
        FUN_00413483(uVar6,0,0,iVar7,uVar2,uVar14);
        uVar14 = 0;
        uVar2 = FUN_00584270(0xff,0xff,0xff);
        FUN_00413483(uVar6,uVar13,0,iVar7,uVar2,uVar14);
        uVar14 = 0;
        uVar2 = FUN_00584270(0xff,0xff,0);
        FUN_00413483(uVar6,uVar13 * 2,0,iVar7,uVar2,uVar14);
        uVar14 = 0;
        uVar2 = FUN_00584270(0x40,0x40,0x40);
        FUN_00413483(uVar6,uVar13 * 3,0,iVar7,uVar2,uVar14);
        if (*pcVar11 == '\x01') {
          FUN_00433950();
        }
        if (local_24 == *(uint *)(DAT_00bd1500 + 900)) {
          piVar9 = (int *)*piVar5;
          if (*(char *)((int)piVar9 + 0xa2) != '\0') {
            FUN_00433930();
          }
          (**(code **)(*piVar9 + 0x60))();
          *(undefined1 *)((int)piVar9 + 0x86) = 1;
        }
      }
      local_24 = local_24 + 1;
      piVar5 = piVar5 + 1;
      pcVar11 = pcVar11 + 0x3e;
    } while ((int)local_24 < iVar3);
  }
  uVar1 = FUN_00584270(0xd0,0xe8,0xf8);
  *(undefined2 *)(param_1 + 0x15) = uVar1;
  *(undefined1 *)((int)param_1 + 0x52) = 1;
  *(int *)((int)param_1 + 0x176) = param_2 + -8;
  *(uint *)((int)param_1 + 0x172) = (param_3 - (*(int *)(iVar4 + 0x10) + 1) * local_24) + -0x20;
  iVar7 = FUN_005841b0();
  iVar3 = *(int *)((int)param_1 + 0x176);
  *(int *)((int)param_1 + 0x16a) = iVar7 - *(int *)((int)param_1 + 0x172);
  pvVar8 = operator_new(0x1aa);
  local_4._0_1_ = 2;
  if (pvVar8 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uVar14 = 0;
    uVar6 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar2 = FUN_0042b6c9(s_CHAT_ALL_0086b928);
    piVar5 = (int *)FUN_0043acc0(uVar2,uVar6,uVar14);
  }
  *(int **)((int)param_1 + 0x162) = piVar5;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar5 + 0x18))(iVar3,*(int *)((int)param_1 + 0x172) + 4);
  iVar7 = FUN_00415bd0();
  iVar3 = iVar3 + iVar7;
  pvVar8 = operator_new(0x1aa);
  pvStack_c._0_1_ = 3;
  if (pvVar8 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uVar14 = 0;
    uVar6 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar2 = FUN_0042b6c9(s_CHAT_NONE_0086b91c);
    piVar5 = (int *)FUN_0043acc0(uVar2,uVar6,uVar14);
  }
  *(int **)((int)param_1 + 0x166) = piVar5;
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  (**(code **)(*piVar5 + 0x18))(iVar3,*(int *)((int)param_1 + 0x172) + 4);
  iVar7 = FUN_00415bd0();
  iVar3 = iVar3 + iVar7;
  puStack_8 = operator_new(0x1aa);
  if (puStack_8 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uVar14 = 0;
    uVar6 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar2 = FUN_0042b6c9(s_CHAT_ALLIES_0086b910);
    piVar5 = (int *)FUN_0043acc0(uVar2,uVar6,uVar14);
  }
  *(int **)((int)param_1 + 0x15e) = piVar5;
  (**(code **)(*piVar5 + 0x18))(iVar3,*(int *)((int)param_1 + 0x172) + 4);
  iVar7 = FUN_00415bd0();
  iVar3 = iVar3 + iVar7;
  pvVar8 = operator_new(0x1aa);
  if (pvVar8 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uVar14 = 0;
    uVar6 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar2 = FUN_0042b6c9(s_CHAT_ENEMY_0086b904);
    piVar5 = (int *)FUN_0043acc0(uVar2,uVar6,uVar14);
  }
  *(int **)((int)param_1 + 0x15a) = piVar5;
  (**(code **)(*piVar5 + 0x18))(iVar3,*(int *)((int)param_1 + 0x172) + 4);
  iVar7 = FUN_00415bd0();
  pvVar8 = operator_new(0x1aa);
  if (pvVar8 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uVar14 = 0;
    uVar6 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
    uVar2 = FUN_0042b6c9(s_CHAT_NEIGHBOR_0086b8f4);
    piVar5 = (int *)FUN_0043acc0(uVar2,uVar6,uVar14);
  }
  *(int **)((int)param_1 + 0x156) = piVar5;
  (**(code **)(*piVar5 + 0x18))(iVar3 + iVar7,*(int *)((int)param_1 + 0x172) + 4);
  iVar3 = FUN_005841a0();
  *(uint *)((int)param_1 + 0x16e) = iVar3 + (local_24 >> 8) * -0x100 + 7;
  ExceptionList = unaff_ESI;
  return param_1;
}


