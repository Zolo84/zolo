// FUN_005e23f0 @ 5e23f0 size=1017

void __fastcall FUN_005e23f0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint3 uVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  int *piStack_40;
  int iStack_3c;
  int *piStack_30;
  int *piStack_2c;
  int iStack_28;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ce0bc;
  iVar6 = *(int *)(param_1 + 0xf8);
  piVar9 = *(int **)(iVar6 + 4);
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (piVar9 != (int *)0x0) {
    puVar7 = (undefined4 *)*piVar9;
    piVar9 = (int *)piVar9[2];
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)();
    }
    FUN_00796cd8();
  }
  *(undefined4 *)(iVar6 + 4) = 0;
  *(undefined4 *)(iVar6 + 8) = 0;
  *(undefined4 *)(iVar6 + 0xc) = 0;
  iVar6 = FUN_00428ee0();
  if (iVar6 == 0) {
    piStack_40 = (int *)0x0;
  }
  else {
    piStack_40 = (int *)(iVar6 + -0x14);
  }
  puStack_1c = (undefined4 *)0x0;
  iStack_4 = 0;
  puVar7 = puStack_1c;
  if (piStack_40 != (int *)0x0) {
    puStack_1c = (undefined4 *)0x0;
    puStack_18 = (undefined4 *)0x0;
    iStack_14 = 0;
    piStack_30 = (int *)0x0;
    piStack_2c = (int *)0x0;
    iStack_28 = 0;
    iVar6 = 0;
    iStack_4._1_3_ = 0;
    uVar5 = iStack_4._1_3_;
    iStack_4._1_3_ = 0;
    if (0 < DAT_0087769c) {
      do {
        iStack_4._0_1_ = 1;
        puVar7 = operator_new(0x12);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          *(undefined1 *)(puVar7 + 4) = 0;
          *puVar7 = &PTR_LAB_007e4b94;
        }
        pvVar8 = operator_new(0xe);
        iStack_4._0_1_ = 2;
        if (pvVar8 == (void *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)FUN_005e3f40(puVar7,piStack_2c);
        }
        piVar1 = piVar9;
        if (iStack_28 != 0) {
          piStack_2c[2] = (int)piVar9;
          piVar1 = piStack_30;
        }
        piStack_30 = piVar1;
        iVar6 = iVar6 + 1;
        piStack_2c = piVar9;
        iStack_28 = iStack_28 + 1;
        uVar5 = iStack_4._1_3_;
      } while (iVar6 < DAT_0087769c);
    }
    iStack_4._1_3_ = uVar5;
    iStack_4._0_1_ = 1;
    for (piVar9 = *(int **)((int)piStack_40 + 0x26); piVar9 != (int *)0x0; piVar9 = (int *)piVar9[2]
        ) {
      iVar6 = *piVar9;
      piVar1 = piStack_30;
      for (iVar13 = *(int *)(iVar6 + 0x130); iVar13 != 0; iVar13 = iVar13 + -1) {
        piVar1 = (int *)piVar1[2];
      }
      piVar1 = (int *)*piVar1;
      piVar10 = (int *)piVar1[1];
      if (piVar10 != (int *)0x0) {
        do {
          if (*(int *)(*piVar10 + 0x138) < *(int *)(iVar6 + 0x138)) {
            (**(code **)(*piVar1 + 0x28))(&stack0xffffffa8,*piVar10);
            FUN_00473950(iVar6);
            goto LAB_005e25f1;
          }
          piVar10 = (int *)piVar10[2];
        } while (piVar10 != (int *)0x0);
      }
      iVar13 = piVar1[2];
      pvVar8 = operator_new(0xe);
      iStack_4._0_1_ = 3;
      if (pvVar8 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0045baf0(iVar6,iVar13);
      }
      iVar2 = piVar1[3];
      iStack_4._0_1_ = 1;
      piVar1[2] = iVar6;
      piVar1[3] = iVar2 + 1;
      if (iVar2 == 0) {
        piVar1[1] = iVar6;
      }
      else {
        *(int *)(iVar13 + 8) = iVar6;
      }
LAB_005e25f1:
    }
    iStack_3c = 0;
    if (0 < DAT_0087769c) {
      piStack_40 = &DAT_00dbf76a;
      do {
        iVar6 = *piStack_40;
        piVar9 = piStack_30;
        if (iVar6 != 0x8c) {
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            piVar9 = (int *)piVar9[2];
          }
          puVar4 = puStack_1c;
          for (puVar7 = *(undefined4 **)(*piVar9 + 4); puStack_1c = puVar4,
              puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)puVar7[2]) {
            uVar3 = *puVar7;
            pvVar8 = operator_new(0xe);
            iStack_4._0_1_ = 4;
            if (pvVar8 == (void *)0x0) {
              puVar11 = (undefined4 *)0x0;
            }
            else {
              puVar11 = (undefined4 *)FUN_0045baf0(uVar3,puStack_18);
            }
            iStack_4._0_1_ = 1;
            puStack_1c = puVar11;
            if (iStack_14 != 0) {
              puStack_18[2] = puVar11;
              puStack_1c = puVar4;
            }
            puVar4 = puStack_1c;
            puStack_18 = puVar11;
            iStack_14 = iStack_14 + 1;
          }
        }
        iStack_3c = iStack_3c + 1;
        piStack_40 = piStack_40 + 1;
      } while (iStack_3c < DAT_0087769c);
    }
    piVar9 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      do {
        if ((undefined4 *)*piVar9 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar9)();
        }
        piVar9 = (int *)piVar9[2];
      } while (piVar9 != (int *)0x0);
      while (piStack_30 != (int *)0x0) {
        piStack_30 = (int *)piStack_30[2];
        FUN_00796cd8();
      }
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    FUN_005e3df0();
    puVar7 = puStack_1c;
  }
  while (puVar7 != (undefined4 *)0x0) {
    uVar12 = 0;
    puVar4 = (undefined4 *)puVar7[2];
    uVar3 = *puVar7;
    pvVar8 = operator_new(0x80);
    iStack_4._0_1_ = 5;
    if (pvVar8 != (void *)0x0) {
      uVar12 = FUN_005dcb20(uVar3);
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    iVar6 = *(int *)(param_1 + 0xf8);
    iVar13 = *(int *)(iVar6 + 8);
    puVar11 = operator_new(0xe);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      *puVar11 = uVar12;
      puVar11[1] = iVar13;
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
    }
    iVar2 = *(int *)(iVar6 + 0xc);
    *(undefined4 **)(iVar6 + 8) = puVar11;
    *(int *)(iVar6 + 0xc) = iVar2 + 1;
    puVar7 = puVar4;
    if (iVar2 == 0) {
      *(undefined4 **)(iVar6 + 4) = puVar11;
    }
    else {
      *(undefined4 **)(iVar13 + 8) = puVar11;
    }
  }
  FUN_004353e0();
  while (puStack_1c != (undefined4 *)0x0) {
    puStack_1c = (undefined4 *)puStack_1c[2];
    FUN_00796cd8();
  }
  ExceptionList = pvStack_c;
  return;
}


