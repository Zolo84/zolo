// FUN_004f63f0 @ 4f63f0 size=281

undefined4 * __fastcall FUN_004f63f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_LAB_007e842c;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0;
  param_1[4] = 0;
  param_1[0x10] = 0x790;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x8c;
  param_1[0x2e] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  *(undefined1 *)((int)param_1 + 0xbd) = 0;
  *(undefined4 *)((int)param_1 + 0xbe) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xc2) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xc6) = 0;
  *(undefined4 *)((int)param_1 + 0xca) = 0;
  *(undefined4 *)((int)param_1 + 0xce) = 0;
  if (DAT_00dc191a != '\0') {
    puVar2 = (undefined4 *)((int)param_1 + 0xd2);
    for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    return param_1;
  }
  return param_1;
}


