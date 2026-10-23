// FUN_00409040 @ 409040 size=66

void __fastcall FUN_00409040(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x254) != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x80))(*(int **)(param_1 + 0x2c),0);
    if (iVar1 != 0) {
      FUN_00405ad0(s_Surface_unlock_failed__0082ee20);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + -1;
  }
  return;
}


