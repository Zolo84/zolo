// FUN_00689e70 @ 689e70 size=517

undefined4 __fastcall FUN_00689e70(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  void *pvVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  bool bVar13;
  int local_34;
  int local_30;
  int *local_1c;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d4eb3;
  piVar11 = (int *)0x0;
  local_1c = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
  piVar3 = (int *)0x0;
  piVar1 = *(int **)(param_1 + 4);
  local_c = ExceptionList;
  ExceptionList = &local_c;
  do {
    do {
      if (piVar1 == (int *)0x0) {
        uVar10 = 0;
        iVar5 = 0;
        piVar11 = piVar3;
        while (piVar11 != (int *)0x0) {
          piVar1 = piVar11 + 2;
          puVar6 = (undefined4 *)*piVar11;
          iVar7 = puVar6[1];
          piVar11 = (int *)*piVar1;
          if (iVar5 < iVar7) {
            uVar10 = *puVar6;
            iVar5 = iVar7;
          }
        }
        while (piVar3 != (int *)0x0) {
          piVar11 = (int *)piVar3[2];
          FUN_00796cd8(*piVar3);
          FUN_00796cd8(piVar3);
          piVar3 = piVar11;
        }
        ExceptionList = local_c;
        return uVar10;
      }
      piVar12 = (int *)piVar1[2];
      iVar5 = FUN_004e9370(*(undefined4 *)(*piVar1 + 4));
      local_34 = 0;
      piVar1 = piVar12;
    } while (*(int *)(iVar5 + 0x290) < 1);
    local_30 = 0;
    piVar12 = piVar11;
    do {
      puVar6 = (undefined4 *)(local_30 + *(int *)(iVar5 + 0x298));
      piVar11 = piVar12;
      piVar3 = local_1c;
      if (puVar6[1] != 4) {
        iVar7 = FUN_004e9370(*puVar6);
        if ((*(int *)(iVar7 + 0x3d8) != 0) &&
           (cVar4 = FUN_0044b280(*(undefined4 *)(*(int *)(iVar7 + 0x3d8) + 6)), cVar4 != '\0')) {
          bVar13 = false;
          piVar8 = local_1c;
          if (local_1c != (int *)0x0) {
            do {
              piVar2 = (int *)piVar8[2];
              piVar8 = (int *)*piVar8;
              if (*piVar8 == *(int *)(*(int *)(iVar7 + 0x3d8) + 6)) {
                bVar13 = true;
                piVar8[1] = piVar8[1] + 1;
              }
              piVar8 = piVar2;
            } while (piVar2 != (int *)0x0);
            if (bVar13) goto LAB_00689fee;
          }
          pvVar9 = operator_new(8);
          local_4._0_1_ = 1;
          if (pvVar9 == (void *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar6 = (undefined4 *)FUN_0076c770();
          }
          local_4 = (uint)local_4._1_3_ << 8;
          uVar10 = *(undefined4 *)(*(int *)(iVar7 + 0x3d8) + 6);
          puVar6[1] = 1;
          *puVar6 = uVar10;
          piVar11 = operator_new(0xe);
          if (piVar11 == (int *)0x0) {
            piVar11 = (int *)0x0;
          }
          else {
            *piVar11 = (int)puVar6;
            piVar11[1] = (int)piVar12;
            piVar11[2] = 0;
            *(undefined1 *)(piVar11 + 3) = 0;
          }
          iVar7 = local_14 + 1;
          bVar13 = local_14 != 0;
          piVar3 = piVar11;
          local_14 = iVar7;
          if (bVar13) {
            piVar12[2] = (int)piVar11;
            piVar3 = local_1c;
          }
        }
      }
LAB_00689fee:
      local_1c = piVar3;
      local_34 = local_34 + 1;
      local_30 = local_30 + 0xc;
      piVar12 = piVar11;
      piVar3 = local_1c;
    } while (local_34 < *(int *)(iVar5 + 0x290));
  } while( true );
}


