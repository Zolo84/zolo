// FUN_00753d10 @ 753d10 size=295

undefined4 * __fastcall FUN_00753d10(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uStack_4;
  
  uStack_4._2_1_ = (undefined1)((uint)param_1 >> 0x10);
  uVar2 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = uStack_4._2_1_;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  pcVar3 = &DAT_0088ebf8;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uStack_4 = param_1;
  FUN_00674d80(&DAT_0088ebf8,~uVar2 - 1);
  *(undefined1 *)(param_1 + 5) = uStack_4._2_1_;
  uVar2 = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  pcVar3 = &DAT_0088ebf8;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00674d80(&DAT_0088ebf8,~uVar2 - 1);
  uVar2 = 0xffffffff;
  *(undefined1 *)(param_1 + 9) = uStack_4._2_1_;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  pcVar3 = &DAT_0088ebf8;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00674d80(&DAT_0088ebf8,~uVar2 - 1);
  *(undefined1 *)(param_1 + 0xe) = uStack_4._2_1_;
  FUN_00674910(0);
  uVar2 = 0xffffffff;
  pcVar3 = s_Invalid_ip_008747ac;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00674d80(s_Invalid_ip_008747ac,~uVar2 - 1);
  *(undefined1 *)(param_1 + 0x12) = uStack_4._2_1_;
  FUN_00674910(0);
  uVar2 = 0xffffffff;
  pcVar3 = s_Invalid_user_0087479c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00674d80(s_Invalid_user_0087479c,~uVar2 - 1);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0xd] = &PTR_FUN_007fa230;
  FUN_0074b440((int)&uStack_4 + 3,0,(int)&uStack_4 + 2);
  param_1[0x18] = &PTR_FUN_007fa228;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_007fa22c;
  return param_1;
}


