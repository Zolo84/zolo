// FUN_004ba080 @ 4ba080 size=325

void __thiscall FUN_004ba080(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007be8bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = FUN_0042e980();
  if (((cVar2 != '\0') && (param_2 != 0)) && (*(char *)(param_2 + 0x17d) == '\0')) {
    puVar3 = operator_new(0xc);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar4 = operator_new(0x1c);
      if (puVar4 == (undefined2 *)0x0) {
        puVar4 = (undefined2 *)0x0;
      }
      else {
        FUN_0042d2d0();
        puVar4[4] = 0;
        *(undefined4 *)(puVar4 + 5) = 0;
        puVar4[7] = 0;
        *(undefined4 *)(puVar4 + 8) = 0;
        puVar4[10] = 0;
        *(undefined4 *)(puVar4 + 0xb) = 0;
      }
      puVar3[1] = puVar4;
      *(undefined1 *)(puVar3 + 2) = 0;
      *(undefined1 *)((int)puVar3 + 9) = 1;
      *puVar3 = &PTR_FUN_007e7680;
      *(undefined1 *)((int)puVar3 + 10) = 0;
      *puVar4 = 0x1f;
      iVar1 = puVar3[1];
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0xc);
      *(undefined2 *)(iVar1 + 0xc) = *(undefined2 *)(param_1 + 0x10);
      puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
      iVar1 = puVar3[1];
      *(undefined4 *)(iVar1 + 2) = *puVar5;
      *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(puVar5 + 1);
      iVar1 = puVar3[1];
      *puVar3 = &PTR_FUN_007e7660;
      *(undefined4 *)(iVar1 + 0xe) = *(undefined4 *)(param_1 + 0xc);
      *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(param_1 + 0x10);
      iVar1 = puVar3[1];
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
      *(undefined2 *)(iVar1 + 0x18) = *(undefined2 *)(param_2 + 0x1c);
      *(undefined1 *)(puVar3[1] + 0x1a) = 1;
    }
    local_4 = 0xffffffff;
    FUN_00565bc0(puVar3);
  }
  ExceptionList = local_c;
  return;
}


