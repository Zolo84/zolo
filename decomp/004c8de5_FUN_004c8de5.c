// FUN_004c8de5 @ 4c8de5 size=1409

void FUN_004c8de5(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int local_d0;
  undefined4 *local_cc;
  int local_c8;
  undefined4 *local_c4;
  undefined4 *local_c0;
  int local_40;
  undefined4 *local_24;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007bf240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  for (local_18 = 0; local_18 < 0x158; local_18 = local_18 + 1) {
    piVar1 = (int *)(&DAT_0089cad8)[local_18];
    if (piVar1 != (int *)0x0) {
      local_24 = (undefined4 *)piVar1[0x3a29];
      while (local_24 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)local_24[2];
        iVar4 = FUN_004e9370(*local_24);
        local_24 = puVar2;
        if (*(int *)(iVar4 + 0x482) == 0) {
          local_c0 = operator_new(0x70);
          local_8 = 0;
          if (local_c0 == (undefined4 *)0x0) {
            local_c0 = (undefined4 *)0x0;
          }
          else {
            FUN_004cd000(0);
            *(undefined2 *)((int)local_c0 + 0x6a) = 0;
            *(undefined1 *)(local_c0 + 0x1a) = 0;
            *(undefined1 *)((int)local_c0 + 0x67) = 0;
            *(undefined1 *)((int)local_c0 + 0x66) = 0;
            *local_c0 = &PTR_FUN_007e7d34;
            *(undefined4 *)((int)local_c0 + 0x56) = 0;
            *(undefined4 *)((int)local_c0 + 0x5a) = 0;
            *(undefined4 *)((int)local_c0 + 0x5e) = 0;
            local_c0[0x1b] = 0;
          }
          local_8 = 0xffffffff;
          FUN_004c94f1(iVar4);
          (**(code **)(*piVar1 + 0xb0))(local_c0);
        }
      }
    }
  }
  for (local_18 = 1; local_18 < DAT_00877690; local_18 = local_18 + 1) {
    iVar4 = FUN_004e9370(local_18);
    if (*(int *)(iVar4 + 0x482) == 0) {
      if (*(int *)(iVar4 + 0x254) == 8) {
        local_c4 = operator_new(0x62);
        local_8 = 1;
        if (local_c4 == (undefined4 *)0x0) {
          local_c4 = (undefined4 *)0x0;
        }
        else {
          FUN_004cd000(2);
          *local_c4 = &PTR_FUN_007e7d20;
        }
        iVar3 = DAT_008e9768;
        local_8 = 0xffffffff;
        pvVar5 = operator_new(0xe);
        local_8 = 2;
        if (pvVar5 == (void *)0x0) {
          local_c8 = 0;
        }
        else {
          local_c8 = FUN_004cfd00(local_c4,iVar3,0);
        }
        local_8 = 0xffffffff;
        DAT_008e9768 = local_c8;
        if (DAT_008e976c == 0) {
          DAT_008e9764 = local_c8;
          DAT_008e976c = DAT_008e976c + 1;
        }
        else {
          DAT_008e976c = DAT_008e976c + 1;
          *(int *)(iVar3 + 8) = local_c8;
        }
        FUN_004c94f1(iVar4);
      }
      else if (*(int *)(iVar4 + 0x288) == 0x1c5) {
        local_cc = operator_new(0x62);
        local_8 = 3;
        if (local_cc == (undefined4 *)0x0) {
          local_cc = (undefined4 *)0x0;
        }
        else {
          FUN_004cd000(1);
          *local_cc = &PTR_FUN_007e7d0c;
        }
        iVar3 = DAT_008ea358;
        local_8 = 0xffffffff;
        pvVar5 = operator_new(0xe);
        local_8 = 4;
        if (pvVar5 == (void *)0x0) {
          local_d0 = 0;
        }
        else {
          local_d0 = FUN_004cfd40(local_cc,iVar3,0);
        }
        local_8 = 0xffffffff;
        DAT_008ea358 = local_d0;
        if (DAT_008ea35c == 0) {
          DAT_008ea354 = local_d0;
          DAT_008ea35c = DAT_008ea35c + 1;
        }
        else {
          DAT_008ea35c = DAT_008ea35c + 1;
          *(int *)(iVar3 + 8) = local_d0;
        }
        FUN_004c94f1(iVar4);
      }
    }
  }
  local_14 = DAT_008e9764;
  while (local_14 != 0) {
    local_14 = *(int *)(local_14 + 8);
    FUN_004c9dd4();
  }
  local_1c = DAT_008ea354;
  while (local_1c != 0) {
    local_1c = *(int *)(local_1c + 8);
    FUN_004c9dd4();
  }
  for (local_18 = 1; local_18 < 0x158; local_18 = local_18 + 1) {
    if ((&DAT_0089cad8)[local_18] != 0) {
      local_40 = *(int *)((&DAT_0089cad8)[local_18] + 0xe86e);
      while (local_40 != 0) {
        local_40 = *(int *)(local_40 + 8);
        FUN_004c9dd4();
      }
    }
  }
  FUN_004cc623();
  ExceptionList = local_10;
  return;
}


