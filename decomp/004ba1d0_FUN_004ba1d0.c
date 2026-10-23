// FUN_004ba1d0 @ 4ba1d0 size=341

void __thiscall FUN_004ba1d0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007be8db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_0042e980();
  if (((cVar1 != '\0') && (param_2 != 0)) && (*(char *)(param_2 + 0x17d) == '\0')) {
    iVar2 = (**(code **)(*(int *)(param_2 + 0x22) + 4))();
    if (iVar2 != 0) {
      puVar3 = operator_new(0xc);
      uStack_4 = 0;
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
        iVar2 = puVar3[1];
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0xc);
        *(undefined2 *)(iVar2 + 0xc) = *(undefined2 *)(param_1 + 0x10);
        puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
        iVar2 = puVar3[1];
        *(undefined4 *)(iVar2 + 2) = *puVar5;
        *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(puVar5 + 1);
        iVar2 = puVar3[1];
        *puVar3 = &PTR_FUN_007e7660;
        *(undefined4 *)(iVar2 + 0xe) = *(undefined4 *)(param_1 + 0xc);
        *(undefined2 *)(iVar2 + 0x12) = *(undefined2 *)(param_1 + 0x10);
        iVar2 = puVar3[1];
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_2 + 0x18);
        *(undefined2 *)(iVar2 + 0x18) = *(undefined2 *)(param_2 + 0x1c);
        *(undefined1 *)(puVar3[1] + 0x1a) = 0;
      }
      uStack_4 = 0xffffffff;
      FUN_00565bc0(puVar3);
    }
  }
  ExceptionList = local_c;
  return;
}


