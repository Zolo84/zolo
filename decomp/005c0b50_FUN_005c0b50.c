// FUN_005c0b50 @ 5c0b50 size=288

void __fastcall FUN_005c0b50(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  void **ppvVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007cc69b;
  ppvVar6 = &local_c;
  piVar5 = *(int **)(*(int *)(DAT_00d0ca90 + 0x21e5a) + 4);
  local_c = ExceptionList;
  while (ExceptionList = ppvVar6, piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[2];
    iVar2 = *piVar5;
    puVar7 = operator_new(0xc);
    local_4 = 0;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x72) + 0x10);
      puVar8 = operator_new(0x12);
      if (puVar8 == (undefined2 *)0x0) {
        puVar8 = (undefined2 *)0x0;
      }
      else {
        puVar8[3] = 0;
        *(undefined1 *)(puVar8 + 2) = 0;
        *(undefined1 *)((int)puVar8 + 3) = 0;
        *(undefined1 *)(puVar8 + 1) = 0;
        puVar8[4] = 0;
        *(undefined4 *)(puVar8 + 5) = 0;
      }
      puVar7[1] = puVar8;
      *(undefined1 *)(puVar7 + 2) = 0;
      *(undefined1 *)((int)puVar7 + 9) = 1;
      *puVar7 = &PTR_FUN_007e5f80;
      *(undefined1 *)((int)puVar7 + 10) = 0;
      *puVar8 = 0x42;
      iVar4 = puVar7[1];
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar2 + 0x18);
      local_14 = local_14 & 0xff000000;
      *(undefined2 *)(iVar4 + 0xc) = *(undefined2 *)(iVar2 + 0x1c);
      iVar2 = puVar7[1];
      *(uint *)(iVar2 + 2) = local_14;
      *(undefined2 *)(iVar2 + 6) = 0;
      *puVar7 = &PTR_FUN_007e5f60;
      *(undefined4 *)(puVar7[1] + 0xe) = uVar3;
    }
    local_4 = 0xffffffff;
    FUN_00565ca0(puVar7);
    ppvVar6 = ExceptionList;
    piVar5 = piVar1;
  }
  ExceptionList = local_c;
  return;
}


