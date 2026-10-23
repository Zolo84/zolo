// FUN_006bdbe0 @ 6bdbe0 size=355

undefined4 * __fastcall FUN_006bdbe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x24] = &PTR_LAB_007f71d4;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined4 *)((int)param_1 + 0xaa) = 0;
  *(undefined4 *)((int)param_1 + 0xae) = 0;
  *(undefined1 *)((int)param_1 + 0xb2) = 0;
  *(undefined ***)((int)param_1 + 0xa2) = &PTR_LAB_007e4b64;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x2d] = &PTR_LAB_007e4b64;
  *param_1 = &PTR_FUN_007f7204;
  param_1[0x21] = 1;
  param_1[0x22] = 4;
  param_1[0x23] = 4;
  param_1[1] = 6;
  param_1[0x19] = 0x3e4ccccd;
  param_1[0x1a] = 0x40400000;
  param_1[0x1e] = 0x40400000;
  param_1[0x1b] = 0x40000000;
  param_1[0x1c] = 0x40200000;
  param_1[0x1d] = 0x3f800000;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0x3f000000;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  param_1[0x17] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0x3f4ccccd;
  param_1[0x11] = 0x3f000000;
  param_1[8] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0x3f800000;
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0x18] = 0x3ea8f5c3;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  param_1[4] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  puVar2 = (undefined4 *)param_1[0x25];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    FUN_00796cd8(*puVar2);
    FUN_00796cd8(puVar2);
    puVar2 = puVar1;
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)((int)param_1 + 0xc6) = 5;
  *(undefined4 *)((int)param_1 + 0xca) = 0;
  return param_1;
}


