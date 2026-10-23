// FUN_006fde50 @ 6fde50 size=77

void __fastcall FUN_006fde50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007a7b3c(*(undefined4 *)(**(int **)(param_1 + 0x10) + 0x18));
  if (iVar1 <= *(int *)(param_1 + 0x32)) {
    iVar1 = *(int *)(param_1 + 0x32) + 1;
  }
  if (*(int *)(param_1 + 0x36) < iVar1) {
    iVar1 = *(int *)(param_1 + 0x36);
  }
  **(int **)(param_1 + 0x14) = iVar1;
  FUN_007a8d98(iVar1,&DAT_00d43028,10);
  FUN_00438900(&DAT_00d43028);
  return;
}


