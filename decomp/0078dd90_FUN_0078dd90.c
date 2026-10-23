// FUN_0078dd90 @ 78dd90 size=717

void __fastcall FUN_0078dd90(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  double local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_007e153b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00429a00(s_Parsing_db_mission_eff_csv____0087b610);
  pvVar1 = operator_new(8);
  puVar4 = (undefined4 *)0x0;
  local_c = 0;
  if (pvVar1 != (void *)0x0) {
    puVar4 = (undefined4 *)FUN_00426120(s_db_mission_eff_csv_0083b154);
  }
  local_c = 0xffffffff;
  FUN_00426330(0x11);
  FUN_00426330(2);
  pfVar5 = (float *)(param_1 + 0x5f9ca);
  iVar3 = 0xe;
  do {
    FUN_004262f0(1);
    iVar2 = 3;
    do {
      FUN_00426470(&local_20);
      *pfVar5 = (float)local_20;
      pfVar5 = pfVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_00426330(1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00426330(2);
  iVar3 = 0xe;
  pfVar5 = (float *)(param_1 + 0x5fa72);
  do {
    FUN_004262f0(1);
    iVar2 = 3;
    do {
      FUN_00426470(&local_20);
      *pfVar5 = (float)local_20;
      pfVar5 = pfVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_00426330(1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00426330(2);
  iVar3 = 0xf;
  pfVar5 = (float *)(param_1 + 0x5fb1a);
  do {
    FUN_004262f0(1);
    iVar2 = 3;
    do {
      FUN_00426470(&local_20);
      *pfVar5 = (float)local_20;
      pfVar5 = pfVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_00426330(1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00426330(2);
  iVar3 = 2;
  pfVar5 = (float *)(param_1 + 0x5fbce);
  do {
    FUN_004262f0(1);
    iVar2 = 3;
    do {
      FUN_00426470(&local_20);
      *pfVar5 = (float)local_20;
      pfVar5 = pfVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_00426330(1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00426330(2);
  iVar3 = 2;
  pfVar5 = (float *)(param_1 + 0x5fbe6);
  do {
    FUN_004262f0(1);
    iVar2 = 3;
    do {
      FUN_00426470(&local_20);
      *pfVar5 = (float)local_20;
      pfVar5 = pfVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_00426330(1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00426330(2);
  iVar3 = 5;
  pfVar5 = (float *)(param_1 + 0x5fbfe);
  do {
    FUN_004262f0(1);
    iVar2 = 3;
    do {
      FUN_00426470(&local_20);
      *pfVar5 = (float)local_20;
      pfVar5 = pfVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_00426330(1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00426330(2);
  FUN_004262f0(1);
  iVar3 = 3;
  pfVar5 = (float *)(param_1 + 0x5fc3a);
  do {
    FUN_00426470(&local_20);
    *pfVar5 = (float)local_20;
    pfVar5 = pfVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00426330(1);
  FUN_00426330(2);
  FUN_004262f0(1);
  pfVar5 = (float *)(param_1 + 0x5fc46);
  iVar3 = 3;
  do {
    FUN_00426470(&local_20);
    *pfVar5 = (float)local_20;
    pfVar5 = pfVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00426330(1);
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(1);
  }
  FUN_00429a00(s_done__0087b608);
  ExceptionList = pvStack_14;
  return;
}


