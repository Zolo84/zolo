// FUN_004b84a0 @ 4b84a0 size=315

void __fastcall FUN_004b84a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_007be808;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e7564;
  param_1[2] = &PTR_LAB_007e7550;
  local_4 = 3;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x20])(1);
  }
  param_1[0x20] = 0;
  if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x21])(1);
  }
  param_1[0x21] = 0;
  if (DAT_00dc191a != '\0') {
    puVar4 = *(undefined4 **)((int)param_1 + 0xa2);
    while (puVar4 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar4[2];
      FUN_00796cd8(*puVar4);
      FUN_00796cd8(puVar4);
      puVar4 = puVar1;
    }
    *(undefined4 *)((int)param_1 + 0xa2) = 0;
    *(undefined4 *)((int)param_1 + 0xa6) = 0;
    *(undefined4 *)((int)param_1 + 0xaa) = 0;
  }
  *(undefined ***)((int)param_1 + 0x9e) = &PTR_LAB_007e75e8;
  iVar3 = *(int *)((int)param_1 + 0xa2);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined4 *)((int)param_1 + 0xaa) = 0;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e6edc;
  iVar3 = *(int *)((int)param_1 + 0x16);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 10);
    FUN_00796cd8(iVar3);
    iVar3 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00428ca0();
  local_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


