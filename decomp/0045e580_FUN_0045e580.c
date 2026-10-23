// FUN_0045e580 @ 45e580 size=310

void __thiscall
FUN_0045e580(int param_1,undefined4 param_2,undefined2 param_3,undefined1 param_4,undefined1 param_5
            ,undefined1 param_6,char *param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bc1a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x12);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar3 = operator_new(0x58);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (puVar3 == (undefined2 *)0x0) {
      puVar3 = (undefined2 *)0x0;
    }
    else {
      FUN_0042d6c0();
      puVar3[7] = 0;
      *(undefined4 *)(puVar3 + 8) = 0;
    }
    puVar2[1] = puVar3;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 9) = 1;
    *puVar2 = &PTR_FUN_007e6120;
    *(undefined1 *)((int)puVar2 + 10) = 0;
    *puVar3 = 0x6a;
    iVar1 = puVar2[1];
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 4);
    *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_1 + 8);
    puVar4 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
    iVar1 = puVar2[1];
    *(undefined4 *)(iVar1 + 2) = *puVar4;
    *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar4 + 1);
    *(undefined2 *)(puVar2 + 3) = 0;
    *(undefined4 *)((int)puVar2 + 0xe) = 0;
    iVar1 = puVar2[1];
    *puVar2 = &PTR_FUN_007e6100;
    *(undefined4 *)(iVar1 + 0xe) = param_2;
    *(undefined2 *)(iVar1 + 0x12) = param_3;
    *(undefined1 *)(puVar2[1] + 0x14) = param_4;
    *(undefined1 *)(puVar2[1] + 0x15) = param_5;
    *(undefined1 *)(puVar2[1] + 0x16) = param_6;
    _strncpy((char *)(puVar2[1] + 0x17),param_7,0x40);
  }
  local_4 = 0xffffffff;
  FUN_00565bc0(puVar2);
  ExceptionList = local_c;
  return;
}


