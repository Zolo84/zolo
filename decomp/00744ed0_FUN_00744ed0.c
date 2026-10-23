// FUN_00744ed0 @ 744ed0 size=381

undefined4 * __thiscall FUN_00744ed0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  HANDLE pvVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined1 *)(param_1 + 1) = (undefined1)param_2;
  *(undefined1 *)((int)param_1 + 5) = (undefined1)param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_00749c70();
  param_1[5] = param_2;
  param_1[6] = 1000;
  param_1[7] = 1000;
  local_10[0] = (undefined1)param_2;
  uVar5 = 0xffffffff;
  pcVar7 = s_Gameprovider_mutex_008746b4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_00674d80(s_Gameprovider_mutex_008746b4,~uVar5 - 1);
  *(undefined1 *)(param_1 + 9) = local_10[0];
  FUN_00674910(0);
  FUN_00674710(local_10,0,DAT_007f33d8);
  param_1[8] = &PTR_FUN_007fa1d8;
  pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  param_1[0xd] = pvVar2;
  if (pvVar2 == (HANDLE)0x0) {
    FUN_0074bc80(s_CreateMutex_NULL__false__NULL__f_00874538,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x28);
  }
  if (local_c != 0) {
    cVar1 = *(char *)(local_c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(local_c + -1));
    }
    else {
      *(char *)(local_c + -1) = cVar1 + -1;
    }
  }
  *(undefined1 *)(param_1 + 0xf) = (undefined1)param_2;
  *(undefined1 *)((int)param_1 + 0x3d) = (undefined1)param_2;
  *(undefined1 *)(param_1 + 0x11) = 0;
  puVar3 = (undefined4 *)FUN_0074a0e0(0,1);
  FUN_00798acc();
  puVar6 = puVar3;
  if (DAT_00d4bdfc == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
    DAT_00d4bdfc = puVar3;
    *puVar3 = 0;
    DAT_00d4bdfc[2] = 0;
  }
  DAT_00d4bdf8 = DAT_00d4bdf8 + 1;
  FUN_00798b68();
  if (puVar6 != (undefined4 *)0x0) {
    FUN_00796cd8(puVar6);
  }
  uVar4 = FUN_0074a0e0(DAT_00d4bdfc,0);
  param_1[0x10] = uVar4;
  param_1[0x12] = 0;
  *(undefined4 *)uVar4 = uVar4;
  *(undefined4 *)(param_1[0x10] + 8) = param_1[0x10];
  param_1[0xe] = &PTR_FUN_007fa228;
  *param_1 = &PTR_FUN_007fa224;
  return param_1;
}


