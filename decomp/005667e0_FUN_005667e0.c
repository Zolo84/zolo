// FUN_005667e0 @ 5667e0 size=228

undefined4 * __thiscall
FUN_005667e0(undefined4 *param_1,undefined4 *param_2,byte param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int *piVar5;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c6d88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_4 + 4))();
  puVar3 = operator_new(iVar2 * 2 + 0x1e);
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007e95bc;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar3 = 0x33;
  iVar2 = param_1[1];
  *(undefined4 *)(iVar2 + 8) = *param_2;
  uStack_14 = uStack_14 & 0xff000000;
  *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(param_2 + 1);
  iVar2 = param_1[1];
  *(uint *)(iVar2 + 2) = uStack_14;
  *(undefined2 *)(iVar2 + 6) = 0;
  iVar2 = param_1[1];
  *param_1 = &PTR_FUN_007e959c;
  *(undefined1 *)((int)param_1 + 10) = 1;
  *(ushort *)(iVar2 + 0x14) = (ushort)param_3;
  uStack_4 = 0;
  iVar4 = (**(code **)(*param_4 + 4))();
  *(short *)(iVar2 + 0x16) = (short)iVar4;
  puVar3 = (undefined2 *)(iVar2 + 0x18);
  piVar5 = (int *)param_4[1];
  if (0 < iVar4) {
    do {
      piVar1 = (int *)piVar5[2];
      iVar4 = iVar4 + -1;
      *puVar3 = (short)*(undefined4 *)(*piVar5 + 0x12);
      puVar3 = puVar3 + 1;
      piVar5 = piVar1;
    } while (iVar4 != 0);
  }
  ExceptionList = pvStack_c;
  return param_1;
}


