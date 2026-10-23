// FUN_006c59f0 @ 6c59f0 size=1619

undefined4 * __fastcall FUN_006c59f0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_007d852d;
  local_c = ExceptionList;
  iVar7 = 0;
  ExceptionList = &local_c;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x1f] = &PTR_LAB_007f0c68;
  *(undefined2 *)((int)param_1 + 0x92) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((int)param_1 + 0x8f) = 0;
  *(undefined1 *)((int)param_1 + 0x8e) = 0;
  param_1[6] = 0x3f800000;
  param_1[8] = 0x3fc00000;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3fc00000;
  param_1[0xd] = 0x3f800000;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0x3f800000;
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x17] = 0x3f800000;
  param_1[0x18] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1c] = 0x3f800000;
  param_1[0xb] = 0x3c23d70a;
  param_1[0xe] = 0x3c23d70a;
  param_1[0x11] = 0x3c23d70a;
  param_1[0x16] = 0x3c23d70a;
  local_14 = local_14 & 0xff000000;
  *(uint *)((int)param_1 + 0x8e) = local_14;
  local_4 = 0;
  *param_1 = &PTR_FUN_007f7254;
  param_1[1] = 0x41200000;
  param_1[2] = 0x42c80000;
  param_1[3] = 0x3e4ccccd;
  param_1[4] = 0x40400000;
  param_1[5] = 0x3f4ccccd;
  param_1[7] = 0x40000000;
  param_1[0xc] = 0x40800000;
  param_1[0x12] = 0x40a00000;
  param_1[0x13] = 0x40a00000;
  param_1[0x19] = 0x41200000;
  param_1[0x1b] = 0x41100000;
  param_1[0x1e] = 0x42480000;
  param_1[0x1d] = 0;
  *(undefined2 *)((int)param_1 + 0x92) = 0;
  pvVar3 = operator_new(0xba);
  local_4._0_1_ = 1;
  if (pvVar3 != (void *)0x0) {
    iVar7 = FUN_00667790();
  }
  uVar5 = 0xffffffff;
  *(undefined4 *)(iVar7 + 4) = 0x3ecccccd;
  *(undefined4 *)(iVar7 + 8) = 0x41200000;
  *(undefined4 *)(iVar7 + 0xc) = 0x44fa0000;
  *(undefined4 *)(iVar7 + 0x24) = 0xbf800000;
  *(undefined4 *)(iVar7 + 0x20) = 0xc9742400;
  *(undefined1 *)(iVar7 + 0x7c) = 1;
  *(undefined1 *)(iVar7 + 0x7e) = 1;
  *(undefined1 *)(iVar7 + 0x7f) = 1;
  pcVar8 = s_Air_Superiority_0086b4cc;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = (char *)(iVar7 + 0x2c);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  local_4._0_1_ = 0;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar2 = param_1[0x21];
  piVar4 = operator_new(0xe);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = iVar7;
    piVar4[1] = iVar2;
    piVar4[2] = 0;
    *(undefined1 *)(piVar4 + 3) = 0;
  }
  iVar7 = param_1[0x22];
  param_1[0x21] = piVar4;
  param_1[0x22] = iVar7 + 1;
  if (iVar7 == 0) {
    param_1[0x20] = piVar4;
  }
  else {
    *(int **)(iVar2 + 8) = piVar4;
  }
  pvVar3 = operator_new(0xba);
  local_4._0_1_ = 2;
  if (pvVar3 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00667790();
  }
  uVar5 = 0xffffffff;
  *(undefined4 *)(iVar7 + 4) = 0x3e4ccccd;
  *(undefined4 *)(iVar7 + 8) = 0x41200000;
  *(undefined4 *)(iVar7 + 0x14) = 0x44fa0000;
  *(undefined4 *)(iVar7 + 0x28) = 0xbf800000;
  *(undefined4 *)(iVar7 + 0x20) = 0xc9742400;
  *(undefined1 *)(iVar7 + 0x7c) = 1;
  *(undefined1 *)(iVar7 + 0x7e) = 1;
  *(undefined1 *)(iVar7 + 0x80) = 1;
  *(undefined1 *)(iVar7 + 0x81) = 1;
  pcVar8 = s_Soft_Bombing_0086b4bc;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = (char *)(iVar7 + 0x2c);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  local_4._0_1_ = 0;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar2 = param_1[0x21];
  piVar4 = operator_new(0xe);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = iVar7;
    piVar4[1] = iVar2;
    piVar4[2] = 0;
    *(undefined1 *)(piVar4 + 3) = 0;
  }
  iVar7 = param_1[0x22];
  param_1[0x21] = piVar4;
  param_1[0x22] = iVar7 + 1;
  if (iVar7 == 0) {
    param_1[0x20] = piVar4;
  }
  else {
    *(int **)(iVar2 + 8) = piVar4;
  }
  pvVar3 = operator_new(0xba);
  local_4._0_1_ = 3;
  if (pvVar3 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00667790();
  }
  uVar5 = 0xffffffff;
  *(undefined4 *)(iVar7 + 4) = 0x3dcccccd;
  *(undefined4 *)(iVar7 + 8) = 0x41200000;
  *(undefined4 *)(iVar7 + 0x20) = 0xc9742400;
  *(undefined4 *)(iVar7 + 0x10) = 0x44fa0000;
  *(undefined4 *)(iVar7 + 0x28) = 0xbf800000;
  *(undefined1 *)(iVar7 + 0x7c) = 1;
  *(undefined1 *)(iVar7 + 0x7e) = 1;
  *(undefined1 *)(iVar7 + 0x80) = 1;
  *(undefined1 *)(iVar7 + 0x81) = 1;
  pcVar8 = s_Hard_Bombing_0086b4ac;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = (char *)(iVar7 + 0x2c);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  local_4._0_1_ = 0;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar2 = param_1[0x21];
  piVar4 = operator_new(0xe);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = iVar7;
    piVar4[1] = iVar2;
    piVar4[2] = 0;
    *(undefined1 *)(piVar4 + 3) = 0;
  }
  iVar7 = param_1[0x22];
  param_1[0x21] = piVar4;
  param_1[0x22] = iVar7 + 1;
  if (iVar7 == 0) {
    param_1[0x20] = piVar4;
  }
  else {
    *(int **)(iVar2 + 8) = piVar4;
  }
  pvVar3 = operator_new(0xba);
  local_4._0_1_ = 4;
  if (pvVar3 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00667790();
  }
  *(undefined4 *)(iVar7 + 0x24) = 0xbf000000;
  *(undefined4 *)(iVar7 + 0x28) = 0xbf000000;
  uVar5 = 0xffffffff;
  *(undefined4 *)(iVar7 + 4) = 0x3dcccccd;
  *(undefined4 *)(iVar7 + 8) = 0x41200000;
  *(undefined4 *)(iVar7 + 0x20) = 0xc9742400;
  *(undefined4 *)(iVar7 + 0x1c) = 0x44fa0000;
  *(undefined1 *)(iVar7 + 0x7c) = 1;
  *(undefined1 *)(iVar7 + 0x7e) = 1;
  *(undefined1 *)(iVar7 + 0x82) = 1;
  *(undefined1 *)(iVar7 + 0x83) = 1;
  *(undefined1 *)(iVar7 + 0x84) = 1;
  *(undefined1 *)(iVar7 + 0x86) = 1;
  pcVar8 = s_Strategic_Bombing_0086b498;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = (char *)(iVar7 + 0x2c);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  local_4._0_1_ = 0;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar2 = param_1[0x21];
  piVar4 = operator_new(0xe);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = iVar7;
    piVar4[1] = iVar2;
    piVar4[2] = 0;
    *(undefined1 *)(piVar4 + 3) = 0;
  }
  iVar7 = param_1[0x22];
  param_1[0x21] = piVar4;
  param_1[0x22] = iVar7 + 1;
  if (iVar7 == 0) {
    param_1[0x20] = piVar4;
  }
  else {
    *(int **)(iVar2 + 8) = piVar4;
  }
  pvVar3 = operator_new(0xba);
  local_4._0_1_ = 5;
  if (pvVar3 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00667790();
  }
  uVar5 = 0xffffffff;
  *(undefined1 *)(iVar7 + 0x7c) = 1;
  *(undefined1 *)(iVar7 + 0x7e) = 1;
  *(undefined1 *)(iVar7 + 0x87) = 1;
  *(undefined1 *)(iVar7 + 0x88) = 1;
  *(undefined1 *)(iVar7 + 0x89) = 1;
  *(undefined4 *)(iVar7 + 4) = 0x3dcccccd;
  *(undefined4 *)(iVar7 + 8) = 0x41200000;
  *(undefined4 *)(iVar7 + 0x20) = 0xc9742400;
  *(undefined4 *)(iVar7 + 0x18) = 0x44fa0000;
  *(undefined4 *)(iVar7 + 0x28) = 0xbf800000;
  pcVar8 = s_Naval_Bombing_0086b488;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  local_4._0_1_ = 0;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = (char *)(iVar7 + 0x2c);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar2 = param_1[0x21];
  piVar4 = operator_new(0xe);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = iVar7;
    piVar4[1] = iVar2;
    piVar4[2] = 0;
    *(undefined1 *)(piVar4 + 3) = 0;
  }
  iVar7 = param_1[0x22];
  param_1[0x21] = piVar4;
  param_1[0x22] = iVar7 + 1;
  if (iVar7 == 0) {
    param_1[0x20] = piVar4;
  }
  else {
    *(int **)(iVar2 + 8) = piVar4;
  }
  pvVar3 = operator_new(0xba);
  local_4._0_1_ = 6;
  if (pvVar3 == (void *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00667790();
  }
  *(undefined4 *)(iVar7 + 0x14) = 0xc4fa0000;
  *(undefined4 *)(iVar7 + 0x10) = 0xc4fa0000;
  *(undefined4 *)(iVar7 + 0x1c) = 0xc4fa0000;
  uVar5 = 0xffffffff;
  *(undefined4 *)(iVar7 + 4) = 0x3dcccccd;
  *(undefined4 *)(iVar7 + 8) = 0x41200000;
  *(undefined4 *)(iVar7 + 0x20) = 0x49742400;
  *(undefined4 *)(iVar7 + 0x24) = 0xbf800000;
  *(undefined1 *)(iVar7 + 0x7c) = 1;
  *(undefined1 *)(iVar7 + 0x7e) = 1;
  *(undefined1 *)(iVar7 + 0x8a) = 1;
  *(undefined1 *)(iVar7 + 0x8b) = 1;
  pcVar8 = s_Airlift_0086b480;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  local_4 = (uint)local_4._1_3_ << 8;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = (char *)(iVar7 + 0x2c);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar2 = param_1[0x21];
  piVar4 = operator_new(0xe);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = iVar7;
    piVar4[1] = iVar2;
    piVar4[2] = 0;
    *(undefined1 *)(piVar4 + 3) = 0;
  }
  iVar7 = param_1[0x22];
  param_1[0x21] = piVar4;
  param_1[0x22] = iVar7 + 1;
  if (iVar7 != 0) {
    *(int **)(iVar2 + 8) = piVar4;
    ExceptionList = local_c;
    return param_1;
  }
  param_1[0x20] = piVar4;
  ExceptionList = local_c;
  return param_1;
}


