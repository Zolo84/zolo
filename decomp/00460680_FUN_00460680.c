// FUN_00460680 @ 460680 size=271

void __thiscall FUN_00460680(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc526;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0xc);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 6);
    pvVar4 = operator_new(0x1e);
    local_4._0_1_ = 1;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004664c0();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0042d320(uVar5);
    *puVar3 = &PTR_FUN_007e6384;
    *(undefined1 *)((int)puVar3 + 10) = 0;
    *(undefined2 *)puVar3[1] = 200;
    iVar2 = puVar3[1];
    *(undefined4 *)(iVar2 + 8) = DAT_0088f2a4;
    *(undefined2 *)(iVar2 + 0xc) = DAT_0088f2a8;
    puVar6 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar2 = puVar3[1];
    *(undefined4 *)(iVar2 + 2) = *puVar6;
    *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar6 + 1);
    iVar2 = puVar3[1];
    *puVar3 = &PTR_FUN_007e6364;
    *(undefined4 *)(iVar2 + 0x12) = param_2;
    *(undefined2 *)(iVar2 + 0x16) = param_3;
    *(undefined4 *)(puVar3[1] + 0x18) = uVar1;
    *(undefined1 *)(puVar3[1] + 0x1c) = 0;
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(puVar3[1] + 0xe) = *(undefined4 *)(param_1 + 6);
  FUN_00565bf0(puVar3);
  ExceptionList = local_c;
  return;
}


