// FUN_004fb840 @ 4fb840 size=703

undefined4 * __fastcall FUN_004fb840(undefined4 *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c1434;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00425b20();
  local_4 = 0;
  FUN_00428b00();
  *(undefined ***)((int)param_1 + 0x12) = &PTR_LAB_007e4068;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  *(undefined ***)((int)param_1 + 0x16) = &PTR_LAB_007e6edc;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[10] = &PTR_LAB_007e8514;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x4a) = 0;
  *(undefined ***)((int)param_1 + 0x3a) = &PTR_LAB_007e84e4;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined2 *)((int)param_1 + 0x52) = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((int)param_1 + 0x6a) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x67) = 0;
  *(undefined1 *)((int)param_1 + 0x66) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((int)param_1 + 0xca) = 0;
  *(undefined2 *)((int)param_1 + 0x2c6) = 0;
  param_1[0xb2] = 0;
  *param_1 = &PTR_FUN_007e84a8;
  param_1[2] = &PTR_LAB_007e8494;
  *(undefined ***)((int)param_1 + 0x12) = &PTR_FUN_007e848c;
  param_1[0x1b] = 0;
  param_1[0x31] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  puVar3 = param_1 + 0x3b;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x3b] = 0x42c80000;
  param_1[0x3e] = 0x41f00000;
  param_1[0x3f] = 0x41f00000;
  param_1[0x4b] = 0x3f800000;
  param_1[0x4a] = 0x3f800000;
  param_1[0x3c] = 0x42c80000;
  puVar3 = param_1 + 0x4c;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x51] = 0xffffffff;
  param_1[0x4c] = 0x8c;
  param_1[0x4d] = 0x8c;
  param_1[0x50] = 0x8c;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  iVar5 = 5;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x56) = 1;
  *(undefined1 *)((int)param_1 + 0x159) = 1;
  puVar3 = param_1 + 0x27;
  do {
    puVar3[5] = 0;
    *puVar3 = 0;
    puVar3[-5] = 0;
    puVar3 = puVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x17] = 0;
  uVar2 = DAT_0088f28e._2_2_;
  param_1[0x13] = CONCAT22((undefined2)DAT_0088f28e,DAT_0088f28c);
  *(undefined2 *)(param_1 + 0x14) = uVar2;
  param_1[0x32] = CONCAT22((undefined2)DAT_0088f28e,DAT_0088f28c);
  *(undefined2 *)(param_1 + 0x33) = DAT_0088f28e._2_2_;
  FUN_00796cd8(param_1[0x31]);
  uVar6 = 0xffffffff;
  pcVar4 = &DAT_0088ebf8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = operator_new(~uVar6);
  uVar6 = 0xffffffff;
  param_1[0x31] = pcVar4;
  pcVar8 = &DAT_0088ebf8;
  do {
    pcVar9 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar9 + -uVar6;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  param_1[0x16] = 0;
  *(undefined4 *)((int)param_1 + 0xce) = 0;
  *(undefined4 *)((int)param_1 + 0xd2) = 0;
  *(undefined4 *)((int)param_1 + 0xd6) = 0;
  *(undefined4 *)((int)param_1 + 0xda) = 0;
  *(undefined4 *)((int)param_1 + 0xde) = 0;
  *(undefined4 *)((int)param_1 + 0xe2) = 0;
  *(undefined1 *)((int)param_1 + 0xe6) = 1;
  param_1[0x3a] = 0;
  puVar3 = param_1 + 0x59;
  for (iVar5 = 0x33; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x8c) = 1;
  if (DAT_00dc191a != '\0') {
    puVar3 = (undefined4 *)((int)param_1 + 0x232);
    for (iVar5 = 0x25; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  *(uint *)((int)param_1 + 0x2c6) = CONCAT22((undefined2)DAT_0088f28e,DAT_0088f28c);
  *(undefined2 *)((int)param_1 + 0x2ca) = DAT_0088f28e._2_2_;
  ExceptionList = local_c;
  return param_1;
}


