// FUN_006dfa80 @ 6dfa80 size=1567

void __fastcall FUN_006dfa80(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  void *local_114 [64];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d9c6b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar6 = FUN_004136a0(s_eurostilecond18bold_bmp_0085b444);
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  iVar12 = 0;
  piVar1 = (int *)(DAT_00bd1500 + 0xb70);
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(DAT_00bd1500 + 0xb70);
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0x840) = 0;
  uVar6 = FUN_0042b6c9(s_PLAYERLAG_HEADER_0086d4e8);
  *(undefined4 *)(param_1 + 0x78) = uVar6;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  cVar5 = FUN_00582130();
  iVar13 = *piVar1;
  if (cVar5 == '\0') {
    FUN_00441c10(0,300,iVar13 * 0x10 + 0x6a,0x10,0xff,0);
    local_114[0] = operator_new(0x1aa);
    local_4 = 3;
    if (local_114[0] == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar14 = 0;
      uVar6 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
      uVar8 = FUN_0042b6c9(s_BTN_DROPCONT_0086d4d8);
      uVar6 = FUN_0043acc0(uVar8,uVar6,uVar14);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x6a) = uVar6;
    local_114[0] = operator_new(0x1aa);
    local_4 = 4;
    if (local_114[0] == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar14 = 0;
      uVar6 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
      uVar8 = FUN_0042b6c9(s_BTN_SAVEQUIT_0086d4c8);
      uVar6 = FUN_0043acc0(uVar8,uVar6,uVar14);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x66) = uVar6;
    local_114[0] = operator_new(0x1aa);
    local_4 = 5;
    if (local_114[0] == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar14 = 0;
      uVar6 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
      uVar8 = FUN_0042b6c9(s_HOST_DROP_MSG_CLIENT_BTN2_0086d4ac);
      uVar6 = FUN_0043acc0(uVar8,uVar6,uVar14);
    }
    *(undefined4 *)(param_1 + 0x6e) = uVar6;
    local_4 = 0xffffffff;
    FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
    FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
    FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
    piVar2 = *(int **)(param_1 + 0x6a);
    if (*(char *)((int)piVar2 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar2 + 0x60))();
    *(undefined1 *)((int)piVar2 + 0x86) = 1;
  }
  else {
    FUN_00441c10(0,300,iVar13 * 0x10 + 0x6a,0x10,0xff,0);
    pvVar7 = operator_new(0x1aa);
    local_4 = 0;
    if (pvVar7 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar14 = 0;
      uVar6 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
      uVar8 = FUN_0042b6c9(s_BTN_DROPCONT_0086d4d8);
      uVar6 = FUN_0043acc0(uVar8,uVar6,uVar14);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x6a) = uVar6;
    pvVar7 = operator_new(0x1aa);
    local_4 = 1;
    if (pvVar7 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar14 = 0;
      uVar6 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
      uVar8 = FUN_0042b6c9(s_BTN_SAVEQUIT_0086d4c8);
      uVar6 = FUN_0043acc0(uVar8,uVar6,uVar14);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x66) = uVar6;
    pvVar7 = operator_new(0x1aa);
    local_4 = 2;
    if (pvVar7 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar14 = 0;
      uVar6 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
      uVar8 = FUN_0042b6c9(s_HOST_DROP_MSG_CLIENT_BTN2_0086d4ac);
      uVar6 = FUN_0043acc0(uVar8,uVar6,uVar14);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x6e) = uVar6;
    FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
    FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
    FUN_00415d30(*(undefined4 *)(param_1 + 0x10));
    piVar2 = *(int **)(param_1 + 0x6a);
    if (*(char *)((int)piVar2 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar2 + 0x60))();
    *(undefined1 *)((int)piVar2 + 0x86) = 1;
  }
  pvVar7 = operator_new(0x72);
  local_4 = 6;
  if (pvVar7 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00434930(0x14,*piVar1 * 0x10 + -0x10,0,0);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5e) = uVar6;
  FUN_00434f70(*(undefined4 *)(param_1 + 0x10));
  (**(code **)(**(int **)(param_1 + 0x5e) + 0x34))(0x14,0x22);
  iVar3 = DAT_00bd1500;
  iVar13 = *(int *)(DAT_00bd1500 + 0xb70);
  *(int *)(param_1 + 0x62) = iVar13;
  if (0 < iVar13) {
    puVar9 = (undefined4 *)(iVar3 + 0x3e4);
    puVar10 = (undefined4 *)(param_1 + 0xb0);
    do {
      puVar11 = puVar10;
      if (((*(int *)(DAT_00bd1500 + 900) != puVar9[-0xd]) && (*(char *)(puVar9 + -5) == '\0')) &&
         (iVar13 = puVar9[-3] + (*(int *)(DAT_00893530 + 0x20) - *(int *)(DAT_00893530 + 0x24)),
         puVar9[-3] = iVar13, 999 < iVar13)) {
        *(int *)(param_1 + 0x840) = *(int *)(param_1 + 0x840) + 1;
        puVar10[-0xd] = puVar9[-0xd];
        puVar10[-0xc] = puVar9[-0xc];
        puVar11 = (undefined4 *)((int)puVar10 + 0x3e);
        puVar10[-0xb] = puVar9[-0xb];
        puVar10[-10] = puVar9[-10];
        puVar10[-9] = puVar9[-9];
        puVar10[-8] = puVar9[-8];
        puVar10[-7] = puVar9[-7];
        puVar10[-6] = puVar9[-6];
        *(undefined1 *)(puVar10 + -5) = *(undefined1 *)(puVar9 + -5);
        *(undefined1 *)((int)puVar10 + -0x13) = *(undefined1 *)((int)puVar9 + -0x13);
        *(undefined4 *)((int)puVar10 + -0x12) = *(undefined4 *)((int)puVar9 + -0x12);
        *(undefined1 *)((int)puVar10 + -0xe) = *(undefined1 *)((int)puVar9 + -0xe);
        *(undefined1 *)((int)puVar10 + -0xd) = *(undefined1 *)((int)puVar9 + -0xd);
        puVar10[-3] = puVar9[-3];
        puVar10[-1] = puVar9[-1];
        *puVar10 = *puVar9;
        puVar10[1] = puVar9[1];
        *(undefined1 *)(puVar10 + 2) = *(undefined1 *)(puVar9 + 2);
      }
      iVar12 = iVar12 + 1;
      puVar9 = (undefined4 *)((int)puVar9 + 0x3e);
      puVar10 = puVar11;
    } while (iVar12 < *(int *)(param_1 + 0x62));
  }
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0x840)) {
    puVar9 = (undefined4 *)(param_1 + 0x98);
    do {
      FUN_00429d20(puVar9[-3],local_114);
      puVar10 = operator_new(0x42);
      pvStack_c = (void *)0x7;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar6 = *puVar9;
        FUN_00433f00();
        pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,8);
        *puVar10 = &PTR_FUN_007f7d14;
        puVar10[2] = &PTR_LAB_007f7d10;
        *(undefined4 *)((int)puVar10 + 0x36) = uVar6;
        if (&stack0x00000000 != (undefined1 *)0x114) {
          uVar6 = FUN_007a8d6d(local_114);
          *(undefined4 *)((int)puVar10 + 0x3a) = uVar6;
        }
        *(char **)((int)puVar10 + 0x3e) = s________0086d4a4;
        uVar6 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
        *(undefined4 *)((int)puVar10 + 0x2e) = uVar6;
      }
      *(undefined4 *)((int)puVar10 + 0x16) = *(undefined4 *)(param_1 + 0x10);
      iVar12 = *(int *)(param_1 + 0x5e);
      pvStack_c = (void *)0xffffffff;
      iVar3 = *(int *)(iVar12 + 8);
      puVar11 = operator_new(0xe);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        *puVar11 = puVar10;
        puVar11[1] = iVar3;
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 0;
      }
      iVar4 = *(int *)(iVar12 + 0xc);
      *(undefined4 **)(iVar12 + 8) = puVar11;
      *(int *)(iVar12 + 0xc) = iVar4 + 1;
      if (iVar4 == 0) {
        *(undefined4 **)(iVar12 + 4) = puVar11;
      }
      else {
        *(undefined4 **)(iVar3 + 8) = puVar11;
      }
      iVar13 = iVar13 + 1;
      puVar9 = (undefined4 *)((int)puVar9 + 0x3e);
    } while (iVar13 < *(int *)(param_1 + 0x840));
  }
  FUN_004353e0();
  FUN_006d4270(param_1);
  *(undefined1 *)(DAT_00893530 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  ExceptionList = pvStack_14;
  return;
}


