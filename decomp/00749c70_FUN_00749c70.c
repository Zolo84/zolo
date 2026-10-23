// FUN_00749c70 @ 749c70 size=157

void __fastcall FUN_00749c70(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = operator_new(0x90);
  puVar1[1] = 0;
  puVar1[0x23] = 1;
  FUN_00798acc();
  if (DAT_00d4be04 == (undefined4 *)0x0) {
    DAT_00d4be04 = puVar1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)0x0;
    DAT_00d4be04[2] = 0;
  }
  DAT_00d4be00 = DAT_00d4be00 + 1;
  FUN_00798b68();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00796cd8(puVar1);
  }
  puVar1 = DAT_00d4be04;
  pvVar2 = operator_new(0x90);
  *(undefined4 **)((int)pvVar2 + 4) = puVar1;
  *(undefined4 *)((int)pvVar2 + 0x8c) = 0;
  *(void **)(param_1 + 4) = pvVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


