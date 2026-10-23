// FUN_0058eef0 @ 58eef0 size=408

char * __thiscall FUN_0058eef0(char *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  void *unaff_EBP;
  char *pcVar9;
  char *pcVar10;
  undefined *puVar11;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c9cab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pcVar3 = (char *)FUN_004af740(param_2);
  uVar7 = 0xffffffff;
  *(undefined ***)param_1 = &PTR_LAB_007eb264;
  pcVar10 = &DAT_0083bf04;
  do {
    pcVar9 = pcVar10;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar9 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar9;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar9 + -uVar7;
  pcVar10 = param_1;
  for (uVar8 = uVar7 >> 2; pcVar10 = pcVar10 + 4, uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar10 + 1;
  }
  *(undefined ***)param_1 = &PTR_LAB_007eb23c;
  if (pcVar3 != (char *)0x0) {
    uVar7 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar3 + 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    pcVar3 = pcVar10 + -uVar7;
    pcVar10 = param_1 + 8;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  param_1[0x104] = '\0';
  param_1[0x105] = '\0';
  param_1[0x106] = '\0';
  param_1[0x107] = '\0';
  *(undefined ***)param_1 = &PTR_LAB_007eb214;
  pvVar4 = operator_new(0x7e);
  local_4 = 0;
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00415020();
  }
  *(int **)(param_1 + 0x104) = piVar5;
  iVar1 = *piVar5;
  local_4 = 0xffffffff;
  uVar6 = FUN_0044b1c0(param_2);
  (**(code **)(iVar1 + 0x2c))(uVar6);
  (**(code **)(**(int **)(param_1 + 0x104) + 0x34))(0x19);
  iVar1 = *(int *)(param_1 + 0x104);
  *(undefined4 *)(iVar1 + 0x22) = 0;
  *(undefined4 *)(iVar1 + 0x26) = 10;
  *(undefined1 *)(iVar1 + 0x67) = 0;
  uVar6 = FUN_00413d60(s_flag_palette_bmp_0083c738);
  FUN_00415f20(uVar6);
  iVar1 = (&DAT_0089cad8)[param_2];
  if (iVar1 != 0) {
    puVar11 = &DAT_008580b4;
    if (iVar1 == DAT_00d0ca90) {
      puVar11 = &DAT_008580ac;
    }
    else {
      cVar2 = FUN_0044b280(*(undefined4 *)(DAT_00d0ca90 + 6));
      if (cVar2 == '\0') {
        cVar2 = FUN_00586230(*(undefined4 *)(DAT_00d0ca90 + 6));
        if (cVar2 != '\0') {
          puVar11 = &DAT_0085809c;
        }
      }
      else {
        puVar11 = &DAT_008580a4;
      }
    }
    uVar6 = (**(code **)(*(int *)(iVar1 + 0xe) + 0xc))();
    FUN_007a630a(param_1 + 4,&DAT_0083ca0c,puVar11,uVar6);
  }
  ExceptionList = unaff_EBP;
  return param_1;
}


