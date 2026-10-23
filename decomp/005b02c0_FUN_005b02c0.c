// FUN_005b02c0 @ 5b02c0 size=302

void FUN_005b02c0(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cb95e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0xc);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = operator_new(0x1c);
    local_4._0_1_ = 1;
    if (puVar3 == (undefined2 *)0x0) {
      puVar3 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar3[4] = 0;
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3[7] = 0;
      *(undefined4 *)(puVar3 + 8) = 0;
      puVar3[10] = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0;
    }
    puVar2[1] = puVar3;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 9) = 1;
    *puVar2 = &PTR_FUN_007e7680;
    *(undefined1 *)((int)puVar2 + 10) = 0;
    *puVar3 = 0x21;
    iVar1 = puVar2[1];
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0xc);
    local_4 = CONCAT31(local_4._1_3_,2);
    *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_1 + 0x10);
    puVar4 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar1 = puVar2[1];
    *(undefined4 *)(iVar1 + 2) = *puVar4;
    *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar4 + 1);
    iVar1 = puVar2[1];
    *puVar2 = &PTR_FUN_007e7660;
    *(undefined4 *)(iVar1 + 0xe) = *(undefined4 *)(param_1 + 0xc);
    *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(param_1 + 0x10);
    iVar1 = puVar2[1];
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
    *(undefined2 *)(iVar1 + 0x18) = *(undefined2 *)(param_2 + 0x1c);
    *(undefined1 *)(puVar2[1] + 0x1a) = param_3;
  }
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar2);
  ExceptionList = local_c;
  return;
}


