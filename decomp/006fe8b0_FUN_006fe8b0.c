// FUN_006fe8b0 @ 6fe8b0 size=476

undefined4 * FUN_006fe8b0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *extraout_ECX;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  void *in_stack_00001ffc;
  undefined4 in_stack_0000200c;
  void *local_c;
  undefined1 *local_8;
  char local_4 [4];
  
  local_4[0] = -1;
  local_4[1] = -1;
  local_4[2] = -1;
  local_4[3] = -1;
  local_8 = &LAB_007db594;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007a69e0();
  FUN_00425a80(&DAT_0082eeb0);
  puVar8 = (undefined4 *)0x0;
  FUN_00583720();
  *extraout_ECX = &PTR_FUN_007e3858;
  extraout_ECX[2] = &PTR_LAB_007e386c;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  extraout_ECX[5] = in_stack_0000200c;
  extraout_ECX[6] = 0;
  iVar2 = FUN_005841b0();
  extraout_ECX[7] = (iVar2 + -0x300 >> 1) + 0x206;
  iVar2 = FUN_005841b0();
  *(undefined1 *)(extraout_ECX + 9) = 1;
  extraout_ECX[8] = (iVar2 + -0x300 >> 1) + 0xfa;
  *(undefined4 *)((int)extraout_ECX + 0x26) = 0;
  *(undefined4 *)((int)extraout_ECX + 0x2a) = 0;
  *extraout_ECX = &PTR_FUN_007f8500;
  extraout_ECX[2] = &PTR_LAB_007f84fc;
  uVar3 = FUN_007a9607(0);
  FUN_007a7c01(uVar3);
  local_c = operator_new(8);
  if (local_c != (void *)0x0) {
    puVar8 = (undefined4 *)FUN_00426120(s_config_famous_quotes_csv_0086ffa0);
  }
  iVar2 = FUN_00426720();
  iVar4 = _rand();
  FUN_00426330(iVar4 % iVar2 + 1);
  FUN_004262f0(DAT_00dc1544 * 2);
  FUN_004265c0(local_4);
  uVar6 = 0xffffffff;
  pcVar5 = local_4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = operator_new(~uVar6);
  uVar6 = 0xffffffff;
  *(char **)((int)extraout_ECX + 0x2e) = pcVar5;
  pcVar9 = local_4;
  do {
    pcVar10 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar10 + -uVar6;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar5 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar5 = pcVar5 + 1;
  }
  FUN_004265c0(local_4);
  uVar6 = 0xffffffff;
  pcVar5 = local_4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = operator_new(~uVar6);
  uVar6 = 0xffffffff;
  *(char **)((int)extraout_ECX + 0x32) = pcVar5;
  pcVar9 = local_4;
  do {
    pcVar10 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar10 + -uVar6;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar5 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar5 = pcVar5 + 1;
  }
  if (puVar8 != (undefined4 *)0x0) {
    (**(code **)*puVar8)(1);
  }
  ExceptionList = in_stack_00001ffc;
  return extraout_ECX;
}


