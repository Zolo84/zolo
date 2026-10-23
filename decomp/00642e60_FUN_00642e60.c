// FUN_00642e60 @ 642e60 size=598

undefined4 * __thiscall
FUN_00642e60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int local_21c;
  int local_218;
  void *local_214;
  undefined4 *local_210;
  char local_20c [256];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d2377;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_210 = param_1;
  iVar2 = FUN_005841b0();
  iVar3 = FUN_005841a0();
  local_21c = (iVar3 + -0x100) / 2 + 0x4c;
  local_218 = iVar2 / 2 + -0x98;
  FUN_0043d920(0x168,0x131,&local_21c);
  uVar6 = 0xffffffff;
  *param_1 = &PTR_FUN_007eff14;
  param_1[2] = &PTR_LAB_007eff10;
  param_1[0x1c] = 0;
  pcVar8 = s_InGameStream__00861f14;
  do {
    pcVar10 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar10 + -uVar6;
  pcVar10 = local_20c;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar6 = 0xffffffff;
  do {
    pcVar8 = param_4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar8 = param_4 + 1;
    cVar1 = *param_4;
    param_4 = pcVar8;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  local_4 = 0;
  iVar2 = -1;
  pcVar10 = local_20c;
  do {
    pcVar9 = pcVar10;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar9 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -uVar6;
  pcVar10 = pcVar9 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = FUN_0040e5f0(local_20c,0,1);
  param_1[0x1c] = uVar4;
  FUN_007a630a(local_10c,s___777_s_00861ee8,param_2);
  pvVar5 = operator_new(0x7e);
  local_4._0_1_ = 1;
  if (pvVar5 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00414c80(s_gfx_interface_iw_eventinfo_anim__00861ef0);
  }
  local_4._0_1_ = 0;
  param_1[0x1a] = uVar4;
  FUN_00415d30(param_1[4]);
  iVar2 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  local_214 = operator_new(0xb2);
  local_4._0_1_ = 2;
  if (local_214 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0043b8f0(0x3c,0x82,0xd0,(int)(0x84 / (longlong)*(int *)(iVar2 + 0x10)) + -2,
                         local_10c,uVar4,iVar2,s_gfx_interface_menu_scrollbar_bot_00861e78,
                         s_gfx_interface_menu_scrollbar_top_00861ea0,1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x1b] = uVar4;
  FUN_0043bee0(param_1[4]);
  iVar2 = param_1[0x1b];
  *(undefined1 *)(iVar2 + 0x26) = 0;
  *(undefined1 *)(iVar2 + 0xc) = 0;
  *(undefined1 *)(param_1[0x1b] + 0xd) = 1;
  *(undefined1 *)(param_1[0x1b] + 0xc) = 1;
  *(undefined4 *)(param_1[0x1b] + 0x16) = 0x18;
  FUN_0040fe60(param_1[0x1b]);
  FUN_0043c100(param_3,&DAT_0083bf0c,0);
  *(undefined1 *)(param_1[0x1b] + 0xc) = 1;
  ExceptionList = local_c;
  return param_1;
}


