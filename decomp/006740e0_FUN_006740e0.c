// FUN_006740e0 @ 6740e0 size=168

undefined1 * __thiscall FUN_006740e0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  *param_1 = *param_3;
  param_1[1] = *param_2;
  param_1[8] = 0;
  puVar1 = operator_new(0x2c);
  puVar1[1] = 0;
  puVar1[10] = 1;
  FUN_00798acc();
  if (DAT_00d11170 == (undefined4 *)0x0) {
    DAT_00d11170 = puVar1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)0x0;
    DAT_00d11170[2] = 0;
  }
  DAT_00d1116c = DAT_00d1116c + 1;
  FUN_00798b68();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00796cd8(puVar1);
  }
  puVar1 = DAT_00d11170;
  pvVar2 = operator_new(0x2c);
  *(undefined4 **)((int)pvVar2 + 4) = puVar1;
  *(undefined4 *)((int)pvVar2 + 0x28) = 0;
  *(void **)(param_1 + 4) = pvVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return param_1;
}


