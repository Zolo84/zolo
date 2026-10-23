// FUN_005e8810 @ 5e8810 size=623

void FUN_005e8810(int *param_1,int param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  void *pvVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  bool bVar13;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_007ce5b3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00436030();
  piVar1 = (int *)param_1[1];
  while (piVar1 != (int *)0x0) {
    puVar12 = (undefined4 *)*piVar1;
    piVar1 = (int *)piVar1[2];
    if (puVar12 != (undefined4 *)0x0) {
      (**(code **)*puVar12)();
    }
    FUN_00796cd8();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  (**(code **)(*param_1 + 0x14))();
  piStack_18 = (int *)0x0;
  piStack_1c = (int *)0x0;
  iStack_14 = 0;
  iStack_4 = 0;
  piVar1 = *(int **)(param_2 + 4);
  do {
    piVar2 = piStack_1c;
    if (piVar1 == (int *)0x0) {
      while (piVar2 != (int *)0x0) {
        piVar1 = (int *)piVar2[2];
        iVar6 = *piVar2;
        pvVar9 = operator_new(0x56);
        iStack_4._0_1_ = 1;
        if (pvVar9 == (void *)0x0) {
          uVar11 = 0;
        }
        else {
          iVar10 = FUN_00428ee0();
          if (iVar10 == 0) {
            uVar11 = FUN_005e5a30(iVar6);
          }
          else {
            uVar11 = FUN_005e5a30(iVar6);
          }
        }
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        iVar6 = param_1[2];
        puVar12 = operator_new(0xe);
        if (puVar12 == (undefined4 *)0x0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          *puVar12 = uVar11;
          puVar12[1] = iVar6;
          puVar12[2] = 0;
          *(undefined1 *)(puVar12 + 3) = 0;
        }
        iVar10 = param_1[3];
        param_1[2] = (int)puVar12;
        param_1[3] = iVar10 + 1;
        piVar2 = piVar1;
        if (iVar10 == 0) {
          param_1[1] = (int)puVar12;
        }
        else {
          *(undefined4 **)(iVar6 + 8) = puVar12;
        }
      }
      FUN_004353e0();
      while (piStack_1c != (int *)0x0) {
        piStack_1c = (int *)piStack_1c[2];
        FUN_00796cd8();
      }
      ExceptionList = pvStack_c;
      return;
    }
    piVar2 = (int *)piVar1[2];
    piVar4 = *(int **)(*piVar1 + 0x26);
    piVar1 = piStack_1c;
    piVar8 = piStack_18;
joined_r0x005e88b4:
    piStack_18 = piVar8;
    piStack_1c = piVar1;
    piVar1 = piVar2;
    if (piVar4 != (int *)0x0) {
      piVar1 = (int *)piVar4[2];
      piVar3 = (int *)*piVar4;
      piVar4 = piVar1;
      piVar1 = piStack_1c;
      piVar8 = piStack_18;
      if (param_3 != '\0') break;
      goto LAB_005e88ff;
    }
  } while( true );
  iVar6 = FUN_00428ee0();
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + -8;
  }
  if (((*(int *)(iVar6 + 0x74) != 7) && (*(int *)(iVar6 + 0x74) != 8)) ||
     (cVar5 = (**(code **)(*piVar3 + 0x14))(), cVar5 != '\0')) {
LAB_005e88ff:
    if (piStack_1c != (int *)0x0) {
      piVar7 = piStack_1c;
      do {
        if (*(int *)(&DAT_00dbe78e + *(int *)(*piVar7 + 0x130) * 4) <
            *(int *)(&DAT_00dbe78e + piVar3[0x4c] * 4)) {
          FUN_00473950(piVar3);
          goto joined_r0x005e88b4;
        }
        piVar7 = (int *)piVar7[2];
      } while (piVar7 != (int *)0x0);
    }
    piVar8 = operator_new(0xe);
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      *piVar8 = (int)piVar3;
      piVar8[1] = (int)piStack_18;
      piVar8[2] = 0;
      *(undefined1 *)(piVar8 + 3) = 0;
    }
    iVar6 = iStack_14 + 1;
    bVar13 = iStack_14 != 0;
    piVar1 = piVar8;
    iStack_14 = iVar6;
    if (bVar13) {
      piStack_18[2] = (int)piVar8;
      piVar1 = piStack_1c;
    }
  }
  goto joined_r0x005e88b4;
}


