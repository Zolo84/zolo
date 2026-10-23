// FUN_00566290 @ 566290 size=372

undefined4 * __thiscall
FUN_00566290(undefined4 *param_1,undefined2 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7,int *param_8,int *param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c6d20;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar5 = (**(code **)(*param_9 + 4))();
  puVar6 = operator_new(iVar5 * 8 + 0x50);
  param_1[1] = puVar6;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007e947c;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar6 = param_2;
  iVar5 = param_1[1];
  *(undefined4 *)(iVar5 + 8) = *param_3;
  *(undefined2 *)(iVar5 + 0xc) = *(undefined2 *)(param_3 + 1);
  uStack_4 = 0;
  puVar7 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
  iVar5 = param_1[1];
  *(undefined4 *)(iVar5 + 2) = *puVar7;
  *(undefined2 *)(iVar5 + 6) = *(undefined2 *)(puVar7 + 1);
  iVar5 = param_1[1];
  *param_1 = &PTR_FUN_007e945c;
  *(undefined4 *)(iVar5 + 0x12) = *param_4;
  uStack_4 = 1;
  *(undefined2 *)(iVar5 + 0x16) = *(undefined2 *)(param_4 + 1);
  iVar5 = param_1[1];
  *(undefined4 *)(iVar5 + 0x18) = *param_5;
  *(undefined2 *)(iVar5 + 0x1c) = *(undefined2 *)(param_5 + 1);
  *(undefined4 *)(param_1[1] + 0x1e) = param_6;
  *(undefined4 *)(param_1[1] + 0x22) = param_7;
  iVar5 = param_1[1];
  *(undefined1 *)((int)param_1 + 10) = 1;
  uVar4 = (**(code **)(*param_8 + 4))();
  *(undefined2 *)(iVar5 + 0x42) = uVar4;
  iVar5 = param_1[1];
  puVar7 = (undefined4 *)param_8[1];
  puVar10 = (undefined4 *)param_9[1];
  param_9 = (int *)0x0;
  iVar8 = (**(code **)(*param_8 + 4))();
  puVar9 = (undefined4 *)(iVar5 + 0x44);
  if (0 < iVar8) {
    do {
      puVar1 = (undefined4 *)puVar7[2];
      puVar2 = (undefined4 *)puVar10[2];
      uVar3 = *puVar10;
      *puVar9 = *puVar7;
      puVar9[1] = uVar3;
      param_9 = (int *)((int)param_9 + 1);
      iVar5 = (**(code **)(*param_8 + 4))();
      puVar9 = puVar9 + 2;
      puVar10 = puVar2;
      puVar7 = puVar1;
    } while ((int)param_9 < iVar5);
  }
  ExceptionList = pvStack_c;
  return param_1;
}


