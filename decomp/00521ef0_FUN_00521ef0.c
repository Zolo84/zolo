// FUN_00521ef0 @ 521ef0 size=1165

undefined4 __thiscall FUN_00521ef0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 uStack_1c;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar6 = DAT_00ab27b4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c219b;
  pvStack_c = ExceptionList;
  uVar7 = (uint)*(ushort *)(*(int *)(param_2 + 4) + 0xe);
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)param_1 + 0x13a) = 0;
  iVar6 = iVar6 + uVar7 * 0x4b2;
  FUN_00405ad0();
  piVar1 = (int *)((int)param_1 + 0x22e);
  param_1[0x90] = param_1[3];
  cVar3 = (**(code **)(*piVar1 + 8))();
  if (((cVar3 == '\0') && (**(uint **)((int)param_1 + 0x232) == uVar7)) &&
     ((**(code **)(*piVar1 + 0x1c))(), *(char *)((int)param_1 + 0x186) != '\0')) {
    puVar4 = operator_new(0xc);
    uStack_4 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      uStack_14 = uStack_14 & 0xff000000;
      iVar5 = param_1[3];
      FUN_004c0990();
      iVar2 = puVar4[1];
      uStack_1c = (undefined2)iVar5;
      *puVar4 = &PTR_FUN_007e7804;
      *(undefined2 *)(iVar2 + 0x14) = uStack_1c;
      *(int *)(iVar2 + 0xe) = param_1[6];
      iVar5 = param_1[7];
      *(undefined1 *)(iVar2 + 0x16) = 0;
      *(short *)(iVar2 + 0x12) = (short)iVar5;
      *(uint *)(iVar2 + 0x18) = uStack_14;
      *(undefined2 *)(iVar2 + 0x1c) = 0;
    }
    uStack_4 = 0xffffffff;
    FUN_00565cc0();
  }
  FUN_0040d3e0();
  iVar5 = param_1[0x7c];
  cVar3 = (**(code **)(*(int *)(iVar5 + 0xc) + 8))();
  if (cVar3 == '\0') {
    iVar5 = **(int **)(iVar5 + 0x10);
  }
  else {
    iVar5 = 0;
  }
  if ((iVar5 != 0) && (*(char *)(iVar5 + 0xc) == '\0')) {
    *(undefined1 *)(iVar5 + 0xc) = 1;
  }
  cVar3 = (**(code **)(*piVar1 + 8))();
  if (cVar3 != '\0') {
    *(undefined1 **)((int)param_1 + 0x21a) = &LAB_00521a70;
    *(undefined4 *)((int)param_1 + 0x21e) = 0;
    if (*(char *)((int)param_1 + 0x17b) != '\0') {
      *(undefined1 *)((int)param_1 + 0x17b) = 0;
      if ((((char)param_1[0x5f] == '\0') || (*(int *)((int)param_1 + 0x176) != 0)) ||
         ((iVar5 = (**(code **)(param_1[0x47] + 4))(), iVar5 != 0 ||
          (*(char *)((int)param_1 + 0x17b) != '\0')))) {
        FUN_00522770();
        iVar5 = **(int **)((int)param_1 + 0x15a);
        FUN_0044b1c0();
        (**(code **)(iVar5 + 0x2c))();
      }
      else {
        (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x2c))();
      }
      (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x34))();
      iVar5 = *(int *)((int)param_1 + 0x15a);
      *(undefined4 *)(iVar5 + 0x22) = 0;
      *(undefined4 *)(iVar5 + 0x26) = 10;
      *(undefined1 *)(iVar5 + 0x67) = 0;
      FUN_00413d60();
      FUN_00415f20();
    }
    if (param_1[0x99] == 2) {
      cVar3 = (**(code **)(*param_1 + 0x30))();
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*param_1 + 0x2c))();
        if ((cVar3 != '\0') && (param_1[0x9a] == uVar7)) {
          (**(code **)(*param_1 + 0x98))();
        }
      }
      else if (param_1[0x9a] == uVar7) {
        (**(code **)(*param_1 + 0x98))();
        (**(code **)(*param_1 + 0x18))();
        FUN_005190d0();
      }
    }
  }
  if (((char)param_1[0x5f] != '\0') && (cVar3 = FUN_004a3020(), cVar3 != '\0')) {
    *(undefined1 *)(param_1 + 0x5f) = 0;
    *(undefined1 *)((int)param_1 + 0x17b) = 0;
    iVar5 = **(int **)((int)param_1 + 0x15a);
    FUN_0044b1c0();
    (**(code **)(iVar5 + 0x2c))();
    (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x34))();
    iVar5 = *(int *)((int)param_1 + 0x15a);
    *(undefined4 *)(iVar5 + 0x22) = 0;
    *(undefined4 *)(iVar5 + 0x26) = 10;
    *(undefined1 *)(iVar5 + 0x67) = 0;
    FUN_00413d60();
    FUN_00415f20();
  }
  cVar3 = (**(code **)(*param_1 + 0x28))();
  if ((cVar3 == '\0') || (param_1[3] != 0)) {
    cVar3 = (**(code **)(*param_1 + 0x28))();
    if ((cVar3 == '\0') || (*(int *)(iVar6 + 0x254) != 8)) {
      cVar3 = (**(code **)(*param_1 + 0x30))();
      if ((cVar3 == '\0') || (*(int *)(iVar6 + 0x254) != 8)) {
        cVar3 = (**(code **)(*param_1 + 0x30))();
        if ((cVar3 == '\0') || (param_1[3] != 0)) {
          (**(code **)(*param_1 + 0x60))();
        }
        else {
          (**(code **)(*param_1 + 0x18))();
          (**(code **)(*param_1 + 0x18))();
          FUN_004f00e0();
        }
      }
      else {
        FUN_00428ee0();
        (**(code **)(*param_1 + 0x18))();
        FUN_004f00e0();
      }
      goto LAB_0052233e;
    }
    FUN_00428ee0();
  }
  else {
    (**(code **)(*param_1 + 0x10))();
  }
  (**(code **)(*param_1 + 0x10))();
  FUN_005088c0();
LAB_0052233e:
  iVar6 = (**(code **)(param_1[0x47] + 4))();
  if ((iVar6 == 0) || (cVar3 = (**(code **)(*param_1 + 0x28))(), cVar3 != '\0')) {
    (**(code **)(*param_1 + 0xa0))();
  }
  ExceptionList = pvStack_c;
  return 0;
}


