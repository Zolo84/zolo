// thunk_FUN_00444340 @ 44bac0 size=5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall thunk_FUN_00444340(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  undefined4 *puStack_5c;
  int *piStack_58;
  undefined1 *puStack_54;
  undefined4 *puStack_50;
  uint uStack_4c;
  undefined **ppuStack_48;
  int *piStack_44;
  int *piStack_40;
  int iStack_3c;
  undefined **ppuStack_34;
  int *piStack_30;
  int *piStack_2c;
  int iStack_28;
  undefined **ppuStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  puStack_8 = &LAB_007bb6ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e4cf4;
  *(undefined ***)((int)param_1 + 10) = &PTR_FUN_007e4cec;
  *(undefined ***)((int)param_1 + 0xe) = &PTR_LAB_007e4cd8;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007e4cd4;
  iStack_4 = 0x21;
  puStack_50 = param_1;
  if ((undefined4 *)param_1[0xd81] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd81])();
  }
  if (*(undefined4 **)((int)param_1 + 0x11832) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x11832))();
  }
  (&DAT_0089cad8)[*(int *)((int)param_1 + 6)] = 0;
  if (*(undefined4 **)((int)param_1 + 0x11806) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x11806))();
  }
  if (*(undefined4 **)((int)param_1 + 0x12da) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x12da))();
  }
  if (*(int *)((int)param_1 + 0x12de) != 0) {
    FUN_005870b0();
    FUN_00796cd8();
  }
  if (param_1[0x48] != 0) {
    FUN_006b07f0();
    FUN_00796cd8();
  }
  piStack_58 = &DAT_0089cad8;
  do {
    puStack_5c = (undefined4 *)*piStack_58;
    if ((puStack_5c != (undefined4 *)0x0) && (puStack_5c != param_1)) {
      iVar11 = puStack_5c[0x1142];
      while (iVar11 != 0) {
        iVar11 = *(int *)(iVar11 + 8);
        iVar8 = FUN_0051c480();
        if (*(undefined4 **)(iVar8 + 0x62) == param_1) {
          FUN_0051c480();
          FUN_0050a420();
        }
        iVar8 = FUN_0051c480();
        if (*(int *)(iVar8 + 0x16) == *(int *)((int)param_1 + 6)) {
          puStack_54 = *(undefined1 **)((int)puStack_5c + 6);
          iVar8 = FUN_0051c480();
          *(undefined1 **)(iVar8 + 0x16) = puStack_54;
        }
      }
      piVar10 = (int *)puStack_5c[0x45fe];
      while (piVar10 != (int *)0x0) {
        piVar1 = (int *)piVar10[2];
        iVar11 = *piVar10;
        if (*(undefined4 **)(iVar11 + 0x62) == param_1) {
          FUN_0050a420();
        }
        piVar10 = piVar1;
        if (*(int *)(iVar11 + 0x16) == *(int *)((int)param_1 + 6)) {
          *(undefined4 *)(iVar11 + 0x16) = *(undefined4 *)((int)puStack_5c + 6);
        }
      }
    }
    piStack_58 = piStack_58 + 1;
  } while ((int)piStack_58 < 0x89d038);
  FUN_00457e10();
  ppuStack_20 = &PTR_FUN_007e4c84;
  iStack_4._0_1_ = 0x22;
  FUN_00457e10();
  ppuStack_34 = &PTR_FUN_007e4c84;
  iStack_4._0_1_ = 0x23;
  FUN_00457e10();
  ppuStack_48 = &PTR_FUN_007e4c84;
  piVar10 = (int *)param_1[0x1142];
  piVar1 = piStack_44;
  piVar5 = piStack_30;
  piVar6 = piStack_1c;
  while (piStack_1c = piVar6, piStack_30 = piVar5, piStack_44 = piVar1, piVar10 != (int *)0x0) {
    iStack_4._0_1_ = 0x24;
    piVar1 = (int *)*piVar10;
    piStack_58 = (int *)piVar10[2];
    cVar7 = (**(code **)(*piVar1 + 0x28))();
    piVar3 = piStack_18;
    if (cVar7 == '\0') {
      cVar7 = (**(code **)(*piVar1 + 0x30))();
      piVar4 = piStack_2c;
      piVar3 = piStack_40;
      if (cVar7 == '\0') {
        puStack_54 = operator_new(0xe);
        iStack_4._0_1_ = 0x27;
        if (puStack_54 == (undefined1 *)0x0) {
          piStack_2c = (int *)0x0;
        }
        else {
          piStack_2c = (int *)FUN_0045bab0(piVar1,piVar4);
        }
        iVar11 = iStack_28 + 1;
        bVar12 = iStack_28 != 0;
        piVar10 = piStack_58;
        piVar1 = piStack_44;
        piVar5 = piStack_2c;
        iStack_28 = iVar11;
        piVar6 = piStack_1c;
        if (bVar12) {
          piVar4[2] = (int)piStack_2c;
          piVar5 = piStack_30;
        }
      }
      else {
        puStack_54 = operator_new(0xe);
        iStack_4._0_1_ = 0x26;
        if (puStack_54 == (undefined1 *)0x0) {
          piStack_40 = (int *)0x0;
        }
        else {
          piStack_40 = (int *)FUN_0045bab0(piVar1,piVar3);
        }
        iVar11 = iStack_3c + 1;
        bVar12 = iStack_3c != 0;
        piVar10 = piStack_58;
        piVar1 = piStack_40;
        iStack_3c = iVar11;
        piVar5 = piStack_30;
        piVar6 = piStack_1c;
        if (bVar12) {
          piVar3[2] = (int)piStack_40;
          piVar1 = piStack_44;
        }
      }
    }
    else {
      puStack_54 = operator_new(0xe);
      iStack_4._0_1_ = 0x25;
      if (puStack_54 == (undefined1 *)0x0) {
        piStack_18 = (int *)0x0;
      }
      else {
        piStack_18 = (int *)FUN_0045bab0(piVar1,piVar3);
      }
      iVar11 = iStack_14 + 1;
      bVar12 = iStack_14 != 0;
      piVar10 = piStack_58;
      piVar1 = piStack_44;
      piVar5 = piStack_30;
      piVar6 = piStack_18;
      iStack_14 = iVar11;
      if (bVar12) {
        piVar3[2] = (int)piStack_18;
        piVar6 = piStack_1c;
      }
    }
  }
  iStack_4._0_1_ = 0x24;
  piVar10 = piStack_1c;
  while (piVar1 = piStack_44, piVar10 != (int *)0x0) {
    piVar1 = (int *)piVar10[2];
    puVar2 = (undefined4 *)*piVar10;
    *(undefined1 *)((int)puVar2 + 0x17d) = 1;
    piVar10 = piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)();
    }
  }
  while (piVar10 = piStack_30, piVar1 != (int *)0x0) {
    piVar10 = (int *)piVar1[2];
    puVar2 = (undefined4 *)*piVar1;
    *(undefined1 *)((int)puVar2 + 0x17d) = 1;
    piVar1 = piVar10;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)();
    }
  }
  while (piVar10 != (int *)0x0) {
    piVar1 = (int *)piVar10[2];
    puVar2 = (undefined4 *)*piVar10;
    *(undefined1 *)((int)puVar2 + 0x17d) = 1;
    piVar10 = piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)();
    }
  }
  iVar11 = param_1[0xa8];
  while (iVar11 != 0) {
    iVar8 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
    FUN_00796cd8(iVar11);
    iVar11 = iVar8;
  }
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  piVar10 = (int *)param_1[0x1147];
  while (piVar10 != (int *)0x0) {
    puVar2 = (undefined4 *)*piVar10;
    piVar10 = (int *)piVar10[2];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)();
    }
    FUN_00796cd8();
  }
  param_1[0x1147] = 0;
  param_1[0x1148] = 0;
  param_1[0x1149] = 0;
  piVar10 = (int *)param_1[0xedb];
  while (piVar10 != (int *)0x0) {
    puVar2 = (undefined4 *)*piVar10;
    piVar10 = (int *)piVar10[2];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)();
    }
    FUN_00796cd8();
  }
  param_1[0xedb] = 0;
  param_1[0xedc] = 0;
  param_1[0xedd] = 0;
  piVar10 = *(int **)((int)param_1 + 0x3b7e);
  while (piVar10 != (int *)0x0) {
    puVar2 = (undefined4 *)*piVar10;
    piVar10 = (int *)piVar10[2];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)();
    }
    FUN_00796cd8();
  }
  *(undefined4 *)((int)param_1 + 0x3b7e) = 0;
  *(undefined4 *)((int)param_1 + 0x3b82) = 0;
  *(undefined4 *)((int)param_1 + 0x3b86) = 0;
  piVar10 = (int *)param_1[0xd95];
  while (piVar10 != (int *)0x0) {
    puVar2 = (undefined4 *)*piVar10;
    piVar10 = (int *)piVar10[2];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)();
    }
    FUN_00796cd8();
  }
  param_1[0xd95] = 0;
  param_1[0xd96] = 0;
  param_1[0xd97] = 0;
  piVar10 = *(int **)((int)param_1 + 0x3666);
  while (piVar10 != (int *)0x0) {
    piVar1 = (int *)piVar10[2];
    puVar2 = (undefined4 *)*piVar10;
    (**(code **)(*(int *)((int)param_1 + 0x3662) + 0x18))();
    cVar7 = (**(code **)(DAT_00d77b4c + 0x24))(puVar2);
    piVar10 = piVar1;
    if ((cVar7 == '\0') && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  iVar11 = 0;
  if (0 < DAT_0087769c) {
    do {
      FUN_00796cd8();
      iVar11 = iVar11 + 1;
    } while (iVar11 < DAT_0087769c);
  }
  iVar11 = 0;
  if (0 < DAT_008776b0) {
    do {
      FUN_00796cd8();
      iVar11 = iVar11 + 1;
    } while (iVar11 < DAT_008776b0);
  }
  iVar11 = 0;
  if (0 < DAT_00dc1538) {
    do {
      puVar2 = *(undefined4 **)(*(int *)((int)param_1 + 0x452e) + iVar11 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)();
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < DAT_00dc1538);
  }
  uVar9 = FUN_0045ba60(*(undefined4 *)((int)param_1 + 0x4532),*(undefined4 *)((int)param_1 + 0x4532)
                      );
  FUN_00459d30(uVar9);
  *(undefined4 *)((int)param_1 + 0x4532) = uVar9;
  FUN_00796cd8();
  (**(code **)(param_1[0x1141] + 0x14))();
  (*(code *)ppuStack_20[4])();
  (*(code *)ppuStack_34[4])();
  (*(code *)ppuStack_48[4])();
  piVar10 = (int *)param_1[0x45fe];
  while (piVar10 != (int *)0x0) {
    piVar1 = (int *)piVar10[2];
    puStack_54 = &stack0xffffff90;
    iVar11 = *piVar10;
    piVar10 = (int *)FUN_00458160();
    (**(code **)(*piVar10 + 0x28))(&puStack_5c,iVar11);
    cVar7 = FUN_004587c0();
    piVar10 = piVar1;
    if (cVar7 != '\0') {
      piStack_58 = DAT_00d77b66;
      DAT_00d77b66 = operator_new(0xe);
      if (DAT_00d77b66 == (int *)0x0) {
        DAT_00d77b66 = (int *)0x0;
      }
      else {
        *DAT_00d77b66 = iVar11;
        DAT_00d77b66[1] = (int)piStack_58;
        DAT_00d77b66[2] = 0;
        *(undefined1 *)(DAT_00d77b66 + 3) = 0;
      }
      iVar8 = DAT_00d77b6a + 1;
      bVar12 = DAT_00d77b6a != 0;
      piVar1 = DAT_00d77b66;
      DAT_00d77b6a = iVar8;
      if (bVar12) {
        piStack_58[2] = (int)DAT_00d77b66;
        piVar1 = _DAT_00d77b62;
      }
      _DAT_00d77b62 = piVar1;
      *(undefined1 *)(iVar11 + 0x2d) = 1;
    }
  }
  (**(code **)(param_1[0x45fd] + 0x14))();
  iVar11 = param_1[0xf05];
  while (iVar11 != 0) {
    iVar8 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
    FUN_00796cd8(iVar11);
    iVar11 = iVar8;
  }
  param_1[0xf05] = 0;
  param_1[0xf06] = 0;
  param_1[0xf07] = 0;
  iStack_4._0_1_ = 0x23;
  FUN_00527230();
  iStack_4._0_1_ = 0x22;
  FUN_00527230();
  iStack_4 = CONCAT31(iStack_4._1_3_,0x21);
  FUN_00527230();
  iVar11 = *(int *)((int)param_1 + 0x119be);
  *(undefined ***)((int)param_1 + 0x119ba) = &PTR_LAB_007e4c54;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  *(undefined4 *)((int)param_1 + 0x119be) = 0;
  *(undefined4 *)((int)param_1 + 0x119c2) = 0;
  *(undefined4 *)((int)param_1 + 0x119c6) = 0;
  iVar11 = param_1[0x4613];
  param_1[0x4612] = &PTR_LAB_007e4c24;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  param_1[0x4613] = 0;
  param_1[0x4614] = 0;
  param_1[0x4615] = 0;
  iStack_4._1_3_ = (uint3)((uint)iStack_4 >> 8);
  iStack_4._0_1_ = 0x1e;
  FUN_00425c10();
  iStack_4 = CONCAT31(iStack_4._1_3_,0x1d);
  FUN_007a8882((int)param_1 + 0xfa4e,0x16,0x158);
  iVar11 = param_1[0x3a32];
  param_1[0x3a31] = &PTR_LAB_007e378c;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  param_1[0x3a32] = 0;
  param_1[0x3a33] = 0;
  param_1[0x3a34] = 0;
  iVar11 = *(int *)((int)param_1 + 0xe8b6);
  *(undefined ***)((int)param_1 + 0xe8b2) = &PTR_LAB_007e378c;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  *(undefined4 *)((int)param_1 + 0xe8b6) = 0;
  *(undefined4 *)((int)param_1 + 0xe8ba) = 0;
  *(undefined4 *)((int)param_1 + 0xe8be) = 0;
  iVar11 = param_1[0x3a29];
  param_1[0x3a28] = &PTR_LAB_007e378c;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  param_1[0x3a29] = 0;
  param_1[0x3a2a] = 0;
  param_1[0x3a2b] = 0;
  iVar11 = *(int *)((int)param_1 + 0xe892);
  *(undefined ***)((int)param_1 + 0xe88e) = &PTR_LAB_007e378c;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  *(undefined4 *)((int)param_1 + 0xe892) = 0;
  *(undefined4 *)((int)param_1 + 0xe896) = 0;
  *(undefined4 *)((int)param_1 + 0xe89a) = 0;
  iVar11 = param_1[0x3a20];
  param_1[0x3a1f] = &PTR_LAB_007e4bf4;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  param_1[0x3a20] = 0;
  param_1[0x3a21] = 0;
  param_1[0x3a22] = 0;
  iVar11 = *(int *)((int)param_1 + 0xe86e);
  *(undefined ***)((int)param_1 + 0xe86a) = &PTR_LAB_007e4bc4;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  *(undefined4 *)((int)param_1 + 0xe86e) = 0;
  *(undefined4 *)((int)param_1 + 0xe872) = 0;
  *(undefined4 *)((int)param_1 + 0xe876) = 0;
  iStack_4._1_3_ = (uint3)((uint)iStack_4 >> 8);
  iStack_4._0_1_ = 0x16;
  FUN_007a8882(param_1 + 0x1a5c,0x12,0x8c);
  iStack_4._0_1_ = 0x15;
  FUN_007a8882(param_1 + 0x17e6,0x12,0x8c);
  iStack_4._0_1_ = 0x14;
  FUN_007a8882(param_1 + 0x1570,0x12,0x8c);
  iStack_4 = CONCAT31(iStack_4._1_3_,0x13);
  FUN_007a8882(param_1 + 0x12fa,0x12,0x8c);
  puStack_54 = *(undefined1 **)((int)param_1 + 0x452e);
  FUN_00796cd8();
  *(undefined4 *)((int)param_1 + 0x452e) = 0;
  *(undefined4 *)((int)param_1 + 0x4532) = 0;
  *(undefined4 *)((int)param_1 + 0x4536) = 0;
  iVar11 = param_1[0x1147];
  param_1[0x1146] = &PTR_LAB_007e4b94;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  param_1[0x1147] = 0;
  param_1[0x1148] = 0;
  param_1[0x1149] = 0;
  iStack_4._1_3_ = (uint3)((uint)iStack_4 >> 8);
  iStack_4 = CONCAT31(iStack_4._1_3_,0x10);
  FUN_00527230();
  iVar11 = param_1[0xf05];
  param_1[0xf04] = &PTR_LAB_007e4b64;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  param_1[0xf05] = 0;
  param_1[0xf06] = 0;
  param_1[0xf07] = 0;
  iVar11 = *(int *)((int)param_1 + 0x3b7e);
  *(undefined ***)((int)param_1 + 0x3b7a) = &PTR_LAB_007e4b34;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  *(undefined4 *)((int)param_1 + 0x3b7e) = 0;
  *(undefined4 *)((int)param_1 + 0x3b82) = 0;
  *(undefined4 *)((int)param_1 + 0x3b86) = 0;
  iVar11 = param_1[0xedb];
  param_1[0xeda] = &PTR_LAB_007e4b04;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  param_1[0xedb] = 0;
  param_1[0xedc] = 0;
  param_1[0xedd] = 0;
  iVar11 = *(int *)((int)param_1 + 0x3666);
  *(undefined ***)((int)param_1 + 0x3662) = &PTR_LAB_007e4ad4;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  *(undefined4 *)((int)param_1 + 0x3666) = 0;
  *(undefined4 *)((int)param_1 + 0x366a) = 0;
  *(undefined4 *)((int)param_1 + 0x366e) = 0;
  iVar11 = param_1[0xd95];
  param_1[0xd94] = &PTR_LAB_007e4aa4;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  param_1[0xd95] = 0;
  param_1[0xd96] = 0;
  param_1[0xd97] = 0;
  iVar11 = *(int *)((int)param_1 + 0x3642);
  *(undefined ***)((int)param_1 + 0x363e) = &PTR_LAB_007e4a74;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 10);
    FUN_00796cd8();
  }
  *(undefined4 *)((int)param_1 + 0x3642) = 0;
  *(undefined4 *)((int)param_1 + 0x3646) = 0;
  *(undefined4 *)((int)param_1 + 0x364a) = 0;
  iVar11 = param_1[0xd8c];
  param_1[0xd8b] = &PTR_LAB_007e4a74;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 10);
    FUN_00796cd8();
  }
  param_1[0xd8c] = 0;
  param_1[0xd8d] = 0;
  param_1[0xd8e] = 0;
  iVar11 = *(int *)((int)param_1 + 0x361e);
  *(undefined ***)((int)param_1 + 0x361a) = &PTR_LAB_007e4a74;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 10);
    FUN_00796cd8();
  }
  *(undefined4 *)((int)param_1 + 0x361e) = 0;
  *(undefined4 *)((int)param_1 + 0x3622) = 0;
  *(undefined4 *)((int)param_1 + 0x3626) = 0;
  iVar11 = param_1[0xd83];
  param_1[0xd82] = &PTR_LAB_007e4a74;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 10);
    FUN_00796cd8();
  }
  param_1[0xd83] = 0;
  param_1[0xd84] = 0;
  param_1[0xd85] = 0;
  iVar11 = param_1[0x4be];
  param_1[0x4bd] = &PTR_LAB_007e3ff0;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  param_1[0x4be] = 0;
  param_1[0x4bf] = 0;
  param_1[0x4c0] = 0;
  iVar11 = *(int *)((int)param_1 + 0x12e6);
  *(undefined ***)((int)param_1 + 0x12e2) = &PTR_LAB_007e3ff0;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  *(undefined4 *)((int)param_1 + 0x12e6) = 0;
  *(undefined4 *)((int)param_1 + 0x12ea) = 0;
  *(undefined4 *)((int)param_1 + 0x12ee) = 0;
  iVar11 = param_1[0xc3];
  param_1[0xc2] = &PTR_LAB_007e4a74;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 10);
    FUN_00796cd8();
  }
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  iStack_4._1_3_ = (uint3)((uint)iStack_4 >> 8);
  iStack_4 = CONCAT31(iStack_4._1_3_,3);
  FUN_007a8882((int)param_1 + 0x2ae,0x12,5);
  iVar11 = param_1[0xa8];
  param_1[0xa7] = &PTR_LAB_007e4a44;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  iVar11 = *(int *)((int)param_1 + 0x28e);
  *(undefined ***)((int)param_1 + 0x28a) = &PTR_LAB_007e378c;
  while (iVar11 != 0) {
    iVar11 = *(int *)(iVar11 + 8);
    FUN_00796cd8();
  }
  *(undefined4 *)((int)param_1 + 0x28e) = 0;
  uStack_4c = -(uint)(param_1 != (undefined4 *)0x0) & (int)param_1 + 0xeU;
  *(undefined4 *)((int)param_1 + 0x292) = 0;
  *(undefined4 *)((int)param_1 + 0x296) = 0;
  iStack_4._1_3_ = (uint3)((uint)iStack_4 >> 8);
  iStack_4._0_1_ = 0x28;
  FUN_005837f0();
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_00425b80();
  iStack_4 = 0xffffffff;
  FUN_00428a40();
  ExceptionList = pvStack_c;
  return;
}


