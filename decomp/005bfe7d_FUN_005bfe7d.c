// FUN_005bfe7d @ 5bfe7d size=575

void FUN_005bfe7d(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007cc5e9;
  local_10 = ExceptionList;
  iVar1 = *(int *)(param_2 + 0x248);
  ExceptionList = &local_10;
  FUN_00508160();
  local_28 = 0;
  local_24 = 0;
  local_2c = *(undefined4 **)(param_1 + 4);
  while (local_2c != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)local_2c[2];
    piVar3 = (int *)*local_2c;
    cVar4 = (**(code **)(*piVar3 + 0x2c))();
    local_2c = puVar2;
    if (((cVar4 != '\0') &&
        (iVar5 = (**(code **)(*piVar3 + 0x14))(), *(int *)(iVar5 + 0x248) == iVar1)) &&
       ((*(int *)(iVar5 + 500) == *(int *)(param_2 + 500) ||
        ((cVar4 = (**(code **)(**(int **)(iVar5 + 0x248) + 0x1c))(), cVar4 == '\0' ||
         (cVar4 = FUN_006a8720(), cVar4 != '\0')))))) {
      iVar6 = FUN_00516cc0();
      iVar7 = FUN_00516f50();
      if ((local_24 == 0) || (local_28 < iVar6 - iVar7)) {
        local_28 = iVar6 - iVar7;
        local_24 = iVar5;
      }
    }
  }
  if (0 < local_28) {
    pvVar8 = operator_new(0xc);
    local_8 = 0;
    if (pvVar8 != (void *)0x0) {
      FUN_00447250();
                    /* WARNING: Ignoring partial resolution of indirect */
      uVar9 = FUN_00516300();
      uVar10 = FUN_00447250(uVar9);
      FUN_005c0110(0x2e,uVar10,uVar9);
    }
    local_8 = 0xffffffff;
    FUN_00565bc0();
  }
  ExceptionList = local_10;
  return;
}


