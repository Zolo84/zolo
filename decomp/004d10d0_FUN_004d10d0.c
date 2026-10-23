// FUN_004d10d0 @ 4d10d0 size=100

void __fastcall FUN_004d10d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined ***)(param_1 + 0x32) = &PTR_LAB_007e7e20;
  iVar2 = *(int *)(param_1 + 0x36);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined ***)(param_1 + 0x1c) = &PTR_LAB_007e4a74;
  iVar2 = *(int *)(param_1 + 0x20);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 10);
    FUN_00796cd8(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_00425b80();
  return;
}


