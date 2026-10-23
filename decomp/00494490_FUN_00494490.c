// FUN_00494490 @ 494490 size=759

undefined4 FUN_00494490(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bdb0b;
  local_c = ExceptionList;
  iVar4 = *(int *)(param_1 + 4);
  iVar8 = 0;
  iVar1 = *(int *)(iVar4 + 0xe);
  iVar2 = (&DAT_0089cad8)[iVar1];
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(iVar4 + 0x12) == 0x158) {
    ExceptionList = &local_c;
    iVar4 = FUN_006ca0a0();
    for (piVar7 = *(int **)(*(int *)(iVar2 + 0x120) + 0xafc); piVar7 != (int *)0x0;
        piVar7 = (int *)piVar7[2]) {
      iVar2 = *(int *)(*piVar7 + 4);
      if ((iVar2 != iVar1) && (iVar2 != 0xa4)) {
        *(undefined4 *)(*piVar7 + 8) = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(*piVar7 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
        *(undefined4 *)(*piVar7 + 0x18) = *(undefined4 *)(iVar4 + 0x18);
        *(undefined4 *)(*piVar7 + 0x20) = *(undefined4 *)(iVar4 + 0x20);
        *(undefined4 *)(*piVar7 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
        *(undefined4 *)(*piVar7 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
        *(undefined4 *)(*piVar7 + 0x2c) = *(undefined4 *)(iVar4 + 0x2c);
        *(undefined4 *)(*piVar7 + 0x30) = *(undefined4 *)(iVar4 + 0x30);
        *(undefined4 *)(*piVar7 + 0x34) = *(undefined4 *)(iVar4 + 0x34);
        *(undefined4 *)(*piVar7 + 0x38) = *(undefined4 *)(iVar4 + 0x38);
        *(undefined4 *)(*piVar7 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
        *(undefined4 *)(*piVar7 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
        *(undefined4 *)(*piVar7 + 0x3c) = *(undefined4 *)(iVar4 + 0x3c);
        *(undefined4 *)(*piVar7 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
      }
    }
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x12);
    if (iVar4 == 0xa4) {
      ExceptionList = &local_c;
      iVar5 = FUN_006ca0a0();
    }
    else {
      ExceptionList = &local_c;
      iVar5 = FUN_006c8e70(iVar4,0);
    }
    if (iVar5 == 0) {
      pvVar6 = operator_new(0x42);
      local_4 = 0;
      if (pvVar6 != (void *)0x0) {
        iVar8 = FUN_006c8eb0();
      }
      local_4 = 0xffffffff;
      iVar5 = FUN_006ca0a0();
      *(int *)(iVar8 + 4) = iVar4;
      *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar5 + 8);
      *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(iVar5 + 0x14);
      *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar5 + 0x18);
      *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)(iVar5 + 0x24);
      *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar5 + 0x28);
      *(undefined4 *)(iVar8 + 0x2c) = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar5 + 0x30);
      *(undefined4 *)(iVar8 + 0x34) = *(undefined4 *)(iVar5 + 0x34);
      *(undefined4 *)(iVar8 + 0x38) = *(undefined4 *)(iVar5 + 0x38);
      *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
      *(undefined4 *)(iVar8 + 0x3c) = *(undefined4 *)(iVar5 + 0x3c);
      *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(iVar5 + 0x1c);
      iVar5 = *(int *)(iVar2 + 0x120);
      iVar3 = *(int *)(iVar5 + 0xb00);
      piVar7 = operator_new(0xe);
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        *piVar7 = iVar8;
        piVar7[1] = iVar3;
        piVar7[2] = 0;
        *(undefined1 *)(piVar7 + 3) = 0;
      }
      iVar8 = *(int *)(iVar5 + 0xb04);
      *(int **)(iVar5 + 0xb00) = piVar7;
      *(int *)(iVar5 + 0xb04) = iVar8 + 1;
      if (iVar8 == 0) {
        *(int **)(iVar5 + 0xafc) = piVar7;
      }
      else {
        *(int **)(iVar3 + 8) = piVar7;
      }
    }
    else {
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x16);
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x22);
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x26);
      *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x2e);
      *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x32);
      *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x36);
      *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x3a);
      *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x3e);
      *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x42);
      *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x46);
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1a);
      *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1e);
      *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x4a);
      *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x2a);
    }
    if (iVar1 == iVar4) {
      *(undefined4 *)(*(int *)(iVar2 + 0x120) + 0xb0a) =
           *(undefined4 *)(*(int *)(param_1 + 4) + 0x4e);
      *(undefined4 *)(*(int *)(iVar2 + 0x120) + 0xb0e) =
           *(undefined4 *)(*(int *)(param_1 + 4) + 0x52);
    }
  }
  ExceptionList = local_c;
  return 0;
}


