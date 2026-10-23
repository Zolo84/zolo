// FUN_007411f0 @ 7411f0 size=488

void FUN_007411f0(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  
  switch(param_1) {
  case 1:
    pcVar2 = _malloc(0x200);
    uVar3 = FUN_007a6615(s_map_incognita_tbl_0087434c,&DAT_0082eeb4);
    FUN_007a67c4(pcVar2,1,0x200,uVar3);
    FUN_007a6429(uVar3);
    cVar6 = '\0';
    uVar4 = 0;
    piVar5 = &DAT_00874228;
    do {
      iVar1 = *piVar5;
      uVar7 = uVar4 & 0x80000007;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
      }
      piVar5 = piVar5 + 1;
      (&DAT_00d4bcec)[uVar4] = pcVar2[iVar1] - (&DAT_008742a8)[uVar7 * 4];
      cVar6 = cVar6 + pcVar2[iVar1];
      uVar4 = uVar4 + 1;
    } while ((int)piVar5 < 0x8742a8);
    if (cVar6 != *pcVar2) {
      FUN_007a64d3(0);
    }
    FUN_007a77fa(pcVar2);
    pcVar2 = _malloc(0x200);
    uVar3 = FUN_007a6615(s_sfx_wave_gbme_wav_00874338,&DAT_0082eeb4);
    FUN_007a67c4(pcVar2,1,0x200,uVar3);
    FUN_007a6429(uVar3);
    cVar6 = '\0';
    uVar4 = 0;
    piVar5 = &DAT_00874228;
    do {
      iVar1 = *piVar5;
      uVar7 = uVar4 & 0x80000007;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
      }
      piVar5 = piVar5 + 1;
      (&DAT_00d4bcec)[uVar4] = pcVar2[iVar1] - (&DAT_008742a8)[uVar7 * 4];
      cVar6 = cVar6 + pcVar2[iVar1];
      uVar4 = uVar4 + 1;
    } while ((int)piVar5 < 0x8742a8);
    if (cVar6 != *pcVar2) {
      FUN_007a64d3(0);
    }
    FUN_007a77fa(pcVar2);
    pcVar2 = _malloc(0x200);
    uVar3 = FUN_007a6615(s_gfx_interface_cover65_bmp_0087431c,&DAT_0082eeb4);
    FUN_007a67c4(pcVar2,1,0x200,uVar3);
    FUN_007a6429(uVar3);
    cVar6 = '\0';
    uVar4 = 0;
    piVar5 = &DAT_00874228;
    do {
      iVar1 = *piVar5;
      uVar7 = uVar4 & 0x80000007;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
      }
      piVar5 = piVar5 + 1;
      (&DAT_00d4bcec)[uVar4] = pcVar2[iVar1] - (&DAT_008742a8)[uVar7 * 4];
      cVar6 = cVar6 + pcVar2[iVar1];
      uVar4 = uVar4 + 1;
    } while ((int)piVar5 < 0x8742a8);
    if (cVar6 != *pcVar2) {
      FUN_007a64d3(0);
    }
    FUN_007a77fa(pcVar2);
    return;
  case 2:
    FUN_00740d70();
    FUN_007410d0(s_music_tmp_dat_0087430c,0x1975400);
    return;
  case 3:
    FUN_007410d0(s_avi_paradox_avi_008742fc,0);
    return;
  case 4:
    FUN_007410d0(s_accessories_win95_ws2setup_exe_008742dc,0xf0d20);
  }
  return;
}


