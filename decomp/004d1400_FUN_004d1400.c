// FUN_004d1400 @ 4d1400 size=67

void __fastcall FUN_004d1400(int param_1)

{
  int iVar1;
  int iVar2;
  
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


