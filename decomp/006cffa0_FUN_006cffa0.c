// FUN_006cffa0 @ 6cffa0 size=686

undefined4 __thiscall FUN_006cffa0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined1 *puVar7;
  void *pvVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 uVar16;
  char acStack_138 [300];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d913c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar6 = (**(code **)(*param_2 + 8))();
  if (iVar6 != 0) goto LAB_006d01b9;
  iVar6 = param_2[1];
  uVar12 = 0;
  if (*(int *)(iVar6 + 0xe) < 0) {
LAB_006d00d9:
    uVar10 = 0xffffffff;
    pcVar13 = (char *)(iVar6 + 0x1c);
    do {
      pcVar15 = pcVar13;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar15 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar13 = pcVar15 + -uVar10;
    pcVar15 = acStack_138;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar15 = pcVar15 + 4;
    }
  }
  else {
    if (*(int *)(iVar6 + 0x12) != *(int *)(DAT_00bd1500 + 900)) {
      ExceptionList = pvStack_c;
      return 0;
    }
    iVar2 = *(int *)(DAT_00bd1500 + 0x3c0 + *(int *)(iVar6 + 0xe) * 0x3e);
    if (iVar2 == 0) goto LAB_006d00d9;
    switch(*(undefined4 *)(iVar6 + 0x16)) {
    case 0:
      puVar7 = (undefined1 *)FUN_0042b6c9(s_TCHAT_ALL_0086b8e8);
      break;
    case 1:
      puVar7 = (undefined1 *)FUN_0042b6c9(s_TCHAT_COOP_0086b8dc);
      break;
    case 2:
      puVar7 = (undefined1 *)FUN_0042b6c9(s_TCHAT_ALLIES_0086b8cc);
      break;
    case 3:
      puVar7 = (undefined1 *)FUN_0042b6c9(s_TCHAT_ENEMY_0086b8c0);
      break;
    case 4:
      puVar7 = (undefined1 *)FUN_0042b6c9(s_TCHAT_CUSTOM_0086b8b0);
      break;
    default:
      puVar7 = &DAT_0088ebf8;
    }
    FUN_007a630a(acStack_138,s__s___s___0086b944,iVar2,puVar7);
    uVar12 = *(undefined4 *)(DAT_00bd1500 + 0x3cc + *(int *)(param_2[1] + 0xe) * 0x3e);
    uVar10 = 0xffffffff;
    pcVar13 = (char *)(param_2[1] + 0x1c);
    do {
      pcVar15 = pcVar13;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar15 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    iVar6 = -1;
    pcVar13 = acStack_138;
    do {
      pcVar14 = pcVar13;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    pcVar13 = pcVar15 + -uVar10;
    pcVar15 = pcVar14 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar15 = pcVar15 + 4;
    }
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar15 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar15 = pcVar15 + 1;
  }
  pvVar8 = operator_new(0xc);
  uVar16 = 0;
  uStack_4 = 0;
  if (pvVar8 != (void *)0x0) {
    uVar16 = FUN_006cfd10(uVar12,acStack_138);
  }
  uStack_4 = 0xffffffff;
  iVar6 = *(int *)(param_1 + 0x14);
  puVar9 = operator_new(0xe);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    *puVar9 = uVar16;
    puVar9[1] = iVar6;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  *(undefined4 **)(param_1 + 0x14) = puVar9;
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 **)(param_1 + 0x10) = puVar9;
  }
  else {
    *(undefined4 **)(iVar6 + 8) = puVar9;
  }
  pvVar8 = operator_new(0x16);
  uStack_4 = 1;
  if (pvVar8 == (void *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_006e9330(acStack_138);
  }
  uStack_4 = 0xffffffff;
  FUN_006e97f0(uVar12,0xffffffff);
LAB_006d01b9:
  iVar6 = (**(code **)(*param_2 + 8))();
  if (iVar6 == 0x1c) {
    piVar5 = *(int **)(param_1 + 0x10);
    while (piVar5 != (int *)0x0) {
      piVar3 = (int *)piVar5[2];
      piVar4 = (int *)*piVar5;
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 4))(param_2);
      }
      iVar6 = (**(code **)(*(int *)piVar4[2] + 4))(param_2);
      piVar5 = piVar3;
      if (iVar6 == 1) {
        if (piVar4 != (int *)0x0) {
          if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar4)(1);
          }
          if ((undefined4 *)piVar4[2] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)piVar4[2])(1);
          }
          FUN_00796cd8(piVar4[1]);
          FUN_00796cd8(piVar4);
        }
        (**(code **)(*(int *)(param_1 + 0xc) + 0x18))(piVar4);
      }
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}


