// FUN_00648c30 @ 648c30 size=620

void __thiscall FUN_00648c30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 uVar8;
  int iVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d2796;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(int *)(param_1 + 0xc) = param_2;
  if (*(undefined4 **)(param_1 + 0x22) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x22))(1);
  }
  puVar5 = operator_new(0x12);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *(undefined1 *)(puVar5 + 4) = 0;
    *puVar5 = &PTR_LAB_007e378c;
  }
  *(undefined4 **)(param_1 + 0x22) = puVar5;
  if (param_2 == 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x16) + 0x4508);
joined_r0x00648da4:
    while (piVar1 != (int *)0x0) {
      piVar6 = (int *)*piVar1;
      piVar1 = (int *)piVar1[2];
      cVar4 = (**(code **)(*piVar6 + 0x28))();
      if (cVar4 == '\0') goto LAB_00648e13;
      iVar2 = piVar6[3];
      iVar9 = *(int *)(param_1 + 0x22);
      iVar3 = *(int *)(iVar9 + 8);
      pvVar7 = operator_new(0xe);
      uStack_4 = 0;
      if (pvVar7 == (void *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_0049a7a0(iVar2,iVar3,0);
      }
      iVar2 = *(int *)(iVar9 + 0xc);
      uStack_4 = 0xffffffff;
      *(undefined4 *)(iVar9 + 8) = uVar8;
      *(int *)(iVar9 + 0xc) = iVar2 + 1;
      if (iVar2 == 0) goto LAB_00648e78;
      *(undefined4 *)(iVar3 + 8) = uVar8;
    }
  }
  else if (param_2 == 2) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x16) + 0x4508);
    while (piVar1 != (int *)0x0) {
      piVar6 = (int *)*piVar1;
      piVar1 = (int *)piVar1[2];
      cVar4 = (**(code **)(*piVar6 + 0x2c))();
      if (cVar4 != '\0') {
        iVar9 = piVar6[3];
        iVar2 = *(int *)(param_1 + 0x22);
        iVar3 = *(int *)(iVar2 + 8);
        piVar6 = operator_new(0xe);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          *piVar6 = iVar9;
          piVar6[1] = iVar3;
          piVar6[2] = 0;
          *(undefined1 *)(piVar6 + 3) = 0;
        }
        iVar9 = *(int *)(iVar2 + 0xc);
        *(int **)(iVar2 + 8) = piVar6;
        *(int *)(iVar2 + 0xc) = iVar9 + 1;
        if (iVar9 == 0) {
          *(int **)(iVar2 + 4) = piVar6;
        }
        else {
          *(int **)(iVar3 + 8) = piVar6;
        }
      }
    }
  }
  else if (param_2 == 3) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x16) + 0x4508);
    while (piVar1 != (int *)0x0) {
      piVar6 = (int *)*piVar1;
      piVar1 = (int *)piVar1[2];
      cVar4 = (**(code **)(*piVar6 + 0x30))();
      if (cVar4 != '\0') {
        iVar9 = piVar6[3];
        iVar2 = *(int *)(param_1 + 0x22);
        iVar3 = *(int *)(iVar2 + 8);
        piVar6 = operator_new(0xe);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          *piVar6 = iVar9;
          piVar6[1] = iVar3;
          piVar6[2] = 0;
          *(undefined1 *)(piVar6 + 3) = 0;
        }
        iVar9 = *(int *)(iVar2 + 0xc);
        *(int **)(iVar2 + 8) = piVar6;
        *(int *)(iVar2 + 0xc) = iVar9 + 1;
        if (iVar9 == 0) {
          *(int **)(iVar2 + 4) = piVar6;
        }
        else {
          *(int **)(iVar3 + 8) = piVar6;
        }
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
LAB_00648e13:
  cVar4 = (**(code **)(*piVar6 + 0x2c))();
  if ((cVar4 != '\0') && (cVar4 = FUN_005177f0(), cVar4 != '\0')) {
    iVar2 = piVar6[3];
    iVar9 = *(int *)(param_1 + 0x22);
    iVar3 = *(int *)(iVar9 + 8);
    pvVar7 = operator_new(0xe);
    uStack_4 = 1;
    if (pvVar7 == (void *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_0049a7a0(iVar2,iVar3,0);
    }
    iVar2 = *(int *)(iVar9 + 0xc);
    uStack_4 = 0xffffffff;
    *(undefined4 *)(iVar9 + 8) = uVar8;
    *(int *)(iVar9 + 0xc) = iVar2 + 1;
    if (iVar2 == 0) {
LAB_00648e78:
      uStack_4 = 0xffffffff;
      *(undefined4 *)(iVar9 + 4) = uVar8;
    }
    else {
      *(undefined4 *)(iVar3 + 8) = uVar8;
    }
  }
  goto joined_r0x00648da4;
}


