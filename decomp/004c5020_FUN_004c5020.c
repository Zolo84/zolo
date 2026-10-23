// FUN_004c5020 @ 4c5020 size=145

void __fastcall FUN_004c5020(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = operator_new(0x18);
  puVar1[1] = 0;
  puVar1[5] = 1;
  FUN_00798acc();
  if (DAT_008e8328 == (undefined4 *)0x0) {
    DAT_008e8328 = puVar1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)0x0;
    DAT_008e8328[2] = 0;
  }
  DAT_008e832c = DAT_008e832c + 1;
  FUN_00798b68();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00796cd8(puVar1);
  }
  puVar1 = DAT_008e8328;
  pvVar2 = operator_new(0x18);
  *(undefined4 **)((int)pvVar2 + 4) = puVar1;
  *(undefined4 *)((int)pvVar2 + 0x14) = 0;
  *(void **)(param_1 + 4) = pvVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


