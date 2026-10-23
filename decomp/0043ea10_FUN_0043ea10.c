// FUN_0043ea10 @ 43ea10 size=276

undefined1 FUN_0043ea10(uint param_1,int *param_2,undefined4 param_3)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *unaff_ESI;
  char *pcVar9;
  char *pcVar10;
  undefined1 unaff_retaddr;
  
  piVar2 = param_2;
  pcVar1 = (char *)param_2[1];
  iVar4 = (**(code **)(*param_2 + 4))();
  iVar7 = *param_2;
  param_2 = (int *)((uint)param_2 & 0xffffff00);
  cVar3 = (**(code **)(iVar7 + 0x24))(param_3);
  if (cVar3 != '\0') {
    iVar4 = iVar4 + -1;
    param_1 = CONCAT31(param_1._1_3_,1);
  }
  cVar3 = (**(code **)(*piVar2 + 0x24))(param_3);
  if (cVar3 != '\0') {
    iVar4 = iVar4 + -1;
    unaff_retaddr = 1;
  }
  if (pcVar1 == (char *)0x0) {
    return unaff_retaddr;
  }
  do {
    uVar6 = *unaff_ESI;
    if ((((&DAT_0089cad8)[uVar6] != 0) && (param_1 != uVar6)) && (param_2 != (int *)uVar6)) {
      iVar4 = iVar4 + -1;
      pcVar5 = (char *)(**(code **)(*(int *)((&DAT_0089cad8)[uVar6] + 0xe) + 0xc))();
      uVar6 = 0xffffffff;
      do {
        pcVar10 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar5 + 1;
        cVar3 = *pcVar5;
        pcVar5 = pcVar10;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar5 = pcVar1;
      do {
        pcVar9 = pcVar5;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar5 + 1;
        cVar3 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar3 != '\0');
      pcVar5 = pcVar10 + -uVar6;
      pcVar10 = pcVar9 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar10 = pcVar10 + 1;
      }
      if (iVar4 < 2) {
        if (iVar4 < 1) goto LAB_0043eafe;
        pcVar5 = (char *)FUN_0042b6c9(s_INVAND_0083bf40);
      }
      else {
        pcVar5 = &DAT_0083bf48;
      }
      uVar6 = 0xffffffff;
      do {
        pcVar10 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar5 + 1;
        cVar3 = *pcVar5;
        pcVar5 = pcVar10;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar5 = pcVar1;
      do {
        pcVar9 = pcVar5;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar9 = pcVar5 + 1;
        cVar3 = *pcVar5;
        pcVar5 = pcVar9;
      } while (cVar3 != '\0');
      pcVar5 = pcVar10 + -uVar6;
      pcVar10 = pcVar9 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
LAB_0043eafe:
    unaff_ESI = (uint *)unaff_ESI[2];
    if (unaff_ESI == (uint *)0x0) {
      return unaff_retaddr;
    }
  } while( true );
}


