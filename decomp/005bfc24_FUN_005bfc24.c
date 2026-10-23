// FUN_005bfc24 @ 5bfc24 size=601

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bfc24(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float local_24;
  undefined4 *local_20;
  int local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007cc5d4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = *(undefined4 **)(param_2 + 4);
  while (local_14 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)local_14[2];
    piVar2 = (int *)*local_14;
    cVar4 = (**(code **)(*piVar2 + 0x28))();
    local_14 = puVar1;
    if ((cVar4 != '\0') && (iVar5 = (**(code **)(*piVar2 + 0x10))(), *(int *)(iVar5 + 0x2b2) == 0))
    {
      iVar5 = *(int *)(iVar5 + 0x248);
      local_1c = 0;
      local_24 = 0.0;
      local_20 = *(undefined4 **)(param_1 + 4);
      while (local_20 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)local_20[2];
        piVar2 = (int *)*local_20;
        cVar4 = (**(code **)(*piVar2 + 0x2c))();
        local_20 = puVar1;
        if ((cVar4 != '\0') &&
           (iVar6 = (**(code **)(*piVar2 + 0x14))(), *(int *)(iVar6 + 0x248) == iVar5)) {
          iVar7 = FUN_00516cc0();
          iVar8 = FUN_00516f50();
          iVar9 = FUN_00508160();
          fVar3 = (float)((iVar7 - iVar8) - iVar9);
          if ((_DAT_007e3380 < fVar3) && ((local_1c == 0 || (fVar3 < local_24)))) {
            local_24 = fVar3;
            local_1c = iVar6;
          }
        }
      }
      if (local_1c == 0) {
        FUN_005bfe7d();
      }
      else {
        pvVar10 = operator_new(0xc);
        local_8 = 0;
        if (pvVar10 != (void *)0x0) {
          FUN_00447250();
                    /* WARNING: Ignoring partial resolution of indirect */
          uVar11 = FUN_00516300();
          uVar12 = FUN_00447250(uVar11);
          FUN_005c0110(0x2e,uVar12,uVar11);
        }
        local_8 = 0xffffffff;
        FUN_00565bc0();
      }
    }
  }
  ExceptionList = local_10;
  return;
}


