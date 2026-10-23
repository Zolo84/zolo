// FUN_004f57c0 @ 4f57c0 size=175

void FUN_004f57c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_720 [4];
  int local_71c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c091b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00534930(s_db_convoy_costs_txt_0083b388,&DAT_008390e0);
  local_4 = 0;
  do {
    while( true ) {
      iVar1 = FUN_00535490();
      if (iVar1 != 1) break;
      if (local_71c == 0x10c) {
        uVar2 = 0;
      }
      else if (local_71c == 0x10d) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      FUN_004f5870(uVar2,local_720);
    }
    piVar3 = (int *)FUN_00534391();
  } while (*piVar3 != 0x531);
  local_4 = 0xffffffff;
  FUN_005349a0();
  ExceptionList = local_c;
  return;
}


