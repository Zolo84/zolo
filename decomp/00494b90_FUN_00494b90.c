// FUN_00494b90 @ 494b90 size=1527

undefined4 FUN_00494b90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  char cVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined2 *puVar14;
  undefined4 uVar15;
  undefined2 uVar16;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = (&DAT_0089cad8)[*(int *)(iVar1 + 0x12)];
  if (iVar2 != 0) {
    cVar7 = *(char *)(iVar1 + 0x17);
    cVar6 = *(char *)(iVar1 + 0x16);
    iVar3 = (&DAT_0089cad8)[*(int *)(iVar1 + 0xe)];
    uVar16 = (undefined2)*(int *)(iVar1 + 0xe);
    if (*(char *)(iVar1 + 0x18) == '\0') {
      if (((cVar6 != '\0') &&
          (cVar6 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x120) + 0x1c0) + 0x24))(uVar16),
          cVar6 == '\0')) && (FUN_00459f50(uVar16), piVar5 = DAT_00d615f6, iVar3 != 0)) {
        while (piVar5 != (int *)0x0) {
          piVar4 = (int *)piVar5[2];
          iVar1 = *piVar5;
          piVar5 = piVar4;
          if (*(int *)(iVar1 + 0x1e) == 0) {
            if ((((&DAT_0089cad8)[*(int *)(iVar1 + 0x16)] == iVar2) &&
                (iVar3 == (&DAT_0089cad8)[*(int *)(iVar1 + 0x1a)])) ||
               (((&DAT_0089cad8)[*(int *)(iVar1 + 0x16)] == iVar3 &&
                ((&DAT_0089cad8)[*(int *)(iVar1 + 0x1a)] == iVar2)))) {
              puVar14 = (undefined2 *)FUN_00447250();
              uVar8 = *puVar14;
              uVar11 = 0;
              uVar10 = 0;
              uVar9 = (undefined2)((uint)*(undefined4 *)(puVar14 + 1) >> 0x10);
              uVar15 = FUN_00458280(0,0,uVar8,uVar9);
              FUN_0045d220(0x16,3,uVar15,uVar10,uVar11,uVar8,uVar9);
            }
          }
        }
        if (iVar2 == DAT_00d0ca90) {
          uVar15 = *(undefined4 *)(iVar2 + 6);
          uVar9 = (undefined2)*(undefined4 *)(iVar3 + 0x117de);
          uVar8 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar9);
          uVar10 = FUN_0042b6c9(s_TRADE_EMBARGO_0083d2f0);
          FUN_006eab80(0xf0,uVar15,&DAT_0088ebf8,uVar10,uVar8,uVar9);
        }
        else {
          uVar15 = *(undefined4 *)(iVar2 + 6);
          uVar8 = (undefined2)*(undefined4 *)(iVar2 + 0x117de);
          if (iVar3 == DAT_00d0ca90) {
            uVar9 = FUN_0042b6c9(54000);
            uVar10 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar9,uVar8);
            FUN_006eab80(0xf1,uVar15,&DAT_0088ebf8,uVar10,uVar9,uVar8);
          }
          else {
            uVar9 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar8);
            uVar10 = FUN_0042b6c9(s_TRADE_EMBARGO_0083d2f0);
            uVar11 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar10,uVar9);
            FUN_006ead30(0xf2,uVar15,&DAT_0088ebf8,uVar11,uVar10,uVar9,uVar8);
          }
        }
      }
      if (((cVar7 != '\0') &&
          (cVar7 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x120) + 0x204) + 0x24))(uVar16),
          cVar7 == '\0')) && (FUN_00459f50(uVar16), iVar3 != 0)) {
        if (iVar2 == DAT_00d0ca90) {
          uVar15 = *(undefined4 *)(iVar2 + 6);
          uVar16 = (undefined2)*(undefined4 *)(iVar3 + 0x117de);
          uVar10 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar16);
          uVar11 = FUN_0042b6c9(s_TECH_EMBARGO_0083d300);
          FUN_006eab80(0xf0,uVar15,&DAT_0088ebf8,uVar11,uVar10,uVar16);
          return 0;
        }
        uVar16 = (undefined2)*(undefined4 *)(iVar2 + 0x117de);
        if (iVar3 == DAT_00d0ca90) {
          uVar15 = *(undefined4 *)(iVar2 + 6);
          uVar10 = FUN_0042b6c9(s_TECH_EMBARGO_0083d300);
          uVar11 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar10,uVar16);
          FUN_006eab80(0xf1,uVar15,&DAT_0088ebf8,uVar11,uVar10,uVar16);
          return 0;
        }
        uVar15 = *(undefined4 *)(iVar2 + 6);
        uVar10 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar16);
        uVar11 = FUN_0042b6c9(s_TECH_EMBARGO_0083d300);
        uVar12 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar11,uVar10);
        FUN_006ead30(0xf2,uVar15,&DAT_0088ebf8,uVar12,uVar11,uVar10,uVar16);
      }
    }
    else if (iVar2 == iVar3) {
      if (cVar6 != '\0') {
        cVar6 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x120) + 0x1c0) + 0x24))
                          ((short)*(undefined4 *)(DAT_00d0ca90 + 6));
        if (cVar6 != '\0') {
          uVar15 = *(undefined4 *)(iVar2 + 6);
          uVar16 = (undefined2)*(undefined4 *)(iVar2 + 0x117de);
          uVar10 = FUN_0042b6c9(s_TECH_EMBARGO_0083d300);
          uVar11 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar10,uVar16);
          FUN_006eab80(0xf4,uVar15,&DAT_0088ebf8,uVar11,uVar10,uVar16);
        }
        (**(code **)(*(int *)(*(int *)(iVar2 + 0x120) + 0x1c0) + 0x10))();
      }
      if (cVar7 != '\0') {
        cVar7 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x120) + 0x204) + 0x24))
                          ((short)*(undefined4 *)(DAT_00d0ca90 + 6));
        if (cVar7 != '\0') {
          uVar15 = *(undefined4 *)(iVar2 + 6);
          uVar16 = (undefined2)*(undefined4 *)(iVar2 + 0x117de);
          uVar10 = FUN_0042b6c9(s_TRADE_EMBARGO_0083d2f0);
          uVar11 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar10,uVar16);
          FUN_006eab80(0xf4,uVar15,&DAT_0088ebf8,uVar11,uVar10,uVar16);
        }
        (**(code **)(*(int *)(*(int *)(iVar2 + 0x120) + 0x204) + 0x10))();
        return 0;
      }
    }
    else {
      if (((cVar6 != '\0') &&
          (cVar6 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x120) + 0x1c0) + 0x24))(uVar16),
          cVar6 != '\0')) &&
         ((**(code **)(*(int *)(*(int *)(iVar2 + 0x120) + 0x1c0) + 0x18))(uVar16), iVar3 != 0)) {
        if (iVar2 == DAT_00d0ca90) {
          uVar15 = *(undefined4 *)(iVar2 + 6);
          uVar9 = (undefined2)*(undefined4 *)(iVar3 + 0x117de);
          uVar8 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar9);
          uVar10 = FUN_0042b6c9(s_TRADE_EMBARGO_0083d2f0);
          FUN_006eab80(0xf3,uVar15,&DAT_0088ebf8,uVar10,uVar8,uVar9);
        }
        else {
          uVar15 = *(undefined4 *)(iVar2 + 6);
          uVar8 = (undefined2)*(undefined4 *)(iVar2 + 0x117de);
          if (iVar3 == DAT_00d0ca90) {
            uVar9 = FUN_0042b6c9(54000);
            uVar10 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar9,uVar8);
            FUN_006eab80(0xf4,uVar15,&DAT_0088ebf8,uVar10,uVar9,uVar8);
          }
          else {
            uVar9 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar8);
            uVar10 = FUN_0042b6c9(s_TRADE_EMBARGO_0083d2f0);
            uVar11 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar10,uVar9);
            FUN_006ead30(0xf5,uVar15,&DAT_0088ebf8,uVar11,uVar10,uVar9,uVar8);
          }
        }
      }
      if (((cVar7 != '\0') &&
          (cVar7 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x120) + 0x204) + 0x24))(uVar16),
          cVar7 != '\0')) &&
         ((**(code **)(*(int *)(*(int *)(iVar2 + 0x120) + 0x204) + 0x18))(uVar16), iVar3 != 0)) {
        if (iVar2 == DAT_00d0ca90) {
          uVar15 = *(undefined4 *)(iVar3 + 0x117de);
          uVar10 = *(undefined4 *)(iVar2 + 6);
          uVar11 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar15);
          uVar12 = FUN_0042b6c9(s_TECH_EMBARGO_0083d300);
          FUN_006eab80(0xf3,uVar10,&DAT_0088ebf8,uVar12,uVar11,uVar15);
          return 0;
        }
        uVar15 = *(undefined4 *)(iVar2 + 0x117de);
        if (iVar3 == DAT_00d0ca90) {
          uVar10 = *(undefined4 *)(iVar2 + 6);
          uVar11 = FUN_0042b6c9(s_TECH_EMBARGO_0083d300);
          uVar12 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar11,uVar15);
          FUN_006eab80(0xf4,uVar10,&DAT_0088ebf8,uVar12,uVar11,uVar15);
          return 0;
        }
        uVar10 = *(undefined4 *)(iVar2 + 6);
        uVar11 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar15);
        uVar12 = FUN_0042b6c9(s_TECH_EMBARGO_0083d300);
        uVar13 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar12,uVar11);
        FUN_006ead30(0xf5,uVar10,&DAT_0088ebf8,uVar13,uVar12,uVar11,uVar15);
        return 0;
      }
    }
  }
  return 0;
}


