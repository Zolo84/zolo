// FUN_00584b70 @ 584b70 size=66

void __fastcall FUN_00584b70(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x16) == '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x22) + 4);
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 8);
      FUN_004512f0(0);
    }
  }
  (**(code **)(**(int **)(param_1 + 0x22) + 0x14))();
  *(undefined1 *)(param_1 + 0x1d) = 1;
  FUN_005886c0();
  return;
}


