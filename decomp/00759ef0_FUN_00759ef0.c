// FUN_00759ef0 @ 759ef0 size=425

void __fastcall FUN_00759ef0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_007e0089;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007fa3bc;
  param_1[2] = &PTR_LAB_007fa3cc;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007fa3b4;
  local_4 = 6;
  piVar5 = (int *)param_1[0x15];
  while (piVar5 != (int *)0x0) {
    iVar4 = *piVar5;
    piVar1 = (int *)piVar5[2];
    if (iVar4 != 0) {
      FUN_0072bb40();
      FUN_00796cd8(iVar4);
    }
    FUN_00796cd8(piVar5);
    piVar5 = piVar1;
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_007a77fa(*(undefined4 *)((int)param_1 + 0x96));
  FUN_007a77fa(*(undefined4 *)((int)param_1 + 0x9a));
  piVar5 = (int *)((int)param_1 + 0x11e);
  iVar4 = 7;
  do {
    if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar5)(1);
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined ***)((int)param_1 + 0x82) = &PTR_LAB_007e4a74;
  iVar4 = *(int *)((int)param_1 + 0x86);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 10);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  uVar3 = local_4 >> 8;
  local_4 = CONCAT31((int3)uVar3,4);
  FUN_00702830();
  *(undefined ***)((int)param_1 + 0x3e) = &PTR_LAB_007e4a74;
  iVar4 = *(int *)((int)param_1 + 0x42);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 10);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x4a) = 0;
  param_1[0xb] = &PTR_LAB_007e4a74;
  iVar4 = param_1[0xc];
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 10);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007ed804;
  iVar4 = *(int *)((int)param_1 + 0x1a);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0xc);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00428200();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


