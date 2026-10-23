// FUN_00417690 @ 417690 size=165

void __fastcall FUN_00417690(int param_1)

{
  uint uVar1;
  int local_8;
  undefined4 local_4;
  
  FUN_004d8c50(*(int *)(param_1 + 0x86) - *(int *)(param_1 + 0x1a),
               *(int *)(param_1 + 0x8a) - *(int *)(param_1 + 0x1e),&local_8);
  uVar1 = DAT_00a98464 & ((int)DAT_00a98464 < 0) - 1;
  if (4 < (int)uVar1) {
    uVar1 = 4;
  }
  *(uint *)(*(int *)(param_1 + 0x62) + 0x23e) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x62) + 0x24e) = *(undefined4 *)(param_1 + 0x6a);
  FUN_00406300(DAT_00a98430 + local_8,local_4,*(undefined4 *)(param_1 + 0x2e),
               *(undefined4 *)(param_1 + 0x32),*(undefined4 *)(param_1 + 0x36),
               *(undefined4 *)(param_1 + 0x3a),param_1 + 0x3e,DAT_00bd1bac,0);
  return;
}


