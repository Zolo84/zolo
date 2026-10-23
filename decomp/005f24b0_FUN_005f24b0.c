// FUN_005f24b0 @ 5f24b0 size=151

void __fastcall FUN_005f24b0(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_8 [8];
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x2e) + 0x28))(local_8);
  FUN_005f2880(*puVar1,puVar1[1]);
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x32) + 0x28))(&stack0xfffffff4);
  FUN_005f2880(*puVar1,puVar1[1]);
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x36) + 0x28))(&stack0xfffffff0);
  FUN_005f2880(*puVar1,puVar1[1]);
  (**(code **)(**(int **)(param_1 + 0x2e) + 0x18))
            (*(undefined4 *)(param_1 + 0xe),*(undefined4 *)(param_1 + 0x12));
  (**(code **)(**(int **)(param_1 + 0x32) + 0x18))
            (*(int *)(param_1 + 0xe) + 0x14,*(undefined4 *)(param_1 + 0x12));
  (**(code **)(**(int **)(param_1 + 0x36) + 0x18))
            (*(int *)(param_1 + 0xe) + 0x28,*(undefined4 *)(param_1 + 0x12));
  return;
}


