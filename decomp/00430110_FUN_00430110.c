// FUN_00430110 @ 430110 size=589

void __fastcall FUN_00430110(int param_1)

{
  char *pcVar1;
  char cVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *local_e38;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007ba3e4;
  local_c = ExceptionList;
  if ((*(char *)(param_1 + 0x11f) != '\0') ||
     (ExceptionList = &local_c, *(char *)(param_1 + 0x11e) != '\0')) {
    ExceptionList = &local_c;
    FUN_00577d20();
  }
  if (*(char *)(param_1 + 0x11f) != '\0') {
    pcVar1 = (char *)(param_1 + 0x10);
    *(undefined1 *)(DAT_00893530 + 0x1e) = 0;
    uVar4 = 0xffffffff;
    pcVar8 = pcVar1;
    do {
      pcVar9 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar9 + -uVar4;
    pcVar9 = pcVar1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00534930(pcVar1,&DAT_008395a0);
    local_4 = 0;
    FUN_005362c0();
    local_4 = 0xffffffff;
    FUN_005349a0();
    FUN_006cd890(DAT_00d685a6 + 0x257d);
    FUN_0042cc70();
  }
  if (*(char *)(param_1 + 0x11e) != '\0') {
    pvVar3 = operator_new(0x25e);
    local_4 = 1;
    if (pvVar3 == (void *)0x0) {
      local_e38 = (undefined4 *)0x0;
    }
    else {
      local_e38 = (undefined4 *)FUN_00401060(s_gfx_load_1024_bmp_0083b850,1,0);
    }
    local_4 = 0xffffffff;
    FUN_00406270(*(int *)(DAT_00bd1bac + 4) + -0x400 >> 1,*(int *)(DAT_00bd1bac + 8) + -0x300 >> 1,
                 DAT_00bd1bac);
    FUN_00583f10();
    FUN_00583f10();
    if (*(char *)(param_1 + 0x116) != '\0') {
      (&DAT_00dc0fd4)[*(int *)(DAT_00d0ca90 + 6)] = 0;
      (&DAT_00dc0fd4)[*(int *)(param_1 + 0x118)] = 1;
      if (*(char *)(param_1 + 0x11c) != '\0') {
        FUN_00534930(s_temp_eug_0083b42c,&DAT_008395a0);
        local_4 = 2;
        FUN_00535cf0();
        local_4 = 0xffffffff;
        FUN_005349a0();
      }
    }
    pcVar1 = (char *)(param_1 + 0x10);
    FUN_0042fa90();
    uVar4 = 0xffffffff;
    iVar7 = 0;
    pcVar8 = pcVar1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    iVar6 = 0;
    if (0 < (int)(~uVar4 - 1)) {
      do {
        cVar2 = pcVar1[iVar6];
        if (((cVar2 != '+') && (cVar2 != '?')) && (cVar2 != '*')) {
          pcVar1[iVar7] = cVar2;
          iVar7 = iVar7 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(~uVar4 - 1));
    }
    *(undefined1 *)(iVar7 + 0x10 + param_1) = 0;
    FUN_0042efb0();
    if (local_e38 != (undefined4 *)0x0) {
      (**(code **)*local_e38)(1);
    }
  }
  *(undefined1 *)(param_1 + 0x11f) = 0;
  *(undefined1 *)(param_1 + 0x11e) = 0;
  *(undefined1 *)(param_1 + 0x116) = 0;
  ExceptionList = local_c;
  return;
}


