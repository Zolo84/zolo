// FUN_004d0250 @ 4d0250 size=285

void FUN_004d0250(void)

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
  puStack_8 = &LAB_007bf30b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00534930(s_db_building_costs_txt_0083b414,&DAT_008390e0);
  local_4 = 0;
  do {
    while (iVar1 = FUN_00535490(), iVar1 != 1) {
      piVar3 = (int *)FUN_00534391();
      if (*piVar3 == 0x531) {
        local_4 = 0xffffffff;
        FUN_005349a0();
        ExceptionList = local_c;
        return;
      }
    }
    if (local_71c < 0x41a) {
      if (local_71c == 0x419) {
        uVar2 = 6;
      }
      else {
        switch(local_71c) {
        case 0xb5:
          uVar2 = 4;
          break;
        default:
          goto switchD_004d02bc_caseD_b6;
        case 0xe2:
          uVar2 = 1;
          break;
        case 0x14d:
          uVar2 = 5;
          break;
        case 0x15e:
          uVar2 = 3;
          break;
        case 0x15f:
          uVar2 = 2;
        }
      }
    }
    else {
      switch(local_71c) {
      case 0x41a:
        uVar2 = 7;
        break;
      case 0x41b:
        uVar2 = 8;
        break;
      case 0x41c:
        uVar2 = 9;
        break;
      case 0x41d:
        uVar2 = 10;
        break;
      default:
switchD_004d02bc_caseD_b6:
        uVar2 = 0;
      }
    }
    FUN_004d0450(uVar2,local_720);
  } while( true );
}


