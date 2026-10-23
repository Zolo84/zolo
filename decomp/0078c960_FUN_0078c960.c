// FUN_0078c960 @ 78c960 size=358

void __fastcall FUN_0078c960(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007e1496;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00429a00(s_Loading_minister_personalities___0087b438);
  iVar6 = 0;
  local_14 = 0;
  pvVar2 = operator_new(0x714);
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    iVar6 = FUN_00534930(s_db_ministers_minister_personalit_0083b168,&DAT_008390e0);
  }
  local_4 = 0xffffffff;
  while( true ) {
    iVar3 = FUN_00535490();
    if (iVar3 != 1) break;
    if (*(int *)(iVar6 + 4) == 0x29e) {
      pvVar2 = operator_new(0x32);
      local_4 = 1;
      if (pvVar2 == (void *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_00767720();
      }
      iVar3 = *(int *)(param_1 + 0x1c580);
      local_4 = 0xffffffff;
      puVar5 = operator_new(0xe);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = piVar4;
        puVar5[1] = iVar3;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      iVar1 = *(int *)(param_1 + 0x1c584);
      *(undefined4 **)(param_1 + 0x1c580) = puVar5;
      *(int *)(param_1 + 0x1c584) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 **)(param_1 + 0x1c57c) = puVar5;
      }
      else {
        *(undefined4 **)(iVar3 + 8) = puVar5;
      }
      (**(code **)(*piVar4 + 4))(iVar6);
      local_14 = local_14 + 1;
    }
    else {
      FUN_005349b0(s_unknown_lhs_in_tech_file_008537b0);
    }
  }
  if (iVar3 != 2) {
    piVar4 = (int *)FUN_00534391();
    if (*piVar4 == 4) {
      FUN_005343dc();
    }
  }
  if (iVar6 != 0) {
    FUN_005349a0();
    FUN_00796cd8(iVar6);
  }
  FUN_00429a00(s_Loading_minister_personalities_D_0087b3f8,local_14);
  ExceptionList = local_c;
  return;
}


