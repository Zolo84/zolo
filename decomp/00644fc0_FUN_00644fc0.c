// FUN_00644fc0 @ 644fc0 size=1012

/* WARNING: Type propagation algorithm not settling */

undefined4 * __thiscall FUN_00644fc0(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int unaff_EBP;
  char *pcVar10;
  undefined4 **ppuVar11;
  bool bVar12;
  int *piVar13;
  int iStack_c38;
  int iStack_c34;
  undefined **ppuStack_c30;
  int *piStack_c2c;
  int *piStack_c28;
  int iStack_c24;
  undefined1 uStack_c20;
  undefined4 *apuStack_c18 [513];
  char acStack_414 [1028];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d25d6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  apuStack_c18[1] = param_1;
  FUN_006446b0(0x16,param_2,0xf0,8);
  local_4 = 0;
  *(undefined2 *)(param_1 + 0x2e) = (undefined2)param_3;
  *(undefined4 *)((int)param_1 + 0xba) = param_3._2_4_;
  *param_1 = &PTR_FUN_007f01d0;
  param_1[2] = &PTR_LAB_007f01cc;
  (**(code **)(*DAT_00bd0e18 + 0x20))(0x17);
  iVar4 = FUN_00428ee0(param_1 + 0x2e);
  if (((iVar4 != 0) && (iVar4 != 8)) &&
     (iVar4 = (**(code **)(**(int **)(iVar4 + 0x1a) + 4))(), 0 < iVar4)) {
    iVar4 = FUN_00584c90();
    iVar4 = (&DAT_0089cad8)[iVar4];
    pcVar5 = (char *)FUN_0042b6c9(s_ANSWERINVITATION_0086617c);
    uVar7 = 0xffffffff;
    do {
      pcVar10 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar5 + 1;
      cVar3 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar3 != '\0');
    uVar7 = ~uVar7;
    pcVar5 = pcVar10 + -uVar7;
    pcVar10 = acStack_414;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_006ec610(acStack_414);
    uVar6 = (**(code **)(*(int *)(iVar4 + 0xe) + 0xc))();
    FUN_007a630a(apuStack_c18 + 1,acStack_414,uVar6);
    FUN_004361a0(apuStack_c18 + 1);
    *(undefined4 *)((int)param_1 + 0xb2) = 0x16;
    uVar6 = FUN_0042b6c9(s_INVMIL_00866174);
    FUN_004361a0(uVar6);
    (**(code **)(**(int **)((int)param_1 + 0x96) + 0x38))(0);
    iVar4 = (**(code **)(**(int **)(unaff_EBP + 0x22) + 4))();
    if (1 < iVar4) {
      pcVar5 = (char *)FUN_0042b6c9(s_INVALONG_00866168);
      uVar7 = 0xffffffff;
      do {
        pcVar10 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar5 + 1;
        cVar3 = *pcVar5;
        pcVar5 = pcVar10;
      } while (cVar3 != '\0');
      uVar7 = ~uVar7;
      pcVar5 = pcVar10 + -uVar7;
      ppuVar11 = apuStack_c18;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *ppuVar11 = *(undefined4 **)pcVar5;
        pcVar5 = pcVar5 + 4;
        ppuVar11 = ppuVar11 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(char *)ppuVar11 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        ppuVar11 = (undefined4 **)((int)ppuVar11 + 1);
      }
      FUN_0043ea10(apuStack_c18,*(undefined4 *)(unaff_EBP + 0x22),0,0);
      FUN_004361a0(apuStack_c18);
    }
    cVar3 = FUN_0044beb0();
    if (cVar3 != '\0') {
      piStack_c2c = (int *)0x0;
      piStack_c28 = (int *)0x0;
      iStack_c24 = 0;
      uStack_c20 = 0;
      ppuStack_c30 = &PTR_FUN_007e5258;
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
      iStack_c34 = 0;
      iVar4 = 0x2c;
      piVar13 = &DAT_0089cad8;
      do {
        piVar1 = piStack_c28;
        piVar2 = piStack_c2c;
        if ((*piVar13 != 0) && (*(char *)(iVar4 + *(int *)(iStack_c38 + 0x12da)) != '\0')) {
          piStack_c28 = operator_new(0xe);
          if (piStack_c28 == (int *)0x0) {
            piStack_c28 = (int *)0x0;
          }
          else {
            piStack_c28[1] = (int)piVar1;
            *piStack_c28 = iStack_c34;
            piStack_c28[2] = 0;
            *(undefined1 *)(piStack_c28 + 3) = 0;
          }
          iVar9 = iStack_c24 + 1;
          bVar12 = iStack_c24 != 0;
          piVar2 = piStack_c28;
          iStack_c24 = iVar9;
          if (bVar12) {
            piVar1[2] = (int)piStack_c28;
            piVar2 = piStack_c2c;
          }
        }
        piStack_c2c = piVar2;
        iVar4 = iVar4 + 0x2c;
        iStack_c34 = iStack_c34 + 1;
        piVar13 = piVar13 + 1;
      } while (iVar4 < 0x3b4c);
      pcVar5 = (char *)FUN_0042b6c9(s_INWARWITH_0086615c);
      uVar7 = 0xffffffff;
      do {
        pcVar10 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar5 + 1;
        cVar3 = *pcVar5;
        pcVar5 = pcVar10;
      } while (cVar3 != '\0');
      uVar7 = ~uVar7;
      pcVar5 = pcVar10 + -uVar7;
      ppuVar11 = apuStack_c18;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *ppuVar11 = *(undefined4 **)pcVar5;
        pcVar5 = pcVar5 + 4;
        ppuVar11 = ppuVar11 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(char *)ppuVar11 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        ppuVar11 = (undefined4 **)((int)ppuVar11 + 1);
      }
      FUN_0043ea10(apuStack_c18,&ppuStack_c30,0,0);
      FUN_004361a0(apuStack_c18);
      pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
      ppuStack_c30 = &PTR_LAB_007e3ff0;
      piVar13 = piStack_c2c;
      while (piVar13 != (int *)0x0) {
        piVar1 = (int *)piVar13[2];
        FUN_00796cd8(piVar13);
        piVar13 = piVar1;
      }
    }
    if (*(int *)(DAT_00d0ca90 + 0x3350) != 0) {
      uVar6 = FUN_0042b6c9(s_LEAVECURRENT_0086614c);
      FUN_004361a0(uVar6);
    }
    iVar4 = FUN_00584c90();
    if ((&DAT_0089cad8)[iVar4] != 0) {
      uVar6 = FUN_0042b6c9(s_POPDIPLO_00866140);
      FUN_004361a0(uVar6);
      uVar6 = (**(code **)(*(int *)((&DAT_0089cad8)[iVar4] + 0xe) + 0xc))();
      FUN_004361a0(uVar6);
    }
    FUN_00644950();
    uVar6 = FUN_00584c90();
    FUN_0043e780(uVar6);
    iVar4 = **(int **)((int)param_1 + 0xae);
    uVar6 = FUN_0044b1c0(uVar6);
    (**(code **)(iVar4 + 0x2c))(uVar6);
    (**(code **)(**(int **)((int)param_1 + 0xae) + 0x34))(0x19);
    iVar4 = *(int *)((int)param_1 + 0xae);
    *(undefined4 *)(iVar4 + 0x22) = 0;
    *(undefined4 *)(iVar4 + 0x26) = 10;
    *(undefined1 *)(iVar4 + 0x67) = 0;
    uVar6 = FUN_00413d60(s_flag_palette_bmp_0083c738);
    FUN_00415f20(uVar6);
  }
  ExceptionList = pvStack_10;
  return param_1;
}


