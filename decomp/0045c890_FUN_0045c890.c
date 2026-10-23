// FUN_0045c890 @ 45c890 size=293

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045c890(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bbeab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((param_3 != param_1) &&
     (ExceptionList = &local_c, cVar3 = FUN_0044b280(*(undefined4 *)(param_3 + 6)), cVar3 != '\0'))
  {
    ExceptionList = local_c;
    return;
  }
  puVar4 = operator_new(0xc);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 6);
    puVar5 = operator_new(0x1a);
    if (puVar5 == (undefined2 *)0x0) {
      puVar5 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d2d0();
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      puVar5[7] = 0;
      *(undefined4 *)(puVar5 + 8) = 0;
    }
    puVar4[1] = puVar5;
    *(undefined1 *)(puVar4 + 2) = 0;
    *(undefined1 *)((int)puVar4 + 9) = 1;
    *puVar4 = &PTR_FUN_007e5fc0;
    *(undefined1 *)((int)puVar4 + 10) = 0;
    *puVar5 = 0x88;
    iVar2 = puVar4[1];
    *(undefined4 *)(iVar2 + 8) = _DAT_0088f24c;
    *(undefined2 *)(iVar2 + 0xc) = DAT_0088f24e._2_2_;
    puVar6 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar2 = puVar4[1];
    *(undefined4 *)(iVar2 + 2) = *puVar6;
    *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar6 + 1);
    iVar2 = puVar4[1];
    *puVar4 = &PTR_FUN_007e5fa0;
    *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(param_2 + 0x18);
    *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(param_2 + 0x1c);
    *(undefined4 *)(puVar4[1] + 0x14) = uVar1;
    *(undefined1 *)(puVar4[1] + 0x18) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00565cc0(puVar4);
  ExceptionList = local_c;
  return;
}


