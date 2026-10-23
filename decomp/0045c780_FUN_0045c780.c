// FUN_0045c780 @ 45c780 size=271

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045c780(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbe8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0xc);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 6);
    puVar4 = operator_new(0x1a);
    if (puVar4 == (undefined2 *)0x0) {
      puVar4 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar4[4] = 0;
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar4[7] = 0;
      *(undefined4 *)(puVar4 + 8) = 0;
    }
    puVar3[1] = puVar4;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 9) = 1;
    *puVar3 = &PTR_FUN_007e5fc0;
    *(undefined1 *)((int)puVar3 + 10) = 0;
    *puVar4 = 0x88;
    iVar2 = puVar3[1];
    *(undefined4 *)(iVar2 + 8) = _DAT_0088f24c;
    *(undefined2 *)(iVar2 + 0xc) = DAT_0088f24e._2_2_;
    puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar2 = puVar3[1];
    *(undefined4 *)(iVar2 + 2) = *puVar5;
    *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar5 + 1);
    iVar2 = puVar3[1];
    *puVar3 = &PTR_FUN_007e5fa0;
    *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(param_2 + 0x18);
    *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(param_2 + 0x1c);
    *(undefined4 *)(puVar3[1] + 0x14) = uVar1;
    *(undefined1 *)(puVar3[1] + 0x18) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00565bf0(puVar3);
  ExceptionList = local_c;
  return;
}


