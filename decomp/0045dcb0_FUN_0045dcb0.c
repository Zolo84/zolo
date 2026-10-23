// FUN_0045dcb0 @ 45dcb0 size=291

void __thiscall
FUN_0045dcb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

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
  puStack_8 = &LAB_007bc066;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0xc);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 6);
    puVar4 = operator_new(0x26);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (puVar4 == (undefined2 *)0x0) {
      puVar4 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d6c0();
    }
    puVar3[1] = puVar4;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 9) = 1;
    *puVar3 = &PTR_FUN_007e60e0;
    *(undefined1 *)((int)puVar3 + 10) = 0;
    *puVar4 = 0x9a;
    iVar2 = puVar3[1];
    *(undefined4 *)(iVar2 + 8) = DAT_0088f238;
    *(undefined2 *)(iVar2 + 0xc) = DAT_0088f23c;
    puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar2 = puVar3[1];
    *(undefined4 *)(iVar2 + 2) = *puVar5;
    *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar5 + 1);
    *puVar3 = &PTR_FUN_007e60c0;
    *(undefined4 *)(puVar3[1] + 0xe) = uVar1;
    *(undefined4 *)(puVar3[1] + 0x12) = param_2;
    *(undefined4 *)(puVar3[1] + 0x1a) = param_3;
    *(undefined4 *)(puVar3[1] + 0x16) = param_4;
    *(undefined4 *)(puVar3[1] + 0x1e) = param_5;
    *(undefined4 *)(puVar3[1] + 0x22) = param_6;
  }
  local_4 = 0xffffffff;
  FUN_00565bf0(puVar3);
  ExceptionList = local_c;
  return;
}


