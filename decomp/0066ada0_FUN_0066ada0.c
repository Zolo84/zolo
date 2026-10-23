// FUN_0066ada0 @ 66ada0 size=315

void __fastcall FUN_0066ada0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void **ppvVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d3f9c;
  local_4 = 3;
  ppvVar5 = &pvStack_c;
  piVar3 = *(int **)(param_1 + 0x44);
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar5, piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    FUN_00796cd8(piVar3);
    ppvVar5 = ExceptionList;
    piVar3 = piVar1;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  piVar3 = *(int **)(param_1 + 10);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    if ((int *)*piVar3 != (int *)0x0) {
      (**(code **)(*(int *)*piVar3 + 8))(1);
    }
    FUN_00796cd8(piVar3);
    piVar3 = piVar1;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined ***)(param_1 + 0x40) = &PTR_LAB_007f0c38;
  iVar4 = *(int *)(param_1 + 0x44);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined ***)(param_1 + 0x2a) = &PTR_LAB_007e6edc;
  iVar4 = *(int *)(param_1 + 0x2e);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 10);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined ***)(param_1 + 0x18) = &PTR_LAB_007e6edc;
  iVar4 = *(int *)(param_1 + 0x1c);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 10);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined ***)(param_1 + 6) = &PTR_LAB_007f0c68;
  iVar4 = *(int *)(param_1 + 10);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  ExceptionList = pvStack_c;
  return;
}


