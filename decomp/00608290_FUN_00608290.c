// FUN_00608290 @ 608290 size=335

void FUN_00608290(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *unaff_retaddr;
  
  iVar8 = 0;
  iVar3 = (**(code **)(*param_2 + 4))();
  cVar2 = (**(code **)(*param_2 + 0x24))(param_3);
  if (cVar2 != '\0') {
    param_1 = param_1 + -1;
  }
  piVar1 = (int *)param_2[1];
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    if (*piVar1 != iVar3) {
      pcVar4 = (char *)(**(code **)(*(int *)((&DAT_0089cad8)[*piVar1] + 0xe) + 0xc))();
      uVar5 = 0xffffffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      iVar8 = iVar8 + (~uVar5 - 1) * 10;
      if (param_3 < iVar8) {
        uVar5 = 0xffffffff;
        pcVar4 = &DAT_00839650;
        do {
          pcVar10 = pcVar4;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar10 = pcVar4 + 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar10;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        iVar8 = -1;
        pcVar4 = unaff_retaddr;
        do {
          pcVar9 = pcVar4;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar9 = pcVar4 + 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar9;
        } while (cVar2 != '\0');
        pcVar4 = pcVar10 + -uVar5;
        pcVar10 = pcVar9 + -1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar10 = pcVar10 + 4;
        }
        iVar8 = 0;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar10 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
      pcVar4 = (char *)(**(code **)(*(int *)((&DAT_0089cad8)[*piVar1] + 0xe) + 0xc))();
      uVar5 = 0xffffffff;
      do {
        pcVar10 = pcVar4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar4 + 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar10;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      iVar7 = -1;
      pcVar4 = unaff_retaddr;
      do {
        pcVar9 = pcVar4;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar4 + 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar9;
      } while (cVar2 != '\0');
      pcVar4 = pcVar10 + -uVar5;
      pcVar10 = pcVar9 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar10 = pcVar10 + 1;
      }
      if (param_1 < 3) {
        if (param_1 == 2) {
          pcVar4 = (char *)FUN_0042b6c9(s_DIAND_0085e8c0);
          goto LAB_00608398;
        }
      }
      else {
        pcVar4 = &DAT_0085e8c8;
LAB_00608398:
        uVar5 = 0xffffffff;
        do {
          pcVar10 = pcVar4;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar10 = pcVar4 + 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar10;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5;
        iVar7 = -1;
        pcVar4 = unaff_retaddr;
        do {
          pcVar9 = pcVar4;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar9 = pcVar4 + 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar9;
        } while (cVar2 != '\0');
        pcVar4 = pcVar10 + -uVar5;
        pcVar10 = pcVar9 + -1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar10 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
      param_1 = param_1 + -1;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}


