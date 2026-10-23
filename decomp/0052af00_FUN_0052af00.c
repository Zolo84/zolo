// FUN_0052af00 @ 52af00 size=405

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0052af00(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,undefined1 param_5
            )

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c22c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e9370(param_2);
  piVar1 = *(int **)(param_1 + 4);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    FUN_00405ad0(s_moveadddest_in_unitq_for_uid__d___0084b40c,*(undefined4 *)(iVar2 + 0x18),
                 *(undefined2 *)(iVar2 + 0x1c),param_2);
    if (*(char *)(iVar2 + 0x17b) == '\0') {
      puVar4 = operator_new(0xc);
      local_4 = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar5 = operator_new(0x1e);
        local_4 = CONCAT31(local_4._1_3_,1);
        if (puVar5 == (undefined2 *)0x0) {
          puVar5 = (undefined2 *)0x0;
        }
        else {
          FUN_0042d2d0();
          puVar5[4] = 0;
          *(undefined4 *)(puVar5 + 5) = 0;
          puVar5[7] = 0;
          *(undefined4 *)(puVar5 + 8) = 0;
          puVar5[0xe] = 0;
          *(undefined1 *)(puVar5 + 0xd) = 0;
          *(undefined1 *)((int)puVar5 + 0x19) = 0;
          *(undefined1 *)(puVar5 + 0xc) = 0;
        }
        puVar4[1] = puVar5;
        *(undefined1 *)(puVar4 + 2) = 0;
        *(undefined1 *)((int)puVar4 + 9) = 1;
        *puVar4 = &PTR_FUN_007e77e4;
        *(undefined1 *)((int)puVar4 + 10) = 0;
        *puVar5 = 0x34;
        iVar3 = puVar4[1];
        local_14 = local_14 & 0xff000000;
        *(undefined4 *)(iVar3 + 8) = _DAT_0088f24c;
        *(undefined2 *)(iVar3 + 0xc) = DAT_0088f24e._2_2_;
        iVar3 = puVar4[1];
        *(uint *)(iVar3 + 2) = local_14;
        *(undefined2 *)(iVar3 + 6) = 0;
        iVar3 = puVar4[1];
        *puVar4 = &PTR_FUN_007e7804;
        *(undefined2 *)(iVar3 + 0x14) = (undefined2)param_2;
        *(undefined4 *)(iVar3 + 0xe) = *(undefined4 *)(iVar2 + 0x18);
        *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar2 + 0x1c);
        *(undefined1 *)(iVar3 + 0x16) = param_5;
        *(undefined4 *)(iVar3 + 0x18) = param_3;
        *(undefined2 *)(iVar3 + 0x1c) = param_4;
      }
      local_4 = 0xffffffff;
      FUN_00565bf0(puVar4);
    }
  }
  ExceptionList = local_c;
  return;
}


