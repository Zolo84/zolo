// FUN_004422a0 @ 4422a0 size=107

void __fastcall FUN_004422a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  iVar1 = FUN_005841a0();
  if ((iVar1 - *(int *)(param_1 + 0x18)) + -1 < *(int *)(param_1 + 0x20)) {
    iVar1 = FUN_005841a0();
    *(int *)(param_1 + 0x20) = (iVar1 - *(int *)(param_1 + 0x18)) + -1;
  }
  iVar1 = FUN_005841b0();
  if ((iVar1 - *(int *)(param_1 + 0x1c)) + -1 < *(int *)(param_1 + 0x24)) {
    iVar1 = FUN_005841b0();
    *(int *)(param_1 + 0x24) = (iVar1 - *(int *)(param_1 + 0x1c)) + -1;
  }
  return;
}


