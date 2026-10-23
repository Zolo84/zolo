// FUN_006b0050 @ 6b0050 size=1131

undefined4 * __fastcall FUN_006b0050(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_007d6035;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_007e4068;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[10] = &PTR_FUN_007e5258;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x4a) = 0;
  *(undefined ***)((int)param_1 + 0x3a) = &PTR_FUN_007e5258;
  local_4 = 1;
  uStack_3 = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  FUN_006ca550();
  param_1[0x1c] = &PTR_LAB_007e4068;
  param_1[0x13] = &PTR_FUN_007f7128;
  param_1[0x1c] = &PTR_FUN_007f7120;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x20] = &PTR_LAB_007e4a74;
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x9a) = 0;
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  *(undefined1 *)((int)param_1 + 0xa2) = 0;
  *(undefined ***)((int)param_1 + 0x92) = &PTR_LAB_007e4a74;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x29] = &PTR_LAB_007e4a74;
  *(undefined1 *)((int)param_1 + 0xb6) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x2e] = &PTR_FUN_007e5258;
  local_4 = 6;
  param_1[0x33] = 0x32;
  param_1[0x38] = 0x40800000;
  param_1[0x39] = 0x3e4ccccd;
  param_1[0x3a] = 0x3dcccccd;
  *(undefined1 *)(param_1 + 0x3b) = 1;
  *(undefined1 *)((int)param_1 + 0xed) = 1;
  FUN_006b8dc0();
  local_4 = 7;
  FUN_006b5ce0();
  local_4 = 8;
  param_1[0x6f] = &PTR_LAB_007e4068;
  FUN_004734e0();
  param_1[0x70] = &PTR_FUN_007e5258;
  local_4 = 9;
  FUN_006ca160();
  param_1[0x6f] = &PTR_FUN_007f71b4;
  param_1[0x79] = 0x40800000;
  puVar2 = param_1 + 0x7a;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xbf800000;
    puVar2 = puVar2 + 1;
  }
  local_4 = 10;
  param_1[0x80] = &PTR_LAB_007e4068;
  FUN_004734e0();
  param_1[0x81] = &PTR_FUN_007e5258;
  local_4 = 0xb;
  FUN_005b4c60();
  local_4 = 0xc;
  FUN_006ca160();
  local_4 = 0xd;
  FUN_006ca1a0();
  param_1[0x80] = &PTR_FUN_007f71ac;
  local_4 = 0xe;
  FUN_006c59f0();
  local_4 = 0xf;
  FUN_006bbb10();
  local_4 = 0x10;
  FUN_006c4630();
  param_1[0x1f8] = &PTR_FUN_007f71a4;
  iVar1 = 0;
  if (0 < DAT_0087769c) {
    do {
      *(undefined1 *)((int)param_1 + iVar1 + 0x870) = 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_0087769c);
  }
  iVar1 = 0;
  if (0 < DAT_008776b0) {
    do {
      *(undefined1 *)((int)param_1 + iVar1 + 0x7e4) = 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_008776b0);
  }
  FUN_006bdbe0();
  local_4 = 0x11;
  FUN_006c1520();
  param_1[0x2b1] = 0x3d4ccccd;
  param_1[0x2b5] = 0x3d4ccccd;
  param_1[0x2b9] = 0x3d4ccccd;
  param_1[0x2af] = &PTR_FUN_007f719c;
  param_1[0x2b0] = 0x3cf5c28f;
  param_1[0x2b2] = 0x3e4ccccd;
  param_1[0x2b3] = 0x3f000000;
  param_1[0x2b4] = 0x3cf5c28f;
  param_1[0x2b7] = 0x3e4ccccd;
  param_1[0x2b6] = 0x3f000000;
  param_1[0x2b8] = 0x3cf5c28f;
  param_1[0x2ba] = 0x3e4ccccd;
  param_1[699] = 0x3f000000;
  local_4 = 0x12;
  param_1[0x2bd] = &PTR_LAB_007e4068;
  FUN_006ca3a0();
  *(undefined4 *)((int)param_1 + 0xb0a) = 0;
  *(undefined4 *)((int)param_1 + 0xb0e) = 0;
  *(undefined4 *)((int)param_1 + 0xb12) = 0;
  param_1[0x2bd] = &PTR_FUN_007f7194;
  *(undefined4 *)((int)param_1 + 0xb1a) = 0;
  *(undefined4 *)((int)param_1 + 0xb1e) = 0;
  *(undefined4 *)((int)param_1 + 0xb22) = 0;
  *(undefined1 *)((int)param_1 + 0xb26) = 0;
  *(undefined ***)((int)param_1 + 0xb16) = &PTR_LAB_007f7164;
  param_1[0x2cb] = 0;
  param_1[0x2cc] = 0;
  param_1[0x2cd] = 0;
  *(undefined1 *)(param_1 + 0x2ce) = 0;
  param_1[0x2ca] = &PTR_LAB_007e4b64;
  *(undefined4 *)((int)param_1 + 0xb3e) = 0;
  *(undefined4 *)((int)param_1 + 0xb42) = 0;
  *(undefined4 *)((int)param_1 + 0xb46) = 0;
  *(undefined1 *)((int)param_1 + 0xb4a) = 0;
  *(undefined ***)((int)param_1 + 0xb3a) = &PTR_LAB_007e4b64;
  param_1[0x2d4] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d6] = 0;
  *(undefined1 *)(param_1 + 0x2d7) = 0;
  param_1[0x2d3] = &PTR_LAB_007e4b64;
  *(undefined4 *)((int)param_1 + 0xb62) = 0;
  *(undefined4 *)((int)param_1 + 0xb66) = 0;
  *(undefined4 *)((int)param_1 + 0xb6a) = 0;
  *(undefined1 *)((int)param_1 + 0xb6e) = 0;
  *(undefined ***)((int)param_1 + 0xb5e) = &PTR_LAB_007e4b64;
  local_4 = 0x18;
  FUN_00526a00();
  local_4 = 0x19;
  FUN_006ca180();
  _local_4 = CONCAT31(uStack_3,0x1a);
  FUN_006ca180();
  *param_1 = &PTR_FUN_007f7158;
  puVar2 = param_1;
  for (iVar1 = 9; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x3f800000;
  }
  *(undefined4 *)((int)param_1 + 0xb86) = 0x3f28f5c3;
  param_1[0x1d] = 0x3dcccccd;
  param_1[0x1e] = 0x3dcccccd;
  param_1[0x34] = 5;
  param_1[0x35] = 0x3e800000;
  param_1[0x36] = 0x42c80000;
  param_1[0x37] = 0;
  *(undefined1 *)((int)param_1 + 0xca) = 0;
  *(undefined4 *)((int)param_1 + 0xb82) = 0;
  param_1[0x1f] = 0x3e99999a;
  ExceptionList = local_c;
  return param_1;
}


