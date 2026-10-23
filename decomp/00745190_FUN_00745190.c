// FUN_00745190 @ 745190 size=446

void __fastcall FUN_00745190(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  *param_1 = &PTR_FUN_007fa224;
  param_1[0xe] = &PTR_FUN_007fa228;
  if (param_1 + 0xe == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = param_1 + 0xf;
  }
  FUN_00748cb0(&local_10,*(undefined4 *)puVar6[1],(undefined4 *)puVar6[1]);
  FUN_00796cd8(puVar6[1]);
  puVar6[1] = 0;
  puVar6[3] = 0;
  FUN_00798acc();
  iVar2 = DAT_00d4bdfc;
  DAT_00d4bdf8 = DAT_00d4bdf8 + -1;
  iVar7 = 0;
  if (DAT_00d4bdf8 == 0) {
    DAT_00d4bdfc = 0;
    iVar7 = iVar2;
  }
  FUN_00798b68();
  if (iVar7 != 0) {
    FUN_00796cd8(iVar7);
  }
  param_1[8] = &PTR_FUN_007fa1d8;
  BVar3 = CloseHandle((HANDLE)param_1[0xd]);
  if (BVar3 == 0) {
    FUN_0074bc80(s_CloseHandle__mutex__failed__0087459c,s_Unknown_method_00874398,
                 s_C__Dev_HoI2_Projects_Darkest_Hou_00874560,0x50);
  }
  iVar2 = param_1[10];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_00796cd8((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puVar6 = (undefined4 *)param_1[2];
  local_10 = (undefined4 *)*puVar6;
  if (((param_1[4] == 0) ||
      (piVar4 = (int *)FUN_00748df0(local_c), local_10 != (undefined4 *)*piVar4)) ||
     (puVar6 != (undefined4 *)param_1[2])) {
    while (local_10 != puVar6) {
      puVar5 = (undefined4 *)FUN_00749d10(local_c,0);
      FUN_007497b0(local_4,*puVar5);
    }
  }
  else {
    FUN_00749c20(((undefined4 *)param_1[2])[1]);
    *(int *)(param_1[2] + 4) = DAT_00d4be04;
    param_1[4] = 0;
    *(undefined4 *)param_1[2] = param_1[2];
    *(undefined4 *)(param_1[2] + 8) = param_1[2];
    FUN_00748df0(local_8);
  }
  FUN_00796cd8(param_1[2]);
  param_1[2] = 0;
  param_1[4] = 0;
  FUN_00798acc();
  iVar2 = DAT_00d4be04;
  DAT_00d4be00 = DAT_00d4be00 + -1;
  iVar7 = 0;
  if (DAT_00d4be00 == 0) {
    DAT_00d4be04 = 0;
    iVar7 = iVar2;
  }
  FUN_00798b68();
  if (iVar7 != 0) {
    FUN_00796cd8(iVar7);
  }
  return;
}


