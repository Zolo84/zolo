// FUN_005b0540 @ 5b0540 size=584

void FUN_005b0540(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  undefined2 uVar1;
  void *pvVar2;
  int *piVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int unaff_retaddr;
  undefined2 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cb999;
  pvStack_c = ExceptionList;
  DAT_00bdc104 = 1;
  pvVar2 = *(void **)(DAT_00893530 + 0x14);
  uVar1 = *(undefined2 *)(DAT_00893530 + 0x18);
  ExceptionList = &pvStack_c;
  puVar5 = operator_new(0xc);
  local_4 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    FUN_004c06e0(0x1d,param_1 + 0x10);
    *puVar5 = &PTR_FUN_007e7618;
    *(int **)(puVar5[1] + 0xe) = param_2;
    iVar6 = puVar5[1];
    *(int *)(iVar6 + 0x12) = *param_3;
    *(short *)(iVar6 + 0x16) = (short)param_3[1];
    iVar6 = puVar5[1];
    *(void **)(iVar6 + 0x18) = pvVar2;
    *(undefined2 *)(iVar6 + 0x1c) = uVar1;
    puVar7 = puVar5;
  }
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar7);
  iVar6 = FUN_00428ee0(param_3);
  if (iVar6 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)(iVar6 + -8);
  }
  (**(code **)(*piVar10 + 0x4c))(param_4);
  (**(code **)(*piVar10 + 0x50))(param_4);
  puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x1c2) + 4);
  cVar4 = (**(code **)(*param_2 + 0x30))();
  if (((cVar4 != '\0') && (unaff_retaddr == 5)) && (*(int *)(param_1 + 0x46a) != 0)) {
    puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x46a) + 0x34);
  }
  while (puVar7 != (undefined4 *)0x0) {
    puVar9 = (undefined4 *)puVar7[2];
    piVar3 = (int *)*puVar7;
    puVar7 = puVar9;
    if (((piVar3[0x99] != 0x17) && (piVar3 != param_2)) && (piVar3 != param_3)) {
      (**(code **)(*piVar10 + 0x48))(piVar3);
    }
  }
  puVar7 = operator_new(0xc);
  pvStack_c = (void *)0x1;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar8 = operator_new(0x1e);
    pvStack_c._0_1_ = 2;
    if (puVar8 == (undefined2 *)0x0) {
      puVar8 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d6c0();
      puVar8[9] = 0;
      *(undefined4 *)(puVar8 + 10) = 0;
      FUN_0042d2d0();
    }
    puVar7[1] = puVar8;
    *(undefined1 *)(puVar7 + 2) = 0;
    *(undefined1 *)((int)puVar7 + 9) = 1;
    *puVar7 = &PTR_FUN_007e7638;
    *(undefined1 *)((int)puVar7 + 10) = 0;
    *puVar8 = 0x23;
    iVar6 = puVar7[1];
    *(int *)(iVar6 + 8) = *param_3;
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
    *(short *)(iVar6 + 0xc) = (short)param_3[1];
    puVar9 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar6 = puVar7[1];
    *(undefined4 *)(iVar6 + 2) = *puVar9;
    *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar9 + 1);
    *puVar7 = &PTR_FUN_007e7618;
    *(int *)(puVar7[1] + 0xe) = unaff_retaddr;
    iVar6 = puVar7[1];
    *(int *)(iVar6 + 0x12) = *param_3;
    *(short *)(iVar6 + 0x16) = (short)param_3[1];
    iVar6 = puVar7[1];
    *(undefined4 **)(iVar6 + 0x18) = puVar5;
    *(undefined2 *)(iVar6 + 0x1c) = uStack_18;
  }
  pvStack_c = (void *)0xffffffff;
  FUN_00565bc0(puVar7);
  DAT_00bdc104 = 0;
  ExceptionList = pvVar2;
  return;
}


