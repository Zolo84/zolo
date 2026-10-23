// FUN_00493d40 @ 493d40 size=1378

undefined4 __thiscall FUN_00493d40(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  bool bVar16;
  float10 fVar17;
  undefined4 uVar18;
  char *pcVar19;
  uint local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bdaeb;
  pvStack_c = ExceptionList;
  iVar2 = (&DAT_0089cad8)[*(int *)(*(int *)(param_2 + 4) + 0xe)];
  iVar3 = (&DAT_0089cad8)[*(int *)(*(int *)(param_2 + 4) + 0x12)];
  ExceptionList = &pvStack_c;
  fVar17 = (float10)FUN_00586a70(1,0,iVar2);
  FUN_0049ebd0((float)-fVar17);
  iVar15 = *(int *)(param_2 + 4);
  bVar4 = false;
  cVar5 = *(char *)(iVar15 + 0x16);
  local_14 = *(uint *)(iVar15 + 0x18);
  bVar16 = *(char *)(iVar15 + 0x17) == '\0';
  piVar6 = (int *)FUN_0044c640(local_14);
  if (bVar16) {
    FUN_00588600((float)-DAT_00dc17b0 +
                 *(float *)(*(int *)(*(int *)(param_2 + 4) + 0x12) * 0x2c + 0x28 +
                           *(int *)(iVar2 + 0x12da)));
    fVar17 = (float10)FUN_005885d0();
    FUN_00588600((float)fVar17);
  }
  if ((cVar5 != '\0') && (piVar6 != (int *)0x0)) {
    piVar1 = *(int **)(iVar2 + 0x2a0);
    do {
      if (piVar1 == (int *)0x0) goto LAB_00493ec8;
      piVar8 = (int *)piVar1[2];
      iVar15 = *piVar1;
      iVar7 = FUN_00428ee0(iVar15);
      piVar1 = piVar8;
    } while (((((iVar7 == 0) || (piVar8 = (int *)(iVar7 + -8), piVar8 == (int *)0x0)) ||
              ((*(uint *)(iVar15 + 6) != local_14 &&
               ((*(int *)(iVar7 + 0xb2) == 0 || (*(int *)(*(int *)(iVar7 + 0xb2) + 4) != 10)))))) ||
             (cVar5 = FUN_004a4a50(piVar8,local_14), cVar5 == '\0')) || (piVar6 == piVar8));
    bVar4 = true;
  }
LAB_00493ec8:
  if (*(int *)(*(int *)(param_2 + 4) + 0x12) == *(int *)(DAT_00d0ca90 + 6)) {
    if (bVar16) {
      pcVar19 = s_SPY_FOUND_0083d2c4;
    }
    else {
      pcVar19 = s_EMPTYLINE_0083d2b8;
    }
    iVar15 = (int)param_1 + 0xed2;
    uVar9 = FUN_0042b6c9(pcVar19);
    FUN_007a630a(iVar15,uVar9);
    uVar9 = *(undefined4 *)(iVar3 + 6);
    if (!bVar4) {
      uVar10 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(iVar15);
      uVar11 = (**(code **)(*piVar6 + 0xc))(uVar10);
      FUN_006ea4c0(200,uVar9,uVar11,uVar10,iVar15);
      ExceptionList = pvStack_c;
      return 3;
    }
    uVar10 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))();
    uVar11 = (**(code **)(*piVar6 + 0xc))(uVar10);
    FUN_006ea4c0(199,uVar9,uVar11,uVar10,iVar15);
  }
  else if (*(int *)(*(int *)(param_2 + 4) + 0xe) == *(int *)(DAT_00d0ca90 + 6)) {
    if (bVar16) {
      uVar9 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))();
      uVar10 = FUN_0042b6c9(s_SPY_FOUND2_0083d2dc);
      FUN_007a630a((int)param_1 + 0xed2,uVar10,uVar9);
    }
    else {
      uVar9 = FUN_0042b6c9(s_EMPTYLINE_0083d2b8);
      FUN_007a630a((int)param_1 + 0xed2,uVar9);
    }
    iVar15 = (int)param_1 + 0xed2;
    if (!bVar4) {
      uVar9 = *(undefined4 *)(iVar3 + 6);
      uVar10 = (**(code **)(*piVar6 + 0xc))(iVar15);
      uVar11 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar10);
      FUN_006ea4c0(0xea,uVar9,uVar11,uVar10,iVar15);
      ExceptionList = pvStack_c;
      return 3;
    }
    uVar9 = *(undefined4 *)(iVar3 + 6);
    uVar10 = (**(code **)(*piVar6 + 0xc))(iVar15);
    uVar11 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar10);
    FUN_006ea4c0(0xe9,uVar9,uVar11,uVar10,iVar15);
  }
  else if (0 < DAT_00dc17dc) {
    if (bVar16) {
      piVar1 = (int *)(iVar2 + 0xe);
      iVar15 = (int)param_1 + 0xed2;
      uVar9 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))();
      uVar9 = (**(code **)(*piVar1 + 0xc))(uVar9);
      uVar10 = FUN_0042b6c9(s_SPY_FOUND3_0083d2d0);
      FUN_007a630a(iVar15,uVar10,uVar9);
      uVar9 = *(undefined4 *)(iVar3 + 6);
      if (!bVar4) {
        uVar10 = (**(code **)(*piVar1 + 0xc))(iVar15);
        uVar11 = (**(code **)(*piVar6 + 0xc))(uVar10);
        uVar12 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar11);
        FUN_006ea6f0(0xda,uVar9,uVar12,uVar11,uVar10,iVar15);
        ExceptionList = pvStack_c;
        return 3;
      }
      uVar10 = (**(code **)(*piVar1 + 0xc))(iVar15);
      uVar11 = (**(code **)(*piVar6 + 0xc))(uVar10);
      uVar12 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar11);
      uVar18 = 0xd9;
    }
    else if ((bVar4) && (1 < DAT_00dc17dc)) {
      uVar9 = *(undefined4 *)(iVar3 + 6);
      iVar15 = FUN_0042b6c9(s_EMPTYLINE_0083d2b8);
      uVar10 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(iVar15);
      uVar11 = (**(code **)(*piVar6 + 0xc))(uVar10);
      uVar12 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar11);
      uVar18 = 0xd9;
    }
    else {
      if (DAT_00dc17dc != 3) goto LAB_004941a8;
      uVar9 = *(undefined4 *)(iVar3 + 6);
      iVar15 = FUN_0042b6c9(s_EMPTYLINE_0083d2b8);
      uVar10 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(iVar15);
      uVar11 = (**(code **)(*piVar6 + 0xc))(uVar10);
      uVar12 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar11);
      uVar18 = 0xda;
    }
    FUN_006ea6f0(uVar18,uVar9,uVar12,uVar11,uVar10,iVar15);
  }
LAB_004941a8:
  if (bVar4) {
    puVar13 = operator_new(0xc);
    uStack_4 = 0;
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar14 = operator_new(0x18);
      if (puVar14 == (undefined2 *)0x0) {
        puVar14 = (undefined2 *)0x0;
      }
      else {
        puVar14[3] = 0;
        *(undefined1 *)(puVar14 + 2) = 0;
        *(undefined1 *)((int)puVar14 + 3) = 0;
        *(undefined1 *)(puVar14 + 1) = 0;
        puVar14[4] = 0;
        *(undefined4 *)(puVar14 + 5) = 0;
        puVar14[7] = 0;
        *(undefined4 *)(puVar14 + 8) = 0;
      }
      puVar13[1] = puVar14;
      *(undefined1 *)(puVar13 + 2) = 0;
      *(undefined1 *)((int)puVar13 + 9) = 1;
      *puVar13 = &PTR_FUN_007e6dcc;
      *(undefined1 *)((int)puVar13 + 10) = 0;
      *puVar14 = 0x167;
      iVar3 = puVar13[1];
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 4);
      *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(iVar2 + 8);
      iVar2 = puVar13[1];
      local_14 = local_14 & 0xff000000;
      *(uint *)(iVar2 + 2) = local_14;
      *(undefined2 *)(iVar2 + 6) = 0;
      iVar2 = puVar13[1];
      *puVar13 = &PTR_FUN_007e6dac;
      *(int *)(iVar2 + 0xe) = piVar6[3];
      *(short *)(iVar2 + 0x12) = (short)piVar6[4];
      *(undefined4 *)(puVar13[1] + 0x14) = 0;
    }
    uStack_4 = 0xffffffff;
    (**(code **)(*param_1 + 0x200))(puVar13);
  }
  ExceptionList = pvStack_c;
  return 3;
}


