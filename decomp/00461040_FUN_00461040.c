// FUN_00461040 @ 461040 size=270

void __thiscall FUN_00461040(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc646;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0xc);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pvVar3 = operator_new(0x1e);
    local_4._0_1_ = 1;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_004664c0();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0042d320(uVar4);
    *puVar2 = &PTR_FUN_007e6384;
    *(undefined1 *)((int)puVar2 + 10) = 0;
    *(undefined2 *)puVar2[1] = 0xc5;
    iVar1 = puVar2[1];
    *(undefined4 *)(iVar1 + 8) = DAT_0088f2a4;
    *(undefined2 *)(iVar1 + 0xc) = DAT_0088f2a8;
    puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar1 = puVar2[1];
    *(undefined4 *)(iVar1 + 2) = *puVar5;
    *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar5 + 1);
    iVar1 = puVar2[1];
    *puVar2 = &PTR_FUN_007e6364;
    *(undefined4 *)(iVar1 + 0x12) = param_2;
    *(undefined2 *)(iVar1 + 0x16) = param_3;
    *(undefined4 *)(puVar2[1] + 0x18) = param_4;
    *(undefined1 *)(puVar2[1] + 0x1c) = 0;
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(puVar2[1] + 0xe) = *(undefined4 *)(param_1 + 6);
  FUN_00565bf0(puVar2);
  ExceptionList = local_c;
  return;
}


