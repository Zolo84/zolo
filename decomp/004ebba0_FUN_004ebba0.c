// FUN_004ebba0 @ 4ebba0 size=2002

void FUN_004ebba0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int *piVar9;
  uint *puVar10;
  void *pvVar11;
  int iVar12;
  int *piVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uStack00000004;
  int iStack00000008;
  int *piStack00000010;
  uint uStack00000014;
  int iStack00000018;
  void *in_stack_0000b580;
  int in_stack_0000b590;
  int in_stack_0000b594;
  void *local_c;
  undefined1 *local_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  local_8 = &LAB_007c01a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007a69e0();
  iVar1 = in_stack_0000b594 + 1;
  iVar12 = iVar1 * iVar1;
  piVar2 = operator_new(iVar12 * 4);
  puVar3 = operator_new(iVar12 * 4);
  FUN_004eedc0(s_map_id_tbl_00847898);
  if (0 < iVar12) {
    puVar7 = puVar3;
    do {
      *(undefined4 *)(((int)piVar2 - (int)puVar3) + (int)puVar7) = 0;
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  local_c = (void *)0xfffffffe;
  do {
    local_8 = (undefined1 *)0x2;
    do {
      puVar14 = local_8;
      iVar12 = (int)local_c + 2;
      iVar4 = FUN_004eeef0((int)local_8 + -2,iVar12);
      if (iVar4 == 0) {
        iVar12 = FUN_004eeef0((int)puVar14 + -4,iVar12);
        iVar4 = FUN_004eeef0(puVar14,(int)local_c + 2);
        if (*(int *)(in_stack_0000b590 + 0x254 + iVar4 * 0x4b2) == 9) {
          iVar4 = iVar4 + iVar12 * in_stack_0000b594;
          piVar2[iVar4] = piVar2[iVar4] + 1;
          iVar5 = FUN_004eeef0((int)local_8 + 0xe,(int)local_c + 2);
          iVar4 = *(int *)(in_stack_0000b590 + 0x254 + iVar5 * 0x4b2);
          puVar14 = local_8;
          if ((iVar4 != 8) && (iVar4 != 9)) {
            iVar4 = iVar5 * in_stack_0000b594 + iVar12;
            iVar5 = iVar5 + iVar12 * in_stack_0000b594;
            puVar3[iVar4] = puVar3[iVar4] + 1;
            puVar3[iVar5] = puVar3[iVar5] + 1;
            piVar2[iVar4] = piVar2[iVar4] + 1;
            piVar2[iVar5] = piVar2[iVar5] + 1;
          }
        }
        else {
          piVar2[iVar4 * in_stack_0000b594 + iVar12] =
               piVar2[iVar4 * in_stack_0000b594 + iVar12] + 1;
          piVar2[iVar12 * in_stack_0000b594 + iVar4] =
               piVar2[iVar12 * in_stack_0000b594 + iVar4] + 1;
        }
        iVar4 = FUN_004eeef0((int)puVar14 + -2,local_c);
        iVar12 = (int)local_c + 4;
        iVar5 = FUN_004eeef0((int)puVar14 + -2,iVar12);
        if (*(int *)(in_stack_0000b590 + 0x254 + iVar5 * 0x4b2) == 9) {
          iVar5 = iVar5 + iVar4 * in_stack_0000b594;
          piVar2[iVar5] = piVar2[iVar5] + 1;
          iVar6 = FUN_004eeef0((int)local_8 + -2,(int)local_c + 0x12);
          iVar5 = *(int *)(in_stack_0000b590 + 0x254 + iVar6 * 0x4b2);
          if ((iVar5 != 8) && (iVar5 != 9)) {
            iVar5 = iVar6 * in_stack_0000b594 + iVar4;
            iVar6 = iVar6 + iVar4 * in_stack_0000b594;
            puVar3[iVar5] = puVar3[iVar5] + 1;
            puVar3[iVar6] = puVar3[iVar6] + 1;
            piVar2[iVar5] = piVar2[iVar5] + 1;
            piVar2[iVar6] = piVar2[iVar6] + 1;
          }
        }
        else {
          piVar2[iVar5 * in_stack_0000b594 + iVar4] = piVar2[iVar5 * in_stack_0000b594 + iVar4] + 1;
          piVar2[iVar4 * in_stack_0000b594 + iVar5] = piVar2[iVar4 * in_stack_0000b594 + iVar5] + 1;
        }
        puVar14 = local_8;
        iVar12 = FUN_004eeef0(local_8,iVar12);
        iVar4 = FUN_004eeef0((int)puVar14 + -4,local_c);
        if (*(int *)(in_stack_0000b590 + 0x254 + iVar4 * 0x4b2) == 9) {
          iVar4 = iVar4 + iVar12 * in_stack_0000b594;
          piVar2[iVar4] = piVar2[iVar4] + 1;
          iVar5 = FUN_004eeef0((int)local_8 + -0x12,(int)local_c + -0xe);
          iVar4 = *(int *)(in_stack_0000b590 + 0x254 + iVar5 * 0x4b2);
          if ((iVar4 != 8) && (iVar4 != 9)) {
            iVar4 = iVar5 * in_stack_0000b594 + iVar12;
            iVar5 = iVar5 + iVar12 * in_stack_0000b594;
            puVar3[iVar4] = puVar3[iVar4] + 1;
            puVar3[iVar5] = puVar3[iVar5] + 1;
            piVar2[iVar4] = piVar2[iVar4] + 1;
            piVar2[iVar5] = piVar2[iVar5] + 1;
          }
        }
        else {
          piVar2[iVar4 * in_stack_0000b594 + iVar12] =
               piVar2[iVar4 * in_stack_0000b594 + iVar12] + 1;
          piVar2[iVar12 * in_stack_0000b594 + iVar4] =
               piVar2[iVar12 * in_stack_0000b594 + iVar4] + 1;
        }
        pvVar11 = local_c;
        iVar12 = FUN_004eeef0(local_8,local_c);
        iVar4 = FUN_004eeef0((int)local_8 + -4,(int)pvVar11 + 4);
        if (*(int *)(in_stack_0000b590 + 0x254 + iVar4 * 0x4b2) == 9) {
          iVar4 = iVar4 + iVar12 * in_stack_0000b594;
          piVar2[iVar4] = piVar2[iVar4] + 1;
          iVar5 = FUN_004eeef0((int)local_8 + -0x12,(int)local_c + 0x12);
          iVar4 = *(int *)(in_stack_0000b590 + 0x254 + iVar5 * 0x4b2);
          puVar14 = local_8;
          if ((iVar4 != 8) && (iVar4 != 9)) {
            iVar4 = iVar5 * in_stack_0000b594 + iVar12;
            iVar5 = iVar5 + iVar12 * in_stack_0000b594;
            puVar3[iVar4] = puVar3[iVar4] + 1;
            puVar3[iVar5] = puVar3[iVar5] + 1;
            piVar2[iVar4] = piVar2[iVar4] + 1;
            piVar2[iVar5] = piVar2[iVar5] + 1;
          }
        }
        else {
          piVar2[iVar4 * in_stack_0000b594 + iVar12] =
               piVar2[iVar4 * in_stack_0000b594 + iVar12] + 1;
          piVar2[iVar12 * in_stack_0000b594 + iVar4] =
               piVar2[iVar12 * in_stack_0000b594 + iVar4] + 1;
          puVar14 = local_8;
        }
      }
      local_8 = (undefined1 *)((int)puVar14 + 1);
    } while ((int)puVar14 + -1 < 0x7500);
    iVar12 = (int)local_c + 3;
    local_c = (void *)((int)local_c + 1);
  } while (iVar12 < 0x2d00);
  local_c = (void *)0x0;
  puVar7 = operator_new(iVar1 * 4);
  pvVar8 = operator_new(1200000);
  *puVar7 = 0;
  iStack00000008 = 0;
  uStack00000014 = 0xffffffff;
  uStack00000004 = 1;
  pvVar11 = (void *)0x0;
  if (1 < in_stack_0000b594) {
    piStack00000010 = (int *)(in_stack_0000b590 + 0x706);
    iStack00000018 = in_stack_0000b594;
    piVar9 = piVar2;
    do {
      piVar9 = piVar9 + 1;
      *(void **)((int)piVar9 + ((int)puVar7 - (int)piVar2)) = pvVar11;
      uVar15 = 0;
      local_8 = (undefined1 *)0x0;
      if (0 < in_stack_0000b594) {
        puVar10 = (uint *)((int)pvVar8 + (int)pvVar11 * 0xc + 4);
        local_4 = (int *)(in_stack_0000b590 + 0x254);
        piVar13 = piVar9;
        do {
          if (((((uVar15 != uStack00000004) && (uVar15 != 0)) && (uVar15 != DAT_00877690)) &&
              ((uStack00000004 != 0 && (uStack00000004 != DAT_00877690)))) &&
             ((*local_4 != 9 && (8 < *piVar13)))) {
            puVar10[-1] = uVar15;
            *puVar10 = (uint)(*(int *)(((int)puVar3 - (int)piVar2) + (int)piVar13) == *piVar13);
            local_c = (void *)((int)local_c + 1);
            puVar10 = puVar10 + 3;
            if ((*piStack00000010 != 8) && (*piStack00000010 != 9)) {
              local_8 = (undefined1 *)((int)local_8 + 1);
            }
            if ((iStack00000008 < (int)local_8) && (uStack00000004 != 0x2cc)) {
              iStack00000008 = (int)local_8;
              uStack00000014 = uStack00000004;
            }
            if (99999 < (int)local_c) {
              FUN_00405ad0(s_Build_error__Adjacency_overflow__00848cd8);
            }
          }
          uVar15 = uVar15 + 1;
          local_4 = (int *)((int)local_4 + 0x4b2);
          piVar13 = piVar13 + in_stack_0000b594;
        } while ((int)uVar15 < in_stack_0000b594);
      }
      uVar15 = 0;
      if (0 < in_stack_0000b594) {
        puVar10 = (uint *)((int)pvVar8 + (int)local_c * 0xc);
        local_4 = (int *)(in_stack_0000b590 + 0x254);
        pvVar11 = local_c;
        do {
          if ((((uVar15 != uStack00000004) && (uVar15 != 0)) && (uVar15 != DAT_00877690)) &&
             (((uStack00000004 != 0 && (uStack00000004 != DAT_00877690)) &&
              ((*local_4 == 9 && (8 < piVar2[iStack00000018 + uVar15])))))) {
            *puVar10 = uVar15;
            puVar10[1] = 0;
            local_c = (void *)((int)pvVar11 + 1);
            puVar10 = puVar10 + 3;
            if ((*piStack00000010 != 8) && (*piStack00000010 != 9)) {
              local_8 = (undefined1 *)((int)local_8 + 1);
            }
            if ((iStack00000008 < (int)local_8) && (uStack00000004 != 0x2cc)) {
              iStack00000008 = (int)local_8;
              uStack00000014 = uStack00000004;
            }
            pvVar11 = local_c;
            if (99999 < (int)local_c) {
              FUN_00405ad0(s_Build_error__Adjacency_overflow__00848cd8);
              pvVar11 = local_c;
            }
          }
          uVar15 = uVar15 + 1;
          local_4 = (int *)((int)local_4 + 0x4b2);
        } while ((int)uVar15 < in_stack_0000b594);
      }
      uStack00000004 = uStack00000004 + 1;
      iStack00000018 = iStack00000018 + in_stack_0000b594;
      piStack00000010 = (int *)((int)piStack00000010 + 0x4b2);
      pvVar11 = local_c;
    } while ((int)uStack00000004 < in_stack_0000b594);
  }
  FUN_007a6966(s_Max_adjacencies__prov__d____d_00848cb8,uStack00000014,iStack00000008);
  puVar7[in_stack_0000b594] = pvVar11;
  FUN_00426d70(&DAT_00dc3b04,&DAT_0082ef98);
  FUN_00427330(puVar7,4,iVar1);
  FUN_00427330(pvVar8,0xc,pvVar11);
  FUN_00796cd8(pvVar8);
  FUN_00796cd8(puVar7);
  FUN_00796cd8(piVar2);
  FUN_00796cd8(puVar3);
  FUN_00426f80();
  FUN_004eee00();
  ExceptionList = in_stack_0000b580;
  return;
}


