// FUN_00635e60 @ 635e60 size=422

void __fastcall FUN_00635e60(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d1b8b;
  pvStack_c = ExceptionList;
  local_14 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(*(int *)(param_1 + 0x11e) + 0x3e) != 0) {
    ExceptionList = &pvStack_c;
    local_14 = FUN_00428ee0();
    if (local_14 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = local_14 + -8;
    }
  }
  iVar1 = *(int *)(param_1 + 0x11e);
  piVar2 = *(int **)(iVar1 + 4);
  while (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)*piVar2;
    piVar2 = (int *)piVar2[2];
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)();
    }
    FUN_00796cd8();
  }
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x90) + 0x3b7e);
  while (puVar3 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)puVar3[2];
    uVar7 = *puVar3;
    cVar5 = FUN_004f2390();
    puVar3 = puVar8;
    if (cVar5 == '\0') {
      pvVar6 = operator_new(0x84);
      uStack_4 = 0;
      if (pvVar6 == (void *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_00622680(uVar7);
      }
      iVar1 = *(int *)(param_1 + 0x11e);
      uStack_4 = 0xffffffff;
      iVar9 = *(int *)(iVar1 + 8);
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = uVar7;
        puVar8[1] = iVar9;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
      }
      iVar4 = *(int *)(iVar1 + 0xc);
      *(undefined4 **)(iVar1 + 8) = puVar8;
      *(int *)(iVar1 + 0xc) = iVar4 + 1;
      if (iVar4 == 0) {
        *(undefined4 **)(iVar1 + 4) = puVar8;
      }
      else {
        *(undefined4 **)(iVar9 + 8) = puVar8;
      }
    }
  }
  FUN_004353e0();
  if (local_14 != 0) {
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x11e) + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      iVar9 = FUN_00428ee0();
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = iVar9 + -8;
      }
      if (iVar9 == local_14) {
        FUN_005918b0();
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}


