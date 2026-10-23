// FUN_00670e80 @ 670e80 size=3628

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00670e80(int *param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  double *pdVar8;
  uint uVar9;
  uint uVar10;
  undefined ***pppuVar11;
  char *pcVar12;
  bool bVar13;
  float10 fVar14;
  undefined1 uStack_891;
  float afStack_890 [3];
  char *pcStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined **ppuStack_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined8 uStack_868;
  undefined **ppuStack_858;
  char *pcStack_854;
  char *pcStack_850;
  int iStack_84c;
  undefined **ppuStack_828;
  char acStack_824 [1024];
  char acStack_424 [1040];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_007d4618;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  piVar4 = (int *)(**(code **)(*param_1 + 0x1b4))();
  iVar5 = (**(code **)(*piVar4 + 4))();
  if (iVar5 < 1) {
    (**(code **)(*param_1 + 0xcc))();
    ExceptionList = pvStack_14;
    return;
  }
  iVar5 = (**(code **)(*param_1 + 0x1b4))();
  ppuVar1 = (undefined **)**(undefined4 **)(iVar5 + 4);
  ppuStack_828 = (undefined **)0x8e1;
  ppuStack_878 = ppuVar1;
  FUN_00426070();
  uStack_c = 0;
  pcVar6 = (char *)(**(code **)(*ppuVar1 + 0xc))();
  uVar9 = 0xffffffff;
  do {
    pcVar12 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar12 = pcVar6 + 1;
    cVar3 = *pcVar6;
    pcVar6 = pcVar12;
  } while (cVar3 != '\0');
  uVar9 = ~uVar9;
  pcVar6 = pcVar12 + -uVar9;
  pcVar12 = acStack_824;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar12 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar12 = pcVar12 + 1;
  }
  pcVar6 = (char *)(**(code **)(*(int *)(ppuStack_878[0x92] + 0xe) + 0xc))();
  uVar9 = 0xffffffff;
  do {
    pcVar12 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar12 = pcVar6 + 1;
    cVar3 = *pcVar6;
    pcVar6 = pcVar12;
  } while (cVar3 != '\0');
  uVar9 = ~uVar9;
  pcVar6 = pcVar12 + -uVar9;
  pcVar12 = acStack_424;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar12 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar12 = pcVar12 + 1;
  }
  FUN_004260b0();
  ppuVar1 = ppuStack_878;
  uStack_c = 1;
  if (*(int *)((int)ppuStack_878 + 0x176) != 0) {
    FUN_006ae0d0(1);
    uStack_c = 2;
    uVar7 = FUN_004260e0();
    uStack_868 = (double)CONCAT44(uStack_868._4_4_,uVar7);
    pdVar8 = (double *)FUN_00673fa0();
    uStack_868 = (double)(int)(int *)uStack_868;
    *pdVar8 = uStack_868 + *pdVar8;
    iVar5 = FUN_00673fa0();
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    FUN_00673c70(acStack_424);
    uStack_c._0_1_ = 3;
    pdVar8 = (double *)FUN_00674190();
    uStack_c._0_1_ = 2;
    *pdVar8 = uStack_868 + *pdVar8;
    FUN_00674910();
    FUN_00673c70(acStack_424);
    uStack_c._0_1_ = 4;
    iVar5 = FUN_00674190();
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    uStack_c._0_1_ = 2;
    FUN_00674910();
    FUN_00673c70(acStack_824);
    uStack_c._0_1_ = 5;
    pdVar8 = (double *)FUN_00674190();
    uStack_c._0_1_ = 2;
    *pdVar8 = uStack_868 + *pdVar8;
    FUN_00674910();
    FUN_00673c70(acStack_824);
    uStack_c._0_1_ = 6;
    iVar5 = FUN_00674190();
    uStack_c = CONCAT31(uStack_c._1_3_,2);
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
    goto LAB_00671c78;
  }
  iVar5 = FUN_004ef800();
  if (iVar5 != 0) {
    if (param_1[0x30] != 0) {
      *(undefined4 *)(param_1[0x30] + 0x10) = 0;
    }
    iVar5 = (**(code **)(*(int *)ppuVar1[0xa5] + 4))();
    if (iVar5 == 0) {
      (**(code **)(*param_1 + 0xcc))();
      uStack_c = 7;
      uVar7 = FUN_004260e0();
      uStack_868 = (double)CONCAT44(uStack_868._4_4_,uVar7);
      pdVar8 = (double *)FUN_00673fa0();
      uStack_868 = (double)(int)(int *)uStack_868;
      *pdVar8 = uStack_868 + *pdVar8;
      iVar5 = FUN_00673fa0();
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      FUN_00673c70(acStack_424);
      uStack_c._0_1_ = 8;
      pdVar8 = (double *)FUN_00674190();
      uStack_c._0_1_ = 7;
      *pdVar8 = uStack_868 + *pdVar8;
      FUN_00674910();
      FUN_00673c70(acStack_424);
      uStack_c._0_1_ = 9;
      iVar5 = FUN_00674190();
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      uStack_c._0_1_ = 7;
      FUN_00674910();
      FUN_00673c70(acStack_824);
      uStack_c._0_1_ = 10;
      pdVar8 = (double *)FUN_00674190();
      uStack_c._0_1_ = 7;
      *pdVar8 = uStack_868 + *pdVar8;
      FUN_00674910();
      FUN_00673c70(acStack_824);
      uStack_c._0_1_ = 0xb;
      iVar5 = FUN_00674190();
      uStack_c = CONCAT31(uStack_c._1_3_,7);
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      goto LAB_00671c78;
    }
    param_1[0x31] = 5;
  }
  puVar2 = ppuVar1[0x92];
  iVar5 = FUN_004e9370();
  if (puVar2 != *(undefined **)(iVar5 + 0x3d8)) {
    FUN_004e9370();
    cVar3 = FUN_0044b300();
    if (cVar3 == '\0') {
      (**(code **)(*param_1 + 0xcc))();
      uStack_c = 0xc;
      uVar7 = FUN_004260e0();
      uStack_868 = (double)CONCAT44(uStack_868._4_4_,uVar7);
      pdVar8 = (double *)FUN_00673fa0();
      uStack_868 = (double)(int)(int *)uStack_868;
      *pdVar8 = uStack_868 + *pdVar8;
      iVar5 = FUN_00673fa0();
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      FUN_00673c70(acStack_424);
      uStack_c._0_1_ = 0xd;
      pdVar8 = (double *)FUN_00674190();
      uStack_c._0_1_ = 0xc;
      *pdVar8 = uStack_868 + *pdVar8;
      FUN_00674910();
      FUN_00673c70(acStack_424);
      uStack_c._0_1_ = 0xe;
      iVar5 = FUN_00674190();
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      uStack_c._0_1_ = 0xc;
      FUN_00674910();
      FUN_00673c70(acStack_824);
      uStack_c._0_1_ = 0xf;
      pdVar8 = (double *)FUN_00674190();
      uStack_c._0_1_ = 0xc;
      *pdVar8 = uStack_868 + *pdVar8;
      FUN_00674910();
      FUN_00673c70(acStack_824);
      uStack_c._0_1_ = 0x10;
      iVar5 = FUN_00674190();
      uStack_c = CONCAT31(uStack_c._1_3_,0xc);
      *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
      goto LAB_00671c78;
    }
  }
  switch(param_1[0x31]) {
  case 0:
    afStack_890[0] = (float)((uint)afStack_890[0] & 0xff000000);
    uStack_868 = (double)CONCAT44(uStack_868._4_4_,*(undefined4 *)(param_1[0x23] + 0xc));
    pcStack_884 = (char *)((uint)pcStack_884 & 0xff000000);
    FUN_0050b600(ppuVar1,2,*(undefined4 *)(param_1[0x23] + 0xc),0,1,1,pcStack_884,0,afStack_890[0],0
                 ,1,0xffffffff,0,1,0,0xbf800000);
    param_1[0x31] = 1;
  case 1:
    if (ppuVar1[3] == *(undefined **)(param_1[0x23] + 0xc)) {
      iVar5 = FUN_004e9370();
      piVar4 = *(int **)(iVar5 + 0x1c2);
      uStack_868 = (double)CONCAT44(uStack_868._4_4_,piVar4);
      ppuStack_878 = (undefined **)piVar4[1];
      *(undefined1 *)(piVar4 + 4) = 1;
      for (; ppuStack_878 != (undefined **)0x0; ppuStack_878 = (undefined **)ppuStack_878[2]) {
        pcStack_884 = *ppuStack_878;
        cVar3 = FUN_0051a430();
        if ((cVar3 != '\0') && (cVar3 = FUN_004ef9b0(), cVar3 != '\0')) {
          FUN_0045c080(ppuVar1);
        }
      }
      ppuStack_878 = (undefined **)piVar4[1];
      *(undefined1 *)(piVar4 + 4) = 0;
      while (ppuStack_878 != (undefined **)0x0) {
        if (*(char *)((int)ppuStack_878 + 0xc) == '\0') {
          ppuStack_878 = *(undefined ***)((int)ppuStack_878 + 8);
        }
        else {
          iVar5 = *piVar4;
          FUN_00498700(&stack0xfffff758,0);
          piVar4 = (int *)uStack_868;
          (**(code **)(iVar5 + 0x1c))();
        }
      }
      afStack_890[0] = 100000.0;
      uStack_868._4_4_ = (undefined4)((ulonglong)uStack_868 >> 0x20);
      uStack_868 = (double)CONCAT44(uStack_868._4_4_,param_1[0x23]);
      FUN_004734e0();
      ppuStack_858 = &PTR_FUN_007e5258;
      uStack_c._0_1_ = 0x11;
      uVar7 = FUN_006a9d50();
      pcStack_884 = pcStack_850;
      ppuStack_878 = operator_new(0xe);
      uStack_c._0_1_ = 0x12;
      if (ppuStack_878 == (void *)0x0) {
        pcStack_850 = (char *)0x0;
      }
      else {
        pcStack_850 = (char *)FUN_00473a90(uVar7,pcStack_884);
      }
      uStack_c._0_1_ = 0x11;
      bVar13 = iStack_84c == 0;
      iStack_84c = iStack_84c + 1;
      if (bVar13) {
        pcStack_854 = pcStack_850;
      }
      else {
        *(char **)(pcStack_884 + 8) = pcStack_850;
      }
      pppuVar11 = &ppuStack_858;
      iVar5 = *(int *)(*(int *)((int)param_1 + 10) + 0x3350);
      if (iVar5 != 0) {
        pppuVar11 = *(undefined ****)(iVar5 + 0x22);
      }
      for (ppuStack_878 = pppuVar11[1]; ppuStack_878 != (undefined **)0x0;
          ppuStack_878 = (undefined **)ppuStack_878[2]) {
        if ((&DAT_0089cad8)[(int)*ppuStack_878] != 0) {
          iVar5 = FUN_004a5a30();
          for (piVar4 = *(int **)(iVar5 + 4); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
            if (*(char *)(*piVar4 + 0x45) == '\0') {
              pcStack_884 = *(char **)param_1[0x30];
              iVar5 = FUN_004e9370();
              fVar14 = (float10)FUN_0044a9c0(*(undefined4 *)(iVar5 + 0x12),pcStack_884);
              if (fVar14 < (float10)afStack_890[0]) {
                afStack_890[0] = (float)fVar14;
                uStack_868 = (double)CONCAT44(uStack_868._4_4_,param_1[0x23]);
              }
            }
          }
        }
      }
      (**(code **)(*param_1 + 0x210))(param_1 + 0x24);
      afStack_890[0] = (float)((uint)afStack_890[0] & 0xff000000);
      uStack_868 = (double)CONCAT44(uStack_868._4_4_,*(undefined4 *)(param_1[0x23] + 0xc));
      pcStack_884 = (char *)((uint)pcStack_884 & 0xff000000);
      FUN_0050b600(ppuVar1,2,*(undefined4 *)(param_1[0x23] + 0xc),0,1,1,pcStack_884,0,afStack_890[0]
                   ,0,1,0xffffffff,0,1,0,0xbf800000);
      param_1[0x31] = 2;
      uStack_c = CONCAT31(uStack_c._1_3_,1);
      ppuStack_858 = &PTR_LAB_007e3ff0;
      FUN_004309c0();
    }
  case 2:
    if (ppuVar1[3] == *(undefined **)(param_1[0x23] + 0xc)) {
      param_1[0x31] = 3;
    }
    break;
  case 3:
    cVar3 = FUN_0042ddd0();
    if (cVar3 != '\0') {
      iVar5 = *(int *)(*(int *)((int)param_1 + 10) + 0x120);
      uStack_868 = (double)CONCAT44(uStack_868._4_4_,iVar5);
      afStack_890[0] = *(float *)param_1[0x30];
      pcStack_884 = (char *)((uint)pcStack_884 & 0xff000000);
      ppuStack_878 = (undefined **)((uint)ppuStack_878 & 0xff000000);
      FUN_0050b600(ppuVar1,0x14,afStack_890[0],*(float *)(iVar5 + 0x2c4) * (float)_DAT_007e46d8,1,1,
                   ppuStack_878,0,pcStack_884,0,1,0xffffffff,0,1,0,0xbf800000);
      param_1[0x31] = 4;
    }
    break;
  case 4:
    iVar5 = (**(code **)(*(int *)ppuVar1[0xa5] + 4))();
    if (iVar5 == 0) {
      FUN_0066cf80();
LAB_00671889:
      (**(code **)(*param_1 + 0xcc))();
    }
    break;
  case 5:
    iVar5 = (**(code **)(*(int *)ppuVar1[0xa5] + 4))();
    if (iVar5 == 0) goto LAB_00671889;
  }
  FUN_006ae0d0(1);
  uStack_c = 0x13;
  uVar7 = FUN_004260e0();
  uStack_868 = (double)CONCAT44(uStack_868._4_4_,uVar7);
  afStack_890[0] = 0.0;
  ppuStack_858 = ppuStack_828;
  pcStack_854 = (char *)0x0;
  afStack_890[1] = 0.0;
  pcStack_850 = (char *)0x0;
  iStack_84c = 0;
  FUN_00674f60(afStack_890);
  FUN_00675d80(afStack_890);
  uStack_868 = (double)(int)(int *)uStack_868;
  *(double *)((int)pcStack_884 + 0x10) = uStack_868 + *(double *)((int)pcStack_884 + 0x10);
  afStack_890[0] = 0.0;
  ppuStack_858 = ppuStack_828;
  pcStack_854 = (char *)0x0;
  afStack_890[1] = 0.0;
  pcStack_850 = (char *)0x0;
  iStack_84c = 0;
  FUN_00674f60(afStack_890);
  FUN_00675d80(afStack_890);
  *(int *)((int)pcStack_884 + 0x18) = *(int *)((int)pcStack_884 + 0x18) + 1;
  FUN_00674910();
  iVar5 = -1;
  pcVar6 = acStack_424;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  FUN_00674d80(acStack_424);
  uStack_c._0_1_ = 0x14;
  ppuStack_878 = (undefined **)0x0;
  uStack_874 = 0;
  uStack_870 = 0;
  FUN_00674be0(&ppuStack_858);
  uStack_c._0_1_ = 0x15;
  FUN_00675640(afStack_890);
  FUN_00675da0(afStack_890);
  pcVar6 = pcStack_884;
  uStack_c._0_1_ = 0x14;
  FUN_00674910();
  uStack_c._0_1_ = 0x13;
  *(double *)((int)pcVar6 + 0x1c) = uStack_868 + *(double *)((int)pcVar6 + 0x1c);
  FUN_00674910();
  FUN_00674910();
  iVar5 = -1;
  pcVar6 = acStack_424;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  FUN_00674d80(acStack_424);
  uStack_c._0_1_ = 0x16;
  ppuStack_878 = (undefined **)0x0;
  uStack_874 = 0;
  uStack_870 = 0;
  FUN_00674be0(&ppuStack_858);
  uStack_c._0_1_ = 0x17;
  FUN_00675640(afStack_890);
  FUN_00675da0(afStack_890);
  pcVar6 = pcStack_884;
  uStack_c._0_1_ = 0x16;
  FUN_00674910();
  uStack_c._0_1_ = 0x13;
  *(int *)((int)pcVar6 + 0x24) = *(int *)((int)pcVar6 + 0x24) + 1;
  FUN_00674910();
  FUN_00674910();
  iVar5 = -1;
  pcVar6 = acStack_824;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  FUN_00674d80(acStack_824);
  uStack_c._0_1_ = 0x18;
  pcStack_884 = (char *)0x0;
  uStack_880 = 0;
  uStack_87c = 0;
  FUN_00674be0(&ppuStack_858);
  uStack_c._0_1_ = 0x19;
  piVar4 = (int *)FUN_00674ad0(afStack_890);
  iVar5 = *piVar4;
  uStack_c._0_1_ = 0x18;
  FUN_00674910();
  uStack_c = CONCAT31(uStack_c._1_3_,0x13);
  *(double *)(iVar5 + 0x1c) = uStack_868 + *(double *)(iVar5 + 0x1c);
  FUN_00674910();
  ppuStack_858 = (undefined **)CONCAT31(ppuStack_858._1_3_,uStack_891);
  FUN_00674910();
  uVar9 = 0xffffffff;
  pcVar6 = acStack_824;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar3 = FUN_00674e40(uVar9);
  if (cVar3 != '\0') {
    pcVar6 = acStack_824;
    pcVar12 = pcStack_854;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar12 = pcVar12 + 1;
    }
    FUN_00674e20();
  }
  uStack_c._0_1_ = 0x1a;
  pcStack_884 = (char *)0x0;
  uStack_880 = 0;
  uStack_87c = 0;
  FUN_00674be0(&ppuStack_858);
  uStack_c._0_1_ = 0x1b;
  piVar4 = (int *)FUN_00674ad0(afStack_890);
  iVar5 = *piVar4;
  uStack_c._0_1_ = 0x1a;
  FUN_00674910();
  uStack_c = CONCAT31(uStack_c._1_3_,0x13);
  *(int *)(iVar5 + 0x24) = *(int *)(iVar5 + 0x24) + 1;
LAB_00671c78:
  FUN_00674910();
  uStack_c = 0xffffffff;
  FUN_004260a0();
  ExceptionList = pvStack_14;
  return;
}


