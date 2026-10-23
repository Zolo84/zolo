// FUN_004b0e00 @ 4b0e00 size=134

void __fastcall FUN_004b0e00(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined ***)(param_1 + 0x32) = &PTR_LAB_007e6edc;
  iVar2 = *(int *)(param_1 + 0x36);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 10);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined ***)(param_1 + 0x18) = &PTR_LAB_007e4a74;
  iVar2 = *(int *)(param_1 + 0x1c);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 10);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined ***)(param_1 + 6) = &PTR_LAB_007e4a74;
  iVar2 = *(int *)(param_1 + 10);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 10);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return;
}


