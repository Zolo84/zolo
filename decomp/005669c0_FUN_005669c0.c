// FUN_005669c0 @ 5669c0 size=218

undefined4 * __thiscall FUN_005669c0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c6dc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_3 + 4))();
  puVar3 = operator_new(iVar2 + 0x12);
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *param_1 = &PTR_FUN_007e963c;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *puVar3 = 0x139;
  iVar2 = param_1[1];
  *(undefined4 *)(iVar2 + 8) = *param_2;
  uStack_14 = uStack_14 & 0xff000000;
  *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(param_2 + 1);
  iVar2 = param_1[1];
  *(uint *)(iVar2 + 2) = uStack_14;
  *(undefined2 *)(iVar2 + 6) = 0;
  iVar2 = param_1[1];
  *param_1 = &PTR_FUN_007e961c;
  *(undefined1 *)((int)param_1 + 10) = 1;
  uStack_4 = 0;
  iVar4 = (**(code **)(*param_3 + 4))();
  *(short *)(iVar2 + 0xe) = (short)iVar4;
  iVar5 = 0;
  piVar7 = (int *)param_3[1];
  if (0 < iVar4) {
    do {
      piVar1 = (int *)piVar7[2];
      iVar6 = iVar5 + 1;
      *(undefined1 *)(iVar5 + 0x10 + iVar2) = *(undefined1 *)(*piVar7 + 0x200);
      iVar5 = iVar6;
      piVar7 = piVar1;
    } while (iVar6 < iVar4);
  }
  ExceptionList = pvStack_c;
  return param_1;
}


