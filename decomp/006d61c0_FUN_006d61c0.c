// FUN_006d61c0 @ 6d61c0 size=374

void __fastcall FUN_006d61c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d94db;
  local_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0x2220e);
  if (((piVar1 != (int *)0x0) && (*piVar1 == 6)) &&
     (puVar8 = (undefined4 *)piVar1[2], ExceptionList = &local_c, puVar8 != (undefined4 *)0x0)) {
    do {
      pvVar5 = operator_new(0x60);
      local_4 = 0;
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0;
      }
      else {
        local_14 = local_14 & 0xff000000;
        puVar7 = (undefined4 *)puVar8[2];
        uVar6 = FUN_0065dd00(*puVar8,0,local_14,300);
        puVar8 = puVar7;
      }
      iVar2 = *(int *)(param_1 + 0x22230);
      local_4 = 0xffffffff;
      puVar7 = operator_new(0xe);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        *puVar7 = uVar6;
        puVar7[1] = iVar2;
        puVar7[2] = 0;
        *(undefined1 *)(puVar7 + 3) = 0;
      }
      iVar3 = *(int *)(param_1 + 0x22234);
      *(undefined4 **)(param_1 + 0x22230) = puVar7;
      *(int *)(param_1 + 0x22234) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(param_1 + 0x2222c) = puVar7;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar7;
      }
    } while (puVar8 != (undefined4 *)0x0);
    iVar2 = *(int *)(param_1 + 0x2220e);
    if (iVar2 != 0) {
      *(undefined ***)(iVar2 + 0x1c) = &PTR_LAB_007e3b70;
      iVar3 = *(int *)(iVar2 + 0x20);
      while (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 8);
        FUN_00796cd8(iVar3);
        iVar3 = iVar4;
      }
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      *(undefined4 *)(iVar2 + 0x28) = 0;
      *(undefined ***)(iVar2 + 4) = &PTR_LAB_007e378c;
      iVar3 = *(int *)(iVar2 + 8);
      while (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 8);
        FUN_00796cd8(iVar3);
        iVar3 = iVar4;
      }
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      FUN_00796cd8(iVar2);
    }
    *(undefined4 *)(param_1 + 0x2220e) = 0;
  }
  ExceptionList = local_c;
  return;
}


