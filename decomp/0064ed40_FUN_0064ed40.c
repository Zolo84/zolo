// FUN_0064ed40 @ 64ed40 size=548

undefined1 __thiscall FUN_0064ed40(int param_1,char *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  undefined1 local_28 [8];
  undefined **local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  undefined1 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007d2c78;
  ExceptionList = &pvStack_c;
  *param_2 = '\0';
  *(undefined4 *)(param_1 + 0x221b4) = 0;
  *(undefined4 *)(param_1 + 0x221b8) = 0;
  *(undefined1 *)(param_1 + 0x221bc) = 0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_20 = &PTR_LAB_007ef1f8;
  piVar11 = *(int **)(param_1 + 0x221a6);
  local_4 = 0;
  piVar2 = local_1c;
joined_r0x0064eda1:
  do {
    local_1c = piVar2;
    if (piVar11 == (int *)0x0) {
      if (local_1c != (int *)0x0) {
        piVar11 = local_1c;
        do {
          piVar2 = (int *)piVar11[2];
          (**(code **)(*(int *)(param_1 + 0x221a2) + 0x18))(*piVar11);
          piVar11 = piVar2;
        } while (piVar2 != (int *)0x0);
      }
      uVar1 = *(undefined1 *)(param_1 + 0x221bc);
      piVar11 = local_1c;
      while (piVar11 != (int *)0x0) {
        piVar2 = (int *)piVar11[2];
        FUN_00796cd8(piVar11);
        piVar11 = piVar2;
      }
      ExceptionList = pvStack_c;
      return uVar1;
    }
    iVar9 = *piVar11;
    piVar11 = (int *)piVar11[2];
    if (*(char *)(iVar9 + 0x1235) == '\0') {
      iVar7 = DAT_00893530 + 0x14;
      FUN_00712010(local_28);
      cVar4 = FUN_0042ddd0(iVar7);
      if (cVar4 != '\0') {
        *(undefined4 *)(iVar9 + 0x24) = DAT_00d0ca90;
        cVar4 = FUN_0072a260();
        if (cVar4 == '\0') {
          *(undefined4 *)(iVar9 + 0x23a8) = 0;
          piVar2 = local_1c;
        }
        else {
          iVar7 = *(int *)(iVar9 + 0x23a8);
          cVar4 = FUN_0072a2c0();
          if (cVar4 == '\0') {
            *(int *)(param_1 + 0x221b8) = *(int *)(param_1 + 0x221b8) + 1;
            iVar5 = 1;
          }
          else {
            *(int *)(param_1 + 0x221b4) = *(int *)(param_1 + 0x221b4) + 1;
            iVar5 = 2;
          }
          if (iVar7 < iVar5) {
            if (*(char *)(param_1 + 0x221bc) != '\0') {
              uVar6 = 0xffffffff;
              pcVar10 = &DAT_0083bf48;
              do {
                pcVar13 = pcVar10;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar13 = pcVar10 + 1;
                cVar4 = *pcVar10;
                pcVar10 = pcVar13;
              } while (cVar4 != '\0');
              uVar6 = ~uVar6;
              iVar7 = -1;
              pcVar10 = param_2;
              do {
                pcVar12 = pcVar10;
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                pcVar12 = pcVar10 + 1;
                cVar4 = *pcVar10;
                pcVar10 = pcVar12;
              } while (cVar4 != '\0');
              pcVar10 = pcVar13 + -uVar6;
              pcVar13 = pcVar12 + -1;
              for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
                pcVar10 = pcVar10 + 4;
                pcVar13 = pcVar13 + 4;
              }
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pcVar13 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar13 = pcVar13 + 1;
              }
            }
            uVar6 = 0xffffffff;
            pcVar10 = (char *)(iVar9 + 0x1028);
            do {
              pcVar13 = pcVar10;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar13 = pcVar10 + 1;
              cVar4 = *pcVar10;
              pcVar10 = pcVar13;
            } while (cVar4 != '\0');
            uVar6 = ~uVar6;
            iVar7 = -1;
            pcVar10 = param_2;
            do {
              pcVar12 = pcVar10;
              if (iVar7 == 0) break;
              iVar7 = iVar7 + -1;
              pcVar12 = pcVar10 + 1;
              cVar4 = *pcVar10;
              pcVar10 = pcVar12;
            } while (cVar4 != '\0');
            pcVar10 = pcVar13 + -uVar6;
            pcVar13 = pcVar12 + -1;
            for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar13 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar13 = pcVar13 + 1;
            }
            *(undefined1 *)(param_1 + 0x221bc) = 1;
          }
          *(int *)(iVar9 + 0x23a8) = iVar5;
          piVar2 = local_1c;
        }
        goto joined_r0x0064eda1;
      }
    }
    piVar3 = local_18;
    local_18 = operator_new(0xe);
    if (local_18 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      *local_18 = iVar9;
      local_18[1] = (int)piVar3;
      local_18[2] = 0;
      *(undefined1 *)(local_18 + 3) = 0;
    }
    iVar9 = local_14 + 1;
    bVar14 = local_14 != 0;
    piVar2 = local_18;
    local_14 = iVar9;
    if (bVar14) {
      piVar3[2] = (int)local_18;
      piVar2 = local_1c;
    }
  } while( true );
}


