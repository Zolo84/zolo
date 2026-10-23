// FUN_007595a0 @ 7595a0 size=323

void FUN_007595a0(void)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined **ppuVar5;
  CHAR local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007dffce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00dc4b5e != '\0') {
    ExceptionList = &local_c;
    FUN_00429a00(s_Read_technologies___00874db4);
  }
  ppuVar5 = &PTR_s_infantry_tech_txt_00874cb8;
  do {
    if (DAT_00dc4b5e != '\0') {
      FUN_00429a00(&DAT_00874dac,*ppuVar5);
    }
    wsprintfA(local_8c,s_db_tech__s_00874da0,*ppuVar5);
    pvVar1 = operator_new(0x714);
    iVar4 = 0;
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      iVar4 = FUN_00534930(local_8c,&DAT_008390e0);
    }
    local_4 = 0xffffffff;
    while( true ) {
      iVar2 = FUN_00535490();
      if (iVar2 != 1) break;
      if (*(int *)(iVar4 + 4) == 0x2bd) {
        FUN_00562b80(iVar4);
      }
      else {
        FUN_005349b0(s_unknown_lhs_in_tech_file_008537b0);
      }
    }
    if (iVar2 != 2) {
      piVar3 = (int *)FUN_00534391();
      if (*piVar3 == 4) {
        FUN_005343dc();
      }
    }
    if (iVar4 != 0) {
      FUN_005349a0();
      FUN_00796cd8(iVar4);
    }
    ppuVar5 = ppuVar5 + 1;
  } while ((int)ppuVar5 < 0x874cdc);
  if (DAT_00dc4b5e != '\0') {
    FUN_00429a00(&DAT_00874d9c);
  }
  ExceptionList = local_c;
  return;
}


