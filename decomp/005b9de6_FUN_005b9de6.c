// FUN_005b9de6 @ 5b9de6 size=712

undefined4 FUN_005b9de6(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *local_88;
  void *local_84;
  int local_80;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007cc379;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_80 = FUN_00428ee0(*(int *)(param_1 + 4) + 0xe);
  if (local_80 == 0) {
    local_80 = 0;
  }
  else {
    local_80 = local_80 + -0x14;
  }
  cVar4 = FUN_005216c0(DAT_00ab27b4 + *(int *)(local_80 + 0xc) * 0x4b2);
  if (cVar4 == '\0') {
    local_18 = *(int **)(local_80 + 0x26);
    while (local_18 != (int *)0x0) {
      piVar1 = (int *)local_18[2];
      iVar6 = *local_18;
      *(undefined4 *)(iVar6 + 0x148) = 0;
      uVar7 = 0;
      FUN_00522770(iVar6,0);
      FUN_0045e830(iVar6,uVar7);
      local_18 = piVar1;
    }
    local_88 = operator_new(0xc);
    uVar3 = DAT_0088f28c;
    local_8 = 0;
    if (local_88 == (undefined4 *)0x0) {
      local_88 = (undefined4 *)0x0;
    }
    else {
      uStack_2e = (undefined2)DAT_0088f28e;
      uStack_2c = (undefined2)((uint)DAT_0088f28e >> 0x10);
      iVar6 = *(int *)(local_80 + 0x248);
      local_84 = operator_new(0x20);
      local_8._0_1_ = 1;
      if (local_84 == (void *)0x0) {
        local_84 = (void *)0x0;
      }
      else {
        FUN_0042d6c0();
        *(undefined2 *)((int)local_84 + 0xe) = 0;
        *(undefined4 *)((int)local_84 + 0x10) = 0;
        *(undefined2 *)((int)local_84 + 0x1a) = 0;
        *(undefined4 *)((int)local_84 + 0x1c) = 0;
      }
      local_8._0_1_ = 0;
      FUN_0042d320(local_84);
      local_8 = CONCAT31(local_8._1_3_,2);
      *local_88 = &PTR_FUN_007e5e5c;
      *(undefined1 *)((int)local_88 + 10) = 0;
      *(undefined2 *)local_88[1] = 0x41;
      iVar2 = local_88[1];
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar6 + 4);
      *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(iVar6 + 8);
      puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar6 = local_88[1];
      *(undefined4 *)(iVar6 + 2) = *puVar5;
      *(undefined2 *)(iVar6 + 6) = *(undefined2 *)(puVar5 + 1);
      *local_88 = &PTR_FUN_007e5370;
      iVar6 = local_88[1];
      *(undefined4 *)(iVar6 + 0xe) = *(undefined4 *)(local_80 + 0x18);
      *(undefined2 *)(iVar6 + 0x12) = *(undefined2 *)(local_80 + 0x1c);
      *(undefined1 *)(local_88[1] + 0x14) = 1;
      *(undefined1 *)(local_88[1] + 0x15) = 0;
      *(undefined4 *)(local_88[1] + 0x16) = 0;
      iVar6 = local_88[1];
      *(uint *)(iVar6 + 0x1a) = CONCAT22(uStack_2e,uVar3);
      *(undefined2 *)(iVar6 + 0x1e) = uStack_2c;
    }
    local_8 = 0xffffffff;
    FUN_00565ca0(local_88);
  }
  ExceptionList = local_10;
  return 0;
}


