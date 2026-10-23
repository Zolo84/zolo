// FUN_0066f860 @ 66f860 size=2329

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_0066f860(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  double *pdVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 uStack_869;
  double dStack_868;
  uint uStack_860;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined1 uStack_839;
  undefined4 uStack_838;
  undefined4 uStack_834;
  undefined4 uStack_828;
  char acStack_824 [1024];
  char acStack_424 [1040];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_007d43de;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  piVar2 = (int *)(**(code **)(*param_1 + 0x1b4))();
  iVar3 = (**(code **)(*piVar2 + 4))();
  if (iVar3 < 1) {
    (**(code **)(*param_1 + 0xcc))();
    ExceptionList = pvStack_14;
    return;
  }
  iVar3 = (**(code **)(*param_1 + 0x1b4))();
  piVar2 = (int *)**(int **)(iVar3 + 4);
  uStack_828 = 0x7d9;
  FUN_00426070();
  uStack_c = 0;
  pcVar4 = (char *)(**(code **)(*piVar2 + 0xc))();
  uVar8 = 0xffffffff;
  do {
    pcVar10 = pcVar4;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar10 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar4 = pcVar10 + -uVar8;
  pcVar10 = acStack_824;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar10 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar10 = pcVar10 + 1;
  }
  pcVar4 = (char *)(**(code **)(*(int *)(piVar2[0x92] + 0xe) + 0xc))();
  uVar8 = 0xffffffff;
  do {
    pcVar10 = pcVar4;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar10 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar10;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar4 = pcVar10 + -uVar8;
  pcVar10 = acStack_424;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar10 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar10 = pcVar10 + 1;
  }
  FUN_004260b0();
  uStack_c = 1;
  if (*(int *)((int)piVar2 + 0x176) != 0) {
    FUN_006ae0d0(1,0);
    uStack_c = 2;
    uStack_860 = FUN_004260e0();
    pdVar5 = (double *)FUN_00673fa0(&uStack_828);
    dStack_868 = (double)(int)uStack_860;
    *pdVar5 = dStack_868 + *pdVar5;
    iVar3 = FUN_00673fa0(&uStack_828);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    uVar6 = FUN_00673c70(acStack_424,&uStack_869);
    uStack_c._0_1_ = 3;
    pdVar5 = (double *)FUN_00674190(uVar6);
    uStack_c._0_1_ = 2;
    *pdVar5 = dStack_868 + *pdVar5;
    FUN_00674910(1);
    uVar6 = FUN_00673c70(acStack_424,&uStack_869);
    uStack_c._0_1_ = 4;
    iVar3 = FUN_00674190(uVar6);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    uStack_c._0_1_ = 2;
    FUN_00674910(1);
    uVar6 = FUN_00673c70(acStack_824,&uStack_869);
    uStack_c._0_1_ = 5;
    pdVar5 = (double *)FUN_00674190(uVar6);
    uStack_c._0_1_ = 2;
    *pdVar5 = dStack_868 + *pdVar5;
    FUN_00674910(1);
    uVar6 = FUN_00673c70(acStack_824,&uStack_869);
    uStack_c._0_1_ = 6;
    iVar3 = FUN_00674190(uVar6);
    uStack_c = CONCAT31(uStack_c._1_3_,2);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    goto LAB_00670145;
  }
  iVar3 = FUN_004ef800();
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0xcc))();
    uStack_c = 7;
    uStack_860 = FUN_004260e0();
    pdVar5 = (double *)FUN_00673fa0(&uStack_828);
    dStack_868 = (double)(int)uStack_860;
    *pdVar5 = dStack_868 + *pdVar5;
    iVar3 = FUN_00673fa0(&uStack_828);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    uVar6 = FUN_00673c70(acStack_424,&uStack_869);
    uStack_c._0_1_ = 8;
    pdVar5 = (double *)FUN_00674190(uVar6);
    uStack_c._0_1_ = 7;
    *pdVar5 = dStack_868 + *pdVar5;
    FUN_00674910(1);
    uVar6 = FUN_00673c70(acStack_424,&uStack_869);
    uStack_c._0_1_ = 9;
    iVar3 = FUN_00674190(uVar6);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    uStack_c._0_1_ = 7;
    FUN_00674910(1);
    uVar6 = FUN_00673c70(acStack_824,&uStack_869);
    uStack_c._0_1_ = 10;
    pdVar5 = (double *)FUN_00674190(uVar6);
    uStack_c._0_1_ = 7;
    *pdVar5 = dStack_868 + *pdVar5;
    FUN_00674910(1);
    uVar6 = FUN_00673c70(acStack_824,&uStack_869);
    uStack_c._0_1_ = 0xb;
    iVar3 = FUN_00674190(uVar6);
    uStack_c = CONCAT31(uStack_c._1_3_,7);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    goto LAB_00670145;
  }
  iVar3 = piVar2[0x92];
  iVar7 = FUN_004e9370(*(undefined4 *)(param_1[0x23] + 0xc));
  if (iVar3 != *(int *)(iVar7 + 0x3d8)) {
    uVar6 = *(undefined4 *)(piVar2[0x92] + 6);
    FUN_004e9370(*(undefined4 *)(param_1[0x23] + 0xc));
    cVar1 = FUN_0044b300(uVar6);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0xcc))();
      uStack_c = 0xc;
      uStack_860 = FUN_004260e0();
      pdVar5 = (double *)FUN_00673fa0(&uStack_828);
      dStack_868 = (double)(int)uStack_860;
      *pdVar5 = dStack_868 + *pdVar5;
      iVar3 = FUN_00673fa0(&uStack_828);
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      uVar6 = FUN_00673c70(acStack_424,&uStack_869);
      uStack_c._0_1_ = 0xd;
      pdVar5 = (double *)FUN_00674190(uVar6);
      uStack_c._0_1_ = 0xc;
      *pdVar5 = dStack_868 + *pdVar5;
      FUN_00674910(1);
      uVar6 = FUN_00673c70(acStack_424,&uStack_869);
      uStack_c._0_1_ = 0xe;
      iVar3 = FUN_00674190(uVar6);
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      uStack_c._0_1_ = 0xc;
      FUN_00674910(1);
      uVar6 = FUN_00673c70(acStack_824,&uStack_869);
      uStack_c._0_1_ = 0xf;
      pdVar5 = (double *)FUN_00674190(uVar6);
      uStack_c._0_1_ = 0xc;
      *pdVar5 = dStack_868 + *pdVar5;
      FUN_00674910(1);
      uVar6 = FUN_00673c70(acStack_824,&uStack_869);
      uStack_c._0_1_ = 0x10;
      iVar3 = FUN_00674190(uVar6);
      uStack_c = CONCAT31(uStack_c._1_3_,0xc);
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      goto LAB_00670145;
    }
  }
  switch(param_1[0x30]) {
  case 0:
    iVar3 = param_1[0x23];
    iVar7 = FUN_004f0a80();
    if ((iVar7 == iVar3) && (piVar2[3] == *(int *)(param_1[0x23] + 0xc)))
    goto switchD_0066fdfe_caseD_2;
    uStack_860 = uStack_860 & 0xff000000;
    dStack_868 = (double)((ulonglong)dStack_868 & 0xffffffffff000000);
    FUN_0050b600(piVar2,2,*(undefined4 *)(param_1[0x23] + 0xc),0,1,1,dStack_868._0_4_,0,uStack_860,0
                 ,1,0xffffffff,0,1,0,0xbf800000,1);
    param_1[0x30] = 1;
    break;
  case 1:
    iVar3 = param_1[0x23];
    iVar7 = FUN_004f0a80();
    if ((iVar7 == iVar3) && (piVar2[3] == *(int *)(param_1[0x23] + 0xc))) {
      FUN_00670540();
      param_1[0x30] = 4;
    }
    break;
  case 2:
switchD_0066fdfe_caseD_2:
    FUN_00670540();
    param_1[0x30] = 4;
    break;
  case 4:
    FUN_00669770(piVar2);
    uStack_c = CONCAT31(uStack_c._1_3_,0x11);
    cVar1 = FUN_00669ea0();
    if (cVar1 == '\0') {
      FUN_00669ea0();
      FUN_00669f20();
      iVar3 = FUN_00669ff0();
      for (iVar3 = *(int *)(iVar3 + 0x26); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
        FUN_00500d50();
        FUN_0066a180();
      }
    }
    else {
      (**(code **)(*param_1 + 0xcc))();
    }
    uStack_c = CONCAT31(uStack_c._1_3_,1);
    FUN_00669740();
  }
  FUN_006ae0d0(1,0);
  uStack_c = 0x12;
  uStack_860 = FUN_004260e0();
  uStack_838 = 0;
  uStack_834 = 0;
  uStack_858 = uStack_828;
  uStack_854 = 0;
  uStack_84c = 0;
  uStack_850 = 0;
  piVar2 = (int *)FUN_00674980(&uStack_838,&uStack_858);
  dStack_868 = (double)(int)uStack_860;
  *(double *)(*piVar2 + 0x10) = dStack_868 + *(double *)(*piVar2 + 0x10);
  uStack_838 = 0;
  uStack_834 = 0;
  uStack_858 = uStack_828;
  uStack_854 = 0;
  uStack_84c = 0;
  uStack_850 = 0;
  piVar2 = (int *)FUN_00674980(&uStack_838,&uStack_858);
  *(int *)(*piVar2 + 0x18) = *(int *)(*piVar2 + 0x18) + 1;
  uStack_858 = CONCAT31(uStack_858._1_3_,uStack_869);
  FUN_00674910(0);
  uVar8 = 0xffffffff;
  pcVar4 = acStack_424;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00674d80(acStack_424,~uVar8 - 1);
  uStack_c._0_1_ = 0x13;
  pdVar5 = (double *)FUN_00674190(&uStack_858);
  uStack_c._0_1_ = 0x12;
  *pdVar5 = dStack_868 + *pdVar5;
  FUN_00674910(1);
  uVar6 = FUN_00673c70(acStack_424,&uStack_869);
  uStack_c._0_1_ = 0x14;
  iVar3 = FUN_00674190(uVar6);
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  uStack_c._0_1_ = 0x12;
  FUN_00674910(1);
  uVar6 = FUN_00673c70(acStack_824,&uStack_869);
  uStack_c._0_1_ = 0x15;
  pdVar5 = (double *)FUN_00674190(uVar6);
  uStack_c._0_1_ = 0x12;
  *pdVar5 = dStack_868 + *pdVar5;
  FUN_00674910(1);
  uVar6 = FUN_00673c70(acStack_824,&uStack_839);
  uStack_c._0_1_ = 0x16;
  iVar3 = FUN_00674190(uVar6);
  uStack_c = CONCAT31(uStack_c._1_3_,0x12);
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
LAB_00670145:
  FUN_00674910(1);
  uStack_c = 0xffffffff;
  FUN_004260a0();
  ExceptionList = pvStack_14;
  return;
}


