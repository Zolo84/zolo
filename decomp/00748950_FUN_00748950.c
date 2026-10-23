// FUN_00748950 @ 748950 size=175

undefined4 * __fastcall FUN_00748950(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 local_5;
  
  *(undefined1 *)(param_1 + 1) = local_5;
  *(undefined1 *)((int)param_1 + 5) = local_5;
  *(undefined1 *)(param_1 + 3) = 0;
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
  param_1[2] = pvVar2;
  param_1[4] = 0;
  *(void **)pvVar2 = pvVar2;
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  *param_1 = &PTR_FUN_007fa228;
  return param_1;
}


