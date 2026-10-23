// FUN_00691d40 @ 691d40 size=295

void __thiscall FUN_00691d40(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  uint local_1c;
  undefined4 local_14;
  undefined2 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d53eb;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x286 + param_2) == '\0') {
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0x286 + param_2) = 1;
    puVar2 = operator_new(0xc);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = operator_new(0x12);
      if (puVar3 == (undefined2 *)0x0) {
        puVar3 = (undefined2 *)0x0;
      }
      else {
        puVar3[3] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        *(undefined1 *)((int)puVar3 + 3) = 0;
        *(undefined1 *)(puVar3 + 1) = 0;
        puVar3[4] = 0;
        *(undefined4 *)(puVar3 + 5) = 0;
      }
      puVar2[1] = puVar3;
      *(undefined1 *)(puVar2 + 2) = 0;
      *(undefined1 *)((int)puVar2 + 9) = 1;
      *puVar2 = &PTR_FUN_007ea67c;
      *(undefined1 *)((int)puVar2 + 10) = 0;
      *puVar3 = 0xb4;
      iVar1 = puVar2[1];
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 4);
      local_1c = local_1c & 0xff000000;
      *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_1 + 8);
      iVar1 = puVar2[1];
      *(uint *)(iVar1 + 2) = local_1c;
      *(undefined2 *)(iVar1 + 6) = 0;
      *puVar2 = &PTR_FUN_007e9c1c;
      *(int *)(puVar2[1] + 0xe) = param_2;
    }
    local_4 = 0xffffffff;
    puVar4 = (undefined4 *)FUN_0042e8c0();
    local_14 = *puVar4;
    local_10 = *(undefined2 *)(puVar4 + 1);
    FUN_0042db80(1);
    FUN_00565af0(puVar2,&local_14);
  }
  ExceptionList = local_c;
  return;
}


