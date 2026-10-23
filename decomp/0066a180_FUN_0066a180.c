// FUN_0066a180 @ 66a180 size=437

int __fastcall FUN_0066a180(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_38;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d3ec8;
  ExceptionList = &pvStack_c;
  iVar6 = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  iVar1 = *(int *)(param_1 + 0xc);
  local_38 = 0;
  iVar2 = local_38;
  while ((iVar1 != 0 && (iVar6 == 0))) {
    iVar3 = FUN_00428ee0();
    local_38 = iVar2;
    if ((iVar3 == 0) || (iVar3 == 8)) {
      (**(code **)(*(int *)(param_1 + 8) + 0x1c))();
    }
    else {
      iVar3 = *(int *)(iVar3 + 100);
      iVar6 = iVar2;
      if (iVar3 != 0) {
        local_4 = 0;
        iVar6 = FUN_00428ee0();
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = iVar6 + -0x14;
        }
        iVar6 = (**(code **)(*(int *)(iVar6 + 0x22) + 4))();
        if (iVar6 != 0) {
          FUN_00428ee0();
          iVar6 = FUN_00500d50();
          iVar4 = FUN_00428ee0();
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar4 + -0x14;
          }
          iVar4 = *(int *)(iVar4 + 0x26);
          while ((local_38 = iVar3, iVar4 != 0 &&
                 (iVar5 = FUN_00500d50(), local_38 = iVar2, iVar5 == iVar6))) {
            iVar4 = *(int *)(iVar4 + 8);
          }
        }
        local_4 = 0xffffffff;
        iVar6 = local_38;
      }
    }
    iVar1 = *(int *)(iVar1 + 10);
    iVar2 = local_38;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x18) = 0;
  while (iVar1 != 0) {
    if (*(char *)(iVar1 + 0xe) == '\0') {
      iVar1 = *(int *)(iVar1 + 10);
    }
    else {
      iVar1 = *(int *)(iVar1 + 10);
      (**(code **)(*(int *)(param_1 + 8) + 0x1c))();
    }
  }
  ExceptionList = pvStack_c;
  return iVar6;
}


