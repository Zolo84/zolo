// FUN_006aa500 @ 6aa500 size=638

uint __thiscall FUN_006aa500(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar4 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d5b36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar7 = FUN_0051b230();
  uVar8 = uVar7;
  if ((((param_3 == (int *)0x0) || (uVar8 = 0, param_2[3] == 0)) ||
      (uVar8 = FUN_004e46e0(), (char)uVar8 != '\0')) ||
     ((uVar8 = CONCAT31((int3)(uVar8 >> 8),*(char *)((int)param_2 + 0x17b)),
      *(char *)((int)param_2 + 0x17b) != '\0' ||
      (uVar1 = param_2[0x92], uVar8 = FUN_00522770(), uVar8 != uVar1)))) {
    uVar8 = uVar8 & 0xffffff00;
  }
  else {
    iVar9 = FUN_0051c0c0();
    iVar10 = *param_2;
    param_2._0_1_ = 0;
    cVar5 = (**(code **)(iVar10 + 0x2c))();
    if (((cVar5 == '\0') || (*(int *)(uVar7 + 0x254) == 8)) || (*(int *)(uVar7 + 0x254) == 9)) {
      puVar2 = *(undefined4 **)(*(int *)(uVar7 + 0x1c2) + 4);
    }
    else {
      puVar2 = *(undefined4 **)(*(int *)(uVar7 + 0x46a) + 0x34);
    }
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      if ((((piVar3 != piVar4) && (piVar3[0x7d] == param_1)) &&
          (*(char *)((int)piVar3 + 0x17b) == '\0')) && (iVar10 = FUN_0051c0c0(), iVar10 == iVar9)) {
        cVar5 = (**(code **)(*piVar3 + 0x28))();
        cVar6 = (**(code **)(*piVar4 + 0x28))();
        if (cVar5 == cVar6) {
          iVar10 = FUN_00522770();
          iVar11 = FUN_00522770();
          if (iVar10 == iVar11) {
            FUN_00524610(0);
            (**(code **)(*param_3 + 0x18))(piVar3);
            puVar12 = operator_new(0xc);
            uStack_4 = 0;
            if (puVar12 == (undefined4 *)0x0) {
              puVar12 = (undefined4 *)0x0;
            }
            else {
              puVar13 = operator_new(0x1a);
              uStack_4 = CONCAT31(uStack_4._1_3_,1);
              if (puVar13 == (undefined2 *)0x0) {
                puVar13 = (undefined2 *)0x0;
              }
              else {
                FUN_0042d2d0();
                puVar13[4] = 0;
                *(undefined4 *)(puVar13 + 5) = 0;
                puVar13[7] = 0;
                *(undefined4 *)(puVar13 + 8) = 0;
                puVar13[10] = 0;
                *(undefined4 *)(puVar13 + 0xb) = 0;
              }
              puVar12[1] = puVar13;
              *(undefined1 *)(puVar12 + 2) = 0;
              *(undefined1 *)((int)puVar12 + 9) = 1;
              *puVar12 = &PTR_FUN_007e63c4;
              *(undefined1 *)((int)puVar12 + 10) = 0;
              *puVar13 = 0x49;
              iVar10 = puVar12[1];
              *(undefined4 *)(iVar10 + 8) = DAT_0088f230;
              *(undefined2 *)(iVar10 + 0xc) = DAT_0088f234;
              iVar10 = puVar12[1];
              uStack_14 = uStack_14 & 0xff000000;
              *(uint *)(iVar10 + 2) = uStack_14;
              *(undefined2 *)(iVar10 + 6) = 0;
              iVar10 = puVar12[1];
              *puVar12 = &PTR_FUN_007e63a4;
              *(int *)(iVar10 + 0xe) = piVar4[6];
              *(short *)(iVar10 + 0x12) = (short)piVar4[7];
              iVar10 = puVar12[1];
              *(int *)(iVar10 + 0x14) = piVar3[6];
              *(short *)(iVar10 + 0x18) = (short)piVar3[7];
            }
            uStack_4 = 0xffffffff;
            FUN_00565bf0(puVar12);
            param_2._0_1_ = 1;
          }
        }
      }
    }
    uVar8 = (uint)(byte)param_2;
  }
  ExceptionList = local_c;
  return uVar8;
}


