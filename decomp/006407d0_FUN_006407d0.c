// FUN_006407d0 @ 6407d0 size=499

void __thiscall FUN_006407d0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d21c6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x12a) = param_3;
  FUN_00436030();
  iVar9 = *(int *)(param_1 + 0x106);
  piVar4 = *(int **)(iVar9 + 4);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar1;
  }
  *(undefined4 *)(iVar9 + 4) = 0;
  *(undefined4 *)(iVar9 + 8) = 0;
  *(undefined4 *)(iVar9 + 0xc) = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 0xe) != 0)) {
    pvVar6 = operator_new(0x54);
    uStack_4 = 0;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_0063a160(param_2,param_2,param_3);
    }
    uStack_4 = 0xffffffff;
    iVar9 = *(int *)(param_1 + 0x106);
    iVar2 = *(int *)(iVar9 + 8);
    puVar8 = operator_new(0xe);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = uVar7;
      puVar8[1] = iVar2;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0;
    }
    iVar3 = *(int *)(iVar9 + 0xc);
    *(undefined4 **)(iVar9 + 8) = puVar8;
    *(int *)(iVar9 + 0xc) = iVar3 + 1;
    if (iVar3 == 0) {
      *(undefined4 **)(iVar9 + 4) = puVar8;
    }
    else {
      *(undefined4 **)(iVar2 + 8) = puVar8;
    }
  }
  piVar4 = *(int **)(DAT_00d0ca90 + 0x3666);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    iVar9 = *piVar4;
    cVar5 = FUN_0075b100();
    piVar4 = piVar1;
    if (((cVar5 == '\0') && (cVar5 = FUN_0075d000(), cVar5 != '\0')) && (*(int *)(iVar9 + 0xe) != 0)
       ) {
      pvVar6 = operator_new(0x54);
      uStack_4 = 1;
      if (pvVar6 == (void *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_0063a160(iVar9,param_2,param_3);
      }
      uStack_4 = 0xffffffff;
      iVar9 = *(int *)(param_1 + 0x106);
      iVar2 = *(int *)(iVar9 + 8);
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = uVar7;
        puVar8[1] = iVar2;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
      }
      iVar3 = *(int *)(iVar9 + 0xc);
      *(undefined4 **)(iVar9 + 8) = puVar8;
      *(int *)(iVar9 + 0xc) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(iVar9 + 4) = puVar8;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar8;
      }
    }
  }
  iVar9 = (**(code **)(**(int **)(param_1 + 0x106) + 4))();
  *(bool *)(param_1 + 0x100) = 0 < iVar9;
  FUN_004353e0();
  ExceptionList = pvStack_c;
  return;
}


