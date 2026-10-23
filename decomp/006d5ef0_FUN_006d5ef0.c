// FUN_006d5ef0 @ 6d5ef0 size=368

void __fastcall FUN_006d5ef0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d949b;
  local_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0x2220e);
  if (((piVar1 != (int *)0x0) && (*piVar1 == 4)) &&
     (puVar8 = (undefined4 *)piVar1[2], ExceptionList = &local_c,
     (undefined4 *)piVar1[2] != (undefined4 *)0x0)) {
    do {
      puVar2 = (undefined4 *)puVar8[2];
      uVar9 = 0;
      uVar7 = *puVar8;
      pvVar6 = operator_new(0x60);
      local_4 = 0;
      if (pvVar6 == (void *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_0065dd00(uVar7,0,0x10000,uVar9 & 0xffff0000);
      }
      local_4 = 0xffffffff;
      iVar3 = *(int *)(param_1 + 0x22230);
      puVar8 = operator_new(0xe);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = uVar7;
        puVar8[1] = iVar3;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x22234);
      *(undefined4 **)(param_1 + 0x22230) = puVar8;
      *(int *)(param_1 + 0x22234) = iVar4 + 1;
      if (iVar4 == 0) {
        *(undefined4 **)(param_1 + 0x2222c) = puVar8;
      }
      else {
        *(undefined4 **)(iVar3 + 8) = puVar8;
      }
      puVar8 = puVar2;
    } while (puVar2 != (undefined4 *)0x0);
    iVar3 = *(int *)(param_1 + 0x2220e);
    if (iVar3 != 0) {
      *(undefined ***)(iVar3 + 0x1c) = &PTR_LAB_007e3b70;
      iVar4 = *(int *)(iVar3 + 0x20);
      while (iVar4 != 0) {
        iVar5 = *(int *)(iVar4 + 8);
        FUN_00796cd8(iVar4);
        iVar4 = iVar5;
      }
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + 0x28) = 0;
      *(undefined ***)(iVar3 + 4) = &PTR_LAB_007e378c;
      iVar4 = *(int *)(iVar3 + 8);
      while (iVar4 != 0) {
        iVar5 = *(int *)(iVar4 + 8);
        FUN_00796cd8(iVar4);
        iVar4 = iVar5;
      }
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      FUN_00796cd8(iVar3);
    }
    *(undefined4 *)(param_1 + 0x2220e) = 0;
  }
  ExceptionList = local_c;
  return;
}


