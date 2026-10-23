// FUN_004b3230 @ 4b3230 size=587

void __thiscall FUN_004b3230(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void **ppvVar3;
  int *piVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *pvVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007be4be;
  ppvVar3 = &pvStack_c;
  piVar4 = *(int **)(param_1 + 8);
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar3, piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    puVar7 = (undefined4 *)*piVar4;
    ppvVar3 = ExceptionList;
    piVar4 = piVar1;
    if (puVar7 != (undefined4 *)0x0) {
      if (puVar7[1] != 0) {
        FUN_004b3480(1);
      }
      FUN_00796cd8(*puVar7);
      FUN_00796cd8(puVar7);
      ppvVar3 = ExceptionList;
    }
  }
  (**(code **)(*(int *)(param_1 + 4) + 0x10))();
  piVar4 = (int *)FUN_00534391();
  iVar5 = *piVar4;
  do {
    if (iVar5 == 4) {
      FUN_005343dc();
      ExceptionList = pvStack_c;
      return;
    }
    iVar5 = FUN_00535490();
    if (iVar5 != 1) {
      ExceptionList = pvStack_c;
      return;
    }
    if (*(int *)(param_2 + 4) == 0x4ee) {
      pvVar9 = operator_new(0xa8);
      uStack_4 = 0;
      if (pvVar9 == (void *)0x0) {
        pvVar9 = (void *)0x0;
      }
      else {
        FUN_004b0620();
        FUN_004b0620();
        uStack_4 = CONCAT31(uStack_4._1_3_,2);
        *(undefined2 *)((int)pvVar9 + 0x8c) = 0;
        *(undefined1 *)((int)pvVar9 + 0x8a) = 0;
        *(undefined1 *)((int)pvVar9 + 0x89) = 0;
        *(undefined1 *)((int)pvVar9 + 0x88) = 0;
        FUN_0042d2d0();
        *(undefined2 *)((int)pvVar9 + 0x98) = 0;
        *(undefined4 *)((int)pvVar9 + 0x9a) = 0;
        *(undefined2 *)((int)pvVar9 + 0x9e) = 0;
        *(undefined4 *)((int)pvVar9 + 0xa0) = 0;
        *(void **)((int)pvVar9 + 0x2e) = pvVar9;
        *(void **)((int)pvVar9 + 0x72) = pvVar9;
        *(undefined1 *)((int)pvVar9 + 0xa4) = 1;
        *(undefined1 *)((int)pvVar9 + 0xa5) = 0;
        *(undefined1 *)((int)pvVar9 + 0xa6) = 0;
        *(undefined4 *)((int)pvVar9 + 0x94) = 0;
      }
      uStack_4 = 0xffffffff;
      FUN_004b0fe0(param_2);
      puVar7 = operator_new(8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7[1] = pvVar9;
        *puVar7 = 0;
      }
      iVar5 = *(int *)(param_1 + 0xc);
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = puVar7;
        puVar8[1] = iVar5;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
      }
      iVar2 = *(int *)(param_1 + 0x10);
      *(undefined4 **)(param_1 + 0xc) = puVar8;
      *(int *)(param_1 + 0x10) = iVar2 + 1;
      if (iVar2 == 0) goto LAB_004b3441;
      *(undefined4 **)(iVar5 + 8) = puVar8;
    }
    else {
      if (*(int *)(param_2 + 4) != 0x4f1) {
        ExceptionList = pvStack_c;
        return;
      }
      puVar6 = operator_new(0x18);
      if (puVar6 == (undefined2 *)0x0) {
        puVar6 = (undefined2 *)0x0;
      }
      else {
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 1) = 0;
        puVar6[5] = 0;
        *(undefined1 *)(puVar6 + 4) = 0;
        *(undefined1 *)((int)puVar6 + 7) = 0;
        *(undefined1 *)(puVar6 + 3) = 0;
      }
      FUN_004b1c50(param_2);
      puVar7 = operator_new(8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        *puVar7 = puVar6;
        puVar7[1] = 0;
      }
      iVar5 = *(int *)(param_1 + 0xc);
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = puVar7;
        puVar8[1] = iVar5;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
      }
      iVar2 = *(int *)(param_1 + 0x10);
      *(undefined4 **)(param_1 + 0xc) = puVar8;
      *(int *)(param_1 + 0x10) = iVar2 + 1;
      if (iVar2 == 0) {
LAB_004b3441:
        *(undefined4 **)(param_1 + 8) = puVar8;
      }
      else {
        *(undefined4 **)(iVar5 + 8) = puVar8;
      }
    }
    piVar4 = (int *)FUN_00534391();
    iVar5 = *piVar4;
  } while( true );
}


