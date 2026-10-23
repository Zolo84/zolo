// FUN_007494a0 @ 7494a0 size=145

void __fastcall FUN_007494a0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = operator_new(0x18);
  puVar1[1] = 0;
  puVar1[5] = 1;
  FUN_00798acc();
  if (DAT_00d4bdfc == (undefined4 *)0x0) {
    DAT_00d4bdfc = puVar1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)0x0;
    DAT_00d4bdfc[2] = 0;
  }
  DAT_00d4bdf8 = DAT_00d4bdf8 + 1;
  FUN_00798b68();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00796cd8(puVar1);
  }
  puVar1 = DAT_00d4bdfc;
  pvVar2 = operator_new(0x18);
  *(undefined4 **)((int)pvVar2 + 4) = puVar1;
  *(undefined4 *)((int)pvVar2 + 0x14) = 0;
  *(void **)(param_1 + 4) = pvVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


