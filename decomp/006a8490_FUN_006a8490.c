// FUN_006a8490 @ 6a8490 size=57

void __fastcall FUN_006a8490(int param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x13c84) + 0xcc))();
  *(undefined4 *)(param_1 + 0x13c84) = 0;
  iVar1 = *(int *)(param_1 + 0x4508);
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    FUN_00524610(0);
  }
  return;
}


