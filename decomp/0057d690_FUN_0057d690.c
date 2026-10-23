// FUN_0057d690 @ 57d690 size=292

void __fastcall FUN_0057d690(int param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8b7b;
  local_c = ExceptionList;
  if ((*(char *)(param_1 + 0x37b) != '\0') && (*(char *)(param_1 + 0x37a) != '\0')) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0xc);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = operator_new(0xe);
      if (puVar2 == (undefined2 *)0x0) {
        puVar2 = (undefined2 *)0x0;
      }
      else {
        puVar2[3] = 0;
        *(undefined1 *)(puVar2 + 2) = 0;
        *(undefined1 *)((int)puVar2 + 3) = 0;
        *(undefined1 *)(puVar2 + 1) = 0;
        puVar2[4] = 0;
        *(undefined4 *)(puVar2 + 5) = 0;
      }
      puVar1[1] = puVar2;
      *(undefined1 *)(puVar1 + 2) = 0;
      *(undefined1 *)((int)puVar1 + 9) = 1;
      *puVar1 = &PTR_FUN_007e3e5c;
      *(undefined1 *)((int)puVar1 + 10) = 0;
      *puVar2 = 1;
      iVar4 = puVar1[1];
      local_14 = (uint)puVar1 & 0xff000000;
      *(undefined4 *)(iVar4 + 8) = DAT_0088f29c;
      *(undefined2 *)(iVar4 + 0xc) = DAT_0088f2a0;
      iVar4 = puVar1[1];
      *(uint *)(iVar4 + 2) = local_14;
      *(undefined2 *)(iVar4 + 6) = 0;
      *puVar1 = &PTR_FUN_007e3e3c;
    }
    local_4 = 0xffffffff;
    FUN_00565c70(puVar1);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0xb70)) {
      puVar3 = (undefined1 *)(param_1 + 0x3d0);
      do {
        puVar3[1] = 0;
        *puVar3 = 0;
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 0x3e;
      } while (iVar4 < *(int *)(param_1 + 0xb70));
    }
    *(undefined1 *)(param_1 + 0x3d1) = 1;
    *(undefined1 *)(param_1 + 0x3d0) = 0;
  }
  ExceptionList = local_c;
  return;
}


