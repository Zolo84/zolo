// FUN_004a4010 @ 4a4010 size=305

uint FUN_004a4010(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined **local_28 [2];
  undefined **local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bdee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar3 = FUN_004e9370(param_1);
  iVar1 = *(int *)(uVar3 + 0x482);
  if (iVar1 != 0) {
    iVar4 = FUN_004e9370(param_2);
    iVar4 = *(int *)(iVar4 + 0x482);
    uVar3 = 0;
    if (iVar4 != 0) {
      if (iVar1 == iVar4) {
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)iVar4 >> 8),1);
      }
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_20 = &PTR_LAB_007e5e04;
      local_4 = 0;
      local_28[0] = &PTR_FUN_007e6f1c;
      cVar2 = FUN_004c815f(iVar1,iVar4,local_28,&local_20);
      if (cVar2 != '\0') {
        (*(code *)local_20[4])();
        local_20 = &PTR_LAB_007e5e04;
        iVar1 = local_1c;
        while (iVar1 != 0) {
          iVar4 = *(int *)(iVar1 + 8);
          FUN_00796cd8(iVar1);
          iVar1 = iVar4;
        }
        ExceptionList = local_c;
        return 1;
      }
      (*(code *)local_20[4])();
      local_20 = &PTR_LAB_007e5e04;
      iVar1 = local_1c;
      while (uVar3 = 0, iVar1 != 0) {
        iVar4 = *(int *)(iVar1 + 8);
        FUN_00796cd8(iVar1);
        iVar1 = iVar4;
      }
    }
  }
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}


