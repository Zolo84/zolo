// FUN_006f48b0 @ 6f48b0 size=416

void __thiscall FUN_006f48b0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  undefined *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dab1b;
  local_c = ExceptionList;
  if (param_2 != param_3) {
    ExceptionList = &local_c;
    pcVar5 = (char *)FUN_0042b6c9(s_FECLI_HOSTSET1_0086f848);
    uVar10 = 0xffffffff;
    do {
      pcVar14 = pcVar5;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar14 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar14;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar5 = pcVar14 + -uVar10;
    pcVar14 = (char *)&DAT_00d41e30;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar14 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar14 = pcVar14 + 1;
    }
    pcVar5 = (char *)FUN_0042b6c9(s_FECLI_HOSTSET2_0086f838);
    uVar10 = 0xffffffff;
    do {
      pcVar14 = pcVar5;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar14 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar14;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    iVar12 = -1;
    pcVar5 = (char *)&DAT_00d41e30;
    do {
      pcVar13 = pcVar5;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    pcVar5 = pcVar14 + -uVar10;
    pcVar14 = pcVar13 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar14 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar14 = pcVar14 + 1;
    }
    uVar6 = FUN_0042b6c9(*(undefined4 *)(param_4 + param_2 * 4));
    uVar7 = FUN_0042b6c9(param_5);
    FUN_007a630a(&DAT_00d42034,&DAT_00d41e30,uVar7,uVar6);
    pvVar8 = operator_new(0x23e);
    local_4 = 0;
    if (pvVar8 == (void *)0x0) {
      iVar12 = 0;
    }
    else {
      uVar18 = 1;
      uVar17 = 0;
      uVar16 = 0;
      uVar7 = 0x15a;
      puVar15 = &DAT_00d42034;
      uVar6 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
      iVar12 = FUN_00433f90(uVar6,puVar15,uVar7,uVar16,uVar17,uVar18);
    }
    local_4 = 0xffffffff;
    uVar4 = FUN_00584270(0,0xff,0);
    *(undefined2 *)(iVar12 + 0xc) = uVar4;
    iVar2 = *(int *)(param_1 + 0xba);
    iVar3 = *(int *)(iVar2 + 8);
    piVar9 = operator_new(0xe);
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      *piVar9 = iVar12;
      piVar9[1] = iVar3;
      piVar9[2] = 0;
      *(undefined1 *)(piVar9 + 3) = 0;
    }
    iVar12 = *(int *)(iVar2 + 0xc);
    *(int **)(iVar2 + 8) = piVar9;
    *(int *)(iVar2 + 0xc) = iVar12 + 1;
    if (iVar12 == 0) {
      *(int **)(iVar2 + 4) = piVar9;
    }
    else {
      *(int **)(iVar3 + 8) = piVar9;
    }
    FUN_004351b0();
  }
  ExceptionList = local_c;
  return;
}


