// FUN_00581350 @ 581350 size=317

void FUN_00581350(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8d3e;
  local_c = ExceptionList;
  if (param_1 == 0x10) {
    if ((DAT_00bd13ef != '\0') && (DAT_00bd13ee != '\0')) {
      return;
    }
  }
  else {
    if (param_1 == 0x11) {
      return;
    }
    if (param_1 == -0x59) {
      return;
    }
  }
  ExceptionList = &local_c;
  puVar2 = operator_new(0xc);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = operator_new(0x1e);
    local_4._0_1_ = 1;
    if (puVar3 == (undefined2 *)0x0) {
      puVar3 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar3[4] = 0;
      *(undefined4 *)(puVar3 + 5) = 0;
    }
    puVar2[1] = puVar3;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 9) = 1;
    *puVar2 = &PTR_FUN_007eae68;
    *(undefined1 *)((int)puVar2 + 10) = 0;
    *puVar3 = 0x16;
    iVar1 = puVar2[1];
    *(undefined4 *)(iVar1 + 8) = DAT_0088f29c;
    local_4 = CONCAT31(local_4._1_3_,2);
    *(undefined2 *)(iVar1 + 0xc) = DAT_0088f2a0;
    puVar4 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar1 = puVar2[1];
    *(undefined4 *)(iVar1 + 2) = *puVar4;
    *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar4 + 1);
    *puVar2 = &PTR_FUN_007eae48;
    *(int *)(puVar2[1] + 0xe) = param_1;
    *(undefined4 *)(puVar2[1] + 0x12) = param_2;
    iVar1 = puVar2[1];
    *(undefined4 *)(iVar1 + 0x16) = 0;
    *(undefined4 *)(iVar1 + 0x1a) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00577f00(puVar2);
  ExceptionList = local_c;
  return;
}


