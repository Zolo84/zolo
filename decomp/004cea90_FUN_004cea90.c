// FUN_004cea90 @ 4cea90 size=93

void __fastcall FUN_004cea90(int param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = *(int *)(param_1 + 4);
  while (local_8 != 0) {
    iVar1 = *(int *)(local_8 + 8);
    FUN_00796cd8(local_8);
    local_8 = iVar1;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


