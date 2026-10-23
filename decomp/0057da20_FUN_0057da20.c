// FUN_0057da20 @ 57da20 size=342

void __thiscall FUN_0057da20(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c8beb;
  local_c = ExceptionList;
  if ((*(char *)(param_1 + 0x37b) != '\0') && (*(char *)(param_1 + 0x37a) != '\0')) {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0xb70)) {
      piVar3 = (int *)(param_1 + 0x3b0);
      do {
        if (*piVar3 == param_2) {
          ExceptionList = &local_c;
          puVar4 = operator_new(0xc);
          local_4 = 0;
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            uVar2 = FUN_0042e980();
            uVar1 = *(undefined4 *)(param_1 + 0x3cc + iVar6 * 0x3e);
            puVar5 = operator_new(0x18);
            if (puVar5 == (undefined2 *)0x0) {
              puVar5 = (undefined2 *)0x0;
            }
            else {
              FUN_0042d2d0();
              puVar5[4] = 0;
              *(undefined4 *)(puVar5 + 5) = 0;
            }
            puVar4[1] = puVar5;
            *(undefined1 *)(puVar4 + 2) = 0;
            *(undefined1 *)((int)puVar4 + 9) = 1;
            *puVar4 = &PTR_FUN_007ea35c;
            *(undefined1 *)((int)puVar4 + 10) = 0;
            *puVar5 = 3;
            iVar6 = puVar4[1];
            local_14 = (uint)puVar4 & 0xff000000;
            *(undefined4 *)(iVar6 + 8) = DAT_0088f29c;
            *(undefined2 *)(iVar6 + 0xc) = DAT_0088f2a0;
            iVar6 = puVar4[1];
            *(uint *)(iVar6 + 2) = local_14;
            *(undefined2 *)(iVar6 + 6) = 0;
            *puVar4 = &PTR_FUN_007ea2fc;
            *(int *)(puVar4[1] + 0xe) = param_2;
            *(undefined4 *)(puVar4[1] + 0x12) = uVar1;
            *(undefined1 *)(puVar4[1] + 0x16) = uVar2;
          }
          local_4 = 0xffffffff;
          FUN_00565c70(puVar4);
          ExceptionList = local_c;
          return;
        }
        iVar6 = iVar6 + 1;
        piVar3 = (int *)((int)piVar3 + 0x3e);
      } while (iVar6 < *(int *)(param_1 + 0xb70));
    }
  }
  return;
}


