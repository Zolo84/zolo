// FUN_0062d9a0 @ 62d9a0 size=9592

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0062d9a0(int param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  char *pcVar10;
  float fVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 extraout_ECX;
  int iVar15;
  int *piVar16;
  undefined4 uVar17;
  int iVar18;
  float10 fVar19;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  undefined4 *puStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int *piStack_5c;
  int local_40;
  int *piStack_3c;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 auStack_20 [2];
  undefined4 *puStack_18;
  undefined1 auStack_14 [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d1b21;
  pvStack_c = ExceptionList;
  local_40 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(param_1 + 0x10a) + 0x50))();
  if (*(int *)(*DAT_00d12b40 + 0x3ea) == 0) {
    FUN_00433930();
  }
  else {
    FUN_00433950();
  }
  cVar6 = FUN_00433910();
  if ((*(int *)(param_1 + 0x9b2) == 0) && (*(int *)(param_1 + 0x17a) == 0)) {
    piStack_5c = (int *)0x62da24;
    local_40 = (**(code **)(**(int **)(param_1 + 0x10a) + 4))();
  }
  cVar7 = FUN_00433910();
  if (cVar6 != cVar7) {
    uVar9 = FUN_00433910();
    *(uint *)(*DAT_00d12b40 + 0x3ea) = uVar9 & 0xff;
  }
  (**(code **)(**(int **)(param_1 + 0xde) + 0x50))();
  if (DAT_0087b630 == '\0') {
    piVar16 = *(int **)(param_1 + 0xde);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    *(undefined4 *)(*DAT_00d12b40 + 0x3ba) = 0;
  }
  if (*(int *)(*DAT_00d12b40 + 0x3ba) == 0) {
    FUN_00433930();
  }
  else {
    FUN_00433950();
  }
  cVar6 = FUN_00433910();
  if (((*(int *)(param_1 + 0x9b2) == 0) && (*(int *)(param_1 + 0x17a) == 0)) && (local_40 == 0)) {
    piStack_5c = (int *)0x62dafa;
    local_40 = (**(code **)(**(int **)(param_1 + 0xde) + 4))();
  }
  cVar7 = FUN_00433910();
  if (cVar6 != cVar7) {
    uVar9 = FUN_00433910();
    *(uint *)(*DAT_00d12b40 + 0x3ba) = uVar9 & 0xff;
    (**(code **)(**(int **)(*(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xca) + 0x8c) + 0x50))();
    (**(code **)(**(int **)(*(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xce) + 0x8c) + 0x50))();
    (**(code **)(**(int **)(*(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xd2) + 0x8c) + 0x50))();
    (**(code **)(**(int **)(*(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xd6) + 0x8c) + 0x50))();
    (**(code **)(**(int **)(*(int *)(*(int *)(DAT_00d0ca90 + 0x21e20) + 0xda) + 0x8c) + 0x50))();
    *(undefined1 *)(param_1 + 0x124) = 1;
  }
  iVar18 = 0;
  do {
    switch(iVar18) {
    case 0:
      iVar15 = *(int *)(*DAT_00d12b40 + 0x3be);
      break;
    case 1:
      iVar15 = *(int *)(*DAT_00d12b40 + 0x3c6);
      break;
    case 2:
      iVar15 = *(int *)(*DAT_00d12b40 + 0x3c2);
      break;
    case 3:
      iVar15 = *(int *)(*DAT_00d12b40 + 0x3ce);
      break;
    case 4:
      iVar15 = *(int *)(*DAT_00d12b40 + 0x3ca);
      break;
    default:
      goto switchD_0062dbcd_default;
    }
    if (iVar15 == 1) {
      FUN_00433950();
LAB_0062dc5e:
      FUN_00433950();
    }
    else {
      if (iVar15 != -1) {
switchD_0062dbcd_default:
        FUN_00433930();
        goto LAB_0062dc5e;
      }
      FUN_00433930();
      FUN_00433930();
    }
    iVar18 = iVar18 + 1;
  } while (iVar18 < 5);
  if (*(int *)(*DAT_00d12b40 + 0x3ba) == 0) {
    piVar16 = (int *)(param_1 + 0xf6);
    iVar18 = 5;
    do {
      piVar1 = (int *)piVar16[-5];
      if (*(char *)((int)piVar1 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar1 + 0x60))();
      *(undefined1 *)((int)piVar1 + 0x86) = 1;
      piVar1 = (int *)*piVar16;
      if (*(char *)((int)piVar1 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar1 + 0x60))();
      piVar16 = piVar16 + 1;
      iVar18 = iVar18 + -1;
      *(undefined1 *)((int)piVar1 + 0x86) = 1;
    } while (iVar18 != 0);
  }
  else {
    puVar13 = (undefined4 *)(param_1 + 0xf6);
    iVar18 = 5;
    do {
      (**(code **)(*(int *)puVar13[-5] + 0x50))();
      (**(code **)(*(int *)*puVar13 + 0x50))();
      puVar13 = puVar13 + 1;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
    iVar18 = 0;
    do {
      uVar17 = 0;
      bVar2 = false;
      cVar6 = FUN_00433910();
      if (((*(int *)(param_1 + 0x9b2) == 0) && (*(int *)(param_1 + 0x17a) == 0)) && (local_40 == 0))
      {
        piStack_5c = (int *)0x62dcee;
        local_40 = (**(code **)(**(int **)(param_1 + 0xe2 + iVar18 * 4) + 4))();
      }
      cVar7 = FUN_00433910();
      if (cVar6 != cVar7) {
        bVar2 = true;
        cVar6 = FUN_00433910();
        if (cVar6 == '\0') {
          uVar17 = 0;
        }
        else {
          uVar17 = 1;
          FUN_00433950();
          if (iVar18 == 0) {
            if (*(int *)(*DAT_00d12b40 + 0x3c2) == 1) {
              *(undefined4 *)(*DAT_00d12b40 + 0x3c2) = 0;
              FUN_00433930();
            }
          }
          else if ((iVar18 == 2) && (*(int *)(*DAT_00d12b40 + 0x3be) == 1)) {
            *(undefined4 *)(*DAT_00d12b40 + 0x3be) = 0;
            FUN_00433930();
          }
        }
      }
      cVar6 = FUN_00433910();
      if (((*(int *)(param_1 + 0x9b2) == 0) && (*(int *)(param_1 + 0x17a) == 0)) && (local_40 == 0))
      {
        piStack_5c = (int *)0x62ddb5;
        local_40 = (**(code **)(**(int **)(param_1 + 0xf6 + iVar18 * 4) + 4))();
      }
      cVar7 = FUN_00433910();
      if (cVar6 == cVar7) {
        if (bVar2) goto LAB_0062ddf6;
      }
      else {
        cVar6 = FUN_00433910();
        if (cVar6 == '\0') {
          uVar17 = 0xffffffff;
          FUN_00433930();
        }
        else {
          uVar17 = 0;
        }
LAB_0062ddf6:
        switch(iVar18) {
        case 0:
          *(undefined4 *)(*DAT_00d12b40 + 0x3be) = uVar17;
          break;
        case 1:
          *(undefined4 *)(*DAT_00d12b40 + 0x3c6) = uVar17;
          break;
        case 2:
          *(undefined4 *)(*DAT_00d12b40 + 0x3c2) = uVar17;
          break;
        case 3:
          *(undefined4 *)(*DAT_00d12b40 + 0x3ce) = uVar17;
          break;
        case 4:
          *(undefined4 *)(*DAT_00d12b40 + 0x3ca) = uVar17;
        }
        *(undefined1 *)(param_1 + 0x124) = 1;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < 5);
  }
  if (((*(int *)(*DAT_00d12b40 + 0x3ba) != 0) && (*(char *)(param_1 + 0x124) != '\0')) &&
     (DAT_0087b630 != '\0')) {
    FUN_0046e080();
  }
  if (local_40 == 0) {
    if (*(int **)(param_1 + 0x17a) != (int *)0x0) {
      piStack_5c = (int *)0x62df06;
      local_40 = (**(code **)(**(int **)(param_1 + 0x17a) + 4))();
      goto LAB_0062df0c;
    }
LAB_0062df34:
    if (*(int **)(param_1 + 0x9b2) == (int *)0x0) {
LAB_0062df72:
      piStack_5c = (int *)0x62df81;
      local_40 = (**(code **)(*(int *)(*(int *)(param_1 + 0x112) + 0x12) + 4))();
    }
    else {
      piStack_5c = (int *)0x62df44;
      local_40 = (**(code **)(**(int **)(param_1 + 0x9b2) + 4))();
LAB_0062df4a:
      if (local_40 == 1) {
        if (*(undefined4 **)(param_1 + 0x9b2) != (undefined4 *)0x0) {
          piStack_5c = (int *)0x62df5e;
          (**(code **)**(undefined4 **)(param_1 + 0x9b2))();
        }
        *(undefined4 *)(param_1 + 0x9b2) = 0;
        local_40 = 3;
      }
      else if (local_40 == 0) goto LAB_0062df72;
    }
  }
  else {
LAB_0062df0c:
    if (local_40 != 1) {
      if (local_40 == 0) goto LAB_0062df34;
      goto LAB_0062df4a;
    }
    if (*(undefined4 **)(param_1 + 0x17a) != (undefined4 *)0x0) {
      piStack_5c = (int *)0x62df20;
      (**(code **)**(undefined4 **)(param_1 + 0x17a))();
    }
    *(undefined4 *)(param_1 + 0x17a) = 0;
    local_40 = 3;
  }
  (**(code **)(**(int **)(param_1 + 0x182) + 0x50))();
  (**(code **)(**(int **)(param_1 + 0x17e) + 0x50))();
  (**(code **)(**(int **)(param_1 + 0x186) + 0x50))();
  (**(code **)(**(int **)(param_1 + 0x18e) + 0x50))();
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if (0 < DAT_008776b0) {
    pcVar10 = (char *)(*(int *)(param_1 + 0x90) + 0x4b5c);
    iVar18 = DAT_008776b0;
    bVar2 = false;
    do {
      if (*pcVar10 != '\0') {
        bVar2 = true;
      }
      pcVar10 = pcVar10 + 1;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  iVar18 = 0;
  if (0 < DAT_0087769c) {
    piStack_3c = &DAT_00d7676a;
    piStack_38 = &DAT_00dbd1a2;
    do {
      if (*(char *)(*(int *)(param_1 + 0x90) + 0x4ad0 + iVar18) != '\0') {
        (**(code **)(*piStack_3c + 4))();
        iVar15 = piStack_3c[2];
        while (iVar15 != 0) {
          iVar15 = *(int *)(iVar15 + 4);
          fStack_60 = 9.080319e-39;
          piStack_5c = (int *)iVar18;
          cVar6 = FUN_004a34e0();
          if (cVar6 != '\0') {
            iVar12 = *piStack_38;
            if (iVar12 < 0xc) {
              bVar3 = true;
            }
            else if ((iVar12 < 0x15) || (iVar12 == 0x8c)) {
              if ((0xb < iVar12) && ((iVar12 < 0x15 || (iVar12 == 0x8c)))) {
                bVar5 = true;
              }
            }
            else {
              bVar4 = true;
            }
          }
        }
      }
      iVar18 = iVar18 + 1;
      piStack_3c = (int *)((int)piStack_3c + 0x12);
      piStack_38 = piStack_38 + 1;
    } while (iVar18 < DAT_0087769c);
  }
  if (!bVar2) {
    piVar16 = *(int **)(param_1 + 0x182);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  if (!bVar3) {
    piVar16 = *(int **)(param_1 + 0x17e);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  if (!bVar4) {
    piVar16 = *(int **)(param_1 + 0x186);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  if (!bVar5) {
    piVar16 = *(int **)(param_1 + 0x18e);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  if (DAT_0087b630 == '\0') {
    piVar16 = *(int **)(param_1 + 0x17e);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x186);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x18e);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x182);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x9b6);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  if (local_40 == 0) {
    piStack_5c = (int *)0x62e236;
    local_40 = (**(code **)(**(int **)(param_1 + 0x17e) + 4))();
    if (local_40 == 0) {
      piStack_5c = (int *)0x62e24c;
      local_40 = (**(code **)(**(int **)(param_1 + 0x186) + 4))();
      if (local_40 == 0) {
        piStack_5c = (int *)0x62e262;
        local_40 = (**(code **)(**(int **)(param_1 + 0x18e) + 4))();
        if (local_40 == 0) {
          piStack_5c = (int *)0x62e278;
          local_40 = (**(code **)(**(int **)(param_1 + 0x182) + 4))();
          if (local_40 == 0) {
            piStack_5c = (int *)0x62e28e;
            local_40 = (**(code **)(**(int **)(param_1 + 0x176) + 4))();
          }
        }
      }
    }
  }
  if ((*(int *)(param_1 + 0x9b2) == 0) && (*(char *)(*(int *)(param_1 + 0x176) + 0x96) != '\0')) {
    if (*(undefined4 **)(param_1 + 0x17a) != (undefined4 *)0x0) {
      piStack_5c = (int *)0x62e2c8;
      (**(code **)**(undefined4 **)(param_1 + 0x17a))();
    }
    piStack_5c = (int *)0x62e2d2;
    puStack_18 = operator_new(0xa4);
    uStack_4 = 0;
    if (puStack_18 == (undefined4 *)0x0) {
      uVar17 = 0;
    }
    else {
      piStack_5c = (int *)0x62e2f3;
      uVar17 = FUN_005f3f20();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x17a) = uVar17;
  }
  if (local_40 == 0) {
    piStack_5c = (int *)0x62e315;
    local_40 = (**(code **)(**(int **)(param_1 + 0x9b6) + 4))();
  }
  if (*(char *)(*(int *)(param_1 + 0x9b6) + 0x96) != '\0') {
    if (*(undefined4 **)(param_1 + 0x9b2) != (undefined4 *)0x0) {
      piStack_5c = (int *)0x62e33b;
      (**(code **)**(undefined4 **)(param_1 + 0x9b2))();
    }
    piStack_5c = (int *)0x62e345;
    puStack_18 = operator_new(0x112);
    uStack_4 = 1;
    if (puStack_18 == (undefined4 *)0x0) {
      uVar17 = 0;
    }
    else {
      piStack_5c = (int *)0x62e366;
      uVar17 = FUN_00627880();
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x9b2) = uVar17;
  }
  piStack_5c = (int *)0x7;
  fStack_60 = 9.0815e-39;
  cVar6 = FUN_0049f030();
  if (cVar6 == '\0') {
    piVar16 = *(int **)(param_1 + 0x18a);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x18a) + 0x50))();
  }
  piStack_5c = (int *)0x6;
  fStack_60 = 9.081597e-39;
  cVar6 = FUN_0049f030();
  if (cVar6 == '\0') {
    piVar16 = *(int **)(param_1 + 0x192);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x192) + 0x50))();
  }
  piStack_5c = (int *)0x4;
  fStack_60 = 9.081693e-39;
  cVar6 = FUN_0049f030();
  if (cVar6 == '\0') {
    piVar16 = *(int **)(param_1 + 0x196);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x196) + 0x50))();
  }
  piStack_5c = (int *)0x8;
  fStack_60 = 9.08179e-39;
  cVar6 = FUN_0049f030();
  if (cVar6 == '\0') {
    piVar16 = *(int **)(param_1 + 0x19a);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x19a) + 0x50))();
  }
  piStack_5c = (int *)0x9;
  fStack_60 = 9.081887e-39;
  cVar6 = FUN_0049f030();
  if (cVar6 == '\0') {
    piVar16 = *(int **)(param_1 + 0x19e);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x19e) + 0x50))();
  }
  piStack_5c = (int *)&DAT_0000000a;
  fStack_60 = 9.081984e-39;
  cVar6 = FUN_0049f030();
  if (cVar6 == '\0') {
    piVar16 = *(int **)(param_1 + 0x1a2);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x1a2) + 0x50))();
  }
  if (*(char *)(*(int *)(param_1 + 0x90) + 0xe313) == '\0') {
    piVar16 = *(int **)(param_1 + 0x1a6);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x1a6) + 0x50))();
  }
  if (DAT_0087b630 == '\0') {
    piVar16 = *(int **)(param_1 + 0x19a);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x19e);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x1a2);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x1a6);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x1aa);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x18a);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x192);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x196);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  if (_DAT_00d7d240 == _DAT_007e3374) {
    piVar16 = *(int **)(param_1 + 0x19e);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x1a2);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x18a);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x192);
    cVar6 = *(char *)((int)piVar16 + 0xa2);
joined_r0x0062e80a:
    if (cVar6 != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  else if (_DAT_00d7d240 == _DAT_007e5e34) {
    piVar16 = *(int **)(param_1 + 0x19a);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x19e);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x1a2);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x18a);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x192);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
    piVar16 = *(int **)(param_1 + 0x196);
    cVar6 = *(char *)((int)piVar16 + 0xa2);
    goto joined_r0x0062e80a;
  }
  if (local_40 == 0) {
    piStack_5c = (int *)0x62e835;
    local_40 = (**(code **)(**(int **)(param_1 + 0x18a) + 4))();
    if (local_40 == 0) {
      piStack_5c = (int *)0x62e84f;
      local_40 = (**(code **)(**(int **)(param_1 + 0x192) + 4))();
      if (local_40 == 0) {
        piStack_5c = (int *)0x62e869;
        local_40 = (**(code **)(**(int **)(param_1 + 0x196) + 4))();
        if (local_40 == 0) {
          piStack_5c = (int *)0x62e87f;
          local_40 = (**(code **)(**(int **)(param_1 + 0x19a) + 4))();
          if (local_40 == 0) {
            piStack_5c = (int *)0x62e895;
            local_40 = (**(code **)(**(int **)(param_1 + 0x19e) + 4))();
            if (local_40 == 0) {
              piStack_5c = (int *)0x62e8ab;
              local_40 = (**(code **)(**(int **)(param_1 + 0x1a2) + 4))();
              if (local_40 == 0) {
                piStack_5c = (int *)0x62e8c1;
                local_40 = (**(code **)(**(int **)(param_1 + 0x1a6) + 4))();
                if (local_40 == 0) {
                  piStack_5c = (int *)0x62e8d7;
                  local_40 = (**(code **)(**(int **)(param_1 + 0x1aa) + 4))();
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x17e) + 0x96) != '\0') {
    *(undefined1 *)(param_1 + 0x123) = 0;
    *(undefined1 *)(param_1 + 0x170) = 0;
    *(undefined1 *)(param_1 + 0x122) = 1;
    *(undefined4 *)(param_1 + 0x126) = 0;
    FUN_00635a60();
  }
  if (*(char *)(*(int *)(param_1 + 0x18e) + 0x96) != '\0') {
    *(undefined1 *)(param_1 + 0x122) = 1;
    *(undefined1 *)(param_1 + 0x123) = 0;
    *(undefined1 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x126) = 1;
    FUN_00635a60();
  }
  if (*(char *)(*(int *)(param_1 + 0x186) + 0x96) != '\0') {
    *(undefined1 *)(param_1 + 0x122) = 1;
    *(undefined1 *)(param_1 + 0x123) = 0;
    *(undefined1 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x126) = 2;
    FUN_00635a60();
  }
  if (*(char *)(*(int *)(param_1 + 0x182) + 0x96) != '\0') {
    *(undefined1 *)(param_1 + 0x122) = 1;
    *(undefined1 *)(param_1 + 0x123) = 0;
    *(undefined1 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x126) = 3;
    FUN_00635a60();
  }
  if (*(char *)(*(int *)(param_1 + 0x196) + 0x96) != '\0') {
    piStack_5c = (int *)0x62e9ce;
    FUN_0062ff40();
  }
  if (*(char *)(*(int *)(param_1 + 0x192) + 0x96) != '\0') {
    piStack_5c = (int *)0x62e9e7;
    FUN_0062ff40();
  }
  if (*(char *)(*(int *)(param_1 + 0x18a) + 0x96) != '\0') {
    piStack_5c = (int *)0x62ea00;
    FUN_0062ff40();
  }
  if (*(char *)(*(int *)(param_1 + 0x19a) + 0x96) != '\0') {
    piStack_5c = (int *)0x62ea19;
    FUN_0062ff40();
  }
  if (*(char *)(*(int *)(param_1 + 0x19e) + 0x96) != '\0') {
    piStack_5c = (int *)0x62ea32;
    FUN_0062ff40();
  }
  if (*(char *)(*(int *)(param_1 + 0x1a2) + 0x96) != '\0') {
    piStack_5c = (int *)0x62ea4b;
    FUN_0062ff40();
  }
  if (*(char *)(*(int *)(param_1 + 0x1aa) + 0x96) != '\0') {
    piStack_5c = (int *)0x62ea64;
    FUN_0062ff40();
  }
  if (*(char *)(*(int *)(param_1 + 0x1a6) + 0x96) != '\0') {
    piStack_5c = (int *)0x62ea7d;
    FUN_0062ff40();
  }
  if (*(char *)(param_1 + 0x123) != '\0') {
    iVar15 = 0;
    iVar18 = *(int *)(*(int *)(param_1 + 0x90) + 0x3b7e);
    while (iVar18 != 0) {
      iVar18 = *(int *)(iVar18 + 8);
      cVar6 = FUN_004f2390();
      if (cVar6 == '\0') {
        iVar15 = iVar15 + 1;
      }
    }
    iVar18 = (**(code **)(**(int **)(param_1 + 0x11e) + 4))();
    if (iVar18 == iVar15) {
      iVar18 = *(int *)(*(int *)(param_1 + 0x11e) + 4);
      do {
        if (iVar18 == 0) goto LAB_0062eafb;
        iVar18 = *(int *)(iVar18 + 8);
        piStack_5c = (int *)0x62eae0;
        iVar15 = FUN_00428ee0();
      } while ((iVar15 != 0) && (iVar15 != 8));
    }
    FUN_00635e60();
LAB_0062eafb:
    piStack_5c = (int *)0x62eb0b;
    (**(code **)(**(int **)(param_1 + 0x136) + 4))();
    piStack_5c = param_2;
    fStack_60 = 9.084213e-39;
    (**(code **)(**(int **)(param_1 + 0x13a) + 4))();
    if (local_40 == 0) {
      piStack_5c = (int *)0x62eb31;
      local_40 = (**(code **)(*(int *)(*(int *)(param_1 + 0x11e) + 0x12) + 4))();
    }
    goto LAB_0062f89b;
  }
  if (*(char *)(param_1 + 0x170) == '\0') {
    if (local_40 == 0) {
      piStack_5c = (int *)0x62f177;
      local_40 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10e) + 0x12) + 4))();
      if (local_40 == 0) {
        piStack_5c = (int *)0x62f18b;
        local_40 = (**(code **)(**(int **)(param_1 + 0x136) + 4))();
        if (local_40 == 0) {
          piStack_5c = (int *)0x62f19f;
          local_40 = (**(code **)(**(int **)(param_1 + 0x13a) + 4))();
        }
      }
    }
    if (*(char *)(*(int *)(param_1 + 0x13a) + 0x96) != '\0') {
      *(undefined1 *)(param_1 + 0x122) = 0;
      *(undefined1 *)(param_1 + 0x123) = 1;
    }
    iVar18 = *(int *)(param_1 + 0x126);
    iVar15 = 0;
    if ((((iVar18 == 0) || (iVar18 == 1)) || (iVar18 == 2)) &&
       ((iVar12 = *(int *)(param_1 + 0x13e), iVar12 < 0x8c && (-1 < iVar12)))) {
      iVar15 = *(int *)(&DAT_00d7c830 + iVar12 * 4);
    }
    iVar14 = 0;
    iVar12 = 0;
    if (0 < DAT_008776b0) {
      do {
        iVar14 = iVar14 + (uint)*(byte *)(param_1 + 0x88e + iVar12);
        iVar12 = iVar12 + 1;
      } while (iVar12 < DAT_008776b0);
    }
    if ((((iVar18 == 0) || (iVar18 == 1)) || (iVar18 == 2)) && (iVar18 = 0, 0 < DAT_008776b0)) {
      puVar13 = (undefined4 *)(param_1 + 0x65e);
      iVar12 = DAT_008776b0;
      do {
        if ((iVar14 < iVar15) || (*(char *)(iVar18 + 0x88e + param_1) != '\0')) {
          if (*(char *)(iVar18 + 0x88e + param_1) == '\0') {
            FUN_00433930();
          }
          else {
            FUN_00433950();
          }
          cVar6 = FUN_00433910();
          if (local_40 == 0) {
            piStack_5c = (int *)0x62f288;
            local_40 = (**(code **)(*(int *)*puVar13 + 4))();
          }
          cVar7 = FUN_00433910();
          iVar12 = DAT_008776b0;
          if (cVar6 != cVar7) {
            uVar8 = FUN_00433910();
            *(undefined1 *)(iVar18 + 0x88e + param_1) = uVar8;
            iVar12 = *(int *)(puVar13[-0x8c] + 0x52);
            uVar8 = FUN_00433910();
            *(undefined1 *)(param_1 + 0x91a + iVar12) = uVar8;
            iVar12 = DAT_008776b0;
          }
        }
        iVar18 = iVar18 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar18 < iVar12);
    }
    if (*(char *)(*(int *)(param_1 + 0x136) + 0x96) != '\0') {
      *(undefined1 *)(param_1 + 0x123) = 1;
      *(undefined1 *)(param_1 + 0x122) = 0;
      FUN_00638070();
      if (*(int *)(param_1 + 0x126) == 3) {
        iVar18 = 0;
        if (0 < *(int *)(param_1 + 0x14e)) {
          do {
            piStack_5c = *(int **)(param_1 + 0x160);
            uVar17 = *(undefined4 *)(DAT_00d0ca90 + 0x117de);
            fStack_60 = (float)((int)*(char *)(param_1 + 0x15b) +
                               ((int)*(char *)(param_1 + 0x15c) + *(short *)(param_1 + 0x15e) * 0xc)
                               * 0x1e);
            fStack_64 = *(float *)(param_1 + 0x14a);
            fStack_68 = *(float *)(param_1 + 0x146);
            uStack_6c = CONCAT22((short)((uint)fStack_64 >> 0x10),SUB42(fStack_68,0));
            uStack_70 = *(undefined4 *)(param_1 + 0x142);
            uStack_74 = 0x62f373;
            uStack_6c = FUN_0044e100();
            uStack_74 = *(undefined4 *)(param_1 + 0x142);
            puStack_78 = auStack_20;
            uStack_7c = 0x62f386;
            uStack_70 = uVar17;
            puStack_80 = (undefined1 *)FUN_00428eb0();
            puStack_18 = &uStack_7c;
            uStack_84 = 0x62f393;
            uStack_7c = extraout_ECX;
            FUN_00446d10();
            puStack_80 = (undefined1 *)0x62f39e;
            FUN_0045df90();
            iVar18 = iVar18 + 1;
          } while (iVar18 < *(int *)(param_1 + 0x14e));
        }
      }
      else {
        puStack_28 = (undefined4 *)0x0;
        if (0 < *(int *)(param_1 + 0x14e)) {
          do {
            iStack_34 = 1;
            if (1 < DAT_008776b0) {
              do {
                if (*(char *)(param_1 + 0x91a + iStack_34) != '\0') break;
                iStack_34 = iStack_34 + 1;
              } while (iStack_34 < DAT_008776b0);
            }
            iStack_30 = iStack_34;
            if (DAT_008776b0 <= iStack_34) {
              iStack_30 = 0;
            }
            do {
              iVar18 = iStack_34;
              iStack_34 = iVar18 + 1;
              if (DAT_008776b0 <= iStack_34) break;
            } while (*(char *)(param_1 + 0x91a + iStack_34) == '\0');
            piStack_38 = (int *)(iVar18 + 2);
            if (DAT_008776b0 <= iStack_34) {
              iStack_34 = 0;
            }
            for (; ((int)piStack_38 < DAT_008776b0 &&
                   (*(char *)(param_1 + 0x91a + (int)piStack_38) == '\0'));
                piStack_38 = (int *)((int)piStack_38 + 1)) {
            }
            piStack_3c = piStack_38;
            if (DAT_008776b0 <= (int)piStack_38) {
              piStack_3c = (int *)0x0;
            }
            do {
              iVar18 = (int)piStack_38;
              piStack_38 = (int *)(iVar18 + 1);
              if (DAT_008776b0 <= (int)piStack_38) break;
            } while (*(char *)(param_1 + 0x91a + (int)piStack_38) == '\0');
            iVar18 = iVar18 + 2;
            if (DAT_008776b0 <= (int)piStack_38) {
              piStack_38 = (int *)0x0;
            }
            for (; (iVar18 < DAT_008776b0 && (*(char *)(param_1 + 0x91a + iVar18) == '\0'));
                iVar18 = iVar18 + 1) {
            }
            if (DAT_008776b0 <= iVar18) {
              iVar18 = 0;
            }
            piStack_5c = (int *)0x62f48d;
            puVar13 = (undefined4 *)FUN_0044c4a0();
            piStack_5c = (int *)0x62f49f;
            uVar17 = FUN_0044c4a0();
            piStack_5c = (int *)0x62f4b1;
            puStack_18 = (undefined4 *)FUN_0044c4a0();
            piStack_5c = (int *)0x62f4c5;
            auStack_20[0] = FUN_0044c4a0();
            piStack_5c = (int *)0x62f4d5;
            fVar11 = (float)FUN_0044c4a0();
            if (*(int *)(param_1 + 0x14a) < 2) {
              piStack_5c = (int *)DAT_00d0ca90;
              fStack_60 = 9.087778e-39;
              puStack_2c = (undefined1 *)FUN_005bf284();
            }
            else {
              puStack_2c = &DAT_0088ebf8;
            }
            uStack_84 = *(undefined4 *)(DAT_00d0ca90 + 0x117de);
            piStack_5c = *(int **)(param_1 + 0x160);
            fStack_60 = (float)((int)*(char *)(param_1 + 0x15b) +
                               ((int)*(char *)(param_1 + 0x15c) + *(short *)(param_1 + 0x15e) * 0xc)
                               * 0x1e);
            fStack_64 = *(float *)(param_1 + 0x14a);
            uStack_6c = auStack_20[0];
            uStack_7c = *(undefined4 *)(param_1 + 0x146);
            uStack_70 = puStack_18;
            puStack_80 = puStack_2c;
            iStack_8c = (int)piStack_38;
            iStack_90 = (int)piStack_3c;
            uStack_9c = *(undefined4 *)(param_1 + 0x13e);
            iStack_94 = iStack_34;
            iStack_98 = iStack_30;
            puStack_a0 = auStack_14;
            uStack_a4 = 0x62f597;
            iStack_88 = iVar18;
            puStack_78 = puVar13;
            uStack_74 = uVar17;
            fStack_68 = fVar11;
            uVar17 = FUN_00428eb0();
            puStack_18 = &uStack_a4;
            FUN_00446d10(uVar17);
            FUN_0045dea0();
            puStack_28 = (undefined4 *)((int)puStack_28 + 1);
          } while ((int)puStack_28 < *(int *)(param_1 + 0x14e));
        }
      }
    }
    if (local_40 != 0) goto LAB_0062f89b;
    (**(code **)(**(int **)(param_1 + 0x1ca) + 0x50))();
    (**(code **)(**(int **)(param_1 + 0x1ce) + 0x50))();
    if (*(int *)(param_1 + 0x14a) < 2) {
      piVar16 = *(int **)(param_1 + 0x1ce);
      if (*(char *)((int)piVar16 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar16 + 0x60))();
      *(undefined1 *)((int)piVar16 + 0x86) = 1;
    }
    if (0x62 < *(int *)(param_1 + 0x14a)) {
      piVar16 = *(int **)(param_1 + 0x1ca);
      if (*(char *)((int)piVar16 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar16 + 0x60))();
      *(undefined1 *)((int)piVar16 + 0x86) = 1;
    }
    piStack_5c = (int *)0x62f65d;
    local_40 = (**(code **)(**(int **)(param_1 + 0x1ca) + 4))();
    if (local_40 == 0) {
      piStack_5c = (int *)0x62f671;
      local_40 = (**(code **)(**(int **)(param_1 + 0x1ce) + 4))();
    }
    if (*(char *)(*(int *)(param_1 + 0x1ca) + 0x9d) != '\0') {
      if (DAT_00bd13ef == '\0') {
        if (DAT_00bd13ee == '\0') {
          iVar18 = *(int *)(param_1 + 0x14a) + 1;
        }
        else {
          iVar18 = *(int *)(param_1 + 0x14a) + 5;
        }
      }
      else {
        if (DAT_00bd13ee != '\0') {
          *(undefined4 *)(param_1 + 0x14a) = 99;
          goto LAB_0062f6c7;
        }
        iVar18 = *(int *)(param_1 + 0x14a) + 10;
      }
      *(int *)(param_1 + 0x14a) = iVar18;
    }
LAB_0062f6c7:
    if (*(char *)(*(int *)(param_1 + 0x1ce) + 0x9d) != '\0') {
      if (DAT_00bd13ef == '\0') {
        if (DAT_00bd13ee == '\0') {
          iVar18 = *(int *)(param_1 + 0x14a) + -1;
        }
        else {
          iVar18 = *(int *)(param_1 + 0x14a) + -5;
        }
      }
      else {
        if (DAT_00bd13ee != '\0') {
          *(undefined4 *)(param_1 + 0x14a) = 1;
          goto LAB_0062f718;
        }
        iVar18 = *(int *)(param_1 + 0x14a) + -10;
      }
      *(int *)(param_1 + 0x14a) = iVar18;
    }
LAB_0062f718:
    if (*(int *)(param_1 + 0x14a) < 1) {
      *(undefined4 *)(param_1 + 0x14a) = 1;
    }
    else if (99 < *(int *)(param_1 + 0x14a)) {
      *(undefined4 *)(param_1 + 0x14a) = 99;
    }
    if (local_40 != 0) goto LAB_0062f89b;
    (**(code **)(**(int **)(param_1 + 0x1d2) + 0x50))();
    (**(code **)(**(int **)(param_1 + 0x1d6) + 0x50))();
    if (*(int *)(param_1 + 0x14e) < 2) {
      piVar16 = *(int **)(param_1 + 0x1d6);
      if (*(char *)((int)piVar16 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar16 + 0x60))();
      *(undefined1 *)((int)piVar16 + 0x86) = 1;
    }
    if (0x62 < *(int *)(param_1 + 0x14e)) {
      piVar16 = *(int **)(param_1 + 0x1d2);
      if (*(char *)((int)piVar16 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar16 + 0x60))();
      *(undefined1 *)((int)piVar16 + 0x86) = 1;
    }
    piStack_5c = (int *)0x62f7c8;
    local_40 = (**(code **)(**(int **)(param_1 + 0x1d2) + 4))();
    if (local_40 == 0) {
      piStack_5c = (int *)0x62f7dc;
      local_40 = (**(code **)(**(int **)(param_1 + 0x1d6) + 4))();
    }
    if (*(char *)(*(int *)(param_1 + 0x1d2) + 0x9d) != '\0') {
      if (DAT_00bd13ef == '\0') {
        if (DAT_00bd13ee == '\0') {
          iVar18 = *(int *)(param_1 + 0x14e) + 1;
        }
        else {
          iVar18 = *(int *)(param_1 + 0x14e) + 5;
        }
      }
      else {
        if (DAT_00bd13ee != '\0') {
          *(undefined4 *)(param_1 + 0x14e) = 99;
          goto LAB_0062f82b;
        }
        iVar18 = *(int *)(param_1 + 0x14e) + 10;
      }
      *(int *)(param_1 + 0x14e) = iVar18;
    }
LAB_0062f82b:
    if (*(char *)(*(int *)(param_1 + 0x1d6) + 0x9d) != '\0') {
      if (DAT_00bd13ef == '\0') {
        if (DAT_00bd13ee == '\0') {
          iVar18 = *(int *)(param_1 + 0x14e) + -1;
        }
        else {
          iVar18 = *(int *)(param_1 + 0x14e) + -5;
        }
      }
      else {
        if (DAT_00bd13ee != '\0') {
          *(undefined4 *)(param_1 + 0x14e) = 1;
          goto LAB_0062f87a;
        }
        iVar18 = *(int *)(param_1 + 0x14e) + -10;
      }
      *(int *)(param_1 + 0x14e) = iVar18;
    }
LAB_0062f87a:
    if (*(int *)(param_1 + 0x14e) < 1) {
      *(undefined4 *)(param_1 + 0x14e) = 1;
    }
    else if (99 < *(int *)(param_1 + 0x14e)) {
      *(undefined4 *)(param_1 + 0x14e) = 99;
    }
    goto LAB_0062f89b;
  }
  if (local_40 == 0) {
    piStack_5c = (int *)0x62eb58;
    local_40 = (**(code **)(**(int **)(param_1 + 0x136) + 4))();
    if (local_40 == 0) {
      piStack_5c = (int *)0x62eb6e;
      local_40 = (**(code **)(**(int **)(param_1 + 0x13a) + 4))();
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x13a) + 0x96) != '\0') {
    *(undefined1 *)(param_1 + 0x122) = 0;
    *(undefined1 *)(param_1 + 0x123) = 1;
    *(undefined1 *)(param_1 + 0x170) = 0;
  }
  if (*(char *)(*(int *)(param_1 + 0x136) + 0x96) != '\0') {
    *(undefined1 *)(param_1 + 0x122) = 0;
    *(undefined1 *)(param_1 + 0x123) = 1;
    *(undefined1 *)(param_1 + 0x170) = 0;
    FUN_006300c0();
  }
  if (local_40 != 0) goto LAB_0062f89b;
  (**(code **)(**(int **)(param_1 + 0x1ca) + 0x50))();
  (**(code **)(**(int **)(param_1 + 0x1ce) + 0x50))();
  if (*(int *)(param_1 + 0x14a) < 2) {
    piVar16 = *(int **)(param_1 + 0x1ce);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  if (0x62 < *(int *)(param_1 + 0x14a)) {
    piVar16 = *(int **)(param_1 + 0x1ca);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  if (*(int *)(param_1 + 0x172) == 0xb) {
    iVar18 = *(int *)(DAT_00d0ca90 + 0xe316);
    iVar15 = FUN_0044e750();
    iVar15 = (iVar18 - *(int *)(param_1 + 0x152)) - iVar15;
    if ((*(int *)(param_1 + 0x14e) * *(int *)(param_1 + 0x14a) - iVar15 == 0) ||
       (iVar18 = (*(int *)(param_1 + 0x14a) + 1) * *(int *)(param_1 + 0x14e),
       iVar18 - iVar15 != 0 && iVar15 <= iVar18)) {
      piVar16 = *(int **)(param_1 + 0x1ca);
      if (*(char *)((int)piVar16 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar16 + 0x60))();
LAB_0062ed00:
      *(undefined1 *)((int)piVar16 + 0x86) = 1;
    }
  }
  else if (*(int *)(param_1 + 0x172) == 0xc) {
    iVar18 = FUN_0044e700();
    iVar18 = (10 - *(int *)(param_1 + 0x156)) - iVar18;
    if ((*(int *)(param_1 + 0x14e) * *(int *)(param_1 + 0x14a) - iVar18 == 0) ||
       (iVar15 = (*(int *)(param_1 + 0x14a) + 1) * *(int *)(param_1 + 0x14e),
       iVar15 - iVar18 != 0 && iVar18 <= iVar15)) {
      piVar16 = *(int **)(param_1 + 0x1ca);
      if (*(char *)((int)piVar16 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar16 + 0x60))();
      goto LAB_0062ed00;
    }
  }
  piStack_5c = (int *)0x62ed17;
  local_40 = (**(code **)(**(int **)(param_1 + 0x1ca) + 4))();
  if (local_40 == 0) {
    piStack_5c = (int *)0x62ed2d;
    local_40 = (**(code **)(**(int **)(param_1 + 0x1ce) + 4))();
  }
  if (*(char *)(*(int *)(param_1 + 0x1ca) + 0x9d) != '\0') {
    if (DAT_00bd13ef == '\0') {
      if (DAT_00bd13ee == '\0') {
        iVar18 = *(int *)(param_1 + 0x14a) + 1;
      }
      else {
        iVar18 = *(int *)(param_1 + 0x14a) + 5;
      }
    }
    else {
      if (DAT_00bd13ee != '\0') {
        *(undefined4 *)(param_1 + 0x14a) = 99;
        goto LAB_0062ed82;
      }
      iVar18 = *(int *)(param_1 + 0x14a) + 10;
    }
    *(int *)(param_1 + 0x14a) = iVar18;
  }
LAB_0062ed82:
  if (*(char *)(*(int *)(param_1 + 0x1ce) + 0x9d) != '\0') {
    if (DAT_00bd13ef == '\0') {
      if (DAT_00bd13ee == '\0') {
        iVar18 = *(int *)(param_1 + 0x14a) + -1;
      }
      else {
        iVar18 = *(int *)(param_1 + 0x14a) + -5;
      }
    }
    else {
      if (DAT_00bd13ee != '\0') {
        *(undefined4 *)(param_1 + 0x14a) = 1;
        goto LAB_0062edd5;
      }
      iVar18 = *(int *)(param_1 + 0x14a) + -10;
    }
    *(int *)(param_1 + 0x14a) = iVar18;
  }
LAB_0062edd5:
  if (*(int *)(param_1 + 0x172) == 0xb) {
    iVar18 = *(int *)(DAT_00d0ca90 + 0xe316);
    iVar15 = FUN_0044e750();
    iVar12 = *(int *)(param_1 + 0x14a) * *(int *)(param_1 + 0x14e);
    iVar15 = (iVar18 - *(int *)(param_1 + 0x152)) - iVar15;
    if (iVar12 - iVar15 != 0 && iVar15 <= iVar12) {
      iVar18 = *(int *)(param_1 + 0x14a);
      do {
        iVar18 = iVar18 + -1;
        iVar12 = iVar18 * *(int *)(param_1 + 0x14e);
      } while (iVar12 - iVar15 != 0 && iVar15 <= iVar12);
      *(int *)(param_1 + 0x14a) = iVar18;
    }
  }
  else if (*(int *)(param_1 + 0x172) == 0xc) {
    iVar18 = FUN_0044e700();
    iVar18 = (10 - *(int *)(param_1 + 0x156)) - iVar18;
    iVar15 = *(int *)(param_1 + 0x14a) * *(int *)(param_1 + 0x14e);
    if (iVar15 - iVar18 != 0 && iVar18 <= iVar15) {
      do {
        iVar15 = *(int *)(param_1 + 0x14a) + -1;
        *(int *)(param_1 + 0x14a) = iVar15;
        iVar15 = iVar15 * *(int *)(param_1 + 0x14e);
      } while (iVar15 - iVar18 != 0 && iVar18 <= iVar15);
    }
  }
  if (*(int *)(param_1 + 0x14a) < 1) {
    *(undefined4 *)(param_1 + 0x14a) = 1;
  }
  else if (99 < *(int *)(param_1 + 0x14a)) {
    *(undefined4 *)(param_1 + 0x14a) = 99;
  }
  if (local_40 != 0) goto LAB_0062f89b;
  (**(code **)(**(int **)(param_1 + 0x1d2) + 0x50))();
  (**(code **)(**(int **)(param_1 + 0x1d6) + 0x50))();
  if (*(int *)(param_1 + 0x14e) < 2) {
    piVar16 = *(int **)(param_1 + 0x1d6);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  if (0x62 < *(int *)(param_1 + 0x14e)) {
    piVar16 = *(int **)(param_1 + 0x1d2);
    if (*(char *)((int)piVar16 + 0xa2) != '\0') {
      FUN_00433930();
    }
    (**(code **)(*piVar16 + 0x60))();
    *(undefined1 *)((int)piVar16 + 0x86) = 1;
  }
  if (*(int *)(param_1 + 0x172) == 0xb) {
    iVar18 = *(int *)(DAT_00d0ca90 + 0xe316);
    iVar15 = FUN_0044e750();
    iVar15 = (iVar18 - *(int *)(param_1 + 0x152)) - iVar15;
    if ((*(int *)(param_1 + 0x14e) * *(int *)(param_1 + 0x14a) - iVar15 == 0) ||
       (iVar18 = (*(int *)(param_1 + 0x14e) + 1) * *(int *)(param_1 + 0x14a),
       iVar18 - iVar15 != 0 && iVar15 <= iVar18)) {
      piVar16 = *(int **)(param_1 + 0x1d2);
      if (*(char *)((int)piVar16 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar16 + 0x60))();
LAB_0062efcd:
      *(undefined1 *)((int)piVar16 + 0x86) = 1;
    }
  }
  else if (*(int *)(param_1 + 0x172) == 0xc) {
    iVar18 = FUN_0044e700();
    iVar18 = (10 - *(int *)(param_1 + 0x156)) - iVar18;
    if ((*(int *)(param_1 + 0x14e) * *(int *)(param_1 + 0x14a) - iVar18 == 0) ||
       (iVar15 = (*(int *)(param_1 + 0x14e) + 1) * *(int *)(param_1 + 0x14a),
       iVar15 - iVar18 != 0 && iVar18 <= iVar15)) {
      piVar16 = *(int **)(param_1 + 0x1d2);
      if (*(char *)((int)piVar16 + 0xa2) != '\0') {
        FUN_00433930();
      }
      (**(code **)(*piVar16 + 0x60))();
      goto LAB_0062efcd;
    }
  }
  piStack_5c = (int *)0x62efe4;
  local_40 = (**(code **)(**(int **)(param_1 + 0x1d2) + 4))();
  if (local_40 == 0) {
    piStack_5c = (int *)0x62eff8;
    local_40 = (**(code **)(**(int **)(param_1 + 0x1d6) + 4))();
  }
  if (*(char *)(*(int *)(param_1 + 0x1d2) + 0x9d) != '\0') {
    if (DAT_00bd13ef == '\0') {
      if (DAT_00bd13ee == '\0') {
        iVar18 = *(int *)(param_1 + 0x14e) + 1;
      }
      else {
        iVar18 = *(int *)(param_1 + 0x14e) + 5;
      }
    }
    else {
      if (DAT_00bd13ee != '\0') {
        *(undefined4 *)(param_1 + 0x14e) = 99;
        goto LAB_0062f04b;
      }
      iVar18 = *(int *)(param_1 + 0x14e) + 10;
    }
    *(int *)(param_1 + 0x14e) = iVar18;
  }
LAB_0062f04b:
  if (*(char *)(*(int *)(param_1 + 0x1d6) + 0x9d) != '\0') {
    if (DAT_00bd13ef == '\0') {
      if (DAT_00bd13ee == '\0') {
        iVar18 = *(int *)(param_1 + 0x14e) + -1;
      }
      else {
        iVar18 = *(int *)(param_1 + 0x14e) + -5;
      }
    }
    else {
      if (DAT_00bd13ee != '\0') {
        *(undefined4 *)(param_1 + 0x14e) = 1;
        goto LAB_0062f099;
      }
      iVar18 = *(int *)(param_1 + 0x14e) + -10;
    }
    *(int *)(param_1 + 0x14e) = iVar18;
  }
LAB_0062f099:
  if (*(int *)(param_1 + 0x172) == 0xb) {
    iVar18 = *(int *)(DAT_00d0ca90 + 0xe316);
    iVar15 = FUN_0044e750();
    iVar12 = *(int *)(param_1 + 0x14e) * *(int *)(param_1 + 0x14a);
    iVar15 = (iVar18 - *(int *)(param_1 + 0x152)) - iVar15;
    if (iVar12 - iVar15 != 0 && iVar15 <= iVar12) {
      iVar18 = *(int *)(param_1 + 0x14e);
      do {
        iVar18 = iVar18 + -1;
        iVar12 = iVar18 * *(int *)(param_1 + 0x14a);
      } while (iVar12 - iVar15 != 0 && iVar15 <= iVar12);
      *(int *)(param_1 + 0x14e) = iVar18;
    }
  }
  else if (*(int *)(param_1 + 0x172) == 0xc) {
    iVar18 = FUN_0044e700();
    iVar18 = (10 - *(int *)(param_1 + 0x156)) - iVar18;
    iVar15 = *(int *)(param_1 + 0x14e) * *(int *)(param_1 + 0x14a);
    if (iVar15 - iVar18 != 0 && iVar18 <= iVar15) {
      do {
        iVar15 = *(int *)(param_1 + 0x14e) + -1;
        *(int *)(param_1 + 0x14e) = iVar15;
        iVar15 = iVar15 * *(int *)(param_1 + 0x14a);
      } while (iVar15 - iVar18 != 0 && iVar18 <= iVar15);
    }
  }
  if (*(int *)(param_1 + 0x14e) < 1) {
    *(undefined4 *)(param_1 + 0x14e) = 1;
  }
  else if (99 < *(int *)(param_1 + 0x14e)) {
    *(undefined4 *)(param_1 + 0x14e) = 99;
  }
LAB_0062f89b:
  bVar2 = false;
  iVar18 = *(int *)(*(int *)(param_1 + 0x11a) + 4);
  do {
    if (iVar18 == 0) goto LAB_0062f8d6;
    iVar18 = *(int *)(iVar18 + 8);
    piStack_5c = (int *)0x62f8bd;
    iVar15 = FUN_00428ee0();
  } while ((iVar15 != 0) && (iVar15 != 8));
  bVar2 = true;
LAB_0062f8d6:
  iVar18 = 0;
  piVar16 = DAT_00d615f6;
  if (!bVar2) {
    while (piVar16 != (int *)0x0) {
      piVar1 = (int *)piVar16[2];
      iVar15 = *piVar16;
      piVar16 = piVar1;
      if (((((&DAT_0089cad8)[*(int *)(iVar15 + 0x16)] != 0) &&
           ((&DAT_0089cad8)[*(int *)(iVar15 + 0x1a)] != 0)) && (*(int *)(iVar15 + 0x1e) == 0)) &&
         (((&DAT_0089cad8)[*(int *)(iVar15 + 0x16)] == DAT_00d0ca90 ||
          ((&DAT_0089cad8)[*(int *)(iVar15 + 0x1a)] == DAT_00d0ca90)))) {
        iVar18 = iVar18 + 1;
      }
    }
  }
  iVar15 = (**(code **)(**(int **)(param_1 + 0x11a) + 4))();
  if ((iVar18 != iVar15) || (bVar2)) {
    FUN_00636150();
  }
  iVar15 = 1;
  iVar18 = *(int *)(*(int *)(param_1 + 0x90) + 0xe8a4);
  while (iVar18 != 0) {
    iVar18 = *(int *)(iVar18 + 8);
    piStack_5c = (int *)0x62f968;
    iVar12 = FUN_004e9370();
    if ((((_DAT_007e3380 < *(float *)(iVar12 + 0x270)) ||
         (_DAT_007e3380 < *(float *)(iVar12 + 0x278))) ||
        (_DAT_007e3380 < *(float *)(iVar12 + 0x27c))) ||
       ((_DAT_007e3380 < *(float *)(iVar12 + 0x274) || (_DAT_007e3380 < *(float *)(iVar12 + 0x280)))
       )) {
      iVar15 = iVar15 + 1;
    }
  }
  piVar16 = &DAT_0089cad8;
  do {
    iVar18 = *piVar16;
    if (((iVar18 != 0) && (iVar12 = *(int *)(*(int *)(iVar18 + 0x12da) + 0x3b30), iVar12 != 0)) &&
       (((&DAT_0089cad8)[iVar12] != 0 && ((&DAT_0089cad8)[iVar12] == *(int *)(param_1 + 0x90))))) {
      iVar18 = *(int *)(iVar18 + 0xe8a4);
      while (iVar18 != 0) {
        iVar18 = *(int *)(iVar18 + 8);
        piStack_5c = (int *)0x62fa28;
        iVar12 = FUN_004e9370();
        if ((((_DAT_007e3380 < *(float *)(iVar12 + 0x270)) ||
             (_DAT_007e3380 < *(float *)(iVar12 + 0x278))) ||
            (_DAT_007e3380 < *(float *)(iVar12 + 0x27c))) ||
           ((_DAT_007e3380 < *(float *)(iVar12 + 0x274) ||
            (_DAT_007e3380 < *(float *)(iVar12 + 0x280))))) {
          iVar15 = iVar15 + 1;
        }
      }
    }
    piVar16 = piVar16 + 1;
  } while ((int)piVar16 < 0x89d038);
  iVar18 = (**(code **)(**(int **)(param_1 + 0x112) + 4))();
  if (iVar15 != iVar18) {
    FUN_006362c0();
  }
  if (local_40 == 0) {
    piStack_5c = (int *)0x62fad1;
    local_40 = (**(code **)(*(int *)(*(int *)(param_1 + 0x11a) + 0x12) + 4))();
    if (local_40 == 0) {
      piStack_5c = (int *)0x62faeb;
      local_40 = (**(code **)(*(int *)(*(int *)(param_1 + 0x116) + 0x12) + 4))();
    }
  }
  iVar18 = *(int *)(param_1 + 0x90);
  puStack_18 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x116) + 4))();
  puVar13 = (undefined4 *)(**(code **)(*(int *)(iVar18 + 0x3b68) + 4))();
  if (puVar13 != puStack_18) {
    iVar18 = *(int *)(param_1 + 0x116);
    piVar16 = *(int **)(iVar18 + 4);
    while (piVar16 != (int *)0x0) {
      puVar13 = (undefined4 *)*piVar16;
      piVar16 = (int *)piVar16[2];
      if (puVar13 != (undefined4 *)0x0) {
        piStack_5c = (int *)0x62fb43;
        (**(code **)*puVar13)();
      }
      piStack_5c = (int *)0x62fb49;
      FUN_00796cd8();
    }
    *(undefined4 *)(iVar18 + 4) = 0;
    *(undefined4 *)(iVar18 + 8) = 0;
    *(undefined4 *)(iVar18 + 0xc) = 0;
    piVar16 = *(int **)(*(int *)(param_1 + 0x90) + 0x3b6c);
    while (piVar16 != (int *)0x0) {
      piVar1 = (int *)piVar16[2];
      iVar18 = *piVar16;
      piStack_5c = (int *)0x62fb81;
      puStack_28 = operator_new(0x34);
      uStack_4 = 2;
      puStack_18 = puStack_28;
      if (puStack_28 == (undefined4 *)0x0) {
        puStack_28 = (undefined4 *)0x0;
      }
      else {
        FUN_00433f00();
        *(undefined2 *)((int)puStack_28 + 0x2e) = 0;
        puStack_28[0xc] = 0;
        *puStack_28 = &PTR_FUN_007ef768;
        puStack_28[2] = &PTR_LAB_007ef764;
        *(undefined4 *)((int)puStack_28 + 0x2e) = *(undefined4 *)(iVar18 + 0xc);
        *(undefined2 *)((int)puStack_28 + 0x32) = *(undefined2 *)(iVar18 + 0x10);
      }
      iVar18 = *(int *)(param_1 + 0x116);
      uStack_4 = 0xffffffff;
      iVar15 = *(int *)(iVar18 + 8);
      piStack_5c = (int *)0x62fbe9;
      puVar13 = operator_new(0xe);
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        puVar13[1] = iVar15;
        *puVar13 = puStack_28;
        puVar13[2] = 0;
        *(undefined1 *)(puVar13 + 3) = 0;
      }
      iVar12 = *(int *)(iVar18 + 0xc);
      *(undefined4 **)(iVar18 + 8) = puVar13;
      *(int *)(iVar18 + 0xc) = iVar12 + 1;
      piVar16 = piVar1;
      if (iVar12 == 0) {
        *(undefined4 **)(iVar18 + 4) = puVar13;
      }
      else {
        *(undefined4 **)(iVar15 + 8) = puVar13;
      }
    }
    FUN_004353e0();
  }
  if (DAT_0087b630 != '\0') {
    piVar16 = (int *)(param_1 + 0xca);
    puStack_28 = (undefined4 *)0x5;
    do {
      if (local_40 == 0) {
        if (*(char *)(param_1 + 0xbc) == '\0') {
          *(undefined1 *)(*piVar16 + 0x82) = 1;
        }
        else {
          *(undefined1 *)(*piVar16 + 0x82) = 0;
        }
        piStack_5c = (int *)0x62fc7f;
        local_40 = (**(code **)(*(int *)*piVar16 + 4))();
        if (((*(char *)(*piVar16 + 0xb4) != '\0') || (*(char *)(*piVar16 + 0xb6) != '\0')) &&
           (cVar6 = FUN_00433910(), cVar6 == '\0')) {
          *(undefined1 *)(param_1 + 0x124) = 1;
        }
      }
      piVar16 = piVar16 + 1;
      puStack_28 = (undefined4 *)((int)puStack_28 + -1);
    } while (puStack_28 != (undefined4 *)0x0);
    piStack_3c = (int *)0x447a0000;
    piVar16 = (int *)(param_1 + 0xca);
    iVar18 = 5;
    do {
      iVar15 = *piVar16;
      piVar16 = piVar16 + 1;
      iVar18 = iVar18 + -1;
      piStack_3c = (int *)((float)piStack_3c - *(float *)(iVar15 + 0xa0));
    } while (iVar18 != 0);
    iVar15 = 5;
    piVar16 = (int *)(param_1 + 0xca);
    iVar18 = 5;
    do {
      if (*(char *)(*(int *)(*piVar16 + 0x8c) + 0x86) != '\0') {
        iVar15 = iVar15 + -1;
      }
      piVar16 = piVar16 + 1;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
    puVar13 = (undefined4 *)(param_1 + 0xca);
    iVar18 = 5;
    if (iVar15 < 1) {
      do {
        if ((float)piStack_3c != _DAT_007e3380) {
          piStack_5c = (int *)*puVar13;
          fStack_60 = 9.090988e-39;
          fVar19 = (float10)FUN_006366b0();
          piStack_3c = (int *)(float)((float10)(float)piStack_3c - fVar19);
        }
        puVar13 = puVar13 + 1;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    else {
      do {
        if ((((float)piStack_3c != _DAT_007e3380) &&
            (piVar16 = (int *)*puVar13, (char)piVar16[0x2d] == '\0')) &&
           (*(char *)((int)piVar16 + 0xb6) == '\0')) {
          fStack_60 = 9.090789e-39;
          piStack_5c = piVar16;
          fVar19 = (float10)FUN_006366b0();
          piStack_3c = (int *)(float)((float10)(float)piStack_3c - fVar19);
        }
        puVar13 = puVar13 + 1;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
      piVar16 = (int *)(param_1 + 0xca);
      iVar18 = 5;
      do {
        if ((((float)piStack_3c != _DAT_007e3380) &&
            ((*(char *)(*piVar16 + 0xb4) != '\0' || (*(char *)(*piVar16 + 0xb6) != '\0')))) &&
           (cVar6 = FUN_00433910(), cVar6 == '\0')) {
          piStack_5c = (int *)*piVar16;
          fStack_60 = 9.090921e-39;
          fVar19 = (float10)FUN_006366b0();
          piStack_3c = (int *)(float)((float10)(float)piStack_3c - fVar19);
        }
        piVar16 = piVar16 + 1;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    iVar18 = 0;
    do {
      if (*(char *)(param_1 + 0xbc) != '\0') break;
      uVar8 = FUN_00433910();
      iVar18 = iVar18 + 1;
      *(undefined1 *)(param_1 + 0xbc) = uVar8;
    } while (iVar18 < 5);
    if (((*(char *)(param_1 + 0x124) != '\0') &&
        (iVar18 = (**(code **)(*param_2 + 8))(), iVar18 == 0x18)) &&
       (*(char *)(param_1 + 0xbc) == '\0')) {
      *(undefined1 *)(param_1 + 0x124) = 0;
      piStack_5c = (int *)(*(float *)(*(int *)(param_1 + 0xd6) + 0xa0) * _DAT_007e68d0);
      fStack_60 = *(float *)(*(int *)(param_1 + 0xce) + 0xa0) * _DAT_007e68d0;
      fStack_64 = *(float *)(*(int *)(param_1 + 0xd2) + 0xa0) * _DAT_007e68d0;
      fStack_68 = *(float *)(*(int *)(param_1 + 0xca) + 0xa0) * _DAT_007e68d0;
      uStack_6c = 0x62fee4;
      FUN_0045dcb0();
    }
    *(undefined1 *)(param_1 + 0xbc) = 0;
  }
  if (local_40 == 0) {
    piStack_5c = (int *)0x62ff03;
    local_40 = FUN_0061eab0();
  }
  ExceptionList = pvStack_c;
  return local_40;
}


