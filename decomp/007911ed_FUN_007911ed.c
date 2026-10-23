// FUN_007911ed @ 7911ed size=898

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007911ed(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined4 *local_7c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007e16f4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00581ab0();
  FUN_00577f20();
  local_7c = operator_new(0xc);
  local_8 = 0;
  if (local_7c == (undefined4 *)0x0) {
    local_7c = (undefined4 *)0x0;
  }
  else {
    FUN_004c0150(0x1b,&DAT_0088f29c);
    *local_7c = &PTR_FUN_007e3e3c;
  }
  local_8 = 0xffffffff;
  FUN_00565c30(local_7c);
  if (DAT_00893530 != 0) {
    FUN_0042ccc0();
  }
  FUN_00577d20();
  FUN_006ff920(0);
  (**(code **)(*DAT_0088eba8 + 0x34))();
  FUN_00583f10();
  if (DAT_00bd1500 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = *(char *)(DAT_00bd1500 + 0x37b);
  }
  if (((cVar1 != '\0') && (DAT_00d43154 != (int *)0x0)) &&
     ((iVar3 = (**(code **)(*DAT_00d43154 + 0x14))(), iVar3 == 6 ||
      (iVar3 = (**(code **)(*DAT_00d43154 + 0x14))(), iVar3 == 7)))) {
    iVar3 = *(int *)(DAT_00893530 + 0x20) - _DAT_00dc4b80;
    if (iVar3 < 0) {
      _DAT_00dc4b80 = 0;
    }
    if (100 < iVar3) {
      if (*(int *)(DAT_00bd1500 + 0xb70) != 0) {
        local_88 = operator_new(0xc);
        local_8 = 1;
        if (local_88 == (undefined4 *)0x0) {
          local_88 = (undefined4 *)0x0;
        }
        else {
          uVar2 = *(undefined4 *)(DAT_00bd1500 + 900);
          FUN_00499310(0x132,&DAT_0088f254);
          *local_88 = &PTR_FUN_007e5f60;
          *(undefined4 *)(local_88[1] + 0xe) = uVar2;
        }
        local_8 = 0xffffffff;
        local_8c = operator_new(0xe);
        if (local_8c == (undefined4 *)0x0) {
          local_8c = (undefined4 *)0x0;
        }
        else {
          local_8c[1] = 0;
          *(undefined1 *)(local_8c + 2) = 0;
          *(undefined1 *)((int)local_8c + 9) = 1;
          *local_8c = &PTR_LAB_007e3ebc;
          local_8 = 3;
          *local_8c = &PTR_FUN_007e943c;
          FUN_005661a0(local_88);
        }
        local_8 = 0xffffffff;
        FUN_00582390(local_8c,*(undefined4 *)(DAT_00bd1500 + 0x3b0));
        if (local_8c != (undefined4 *)0x0) {
          (**(code **)*local_8c)(1);
        }
        if (local_88 != (undefined4 *)0x0) {
          (**(code **)*local_88)(1);
        }
      }
      _DAT_00dc4b80 = *(int *)(DAT_00893530 + 0x20);
      FUN_00582540(*(undefined4 *)(DAT_00893530 + 0x24),*(undefined4 *)(DAT_00893530 + 0x20));
    }
  }
  FUN_00577eb0();
  ExceptionList = local_10;
  return;
}


