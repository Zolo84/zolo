// FUN_0058fd90 @ 58fd90 size=629

undefined4 * __thiscall FUN_0058fd90(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  void *pvStack_c;
  int *piStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  piStack_8 = (int *)&LAB_007c9d46;
  pvStack_c = ExceptionList;
  iVar5 = *(int *)(param_1 + 0x30);
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0xe);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005926c0(0,0,iVar5);
  }
  iVar6 = *(int *)(param_1 + 0x38);
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(int *)(param_1 + 0x38) = iVar6 + 1;
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x34) = uVar3;
  }
  else {
    *(undefined4 *)(iVar5 + 4) = uVar3;
  }
  puVar4 = operator_new(0xb6);
  local_4 = 1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00432df0(((int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2) * 0x10 + 0x18,
                 *(int *)(*(int *)(param_1 + 0x18) + 0x10) + 8,0x10);
    *(undefined4 *)((int)puVar4 + 0xb2) = 0;
    *puVar4 = &PTR_FUN_007e46e8;
    puVar4[2] = &PTR_LAB_007e46e4;
    *(undefined ***)((int)puVar4 + 0x7e) = &PTR_LAB_007e46e0;
  }
  local_4 = 0xffffffff;
  *(undefined1 *)(*(int *)((int)puVar4 + 0x62) + 0x252) = 1;
  uVar3 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  *(undefined4 *)((int)puVar4 + 0x92) = uVar3;
  iVar5 = FUN_00415bd0();
  iVar6 = FUN_00415bd0();
  iVar5 = iVar6 / 2 - iVar5 / 2;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  FUN_00415d30(*(undefined4 *)((int)puVar4 + 0x62));
  (**(code **)(**(int **)(param_4 + 0x66c) + 0x38))(param_2);
  piVar1 = *(int **)(param_4 + 0x66c);
  FUN_00415bd0();
  (**(code **)(*piVar1 + 0x18))(iVar5,0);
  (**(code **)(**(int **)(param_4 + 0x66c) + 0x10))(0);
  piStack_8 = *(int **)(param_4 + 0x66c);
  iVar6 = *piStack_8;
  iVar7 = FUN_00415bd0(0);
  (**(code **)(iVar6 + 0x18))(iVar7 + iVar5);
  *(undefined4 *)(*(int *)(param_4 + 0x66c) + 0x6a) = 2;
  (**(code **)(**(int **)(param_4 + 0x66c) + 0x10))(0);
  iVar6 = **(int **)(param_4 + 0x66c);
  iVar7 = FUN_00415bd0();
  (**(code **)(iVar6 + 0x18))();
  (**(code **)(**(int **)(param_4 + 0x66c) + 0x10))(0);
  iVar6 = **(int **)(param_4 + 0x66c);
  iVar8 = FUN_00415bd0(0);
  (**(code **)(iVar6 + 0x18))(iVar5 + iVar8 * 3);
  (**(code **)(**(int **)(param_4 + 0x66c) + 0x10))(0);
  *(undefined4 *)(*(int *)(param_4 + 0x66c) + 0x6a) = 0;
  FUN_00415d30(DAT_00bd1bac);
  *(undefined1 *)(puVar4 + 0x1a) = 1;
  iVar5 = *(int *)(iVar5 + iVar7 * 2 + 4);
  iVar6 = *(int *)(iVar5 + 8);
  puVar9 = operator_new(0xe);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    *puVar9 = puVar4;
    puVar9[1] = iVar6;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 0;
  }
  iVar7 = *(int *)(iVar5 + 0xc);
  *(undefined4 **)(iVar5 + 8) = puVar9;
  *(int *)(iVar5 + 0xc) = iVar7 + 1;
  if (iVar7 == 0) {
    *(undefined4 **)(iVar5 + 4) = puVar9;
  }
  else {
    *(undefined4 **)(iVar6 + 8) = puVar9;
  }
  ExceptionList = (void *)0x0;
  return puVar4;
}


