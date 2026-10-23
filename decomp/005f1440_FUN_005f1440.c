// FUN_005f1440 @ 5f1440 size=897

void __fastcall FUN_005f1440(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  int local_120;
  int iStack_11c;
  int iStack_118;
  char acStack_10c [252];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cebde;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(int *)(*(int *)(param_1 + 0x90) + 0x13d22) = DAT_008477ac;
  FUN_005f17d0();
  iVar5 = *(int *)(param_1 + 0xd0);
  iVar9 = DAT_00ab27b4 + DAT_008477ac * 0x4b2;
  piVar4 = *(int **)(iVar5 + 4);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar1;
  }
  *(undefined4 *)(iVar5 + 4) = 0;
  *(undefined4 *)(iVar5 + 8) = 0;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  (**(code **)(**(int **)(param_1 + 0xd0) + 0x14))();
  FUN_00435fd0();
  iStack_11c = 0;
  iStack_118 = 0;
  if (0 < *(int *)(iVar9 + 0x290)) {
    local_120 = 0;
    do {
      iVar5 = FUN_004e9370(*(undefined4 *)(local_120 + *(int *)(iVar9 + 0x298)));
      if ((((*(int *)(iVar5 + 0x254) == 8) || (*(int *)(iVar5 + 0x254) == 9)) && (iStack_11c < 9))
         && (*(char *)(iVar5 + 0x180) == '\0')) {
        pvVar6 = operator_new(0x3e);
        uStack_4 = 0;
        if (pvVar6 == (void *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_005eac60(*(undefined4 *)(iVar5 + 0x12),
                               *(undefined4 *)(local_120 + 4 + *(int *)(iVar9 + 0x298)));
        }
        iVar5 = *(int *)(param_1 + 0xd0);
        uStack_4 = 0xffffffff;
        iVar2 = *(int *)(iVar5 + 8);
        puVar8 = operator_new(0xe);
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          *puVar8 = uVar7;
          puVar8[1] = iVar2;
          puVar8[2] = 0;
          *(undefined1 *)(puVar8 + 3) = 0;
        }
        iVar3 = *(int *)(iVar5 + 0xc);
        *(undefined4 **)(iVar5 + 8) = puVar8;
        *(int *)(iVar5 + 0xc) = iVar3 + 1;
        if (iVar3 == 0) {
          *(undefined4 **)(iVar5 + 4) = puVar8;
        }
        else {
          *(undefined4 **)(iVar2 + 8) = puVar8;
        }
        iStack_11c = iStack_11c + 1;
      }
      iStack_118 = iStack_118 + 1;
      local_120 = local_120 + 0xc;
    } while (iStack_118 < *(int *)(iVar9 + 0x290));
  }
  FUN_004353e0();
  if (DAT_00dc3a00 != '\0') {
    if (DAT_00dc2ca4 == '\0') {
      FUN_007a630a(acStack_10c,s__s_gfx_interface_ill_prov__d_bmp_0085d2fc,&DAT_00dc3a00,
                   *(undefined4 *)(iVar9 + 0x12));
    }
    else {
      FUN_007a630a(acStack_10c,s__s__s_gfx_ill_prov__d_bmp_0085d320,&DAT_00dc3a00,&DAT_00dc1970,
                   *(undefined4 *)(iVar9 + 0x12));
    }
    iVar5 = FUN_007a6615(acStack_10c,&DAT_0082eeb4);
    if (iVar5 != 0) {
      FUN_007a6429(iVar5);
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x2c))(acStack_10c);
      goto LAB_005f1700;
    }
  }
  if (DAT_00dc2ca4 == '\0') {
    FUN_007a630a(acStack_10c,s_gfx_interface_ill_prov__d_bmp_0085d2c4,*(undefined4 *)(iVar9 + 0x12))
    ;
  }
  else {
    FUN_007a630a(acStack_10c,s__s_gfx_ill_prov__d_bmp_0085d2e4,&DAT_00dc1970,
                 *(undefined4 *)(iVar9 + 0x12));
  }
  iVar9 = FUN_007a6615(acStack_10c,&DAT_0082eeb4);
  if (iVar9 == 0) {
    pcVar10 = s_gfx_interface_ill_prov_sea_bmp_0085d7ec;
    iVar9 = **(int **)(param_1 + 0xbc);
  }
  else {
    FUN_007a6429(iVar9);
    pcVar10 = acStack_10c;
    iVar9 = **(int **)(param_1 + 0xbc);
  }
  (**(code **)(iVar9 + 0x2c))(pcVar10);
LAB_005f1700:
  uVar7 = 0;
  iVar9 = *(int *)(DAT_00ab27b4 + 0x12 + DAT_008477ac * 0x4b2);
  if (iVar9 < 0x97f) {
    if (iVar9 == 0x97e) {
      uVar7 = 0x15c;
    }
    else if (iVar9 == 0x122) {
      uVar7 = 0x126;
    }
    else if (iVar9 == 0x18d) {
      uVar7 = 0x199;
    }
  }
  else if (iVar9 == 0x995) {
    uVar7 = 900;
  }
  else if (iVar9 == 0xa0f) {
    uVar7 = 0x379;
  }
  iVar9 = FUN_004e9370(uVar7);
  if (*(int *)(iVar9 + 0x3d8) != 0) {
    iVar5 = FUN_004e9370(uVar7);
    iVar9 = **(int **)(param_1 + 0xcc);
    uVar7 = FUN_0044b160(*(undefined4 *)(*(int *)(iVar5 + 0x3d8) + 6));
    (**(code **)(iVar9 + 0x2c))(uVar7);
    (**(code **)(**(int **)(param_1 + 0xcc) + 0x34))(4);
  }
  ExceptionList = pvStack_10;
  return;
}


