// FUN_006d6060 @ 6d6060 size=347

void __fastcall FUN_006d6060(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d94bb;
  local_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0x2220e);
  if (((piVar1 != (int *)0x0) && (*piVar1 == 5)) &&
     (puVar9 = (undefined4 *)piVar1[2], ExceptionList = &local_c, puVar9 != (undefined4 *)0x0)) {
    do {
      piVar1 = puVar9 + 2;
      uVar2 = *puVar9;
      puVar9 = (undefined4 *)((undefined4 *)*piVar1)[2];
      uVar3 = *(undefined4 *)*piVar1;
      pvVar7 = operator_new(0x60);
      local_4 = 0;
      if (pvVar7 == (void *)0x0) {
        local_14 = 0;
      }
      else {
        local_14 = FUN_0065d760(uVar2,uVar3,0);
      }
      local_4 = 0xffffffff;
      iVar4 = *(int *)(param_1 + 0x22230);
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8[1] = iVar4;
        *puVar8 = local_14;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
      }
      iVar5 = *(int *)(param_1 + 0x22234);
      *(undefined4 **)(param_1 + 0x22230) = puVar8;
      *(int *)(param_1 + 0x22234) = iVar5 + 1;
      if (iVar5 == 0) {
        *(undefined4 **)(param_1 + 0x2222c) = puVar8;
      }
      else {
        *(undefined4 **)(iVar4 + 8) = puVar8;
      }
    } while (puVar9 != (undefined4 *)0x0);
    iVar4 = *(int *)(param_1 + 0x2220e);
    if (iVar4 != 0) {
      *(undefined ***)(iVar4 + 0x1c) = &PTR_LAB_007e3b70;
      iVar5 = *(int *)(iVar4 + 0x20);
      while (iVar5 != 0) {
        iVar6 = *(int *)(iVar5 + 8);
        FUN_00796cd8(iVar5);
        iVar5 = iVar6;
      }
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0;
      *(undefined ***)(iVar4 + 4) = &PTR_LAB_007e378c;
      iVar5 = *(int *)(iVar4 + 8);
      while (iVar5 != 0) {
        iVar6 = *(int *)(iVar5 + 8);
        FUN_00796cd8(iVar5);
        iVar5 = iVar6;
      }
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      FUN_00796cd8(iVar4);
    }
    *(undefined4 *)(param_1 + 0x2220e) = 0;
  }
  ExceptionList = local_c;
  return;
}


