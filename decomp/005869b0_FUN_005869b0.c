// FUN_005869b0 @ 5869b0 size=182

void FUN_005869b0(void)

{
  int iVar1;
  int local_71c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c916b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00534930(s_db_diplo_costs_txt_0083b3b0,&DAT_008390e0);
  local_4 = 0;
  do {
    while( true ) {
      iVar1 = FUN_00535490();
      if (iVar1 != 1) break;
      if (local_71c == 0x134) {
        iVar1 = FUN_00535850(&DAT_00bd1bc8);
        if (iVar1 != 0) {
          FUN_005349b0(s_diplo_costs_txt_00857d80);
        }
      }
      else {
        FUN_005349b0(s_Unknown_Type_in__diplo_costs_txt_00857d90);
      }
    }
  } while ((iVar1 != 2) && (iVar1 != -1));
  local_4 = 0xffffffff;
  FUN_005349a0();
  ExceptionList = local_c;
  return;
}


