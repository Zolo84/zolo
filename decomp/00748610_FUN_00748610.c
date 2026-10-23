// FUN_00748610 @ 748610 size=329

int FUN_00748610(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 local_111;
  int local_110 [2];
  undefined **local_108 [5];
  undefined1 local_f4;
  undefined4 local_94;
  undefined4 local_8c [32];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007df556;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00674910(0);
  uVar2 = 0xffffffff;
  pcVar3 = &DAT_0088ebf8;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00674d80(&DAT_0088ebf8,~uVar2 - 1);
  local_f4 = local_111;
  FUN_00674910(0);
  uVar2 = 0xffffffff;
  pcVar3 = &DAT_0088ebf8;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00674d80(&DAT_0088ebf8,~uVar2 - 1);
  FUN_00673c70(&DAT_0088ebf8,&local_111);
  FUN_00748760();
  FUN_00748950();
  local_94 = 0;
  local_108[0] = &PTR_FUN_007fa22c;
  local_4 = 0;
  local_8c[0] = *param_1;
  FUN_00748e00(local_108);
  local_4._0_1_ = 1;
  FUN_00749540(local_110,local_8c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0074af70();
  local_4 = 0xffffffff;
  FUN_0074af70();
  ExceptionList = local_c;
  return local_110[0] + 0x10;
}


