// FUN_00586cd0 @ 586cd0 size=182

void FUN_00586cd0(void)

{
  int iVar1;
  int local_71c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c918b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00534930(s_db_spy_costs_txt_0083b39c,&DAT_008390e0);
  local_4 = 0;
  do {
    while( true ) {
      iVar1 = FUN_00535490();
      if (iVar1 != 1) break;
      if (local_71c == 0x371) {
        iVar1 = FUN_00535850(&DAT_00bd1be0);
        if (iVar1 != 0) {
          FUN_005349b0(s_spy_costs_txt_00857db4);
        }
      }
      else {
        FUN_005349b0(s_Unknown_Type_in__spy_costs_txt__00857dc4);
      }
    }
  } while ((iVar1 != 2) && (iVar1 != -1));
  local_4 = 0xffffffff;
  FUN_005349a0();
  ExceptionList = local_c;
  return;
}


