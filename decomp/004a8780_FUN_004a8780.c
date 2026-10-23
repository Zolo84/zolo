// FUN_004a8780 @ 4a8780 size=566

void FUN_004a8780(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007be024;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar6 = operator_new(0xc);
  local_4 = 0;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x12);
    FUN_00498e40(0x7d,param_1 + 4);
    *puVar6 = &PTR_FUN_007e6b4c;
    *(undefined4 *)(puVar6[1] + 0xe) = uVar1;
    *(undefined1 *)(puVar6[1] + 0x12) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar6);
  puVar6 = operator_new(0xc);
  local_4 = 1;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x12);
    FUN_00498e40(0x7c,param_1 + 4);
    *puVar6 = &PTR_FUN_007e6b4c;
    *(undefined4 *)(puVar6[1] + 0xe) = uVar1;
    *(undefined1 *)(puVar6[1] + 0x12) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar6);
  piVar2 = *(int **)(*(int *)(param_2 + 0x1c2) + 4);
  while (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    piVar2 = (int *)piVar2[2];
    if (*(int *)(*(int *)(iVar3 + 0x248) + 6) == 0x157) {
      puVar6 = operator_new(0xc);
      uVar5 = DAT_0088f28c;
      local_4 = 2;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uStack_1a = (undefined2)DAT_0088f28e;
        uStack_18 = (undefined2)((uint)DAT_0088f28e >> 0x10);
        pvVar7 = operator_new(0x20);
        local_4._0_1_ = 3;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          FUN_0042d6c0();
          *(undefined2 *)((int)pvVar7 + 0xe) = 0;
          *(undefined4 *)((int)pvVar7 + 0x10) = 0;
          *(undefined2 *)((int)pvVar7 + 0x1a) = 0;
          *(undefined4 *)((int)pvVar7 + 0x1c) = 0;
        }
        local_4._0_1_ = 2;
        FUN_0042d320(pvVar7);
        *puVar6 = &PTR_FUN_007e5e5c;
        *(undefined1 *)((int)puVar6 + 10) = 0;
        *(undefined2 *)puVar6[1] = 0xa8;
        iVar4 = puVar6[1];
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 4);
        local_4 = CONCAT31(local_4._1_3_,4);
        *(undefined2 *)(iVar4 + 0xc) = *(undefined2 *)(param_1 + 8);
        puVar8 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar4 = puVar6[1];
        *(undefined4 *)(iVar4 + 2) = *puVar8;
        *(undefined2 *)(iVar4 + 6) = *(undefined2 *)(puVar8 + 1);
        iVar4 = puVar6[1];
        *puVar6 = &PTR_FUN_007e5370;
        *(undefined4 *)(iVar4 + 0xe) = *(undefined4 *)(iVar3 + 0x18);
        *(undefined2 *)(iVar4 + 0x12) = *(undefined2 *)(iVar3 + 0x1c);
        *(undefined1 *)(puVar6[1] + 0x14) = 0;
        *(undefined1 *)(puVar6[1] + 0x15) = 1;
        *(undefined4 *)(puVar6[1] + 0x16) = 0;
        iVar3 = puVar6[1];
        *(uint *)(iVar3 + 0x1a) = CONCAT22(uStack_1a,uVar5);
        *(undefined2 *)(iVar3 + 0x1e) = uStack_18;
      }
      local_4 = 0xffffffff;
      FUN_00565ca0(puVar6);
    }
  }
  ExceptionList = local_c;
  return;
}


