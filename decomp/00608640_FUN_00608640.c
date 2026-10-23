// FUN_00608640 @ 608640 size=363

void FUN_00608640(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 extraout_var;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007cfebb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_00584e20(*(undefined4 *)(param_1 + 6));
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(**(int **)(param_2 + 0x22) + 4))();
    if (iVar2 < 2) {
      pcVar3 = (char *)FUN_0042b6c9(s_DIWARALONE_0085e90c);
      uVar6 = 0xffffffff;
      do {
        pcVar9 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = (char *)&DAT_00ceb298;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    else {
      pcVar3 = (char *)FUN_0042b6c9(s_DIWAR_0085e918);
      uVar6 = 0xffffffff;
      do {
        pcVar9 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar3 = pcVar9 + -uVar6;
      pcVar9 = (char *)&DAT_00ceb298;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_00608290(&DAT_00ceb298,*(undefined4 *)(param_2 + 0x22),*(undefined4 *)(param_1 + 6),99999)
      ;
    }
    pcVar3 = (char *)FUN_0042b6c9(s_DIAGAINST_0085e900);
    uVar6 = 0xffffffff;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar2 = -1;
    pcVar3 = (char *)&DAT_00ceb298;
    do {
      pcVar8 = pcVar3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar8 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar8;
    } while (cVar1 != '\0');
    pcVar3 = pcVar9 + -uVar6;
    pcVar9 = pcVar8 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00608290(&DAT_00ceb298,param_3,*(undefined4 *)(param_1 + 6),99999);
    pvVar4 = operator_new(0x50);
    uStack_4 = 0;
    if (pvVar4 != (void *)0x0) {
      uVar11 = 4;
      puVar10 = &DAT_00ceb298;
      uVar5 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      FUN_00607a30(uVar5,puVar10,uVar11,extraout_var,param_2);
    }
  }
  ExceptionList = local_c;
  return;
}


