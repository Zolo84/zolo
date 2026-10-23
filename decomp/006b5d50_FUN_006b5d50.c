// FUN_006b5d50 @ 6b5d50 size=222

void __fastcall FUN_006b5d50(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_007f71c4;
  puVar3 = *(undefined4 **)((int)param_1 + 0x32);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar3[2];
    FUN_00796cd8(*puVar3);
    FUN_00796cd8(puVar3);
    puVar3 = puVar1;
  }
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined ***)((int)param_1 + 0x52) = &PTR_LAB_007e378c;
  iVar4 = *(int *)((int)param_1 + 0x56);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  param_1[0x10] = &PTR_LAB_007e378c;
  iVar4 = param_1[0x11];
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined ***)((int)param_1 + 0x2e) = &PTR_LAB_007f7164;
  iVar4 = *(int *)((int)param_1 + 0x32);
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  param_1[7] = &PTR_LAB_007e6f54;
  iVar4 = param_1[8];
  while (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    FUN_00796cd8(iVar4);
    iVar4 = iVar2;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}


